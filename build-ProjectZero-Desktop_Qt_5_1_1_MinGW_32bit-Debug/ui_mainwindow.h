/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *displayBooks;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *authorEdit;
    QLabel *label_4;
    QLineEdit *quantityEdit;
    QPushButton *addManuallyButton;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *addFromFileButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *searchByAuthorEdit;
    QLineEdit *searchByIndexEdit;
    QLineEdit *searchByNameEdit;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *statsLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(979, 634);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        displayBooks = new QTableWidget(centralWidget);
        if (displayBooks->columnCount() < 4)
            displayBooks->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displayBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displayBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        displayBooks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        displayBooks->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        displayBooks->setObjectName(QStringLiteral("displayBooks"));
        displayBooks->setGeometry(QRect(380, 80, 521, 451));
        displayBooks->setSortingEnabled(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 210, 256, 134));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, nameEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        authorEdit = new QLineEdit(layoutWidget);
        authorEdit->setObjectName(QStringLiteral("authorEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, authorEdit);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        quantityEdit = new QLineEdit(layoutWidget);
        quantityEdit->setObjectName(QStringLiteral("quantityEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, quantityEdit);

        addManuallyButton = new QPushButton(layoutWidget);
        addManuallyButton->setObjectName(QStringLiteral("addManuallyButton"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, addManuallyButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 390, 131, 23));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 140, 131, 54));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addFromFileButton = new QPushButton(layoutWidget1);
        addFromFileButton->setObjectName(QStringLiteral("addFromFileButton"));

        verticalLayout->addWidget(addFromFileButton);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 10, 91, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 40, 101, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 70, 91, 16));
        searchByAuthorEdit = new QLineEdit(centralWidget);
        searchByAuthorEdit->setObjectName(QStringLiteral("searchByAuthorEdit"));
        searchByAuthorEdit->setGeometry(QRect(120, 40, 231, 20));
        searchByIndexEdit = new QLineEdit(centralWidget);
        searchByIndexEdit->setObjectName(QStringLiteral("searchByIndexEdit"));
        searchByIndexEdit->setGeometry(QRect(120, 70, 111, 20));
        searchByNameEdit = new QLineEdit(centralWidget);
        searchByNameEdit->setObjectName(QStringLiteral("searchByNameEdit"));
        searchByNameEdit->setGeometry(QRect(120, 10, 291, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 130, 75, 23));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(380, 540, 41, 16));
        statsLabel = new QLabel(centralWidget);
        statsLabel->setObjectName(QStringLiteral("statsLabel"));
        statsLabel->setGeometry(QRect(420, 540, 141, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 979, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = displayBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "INDEX", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "NAME", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "AUTHOR", 0));
        QTableWidgetItem *___qtablewidgetitem3 = displayBooks->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "QUANTITY", 0));
        label_2->setText(QApplication::translate("MainWindow", "ADD BOOKS MANUALLY:", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Author:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Quantity: ", 0));
        addManuallyButton->setText(QApplication::translate("MainWindow", "Add Manually", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Export To File", 0));
        addFromFileButton->setText(QApplication::translate("MainWindow", "Add From File...", 0));
        label_5->setText(QApplication::translate("MainWindow", "Search By NAME:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Search By AUTHOR:", 0));
        label_7->setText(QApplication::translate("MainWindow", "Search By INDEX:", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Push", 0));
        label_8->setText(QApplication::translate("MainWindow", "STATS: ", 0));
        statsLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
