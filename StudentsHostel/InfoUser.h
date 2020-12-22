#ifndef INFOUSER_H
#define INFOUSER_H
#include <QDialog>

class User;

namespace Ui {
class InfoUser;
}

class InfoUser : public QDialog
{
    Q_OBJECT

public:
     explicit InfoUser(const User &user, QWidget *parent = nullptr);
    ~InfoUser();

public slots:

private slots:

private:
    Ui::InfoUser *ui;
};
#endif // INFOUSER_H
