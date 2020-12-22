#ifndef MANAGEPERSONNEL_H
#define MANAGEPERSONNEL_H
#include <QDialog>
#include "User.h"
class User;
namespace Ui {
class ManagePersonnel;
}

class ManagePersonnel : public QDialog
{
    Q_OBJECT

public:

    explicit ManagePersonnel(QWidget *parent = nullptr);
    ~ManagePersonnel();

public slots:

private slots:

    void on_add_clicked();

    void on_del_clicked();

private:
    Ui::ManagePersonnel *ui;
    QList<User> s_userlist;
};
#endif // MANAGEPERSONNEL_H
