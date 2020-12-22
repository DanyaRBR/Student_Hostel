#include "AddPersonnel.h"
#include "ui_AddPersonnel.h"
#include "config.h"
#include "User.h"
#include <QComboBox>
#include <QFile>

AddPersonnel::AddPersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPersonnel)
{
    ui->setupUi(this);
    setWindowTitle(Config::Name);
    ui->login->setValidator(new QRegExpValidator(QRegExp( "[A-Za-zА-Яа-я]{20}")));
    ui->passw->setValidator(new QRegExpValidator(QRegExp("[0-9]{8}")));
}


AddPersonnel::~AddPersonnel()
{
    delete ui;
}
const User &AddPersonnel::getUser() const
{
    return s_user;
}
bool AddPersonnel::isStudExist(const int &password)
{
    QFile file(Config::BinOfStudent);
    if (file.exists())
    {
        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: Невозможно открыть файл!");
            return false;
        }

        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            User user_test;
            ist >> user_test;
            if (user_test.number() == password)
                return true;
        }
            return false;
    }
    else
        return false;
}

bool AddPersonnel::isPersExist(const int &password)
{
    QFile file(Config::BinOfPersonnel);
    if (file.exists())
    {
        if (!file.open(QIODevice::ReadOnly))
        {
            ui->error->setText("Ошибка: Невозможно открыть файл!");
            return false;
        }

        QDataStream ist(&file);
        while (!ist.atEnd())
        {
            User user_test;
            ist >> user_test;
            if (user_test.number() == password)
                return true;
        }
            return false;
    }
    else
        return false;
}
void AddPersonnel::accept()
{
    ui->error->clear();

    const QString login = ui->login->text();
    const QString password = ui->passw->text();

    QDate date(2000, 1, 1);

    if (login.isEmpty()||password==0)

    {
        ui->error->setText("Ошибка: Необходимо заполнить все поля!");
    }
    else if (login.size() < 3)
    {
        ui->error->setText("Ошибка: Слишком короткое имя пользователя!");
    }
    else if (password.size() <8)
    {
        ui->error->setText("Ошибка: Пароль должен состоять из 8 цифр!");
    }
    else if (isStudExist(password.toInt())||isPersExist(password.toInt()))
    {
            ui->error->setText("Ошибка: данное имя пользователя уже существует!");
    }
    else
    {
        s_user.setData("personnal",login, date, password.toInt(), 0, "personnal", 0, User::Commandant);
        QDialog::accept();

    }
}
