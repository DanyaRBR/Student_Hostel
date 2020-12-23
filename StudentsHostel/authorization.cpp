#include "authorization.h"
#include "ui_authorization.h"
#include "config.h"
#include "User.h"
#include <QRegExpValidator>
#include <QFile>
#include <QDataStream>
#include <QMessageBox>

authorization::authorization(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::authorization)
{
    ui->setupUi(this);
    this->setGeometry(QRect(0, 0, 800, 250));
    setWindowTitle(Config::Name);
    ui->login->setValidator( new QRegExpValidator( QRegExp( "[A-Za-zА-Яа-я]{20}" ) ));
    ui->passw->setValidator( new QRegExpValidator( QRegExp( "[0-9]{8}" ) ));

}

authorization::~authorization()
{
    delete ui;
}

User *authorization::CheckStudent(const QString &login, const int &password)
{
    QFile file(Config::BinOfStudent);
    if (file.exists())
    {
        User *user = nullptr;

        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: Невозможно открыть файл!");
            return nullptr;
        }

        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            User users;
            ist >> users;
            if (users.surname() == login && users.number() == password)
            {
                user = new User(users);
                return user;
            }
        }
        return user;
    }
    else
        return nullptr;
}
User *authorization::CheckPersonnel(const QString &login, const int &password)
{
    QFile file(Config::BinOfPersonnel);
    if (file.exists())
    {
        User *user = nullptr;

        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: Невозможно открыть файл!");
            return nullptr;
        }

        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            User users;
            ist >> users;
            if (users.surname() == login && users.number() == password)
            {
                user = new User(users);
                return user;
            }
        }
        return user;
    }
    else
        return nullptr;
}


void authorization::on_LogIn_clicked()
{
    ui->error->clear();

    const QString login = ui->login->text();
    const QString password = ui->passw->text();

    if (login.isEmpty())
        ui->error->setText("Ошибка: заполните все поля!");
    else if (login.size() < 3)
        ui->error->setText("Ошибка: слишком короткое имя пользователя!");
    else if (password.size()<8)
         ui->error->setText("Ошибка: Пароль должен состоять из 8 цифр!");
        {
        User *user = CheckStudent(login, password.toInt());
        User *user1 = CheckPersonnel(login, password.toInt());

        if (!CheckStudent(login, password.toInt())||!CheckPersonnel(login, password.toInt())) ui->error->setText("Ошибка: Проверка не прошла!");
        if (user == nullptr)
        {
            if (user1==nullptr)
            ui->error->setText("Ошибка: Неправильный логин или пароль!");
            else emit succesful(user1);
        }
        else
        {
            emit succesful(user);
        }

    }
}
