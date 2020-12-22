#include "InfoUser.h"
#include "ui_InfoUser.h"
#include "User.h"
#include "widget.h"
#include <config.h>
InfoUser::InfoUser(const User &user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoUser)

{
    ui->setupUi(this);
    setWindowTitle(Config::Name);
    if (user.status()==User::Admin||user.status()==User::Commandant)
    {
    ui->name->setVisible(false);
    ui->number->setVisible(false);
    ui->labelname->setVisible(false);
    ui->labelnumber->setVisible(false);

    ui->labelsurname->setText("Логин:");
    ui->surname->setText(user.surname());
    ui->status->setText(user.statusString());
    }
    else
    {
        ui->name->setText(user.name());
        ui->surname->setText(user.surname());
        ui->number->setText(QString("№%1").arg(user.numberofroom()));
        ui->status->setText(user.statusString());
    }
}

InfoUser::~InfoUser()
{
    delete ui;
}

