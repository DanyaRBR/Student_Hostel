#ifndef SIGNALS_H
#define SIGNALS_H
#include <QWidget>
class User;
class Signals : public QWidget
{
    Q_OBJECT

public:
    Signals(QWidget *parent = nullptr);
    ~Signals();

private:
    QWidget *m_currentWidget;

private slots:
    void slotForAuth();
    void slotOpenWidget(User*);
};
#endif // SIGNALS_H
