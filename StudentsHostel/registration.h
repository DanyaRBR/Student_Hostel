#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <QWidget>

namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:

    explicit Registration(QWidget *parent = nullptr);
    ~Registration();
private:
    Ui::Registration *ui;

signals:
    void startAuth();
private slots:
    void on_Ok_clicked();
};
#endif // REGISTRATION_H
