#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H
#include <QWidget>
class User;

namespace Ui {
class authorization;
}
/*!
    \brief Класс авторизации.
    Данный класс существует для выполнения авторизации пользователя при входе в систему
*/
class authorization : public QWidget
{
    Q_OBJECT

public:
    /*!
    Конструктор класса авторизации
    \param parent ссылка на родительский объект
    */
    explicit authorization(QWidget *parent = nullptr);
    ~authorization();

private:
    Ui::authorization *ui;
    User *CheckStudent(const QString &login, const int &password);
    User *CheckPersonnel(const QString &login, const int &password);

signals:
    ///Сигнал об успешном входе
    void succesful(User*);

private slots:
    ///сигнал нажатия кнопки "Войти"
    void on_LogIn_clicked();
};
#endif // AUTHORIZATION_H
