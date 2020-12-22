#ifndef ADDPERSONNEL_H
#define ADDPERSONNEL_H
#include <QDialog>
#include <User.h>
class User;

namespace Ui {
class AddPersonnel;
}

class AddPersonnel : public QDialog
{
    Q_OBJECT

public:

    explicit AddPersonnel(QWidget *parent = nullptr);
    ~AddPersonnel();

    const User &getUser() const;
private:
    Ui::AddPersonnel *ui;
    User s_user;

public slots:
    bool isStudExist(const int &password);
    bool isPersExist(const int &password);
    void accept();
};
#endif // ADDPERSONNEL_H
