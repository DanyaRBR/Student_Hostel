/********************************************************************************
** Form generated from reading UI file 'AddPersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSONNEL_H
#define UI_ADDPERSONNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddPersonnel
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *login;
    QLineEdit *passw;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *accept;
    QLabel *label;
    QLabel *error;

    void setupUi(QDialog *AddPersonnel)
    {
        if (AddPersonnel->objectName().isEmpty())
            AddPersonnel->setObjectName(QString::fromUtf8("AddPersonnel"));
        AddPersonnel->resize(342, 271);
        gridLayout = new QGridLayout(AddPersonnel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(AddPersonnel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(AddPersonnel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        login = new QLineEdit(AddPersonnel);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font);

        gridLayout_2->addWidget(login, 0, 1, 1, 1);

        passw = new QLineEdit(AddPersonnel);
        passw->setObjectName(QString::fromUtf8("passw"));

        gridLayout_2->addWidget(passw, 2, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel = new QPushButton(AddPersonnel);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        QFont font1;
        font1.setPointSize(12);
        cancel->setFont(font1);

        horizontalLayout->addWidget(cancel);

        accept = new QPushButton(AddPersonnel);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setFont(font1);

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        label = new QLabel(AddPersonnel);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        error = new QLabel(AddPersonnel);
        error->setObjectName(QString::fromUtf8("error"));
        error->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(error, 2, 0, 1, 1);

        QWidget::setTabOrder(login, passw);
        QWidget::setTabOrder(passw, accept);
        QWidget::setTabOrder(accept, cancel);

        retranslateUi(AddPersonnel);
        QObject::connect(cancel, SIGNAL(clicked()), AddPersonnel, SLOT(reject()));
        QObject::connect(accept, SIGNAL(clicked()), AddPersonnel, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddPersonnel);
    } // setupUi

    void retranslateUi(QDialog *AddPersonnel)
    {
        AddPersonnel->setWindowTitle(QCoreApplication::translate("AddPersonnel", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AddPersonnel", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_3->setText(QCoreApplication::translate("AddPersonnel", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        cancel->setText(QCoreApplication::translate("AddPersonnel", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        accept->setText(QCoreApplication::translate("AddPersonnel", "\320\236\320\272", nullptr));
        label->setText(QCoreApplication::translate("AddPersonnel", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\276\320\274\320\265\320\275\320\264\320\260\320\275\321\202\320\260", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddPersonnel: public Ui_AddPersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSONNEL_H
