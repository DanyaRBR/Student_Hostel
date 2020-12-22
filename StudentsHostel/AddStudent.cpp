#include "AddStudent.h"
#include "ui_AddStudent.h"
#include "config.h"
#include "User.h"
#include <QFile>

AddStudent::AddStudent(User *user,const QList<User> &userlist, TypeOfWindow type, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStudent),
    s_user(user),
    s_userlist(userlist)
{
    ui->setupUi(this);
    setWindowTitle(Config::Name);
    ui->name->setValidator(new QRegExpValidator(QRegExp( "[A-Za-zА-Яа-я]{20}")));
    ui->surname->setValidator(new QRegExpValidator(QRegExp( "[A-Za-zА-Яа-я]{20}")));
    ui->passw->setValidator(new QRegExpValidator(QRegExp("[0-9]{8}")));

    if (type == Edit)
    {
        ui->label->setText("Редактирование информации о студенте");
        ui->name->setText(s_user->name());
        ui->surname->setText(s_user->surname());
        ui->dateEdit->setDate(s_user->date());
        ui->passw->setText(QString("%1").arg(s_user->number()));
        ui->numberofcourse->setValue(s_user->course());
        ui->group->setText(s_user->group());
        ui->numberofroom ->setValue(s_user->numberofroom());
    }
    else
    {
        ui->label->setText("Добавление информации о студенте");
    }
}


AddStudent::~AddStudent()
{
    delete ui;
}
bool AddStudent::isStudentExist(const int &password, int count)
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
                count++;
        }
        if (count>1)
            return true;
        else
            return false;
    }
    else
        return false;
}

bool AddStudent::isNumberexist(const int &password)
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

bool AddStudent::CheckRoom(const int &numberofroom, int count)
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
            if (user_test.numberofroom() == numberofroom)
                count+=1;
        }
        if (count>1)
            return true;
        else return false;
    }
    else
        return false;
}
void AddStudent::accept()
{
    ui->error->clear();

    QString name = ui->name->text();
    QString surname = ui->surname->text();
    QDate dates = ui->dateEdit->date();
    QString number = ui->passw->text();
    int course = ui->numberofcourse->value();
    QString group = ui->group->text();
    int numberofroom = ui->numberofroom->value();

    int count=0;
    QString label = ui->label->text();
    if (label=="Добавление информации о студенте") count=1;
    else count=0;

    if (name.isEmpty() ||
        surname.isEmpty()||
            group.isEmpty())
    {
        ui->error->setText("Ошибка: заполните все поля!");
    }
    else if (surname.size() < 3)
    {
        ui->error->setText("Ошибка: Ошибка произошла из-за формата фамилии, обратитесь к администратору!");
    }
    else if (number.size() < 8)
    {
        ui->error->setText("Ошибка: Номер студенческого должен состоять из 8 цифр!");
    }
    else if (CheckRoom(numberofroom, 0))
    {
        ui->error->setText("Ошибка: В выбранной комнате нет мест!");
    }
    else if (isStudentExist(number.toInt(),count)||isNumberexist(number.toInt()))
    {
            ui->error->setText("Ошибка: данное имя пользователя уже существует!");
    }
    else
    {
        s_user->setData(name, surname, dates, number.toInt(), course, group, numberofroom,User::Student );
        QDialog::accept();
    }
}
