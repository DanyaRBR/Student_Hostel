#include "widget.h"
#include "ui_widget.h"
#include <User.h>
#include <config.h>
#include <InfoUser.h>
#include <ManagePersonnel.h>
#include <ManageStudents.h>
#include <authorization.h>
#include <QFile>

Widget::Widget(User &user, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , s_user(user)
{
    ui->setupUi(this);
    ui->TableOfStudents->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeMode::ResizeToContents);
    s_infoUser = new InfoUser(s_user, this);
    s_infoUser->setWindowTitle(Config::Name);
    if (s_user.status() == User::Student)
    {
        ui->ManageStudent->hide();
        ui->ManagePersonnal->hide();
    }
    if (s_user.status() == User::Commandant)
        ui->ManagePersonnal->hide();

    loadStudents();
}

Widget::~Widget()
{
    delete ui;
    delete s_infoUser;
    delete &s_user;
}
const QList<User> &Widget::userlist() const
{
    return s_userlist;
}

void Widget::on_InfoUser_clicked()
{
    InfoUser dialog(s_user, this);
    dialog.setWindowTitle(Config::Name);;

    dialog.exec();
}

void Widget::on_LogOut_clicked()
{
         emit LogOut();
         this->resize(400,300);
}

void Widget::on_ManagePersonnal_clicked()
{

    ManagePersonnel dialog(this);
    dialog.setWindowTitle(Config::Name);
    dialog.exec();
}

void Widget::on_ManageStudent_clicked()
{
    const QList<User> &userlist = qobject_cast<Widget*>(this)->userlist();
    ManageStudents dialog(userlist, this);
    dialog.setWindowTitle(Config::Name);

    dialog.setWindowTitle(Config::Name);
        connect(&dialog, SIGNAL(addStudent(User)),
                this, SLOT(addStudent(User)));
        connect(&dialog, SIGNAL(editStudent(int, User)),
                this, SLOT(editStudent(int, User)));
        connect(&dialog, SIGNAL(deleteStudent(int)),
                this, SLOT(deleteStudent(int)));

    dialog.exec();

}
void Widget::loadStudents()
{
    s_userlist.clear();
    QFile file(Config::BinOfStudent);
    if (file.open(QIODevice::ReadOnly)) {
        QDataStream ist(&file);
        while (!ist.atEnd()) {

            User user;
            ist >> user;
            if (user.status()==User::Student)
            s_userlist.append(user);
        }
    }

    int row = 0;
    foreach (const User &user, s_userlist)
    {
        if (user.status()==User::Student)
        {
            QTableWidgetItem *item_name = new QTableWidgetItem(user.name());
            QTableWidgetItem *item_surname = new QTableWidgetItem(user.surname());
            QTableWidgetItem *item_date = new QTableWidgetItem(user.date().toString("dd.MM.yyyy"));
            QTableWidgetItem *item_course = new QTableWidgetItem(QString("%1").arg(user.course()));
            QTableWidgetItem *item_group = new QTableWidgetItem(user.group());
            QTableWidgetItem *item_numberofroom = new QTableWidgetItem(QString("№%1").arg(user.numberofroom()));

            item_date->setTextAlignment(Qt::AlignHCenter);
            item_course->setTextAlignment(Qt::AlignHCenter);
            item_group->setTextAlignment(Qt::AlignHCenter);
            item_numberofroom->setTextAlignment(Qt::AlignHCenter);

            ui->TableOfStudents->insertRow(row);

            ui->TableOfStudents->setItem(row, 0, item_name);
            ui->TableOfStudents->setItem(row, 1, item_surname);
            ui->TableOfStudents->setItem(row, 2, item_date);
            ui->TableOfStudents->setItem(row, 3, item_course);
            ui->TableOfStudents->setItem(row, 4, item_group);
            ui->TableOfStudents->setItem(row, 5, item_numberofroom);
            row++;
        }
    }
}

void Widget::addStudent(User user)
{
    s_userlist.append(user);
    QFile file(Config::BinOfStudent);
    file.open(QIODevice::Append);
    QDataStream ost(&file);
    ost << user;

    QTableWidgetItem *item_name = new QTableWidgetItem(user.name());
    QTableWidgetItem *item_surname = new QTableWidgetItem(user.surname());
    QTableWidgetItem *item_date = new QTableWidgetItem(user.date().toString("dd.MM.yyyy"));
    QTableWidgetItem *item_numberofroom = new QTableWidgetItem(QString("№%1").arg(user.numberofroom()));
    QTableWidgetItem *item_course = new QTableWidgetItem(QString("%1").arg(user.course()));
    QTableWidgetItem *item_group = new QTableWidgetItem(user.group());

    item_date->setTextAlignment(Qt::AlignHCenter);
    item_course->setTextAlignment(Qt::AlignHCenter);
    item_group->setTextAlignment(Qt::AlignHCenter);
    item_numberofroom->setTextAlignment(Qt::AlignHCenter);

        int row = ui->TableOfStudents->rowCount();
        ui->TableOfStudents->insertRow(row);

        ui->TableOfStudents->setItem(row, 0, item_name);
        ui->TableOfStudents->setItem(row, 1, item_surname);
        ui->TableOfStudents->setItem(row, 2, item_date);
        ui->TableOfStudents->setItem(row, 3, item_course);
        ui->TableOfStudents->setItem(row, 4, item_group);
        ui->TableOfStudents->setItem(row, 5, item_numberofroom);
}

void Widget::editStudent(int row, User user)
{
    s_userlist[row] = user;
    QFile file(Config::BinOfStudent);
    if (file.open(QIODevice::ReadOnly))
    {
        QFile write_file("file");
        write_file.open(QIODevice::WriteOnly);

        QDataStream read_ist(&file);
        QDataStream write_ist(&write_file);

        int countSeats = 0;

        while (!read_ist.atEnd())
        {
            User user_check;
            read_ist >> user_check;

            if (countSeats++ == row)
            {
                user_check = user;
            }

            write_ist << user_check;
        }

        file.close();
        file.remove();

        write_file.close();
        write_file.rename(Config::BinOfStudent);
    }

        ui->TableOfStudents->item(row, 0)->setText(user.name());
        ui->TableOfStudents->item(row, 1)->setText(user.surname());
        ui->TableOfStudents->item(row, 2)->setText(user.date().toString("dd.MM.yyyy"));
        ui->TableOfStudents->item(row, 3)->setText(QString("%1").arg(user.course()));
        ui->TableOfStudents->item(row, 4)->setText(user.group());
        ui->TableOfStudents->item(row, 5)->setText(QString("№%1").arg(user.numberofroom()));

    }
void Widget::deleteStudent(int row)
{
    s_userlist.removeAt(row);
    QFile file(Config::BinOfStudent);
    if (file.open(QIODevice::ReadOnly))
    {
        QFile write_file("file");
        write_file.open(QIODevice::WriteOnly);

        QDataStream read_ist(&file);
        QDataStream write_ist(&write_file);

        int countReads = 0;

        while (!read_ist.atEnd())
        {
            User user_check;
            read_ist >> user_check;
            if (countReads++ != row)
            {
                write_ist << user_check;
            }
        }

        file.close();
        file.remove();

        write_file.close();
        write_file.rename(Config::BinOfStudent);
    }
    ui->TableOfStudents->removeRow(row);
}

