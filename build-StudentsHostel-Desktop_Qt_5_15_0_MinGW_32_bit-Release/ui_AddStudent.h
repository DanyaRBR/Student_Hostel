/********************************************************************************
** Form generated from reading UI file 'AddStudent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddStudent
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *accept;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *surname;
    QLineEdit *name;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *group;
    QLabel *label_8;
    QSpinBox *numberofcourse;
    QSpinBox *numberofroom;
    QDateEdit *dateEdit;
    QLineEdit *passw;
    QSpacerItem *verticalSpacer_3;
    QLabel *error;

    void setupUi(QDialog *AddStudent)
    {
        if (AddStudent->objectName().isEmpty())
            AddStudent->setObjectName(QString::fromUtf8("AddStudent"));
        AddStudent->resize(571, 344);
        gridLayout = new QGridLayout(AddStudent);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        cancel = new QPushButton(AddStudent);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        QFont font;
        font.setPointSize(12);
        cancel->setFont(font);

        horizontalLayout->addWidget(cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        accept = new QPushButton(AddStudent);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setFont(font);

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 5, 0, 2, 2);

        label = new QLabel(AddStudent);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(AddStudent);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        surname = new QLineEdit(AddStudent);
        surname->setObjectName(QString::fromUtf8("surname"));
        surname->setFont(font2);

        gridLayout_2->addWidget(surname, 2, 1, 1, 1);

        name = new QLineEdit(AddStudent);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font2);

        gridLayout_2->addWidget(name, 0, 1, 1, 1);

        label_4 = new QLabel(AddStudent);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_7 = new QLabel(AddStudent);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        label_2 = new QLabel(AddStudent);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(AddStudent);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(AddStudent);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        group = new QLineEdit(AddStudent);
        group->setObjectName(QString::fromUtf8("group"));
        group->setFont(font2);

        gridLayout_2->addWidget(group, 6, 1, 1, 1);

        label_8 = new QLabel(AddStudent);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        gridLayout_2->addWidget(label_8, 7, 0, 1, 1);

        numberofcourse = new QSpinBox(AddStudent);
        numberofcourse->setObjectName(QString::fromUtf8("numberofcourse"));
        numberofcourse->setButtonSymbols(QAbstractSpinBox::NoButtons);
        numberofcourse->setMinimum(1);
        numberofcourse->setMaximum(4);

        gridLayout_2->addWidget(numberofcourse, 5, 1, 1, 1);

        numberofroom = new QSpinBox(AddStudent);
        numberofroom->setObjectName(QString::fromUtf8("numberofroom"));
        numberofroom->setButtonSymbols(QAbstractSpinBox::NoButtons);
        numberofroom->setMinimum(1);
        numberofroom->setMaximum(200);

        gridLayout_2->addWidget(numberofroom, 7, 1, 1, 1);

        dateEdit = new QDateEdit(AddStudent);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit->setMaximumDateTime(QDateTime(QDate(2003, 12, 31), QTime(23, 59, 59)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(1950, 9, 14), QTime(0, 0, 0)));
        dateEdit->setMaximumDate(QDate(2003, 12, 31));
        dateEdit->setDate(QDate(1990, 1, 1));

        gridLayout_2->addWidget(dateEdit, 3, 1, 1, 1);

        passw = new QLineEdit(AddStudent);
        passw->setObjectName(QString::fromUtf8("passw"));

        gridLayout_2->addWidget(passw, 4, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 0, 1, 1);

        error = new QLabel(AddStudent);
        error->setObjectName(QString::fromUtf8("error"));

        gridLayout->addWidget(error, 3, 0, 1, 1);

        QWidget::setTabOrder(name, surname);
        QWidget::setTabOrder(surname, dateEdit);
        QWidget::setTabOrder(dateEdit, passw);
        QWidget::setTabOrder(passw, numberofcourse);
        QWidget::setTabOrder(numberofcourse, group);
        QWidget::setTabOrder(group, numberofroom);
        QWidget::setTabOrder(numberofroom, accept);
        QWidget::setTabOrder(accept, cancel);

        retranslateUi(AddStudent);
        QObject::connect(accept, SIGNAL(clicked()), AddStudent, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), AddStudent, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddStudent);
    } // setupUi

    void retranslateUi(QDialog *AddStudent)
    {
        AddStudent->setWindowTitle(QCoreApplication::translate("AddStudent", "Dialog", nullptr));
        cancel->setText(QCoreApplication::translate("AddStudent", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        accept->setText(QCoreApplication::translate("AddStudent", "\320\236\320\272", nullptr));
        label->setText(QCoreApplication::translate("AddStudent", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265/\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("AddStudent", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217:", nullptr));
        label_4->setText(QCoreApplication::translate("AddStudent", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217:", nullptr));
        label_7->setText(QCoreApplication::translate("AddStudent", "\320\223\321\200\321\203\320\277\320\277\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("AddStudent", "\320\230\320\274\321\217:", nullptr));
        label_5->setText(QCoreApplication::translate("AddStudent", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\202\321\203\320\264\320\265\320\275\321\207\320\265\321\201\320\272\320\276\320\263\320\276:", nullptr));
        label_6->setText(QCoreApplication::translate("AddStudent", "\320\232\321\203\321\200\321\201:", nullptr));
        label_8->setText(QCoreApplication::translate("AddStudent", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\276\320\274\320\275\320\260\321\202\321\213: ", nullptr));
        numberofroom->setPrefix(QCoreApplication::translate("AddStudent", "\342\204\226", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddStudent: public Ui_AddStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
