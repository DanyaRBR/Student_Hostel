#include "ManagePersonnel.h"
#include "ui_ManagePersonnel.h"
#include <config.h>
#include <widget.h>
#include <AddPersonnel.h>
#include <User.h>

#include <QMessageBox>
#include <QFile>
#include <QDataStream>

ManagePersonnel::ManagePersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManagePersonnel)
{
    ui->setupUi(this);
    setWindowTitle(Config::Name);
    QFile file(Config::BinOfPersonnel);
    if (file.open(QIODevice::ReadOnly))
    {
        QDataStream ist(&file);
        int row = 0;
    while (!ist.atEnd())
    {

        User user;
        ist >> user;
        if (user.status()==User::Admin||user.status()==User::Commandant)
        {
            s_userlist.append(user);
            QTableWidgetItem *item_login= new QTableWidgetItem(user.surname());
            QTableWidgetItem *item_passw= new QTableWidgetItem(QString("%1").arg(user.number()));

            ui->TableofPersonnel->insertRow(row);
            ui->TableofPersonnel->setItem(row, 0, item_login);
            ui->TableofPersonnel->setItem(row, 1, item_passw);
            row++;
        }
    }
    }
}

ManagePersonnel::~ManagePersonnel()
{
    delete ui;

}

void ManagePersonnel::on_add_clicked()
{
        AddPersonnel dialog(this);
        dialog.setWindowTitle(Config::Name);

        if (dialog.exec() == QDialog::Accepted)
        {
            const User &user = dialog.getUser();
            QFile file(Config::BinOfPersonnel);
            file.open(QIODevice::Append);
            QDataStream ost(&file);

            ost << user;
            QTableWidgetItem *item_login= new QTableWidgetItem(user.surname());
            QTableWidgetItem *item_password= new QTableWidgetItem(QString("%1").arg(user.number()));

            int row = ui->TableofPersonnel->rowCount();
            ui->TableofPersonnel->insertRow(row);

            ui->TableofPersonnel->setItem(row, 0, item_login);
            ui->TableofPersonnel->setItem(row, 1, item_password);
        }
}

void ManagePersonnel::on_del_clicked()
{
    int currentRow = ui->TableofPersonnel->currentRow();
    if (currentRow == 0)
    {
        QMessageBox::warning(this, windowTitle(),
                             "Ошибка: Данного пользователя нельзя удалить!");
    }
    else if (currentRow != -1)
    {
        const QString login = ui->TableofPersonnel->item(currentRow, 0)->text();
        const QString passw = ui->TableofPersonnel->item(currentRow, 1)->text();

        ui->TableofPersonnel->removeRow(currentRow);

        QFile file(Config::BinOfPersonnel);
        if (file.open(QIODevice::ReadOnly))
        {
            QFile write_file("buf_file_users");
            write_file.open(QIODevice::WriteOnly);

            QDataStream read_ist(&file);
            QDataStream write_ist(&write_file);

            while (!read_ist.atEnd())
            {
                User user;
                read_ist >> user;

                if (QString("%1").arg(user.number()) != passw)
                {
                    write_ist << user;
                }
            }

            file.close();
            file.remove();
            write_file.close();
            write_file.rename(Config::BinOfPersonnel);
        }
    }
    else
    {
        QMessageBox::warning(this, windowTitle(),
                             "Ошибка: Необходимо выбрать пользователя!");
    }
}
