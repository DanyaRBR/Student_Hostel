/********************************************************************************
** Form generated from reading UI file 'ManagePersonnel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEPERSONNEL_H
#define UI_MANAGEPERSONNEL_H

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

class Ui_ManagePersonnel
{
public:
    QGridLayout *gridLayout;
    QTableWidget *TableofPersonnel;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *del;
    QPushButton *add;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *accept;

    void setupUi(QDialog *ManagePersonnel)
    {
        if (ManagePersonnel->objectName().isEmpty())
            ManagePersonnel->setObjectName(QString::fromUtf8("ManagePersonnel"));
        ManagePersonnel->resize(435, 450);
        gridLayout = new QGridLayout(ManagePersonnel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TableofPersonnel = new QTableWidget(ManagePersonnel);
        if (TableofPersonnel->columnCount() < 2)
            TableofPersonnel->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        TableofPersonnel->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        TableofPersonnel->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        TableofPersonnel->setObjectName(QString::fromUtf8("TableofPersonnel"));
        TableofPersonnel->setMinimumSize(QSize(0, 290));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        TableofPersonnel->setFont(font);
        TableofPersonnel->setEditTriggers(QAbstractItemView::NoEditTriggers);
        TableofPersonnel->setSelectionMode(QAbstractItemView::SingleSelection);
        TableofPersonnel->setSelectionBehavior(QAbstractItemView::SelectRows);
        TableofPersonnel->horizontalHeader()->setCascadingSectionResizes(false);
        TableofPersonnel->horizontalHeader()->setMinimumSectionSize(50);
        TableofPersonnel->horizontalHeader()->setDefaultSectionSize(195);
        TableofPersonnel->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TableofPersonnel->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(TableofPersonnel, 1, 0, 2, 2);

        label = new QLabel(ManagePersonnel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 35));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 9, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        del = new QPushButton(ManagePersonnel);
        del->setObjectName(QString::fromUtf8("del"));
        del->setMinimumSize(QSize(110, 0));
        QFont font2;
        font2.setPointSize(14);
        del->setFont(font2);

        gridLayout_2->addWidget(del, 1, 1, 1, 1);

        add = new QPushButton(ManagePersonnel);
        add->setObjectName(QString::fromUtf8("add"));
        add->setMinimumSize(QSize(110, 0));
        add->setFont(font2);

        gridLayout_2->addWidget(add, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, 9, 9);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        accept = new QPushButton(ManagePersonnel);
        accept->setObjectName(QString::fromUtf8("accept"));
        accept->setMinimumSize(QSize(110, 0));
        accept->setFont(font2);

        horizontalLayout->addWidget(accept);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        QWidget::setTabOrder(accept, add);
        QWidget::setTabOrder(add, del);
        QWidget::setTabOrder(del, TableofPersonnel);

        retranslateUi(ManagePersonnel);
        QObject::connect(accept, SIGNAL(clicked()), ManagePersonnel, SLOT(accept()));

        QMetaObject::connectSlotsByName(ManagePersonnel);
    } // setupUi

    void retranslateUi(QDialog *ManagePersonnel)
    {
        ManagePersonnel->setWindowTitle(QCoreApplication::translate("ManagePersonnel", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = TableofPersonnel->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ManagePersonnel", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TableofPersonnel->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ManagePersonnel", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("ManagePersonnel", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\265\321\200\321\201\320\276\320\275\320\260\320\273\320\276\320\274", nullptr));
        del->setText(QCoreApplication::translate("ManagePersonnel", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        add->setText(QCoreApplication::translate("ManagePersonnel", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        accept->setText(QCoreApplication::translate("ManagePersonnel", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManagePersonnel: public Ui_ManagePersonnel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPERSONNEL_H
