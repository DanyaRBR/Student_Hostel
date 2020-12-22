/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *login;
    QLineEdit *pass;
    QLabel *labelLogin;
    QLabel *errorlabel;
    QLabel *labelPassw;
    QPushButton *Ok;
    QLabel *labelRepeat;
    QSpacerItem *verticalSpacer;
    QLineEdit *prepeat;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(400, 300);
        Registration->setMinimumSize(QSize(400, 300));
        Registration->setMaximumSize(QSize(424, 300));
        gridLayout = new QGridLayout(Registration);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        login = new QLineEdit(Registration);
        login->setObjectName(QString::fromUtf8("login"));

        gridLayout_2->addWidget(login, 1, 1, 1, 1);

        pass = new QLineEdit(Registration);
        pass->setObjectName(QString::fromUtf8("pass"));

        gridLayout_2->addWidget(pass, 3, 1, 1, 1);

        labelLogin = new QLabel(Registration);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));
        QFont font;
        font.setPointSize(10);
        labelLogin->setFont(font);

        gridLayout_2->addWidget(labelLogin, 0, 1, 1, 1);

        errorlabel = new QLabel(Registration);
        errorlabel->setObjectName(QString::fromUtf8("errorlabel"));

        gridLayout_2->addWidget(errorlabel, 8, 1, 1, 1);

        labelPassw = new QLabel(Registration);
        labelPassw->setObjectName(QString::fromUtf8("labelPassw"));
        labelPassw->setFont(font);

        gridLayout_2->addWidget(labelPassw, 2, 1, 1, 1);

        Ok = new QPushButton(Registration);
        Ok->setObjectName(QString::fromUtf8("Ok"));

        gridLayout_2->addWidget(Ok, 11, 1, 1, 1);

        labelRepeat = new QLabel(Registration);
        labelRepeat->setObjectName(QString::fromUtf8("labelRepeat"));
        labelRepeat->setFont(font);

        gridLayout_2->addWidget(labelRepeat, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 1, 1, 1);

        prepeat = new QLineEdit(Registration);
        prepeat->setObjectName(QString::fromUtf8("prepeat"));

        gridLayout_2->addWidget(prepeat, 5, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 2, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 2);

        label = new QLabel(Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(400, 0));
        label->setMaximumSize(QSize(400, 16777215));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        QWidget::setTabOrder(login, pass);
        QWidget::setTabOrder(pass, prepeat);
        QWidget::setTabOrder(prepeat, Ok);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        labelLogin->setText(QCoreApplication::translate("Registration", "Login", nullptr));
        errorlabel->setText(QString());
        labelPassw->setText(QCoreApplication::translate("Registration", "Password", nullptr));
        Ok->setText(QCoreApplication::translate("Registration", "Ok", nullptr));
        labelRepeat->setText(QCoreApplication::translate("Registration", "Repeat Password", nullptr));
        label->setText(QCoreApplication::translate("Registration", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217 \320\260\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
