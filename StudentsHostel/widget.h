#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <User.h>

class InfoUser;
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE
/*!
    \brief Класс главного окна.
    Главное окно - основное окно пользователя, оно содержит в себе основные кнопки управления пользователями, персоналом и информации о личном кабинете.
*/
class Widget : public QWidget
{
    Q_OBJECT

public:
    /*!
    Конструктор класса главного окна
    \param user ссылка на пользователя со всеми данными о нем
    \param parent ссылка на родительский объект
    */
    explicit Widget(User &user, QWidget *parent = nullptr);
    ~Widget();

    ///Список пользователей
    const QList<User> &userlist() const;

public slots:
    /*! \brief Функция добавления студента
             \param user студент
        */
    void addStudent(User user);
    /*! \brief Функция редактирования студента
             \param row строка, выбранного студента
             \param user студент
        */
    void editStudent(int row, User user);
    /*! \brief Функция удаления студента
             \param row строка, выбранного студента
        */
    void deleteStudent(int row);

signals:
    void LogOut();  ///< Сигнал сообщающий о выходе из аккаунта
    void on_InfoUser_clicked(); ///< нажатие кнопки получения информации по личному кабинету
    void on_LogOut_clicked(); ///< нажатие кнопки выхода из аккаунта
    void on_ManagePersonnal_clicked(); ///< нажатие кнопки управления персоналом
    void on_ManageStudent_clicked(); ///< нажатие кнопки управления студентами

private:
    Ui::Widget *ui;
    User &s_user;
    InfoUser *s_infoUser;
    QList<User> s_userlist;
    void loadStudents();
};
#endif // WIDGET_H
