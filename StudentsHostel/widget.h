#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <User.h>

class InfoUser;
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(User &user, QWidget *parent = nullptr);
    ~Widget();

    const QList<User> &userlist() const;

public slots:
    void addStudent(User user);
    void editStudent(int row, User user);
    void deleteStudent(int row);

signals:
    void LogOut();
private slots:
    void on_InfoUser_clicked();

    void on_LogOut_clicked();

    void on_ManagePersonnal_clicked();

    void on_ManageStudent_clicked();

private:
    Ui::Widget *ui;
    User &s_user;
    InfoUser *s_infoUser;
    QList<User> s_userlist;
    void loadStudents();
};
#endif // WIDGET_H
