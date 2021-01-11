#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H
#include <QDialog>
#include <User.h>
class User;

namespace Ui {
class AddStudent;
}
/*!
    \brief Класс добавления/редактирования/удаления информации о студентах.
    Данный класс существует для добавления студентов их редактирования и удаления.
*/
class AddStudent : public QDialog
{
    Q_OBJECT

public:
    /// Тип вызова окна
    enum TypeOfWindow { Create, ///< Указывает, что производится добавление студента
                        Edit ///< Указывает, что производится редактирование информации о студенте
                      };

    /*!
    Конструктор класса добавления рейса
    \param *user пользователь, с его содержимым
    \param s_userlist ссылка на список пользователей
    \param type тип действия, прозиводимого над пользователем
    \param parent ссылка на родительский объект
    */
    explicit AddStudent(User *user, const QList<User> &s_userlist,TypeOfWindow type, QWidget *parent = nullptr);
    ~AddStudent();

private:
    Ui::AddStudent *ui;
    User *s_user;
    const QList<User> &s_userlist;

public slots:
    /*! \brief Логическая функция, проверяющая существует ли заданный пароль в данных двоичного файла студентов
             \&password пароль пользователя
        */
    bool isStudentExist(const int &password, int count);

    /*! \brief Логическая функция, проверяющая существует ли заданный пароль в данных двоичного файла персонала
             \&password пароль пользователя
        */
    bool isNumberexist(const int &password);

    /*! \brief Логическая функция, определяющая можно ли использовать заданный номер комнаты
             \&numberofroom номер комнаты студента
        */
    bool CheckRoom(const int &numberofroom, int count);
   ///Кнопка "Принять" для добавления рейса
    void accept();

};
#endif // ADDSTUDENT_H
