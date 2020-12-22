#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H
#include <QWidget>
class User;

namespace Ui {
class authorization;
}
class authorization : public QWidget
{
    Q_OBJECT

public:
    explicit authorization(QWidget *parent = nullptr);
    ~authorization();

private:
    Ui::authorization *ui;
    User *CheckStudent(const QString &login, const int &password);
    User *CheckPersonnel(const QString &login, const int &password);

signals:
    void succesful(User*);

private slots:

    void on_LogIn_clicked();
};
#endif // AUTHORIZATION_H
