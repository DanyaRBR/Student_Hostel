#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H
#include <QDialog>
#include <User.h>
class User;

namespace Ui {
class AddStudent;
}

class AddStudent : public QDialog
{
    Q_OBJECT

public:
    enum TypeOfWindow { Create, Edit };

    explicit AddStudent(User *user, const QList<User> &s_userlist,TypeOfWindow type, QWidget *parent = nullptr);
    ~AddStudent();

private:
    Ui::AddStudent *ui;
    User *s_user;
    const QList<User> &s_userlist;

public slots:
    bool isStudentExist(const int &password, int count);
    bool isNumberexist(const int &password);
    bool CheckRoom(const int &numberofroom, int count);
    void accept();

};
#endif // ADDSTUDENT_H
