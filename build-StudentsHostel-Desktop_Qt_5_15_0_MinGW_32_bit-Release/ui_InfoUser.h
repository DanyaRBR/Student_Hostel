/********************************************************************************
** Form generated from reading UI file 'InfoUser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOUSER_H
#define UI_INFOUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_InfoUser
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *accept;
    QGridLayout *gridLayout_2;
    QLabel *labelnumber;
    QLabel *statuslabel;
    QLabel *number;
    QLabel *labelsurname;
    QSpacerItem *horizontalSpacer;
    QLabel *surname;
    QLabel *status;
    QLabel *labelname;
    QLabel *name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *MainLabel;

    void setupUi(QDialog *InfoUser)
    {
        if (InfoUser->objectName().isEmpty())
            InfoUser->setObjectName(QString::fromUtf8("InfoUser"));
        InfoUser->resize(395, 271);
        gridLayout = new QGridLayout(InfoUser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, 9, 9);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        accept = new QPushButton(InfoUser);
        accept->setObjectName(QString::fromUtf8("accept"));
        QFont font;
        font.setPointSize(14);
        accept->setFont(font);

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelnumber = new QLabel(InfoUser);
        labelnumber->setObjectName(QString::fromUtf8("labelnumber"));
        QFont font1;
        font1.setPointSize(12);
        labelnumber->setFont(font1);

        gridLayout_2->addWidget(labelnumber, 3, 1, 1, 1);

        statuslabel = new QLabel(InfoUser);
        statuslabel->setObjectName(QString::fromUtf8("statuslabel"));
        statuslabel->setFont(font1);

        gridLayout_2->addWidget(statuslabel, 0, 1, 1, 1);

        number = new QLabel(InfoUser);
        number->setObjectName(QString::fromUtf8("number"));
        number->setFont(font1);

        gridLayout_2->addWidget(number, 3, 2, 1, 1);

        labelsurname = new QLabel(InfoUser);
        labelsurname->setObjectName(QString::fromUtf8("labelsurname"));
        labelsurname->setFont(font1);

        gridLayout_2->addWidget(labelsurname, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        surname = new QLabel(InfoUser);
        surname->setObjectName(QString::fromUtf8("surname"));
        surname->setFont(font1);

        gridLayout_2->addWidget(surname, 1, 2, 1, 1);

        status = new QLabel(InfoUser);
        status->setObjectName(QString::fromUtf8("status"));
        status->setMinimumSize(QSize(170, 0));
        status->setFont(font1);

        gridLayout_2->addWidget(status, 0, 2, 1, 1);

        labelname = new QLabel(InfoUser);
        labelname->setObjectName(QString::fromUtf8("labelname"));
        labelname->setFont(font1);

        gridLayout_2->addWidget(labelname, 2, 1, 1, 1);

        name = new QLabel(InfoUser);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font1);

        gridLayout_2->addWidget(name, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, 9, 9);
        label_2 = new QLabel(InfoUser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(16);
        label_2->setFont(font2);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        MainLabel = new QLabel(InfoUser);
        MainLabel->setObjectName(QString::fromUtf8("MainLabel"));
        MainLabel->setFont(font2);
        MainLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MainLabel, 1, 0, 1, 2);


        retranslateUi(InfoUser);
        QObject::connect(accept, SIGNAL(clicked()), InfoUser, SLOT(close()));

        QMetaObject::connectSlotsByName(InfoUser);
    } // setupUi

    void retranslateUi(QDialog *InfoUser)
    {
        InfoUser->setWindowTitle(QCoreApplication::translate("InfoUser", "Dialog", nullptr));
        accept->setText(QCoreApplication::translate("InfoUser", "\320\236\320\272", nullptr));
        labelnumber->setText(QCoreApplication::translate("InfoUser", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", nullptr));
        statuslabel->setText(QCoreApplication::translate("InfoUser", "\320\241\321\202\320\260\321\202\321\203\321\201: ", nullptr));
        number->setText(QString());
        labelsurname->setText(QCoreApplication::translate("InfoUser", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        surname->setText(QString());
        status->setText(QString());
        labelname->setText(QCoreApplication::translate("InfoUser", "\320\230\320\274\321\217", nullptr));
        name->setText(QString());
        label_2->setText(QCoreApplication::translate("InfoUser", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217: ", nullptr));
        MainLabel->setText(QCoreApplication::translate("InfoUser", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoUser: public Ui_InfoUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOUSER_H
