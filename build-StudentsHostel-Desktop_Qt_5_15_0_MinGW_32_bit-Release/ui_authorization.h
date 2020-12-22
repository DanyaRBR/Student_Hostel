/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authorization
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *error;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *login;
    QLabel *label_3;
    QLineEdit *passw;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *LogIn;

    void setupUi(QWidget *authorization)
    {
        if (authorization->objectName().isEmpty())
            authorization->setObjectName(QString::fromUtf8("authorization"));
        authorization->resize(400, 300);
        authorization->setMinimumSize(QSize(400, 300));
        authorization->setMaximumSize(QSize(400, 300));
        gridLayout = new QGridLayout(authorization);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        error = new QLabel(authorization);
        error->setObjectName(QString::fromUtf8("error"));
        error->setMaximumSize(QSize(16777215, 20));
        error->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(error, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(authorization);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        login = new QLineEdit(authorization);
        login->setObjectName(QString::fromUtf8("login"));
        login->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout->addWidget(login);

        label_3 = new QLabel(authorization);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        passw = new QLineEdit(authorization);
        passw->setObjectName(QString::fromUtf8("passw"));

        horizontalLayout->addWidget(passw);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        label = new QLabel(authorization);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        LogIn = new QPushButton(authorization);
        LogIn->setObjectName(QString::fromUtf8("LogIn"));

        horizontalLayout_2->addWidget(LogIn);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);


        retranslateUi(authorization);

        QMetaObject::connectSlotsByName(authorization);
    } // setupUi

    void retranslateUi(QWidget *authorization)
    {
        authorization->setWindowTitle(QCoreApplication::translate("authorization", "Form", nullptr));
        error->setText(QString());
        label_2->setText(QCoreApplication::translate("authorization", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("authorization", "Password", nullptr));
        label->setText(QCoreApplication::translate("authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        LogIn->setText(QCoreApplication::translate("authorization", "LogIn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authorization: public Ui_authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
