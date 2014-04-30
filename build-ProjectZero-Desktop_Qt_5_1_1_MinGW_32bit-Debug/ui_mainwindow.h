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
    QLineEdit *searchEdit;
    QPushButton *searchButton;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *addFromFileButton;
    QPushButton *displayLibraryButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(929, 576);
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
        displayBooks->setGeometry(QRect(350, 80, 541, 431));
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

        searchEdit = new QLineEdit(centralWidget);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));
        searchEdit->setGeometry(QRect(360, 30, 231, 20));
        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(630, 30, 121, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 390, 131, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 140, 131, 54));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addFromFileButton = new QPushButton(widget);
        addFromFileButton->setObjectName(QStringLiteral("addFromFileButton"));

        verticalLayout->addWidget(addFromFileButton);

        displayLibraryButton = new QPushButton(widget);
        displayLibraryButton->setObjectName(QStringLiteral("displayLibraryButton"));

        verticalLayout->addWidget(displayLibraryButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 929, 21));
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
        searchButton->setText(QApplication::translate("MainWindow", "Search By Name", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Export To File", 0));
        addFromFileButton->setText(QApplication::translate("MainWindow", "Add From File...", 0));
        displayLibraryButton->setText(QApplication::translate("MainWindow", "Display Library", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
