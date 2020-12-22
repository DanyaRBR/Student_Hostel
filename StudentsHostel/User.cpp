#include "User.h"

//User(const QString &name, const QString &surname, const QDate &date, const int &number,
//const int &course, const QString &group, const int &numberofroom, const Status &status);

User::User()
{
}
User::User(const QString &name, const QString &surname, const QDate &date, const int &number,
           const int &course, const QString &group, const int &numberofroom, const Status &status)
{
    s_name=name;
    s_surname=surname;
    s_date=date;
    s_number=number;
    s_course=course;
    s_group=group;
    s_numberofroom=numberofroom;
    s_status = status;
}
const QString &User::name() const
{
    return s_name;
}

const QString &User::surname() const
{
    return s_surname;
}
const QDate &User::date() const
{
    return s_date;
}
const int &User::number() const
{
    return s_number;
}
const int &User::course() const
{
    return s_course;
}
const QString &User::group() const
{
    return s_group;
}
const int &User::numberofroom() const
{
    return s_numberofroom;
}
const User::Status &User::status() const
{
    return s_status;
}

const QString User::statusString() const
{
    return getListStatus()[s_status];
}

void User::setData(const QString &name, const QString &surname, const QDate &date, const int &number,
                   const int &course, const QString &group, const int &numberofroom, const Status &status)
{
    s_name=name;
    s_surname=surname;
    s_date=date;
    s_number=number;
    s_course=course;
    s_group=group;
    s_numberofroom=numberofroom;
    s_status = status;
}
void User::setName(const QString &name)
{
    s_name=name;
}
void User::setSurname(const QString &surname)
{
    s_surname=surname;
}
void User::setDate(const QDate &date)
{
    s_date=date;
}
void User::setNumber(const int &number)
{
    s_number=number;
}
void User::setCourse(const int &course)
{
    s_course=course;
}
void User::setGroup(const QString &group)
{
    s_group=group;
}
void User::setNumberofroom(const int &numberofroom)
{
    s_numberofroom=numberofroom;
}
void User::setStatus(const Status &status)
{
    s_status = status;
}

QMap<User::Status, QString> User::getListStatus()
{
    return QMap<Status, QString>
            (
    {
        { Admin, "Администратор" },
        { Commandant, "Коммендант"},
        { Student, "Студент" }
    }
            );
}

