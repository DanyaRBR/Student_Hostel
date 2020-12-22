#ifndef MANAGESTUDENTS_H
#define MANAGESTUDENTS_H
#include <QDialog>
#include "User.h"
class User;
namespace Ui {
class ManageStudents;
}

class ManageStudents : public QDialog
{
    Q_OBJECT

public:

    explicit ManageStudents(const QList<User> &userlist, QWidget *parent = nullptr);
    ~ManageStudents();

public slots:

private slots:

    void on_add_clicked();

    void on_del_clicked();

    void on_edit_clicked();

private:
    Ui::ManageStudents *ui;
    const QList<User> &s_userlist;

signals:
    void addStudent(User);
    void editStudent(int, User);
    void deleteStudent(int);

};
#endif // MANAGESTUDENTS_H
