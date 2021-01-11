#ifndef USER_H
#define USER_H
#include <QString>
#include <QDataStream>
#include <QTextStream>
#include <QMap>
#include <QDate>
/*!
    \brief Класс пользователя.
    Данный класс существует для осуществления действий над пользователями, включая запись и чтение данных о пользователе.
*/
class User
{
public:
    /// Набор возможных статусов пользователя
    enum Status {Admin, ///< Указывает, что пользователь - Администратор
                 Commandant, ///< Указывает, что статус пользователя - Коммендант
                 Student ///< Указывает, что статус пользователя - студент
                };
    User();
    /*!
    Конструктор класса
    \param name Имя
    \param surname Фамилия
    \param date Дата рождения
    \param number Номер зачетной книжки
    \param course Курс
    \param group Группа студента
    \param numberofroom Номер комнаты
    \param status Статус пользователя
    */
    User(const QString &name, const QString &surname, const QDate &date, const int &number,
         const int &course, const QString &group, const int &numberofroom, const Status &status);


    ///Метод получения имени пользователя
    const QString &name() const;
    ///Метод получения фамилии пользователя
    const QString &surname() const;
    ///Метод получения даты рождения студента
    const QDate &date() const;
    ///Метод получения номера зачетной книжки студента или пароля пользователя
    const int &number() const;
    ///Метод получения курса студента
    const int &course() const;
    ///Метод получения группы студента
    const QString &group() const;
    ///Метод получения номера комнаты студента
    const int &numberofroom() const;
    ///Метод получения статуса пользователя
    const Status &status() const;
    ///Метод получения имени пользователя строкой
    const QString statusString() const;

    ///Установка данных пользователя параметры те же, что и в конструкторе класса
    void setData(const QString &name, const QString &surname, const QDate &date, const int &number,
                 const int &course, const QString &group, const int &numberofroom, const Status &status);

    ///Установка имени пользователя
    void setName(const QString &name);
    ///Установка фамилии пользователя
    void setSurname(const QString &surname);
    ///Установка даты рождения пользователя
    void setDate(const QDate &date);
    ///Установка номера зачетной книжки студента/пароля пользователя
    void setNumber(const int &number);
    ///Установка курса пользователя
    void setCourse(const int &course);
    ///Установка группы пользователя
    void setGroup(const QString &group);
    ///Установка номера комнаты пользователя
    void setNumberofroom(const int &numberofroom);
    ///Установка статуса пользователя
    void setStatus(const Status &status);

     ///Статический метод, возвращающий список соответствий статуса его строковому типу
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

/// Запись пользователя в поток
inline QDataStream &operator<< (QDataStream &ost, const User &user)
{
    ost << user.name() << user.surname() << user.date()<< user.number() << user.course() << user.group()
        << user.numberofroom()<< user.status();
    return ost;
}

/// Считывание пользователя из потока
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
