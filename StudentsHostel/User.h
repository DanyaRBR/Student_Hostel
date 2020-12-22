#ifndef USER_H
#define USER_H
#include <QString>
#include <QDataStream>
#include <QTextStream>
#include <QMap>
#include <QDate>

class User
{
public:
    enum Status {Admin, Commandant, Student};
    User();
    User(const QString &name, const QString &surname, const QDate &date, const int &number,
         const int &course, const QString &group, const int &numberofroom, const Status &status);


    const QString &name() const;
    const QString &surname() const;
    const QDate &date() const;
    const int &number() const;
    const int &course() const;
    const QString &group() const;
    const int &numberofroom() const;
    const Status &status() const;
    const QString statusString() const;

    void setData(const QString &name, const QString &surname, const QDate &date, const int &number,
                 const int &course, const QString &group, const int &numberofroom, const Status &status);

    void setName(const QString &name);
    void setSurname(const QString &surname);
    void setDate(const QDate &date);
    void setNumber(const int &number);
    void setCourse(const int &course);
    void setGroup(const QString &group);
    void setNumberofroom(const int &numberofroom);
    void setStatus(const Status &status);

    static QMap<Status, QString> getListStatus();
private:
    QString s_name;
    QString s_surname;
    QDate s_date;
    int s_number;
    int s_course;
    QString s_group;
    int s_numberofroom;
    Status s_status;

};

inline QDataStream &operator<< (QDataStream &ost, const User &user)
{
    ost << user.name() << user.surname() << user.date()<< user.number() << user.course() << user.group()
        << user.numberofroom()<< user.status();
    return ost;
}

inline QDataStream &operator>> (QDataStream &ist, User &user)
{
    QString name;
    QString surname;
    QDate date;
    int number;
    int course;
    QString group;
    int numberofroom;
    int status;
    ist >> name>>surname>>date>>number>>course>>group>>numberofroom>> status;
    user.setData(name, surname, date, number, course, group, numberofroom, User::Status(status));
    return ist;
}
#endif
