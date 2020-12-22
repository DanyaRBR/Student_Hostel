#include "registration.h"
#include "ui_registration.h"
#include <authorization.h>
#include "config.h"
#include "User.h"
#include "signals.h"
#include <QValidator>
#include <QFile>
#include <QDataStream>

Registration::Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
    setWindowTitle(Config::Name);
    ui->login->setValidator(new QRegExpValidator(QRegExp( "[A-Za-zА-Яа-я]{20}")));
    ui->pass->setValidator(new QRegExpValidator(QRegExp("[0-9]{8}")));
    ui->prepeat->setValidator(new QRegExpValidator(QRegExp("[0-9]{8}")));
}

Registration::~Registration()
{
    delete ui;
}

void Registration::on_Ok_clicked()
{
    ui->errorlabel->clear();
    const QString login = ui->login->text();
    const QString password = ui->pass->text();
    const QString repeatPassword = ui->prepeat->text();

    QDate date(2000, 1, 1);

    if (login.isEmpty())
    {
        ui->errorlabel->setText("Ошибка: Необходимо заполнить все поля!");
    }
    else if (login.size() < 3)
    {
        ui->errorlabel->setText("Ошибка: Слишком короткое имя пользователя!");
    }
    else if (password.size()<8)
    {
        ui->errorlabel->setText("Ошибка: Пароль должен состоять из 8 цифр!");
    }
    else if (password != repeatPassword)
    {
        ui->errorlabel->setText("Ошибка: пароли не совпадают!");
    }
    else
    {
        User user("NameOfRegistr",
                   login,
                   date,
                   password.toInt(),
                   0,
                   "PersonnelGroup",
                   0,
                   User::Admin);

        QFile file(Config::BinOfPersonnel);
        file.open(QIODevice::Append);
        QDataStream ost(&file);
        ost << user;

        emit startAuth();
    }
}
