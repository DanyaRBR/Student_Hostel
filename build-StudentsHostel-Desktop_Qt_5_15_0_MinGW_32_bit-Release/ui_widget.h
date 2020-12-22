/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLabel *mainlabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *InfoUser;
    QPushButton *ManageStudent;
    QPushButton *ManagePersonnal;
    QSpacerItem *horizontalSpacer;
    QPushButton *LogOut;
    QTableWidget *TableOfStudents;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(770, 450);
        Widget->setMinimumSize(QSize(400, 300));
        Widget->setMaximumSize(QSize(800, 450));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainlabel = new QLabel(Widget);
        mainlabel->setObjectName(QString::fromUtf8("mainlabel"));
        QFont font;
        font.setPointSize(16);
        mainlabel->setFont(font);
        mainlabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mainlabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, 9, 9);
        InfoUser = new QPushButton(Widget);
        InfoUser->setObjectName(QString::fromUtf8("InfoUser"));

        horizontalLayout->addWidget(InfoUser);

        ManageStudent = new QPushButton(Widget);
        ManageStudent->setObjectName(QString::fromUtf8("ManageStudent"));

        horizontalLayout->addWidget(ManageStudent);

        ManagePersonnal = new QPushButton(Widget);
        ManagePersonnal->setObjectName(QString::fromUtf8("ManagePersonnal"));

        horizontalLayout->addWidget(ManagePersonnal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        LogOut = new QPushButton(Widget);
        LogOut->setObjectName(QString::fromUtf8("LogOut"));

        horizontalLayout->addWidget(LogOut);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        TableOfStudents = new QTableWidget(Widget);
        if (TableOfStudents->columnCount() < 6)
            TableOfStudents->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        TableOfStudents->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        TableOfStudents->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        TableOfStudents->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        TableOfStudents->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        TableOfStudents->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        TableOfStudents->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        TableOfStudents->setObjectName(QString::fromUtf8("TableOfStudents"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(10);
        TableOfStudents->setFont(font1);
        TableOfStudents->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TableOfStudents->setSelectionMode(QAbstractItemView::SingleSelection);
        TableOfStudents->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableOfStudents->horizontalHeader()->setCascadingSectionResizes(false);
        TableOfStudents->horizontalHeader()->setMinimumSectionSize(50);
        TableOfStudents->horizontalHeader()->setDefaultSectionSize(143);
        TableOfStudents->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TableOfStudents->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(TableOfStudents, 2, 0, 1, 1);

        QWidget::setTabOrder(TableOfStudents, InfoUser);
        QWidget::setTabOrder(InfoUser, ManageStudent);
        QWidget::setTabOrder(ManageStudent, ManagePersonnal);
        QWidget::setTabOrder(ManagePersonnal, LogOut);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        mainlabel->setText(QCoreApplication::translate("Widget", "\320\236\320\261\321\211\320\265\320\266\320\270\321\202\320\270\320\265 \342\204\22621", nullptr));
        InfoUser->setText(QCoreApplication::translate("Widget", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265", nullptr));
        ManageStudent->setText(QCoreApplication::translate("Widget", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260\320\274\320\270", nullptr));
        ManagePersonnal->setText(QCoreApplication::translate("Widget", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\320\276\320\274", nullptr));
        LogOut->setText(QCoreApplication::translate("Widget", "LogOut", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TableOfStudents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TableOfStudents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TableOfStudents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = TableOfStudents->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "\320\232\321\203\321\200\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TableOfStudents->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Widget", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TableOfStudents->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Widget", "\320\232\320\276\320\274\320\275\320\260\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
