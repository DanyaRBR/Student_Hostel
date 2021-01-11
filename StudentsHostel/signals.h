#ifndef SIGNALS_H
#define SIGNALS_H
#include <QWidget>
class User;
/*!
    \brief Класс сигналов.
    Данный класс определяет порядок окон для запуска и содержит в себе в сигналы авторизации, регистрации и главного окна.
    Каждый сигнал определяет какое окно и когда будет открыто пользователю.
*/
class Signals : public QWidget
{
    Q_OBJECT

public:
    /*!
    Конструктор класса главного окна
    \param parent ссылка на родительский объект
    */
    Signals(QWidget *parent = nullptr);
    ~Signals();

private:
    QWidget *m_currentWidget;

private slots:
    void slotForAuth();
    void slotOpenWidget(User*);
};
#endif // SIGNALS_H
