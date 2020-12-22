/********************************************************************************
** Form generated from reading UI file 'ManageStudents.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGESTUDENTS_H
#define UI_MANAGESTUDENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageStudents
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *del;
    QPushButton *edit;
    QSpacerItem *horizontalSpacer;
    QPushButton *add;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *accept;
    QTableWidget *Table;

    void setupUi(QDialog *ManageStudents)
    {
        if (ManageStudents->objectName().isEmpty())
            ManageStudents->setObjectName(QString::fromUtf8("ManageStudents"));
        ManageStudents->resize(790, 450);
        gridLayout = new QGridLayout(ManageStudents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 9, 9, 9);
        del = new QPushButton(ManageStudents);
        del->setObjectName(QString::fromUtf8("del"));
        del->setMinimumSize(QSize(90, 0));
        QFont font;
        font.setPointSize(14);
        del->setFont(font);

        gridLayout_2->addWidget(del, 0, 1, 1, 1);

        edit = new QPushButton(ManageStudents);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setMinimumSize(QSize(145, 0));
        edit->setFont(font);

        gridLayout_2->addWidget(edit, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        add = new QPushButton(ManageStudents);
        add->setObjectName(QString::fromUtf8("add"));
        add->setFont(font);

        gridLayout_2->addWidget(add, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        label = new QLabel(ManageStudents);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, 9, 9);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        accept = new QPushButton(ManageStudents);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setFont(font);

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        Table = new QTableWidget(ManageStudents);
        if (Table->columnCount() < 7)
            Table->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        Table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        Table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        Table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        Table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        Table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        Table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        Table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        Table->setObjectName(QString::fromUtf8("Table"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(10);
        Table->setFont(font2);
        Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Table->setSelectionMode(QAbstractItemView::SingleSelection);
        Table->setSelectionBehavior(QAbstractItemView::SelectRows);
        Table->horizontalHeader()->setCascadingSectionResizes(false);
        Table->horizontalHeader()->setMinimumSectionSize(50);
        Table->horizontalHeader()->setDefaultSectionSize(130);
        Table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Table->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(Table, 1, 0, 1, 1);

        QWidget::setTabOrder(accept, add);
        QWidget::setTabOrder(add, del);
        QWidget::setTabOrder(del, edit);
        QWidget::setTabOrder(edit, Table);

        retranslateUi(ManageStudents);
        QObject::connect(accept, SIGNAL(clicked()), ManageStudents, SLOT(accept()));

        QMetaObject::connectSlotsByName(ManageStudents);
    } // setupUi

    void retranslateUi(QDialog *ManageStudents)
    {
        ManageStudents->setWindowTitle(QCoreApplication::translate("ManageStudents", "Dialog", nullptr));
        del->setText(QCoreApplication::translate("ManageStudents", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        edit->setText(QCoreApplication::translate("ManageStudents", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        add->setText(QCoreApplication::translate("ManageStudents", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("ManageStudents", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        accept->setText(QCoreApplication::translate("ManageStudents", "\320\236\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManageStudents", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ManageStudents", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ManageStudents", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ManageStudents", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\202\321\203\320\264\320\265\320\275\321\207\320\265\321\201\320\272\320\276\320\263\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = Table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ManageStudents", "\320\232\321\203\321\200\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = Table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ManageStudents", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = Table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ManageStudents", "\320\232\320\276\320\274\320\275\320\260\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageStudents: public Ui_ManageStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGESTUDENTS_H
