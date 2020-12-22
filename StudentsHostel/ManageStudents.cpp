#include "ManageStudents.h"
#include "ui_ManageStudents.h"
#include <config.h>
#include <widget.h>
#include <AddStudent.h>
#include <User.h>

#include <QMessageBox>
#include <QFile>
#include <QDataStream>

ManageStudents::ManageStudents(const QList<User> &userlist, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageStudents),
    s_userlist(userlist)
{
    ui->setupUi(this);
    ui->Table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents);

    int row = 0;
    foreach (const User &user, s_userlist)
    {
        if (user.status()==User::Student)
        {
            QTableWidgetItem *item_name = new QTableWidgetItem(user.name());
            QTableWidgetItem *item_surname = new QTableWidgetItem(user.surname());
            QTableWidgetItem *item_date = new QTableWidgetItem(user.date().toString("dd.MM.yyyy"));
            QTableWidgetItem *item_number = new QTableWidgetItem(QString("%1").arg(user.number()));
            QTableWidgetItem *item_course = new QTableWidgetItem(QString("%1").arg(user.course()));
            QTableWidgetItem *item_group = new QTableWidgetItem(user.group());
            QTableWidgetItem *item_numberofroom = new QTableWidgetItem(QString("№%1").arg(user.numberofroom()));

            item_date->setTextAlignment(Qt::AlignHCenter);
            item_number->setTextAlignment(Qt::AlignHCenter);
            item_course->setTextAlignment(Qt::AlignHCenter);
            item_group->setTextAlignment(Qt::AlignHCenter);
            item_numberofroom->setTextAlignment(Qt::AlignHCenter);


            ui->Table->insertRow(row);
            ui->Table->setItem(row, 0, item_name);
            ui->Table->setItem(row, 1, item_surname);
            ui->Table->setItem(row, 2, item_date);
            ui->Table->setItem(row, 3, item_number);
            ui->Table->setItem(row, 4, item_course);
            ui->Table->setItem(row, 5, item_group);
            ui->Table->setItem(row, 6, item_numberofroom);
            row++;
        }
    }
}

ManageStudents::~ManageStudents()
{
    delete ui;

}
void ManageStudents::on_add_clicked()
{
    User user;
        AddStudent dialog(&user, s_userlist, AddStudent::Create, this);
        dialog.setWindowTitle(Config::Name);

        if (dialog.exec() == QDialog::Accepted)
        {
            emit addStudent(user);
            QTableWidgetItem *item_name = new QTableWidgetItem(user.name());
            QTableWidgetItem *item_surname = new QTableWidgetItem(user.surname());
            QTableWidgetItem *item_date = new QTableWidgetItem(user.date().toString("dd.MM.yyyy"));
            QTableWidgetItem *item_number = new QTableWidgetItem(QString("%1").arg(user.number()));
            QTableWidgetItem *item_course = new QTableWidgetItem(QString("%1").arg(user.course()));
            QTableWidgetItem *item_group = new QTableWidgetItem(user.group());
            QTableWidgetItem *item_numberofroom = new QTableWidgetItem(QString("№%1").arg(user.numberofroom()));

            item_date->setTextAlignment(Qt::AlignHCenter);
            item_number->setTextAlignment(Qt::AlignHCenter);
            item_course->setTextAlignment(Qt::AlignHCenter);
            item_group->setTextAlignment(Qt::AlignHCenter);
            item_numberofroom->setTextAlignment(Qt::AlignHCenter);

            int row = ui->Table->rowCount();

            ui->Table->insertRow(row);
            ui->Table->setItem(row, 0, item_name);
            ui->Table->setItem(row, 1, item_surname);
            ui->Table->setItem(row, 2, item_date);
            ui->Table->setItem(row, 3, item_number);
            ui->Table->setItem(row, 4, item_course);
            ui->Table->setItem(row, 5, item_group);
            ui->Table->setItem(row, 6, item_numberofroom);
        }

}

void ManageStudents::on_del_clicked()
{
    int currentRow = ui->Table->currentRow();
        if (currentRow==-1)
            QMessageBox::warning(this, windowTitle(), "Ошибка: не выбран ни один пользователь!");
        else
           {
               emit deleteStudent(currentRow);
               ui->Table->removeRow(currentRow);
           }
    }

void ManageStudents::on_edit_clicked()
{
    int currentRow = ui->Table->currentRow();
    if (currentRow != -1)
    {
        User user = s_userlist[currentRow];
        AddStudent dialog(&user,s_userlist, AddStudent::Edit, this);
        dialog.setWindowTitle(Config::Name);

        if (dialog.exec() == QDialog::Accepted)
        {

            emit editStudent(currentRow, user);
            ui->Table->item(currentRow, 0)->setText(user.name());
            ui->Table->item(currentRow, 1)->setText(user.surname());
            ui->Table->item(currentRow, 2)->setText(user.date().toString("dd.MM.yyyy"));
            ui->Table->item(currentRow, 3)->setText(QString("%1").arg(user.number()));
            ui->Table->item(currentRow, 4)->setText(QString("%1").arg(user.course()));
            ui->Table->item(currentRow, 5)->setText(user.group());
            ui->Table->item(currentRow, 6)->setText(QString("№%1").arg(user.numberofroom()));
            }
        }
    else {
        QMessageBox::warning(this, windowTitle(), "Ошибка: не выбран ни один пользователь!");
    }
}
