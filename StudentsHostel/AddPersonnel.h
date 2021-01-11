#ifndef ADDPERSONNEL_H
#define ADDPERSONNEL_H
#include <QDialog>
#include <User.h>
class User;

namespace Ui {
class AddPersonnel;
}
/*!
    \brief Класс добавления персонала.
    Данный класс существует для добавления персонала.
*/
class AddPersonnel : public QDialog
{
    Q_OBJECT

public:
    /*!
    Конструктор класса добавления персонала
    \param parent ссылка на родительский объект
    */
    explicit AddPersonnel(QWidget *parent = nullptr);
    ~AddPersonnel();

    ///Метод получения данных о пользователе
    const User &getUser() const;
private:
    Ui::AddPersonnel *ui;
    User s_user;

public slots:
    /*! \brief Логическая функция, проверяющая существует ли заданный пароль в двоичном файле студентов
             \param password Пароль пользователя
             \returns Существует пароль или нет
        */
    bool isStudExist(const int &password);
    /*! \brief Логическая функция, проверяющая существует ли заданный пароль в двоичном файле персонала
             \param password Пароль пользователя
             \returns Существует пароль или нет
        */
    bool isPersExist(const int &password);
    /// функция определяющая порядок действий после получения сигнала от кнопки "принять"
    void accept();
};
#endif // ADDPERSONNEL_H
