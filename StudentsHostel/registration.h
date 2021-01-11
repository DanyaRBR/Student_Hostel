#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <QWidget>

namespace Ui {
class Registration;
}
/*!
    \brief Класс регистрации.
    Данный класс предназначен для регистрации пользователей.
*/
class Registration : public QWidget
{
    Q_OBJECT

public:
    /*!
    Конструктор класса регистрации
    \param parent ссылка на родительский объект
    */
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();
private:
    Ui::Registration *ui;

signals:
    void startAuth(); ///< Сигнал оповещающий о необходимости открытия окна авторизации
private slots:
    void on_Ok_clicked();
};
#endif // REGISTRATION_H
