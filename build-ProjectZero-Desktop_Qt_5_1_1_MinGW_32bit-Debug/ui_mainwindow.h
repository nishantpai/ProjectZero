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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *addFromFileButton;
    QPushButton *displayLibraryButton;
    QTableWidget *displayBooks;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *authorEdit;
    QLabel *label_4;
    QLineEdit *quantityEdit;
    QPushButton *addManuallyButton;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(651, 490);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        addFromFileButton = new QPushButton(centralWidget);
        addFromFileButton->setObjectName(QStringLiteral("addFromFileButton"));
        addFromFileButton->setGeometry(QRect(50, 40, 81, 23));
        displayLibraryButton = new QPushButton(centralWidget);
        displayLibraryButton->setObjectName(QStringLiteral("displayLibraryButton"));
        displayLibraryButton->setGeometry(QRect(160, 40, 91, 23));
        displayBooks = new QTableWidget(centralWidget);
        if (displayBooks->columnCount() < 3)
            displayBooks->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displayBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displayBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        displayBooks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        displayBooks->setObjectName(QStringLiteral("displayBooks"));
        displayBooks->setGeometry(QRect(30, 80, 341, 311));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 150, 190, 128));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, nameEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        authorEdit = new QLineEdit(layoutWidget);
        authorEdit->setObjectName(QStringLiteral("authorEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, authorEdit);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        quantityEdit = new QLineEdit(layoutWidget);
        quantityEdit->setObjectName(QStringLiteral("quantityEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, quantityEdit);

        addManuallyButton = new QPushButton(layoutWidget);
        addManuallyButton->setObjectName(QStringLiteral("addManuallyButton"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, addManuallyButton);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, label_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 21));
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
        addFromFileButton->setText(QApplication::translate("MainWindow", "Add From File", 0));
        displayLibraryButton->setText(QApplication::translate("MainWindow", "Display Library", 0));
        QTableWidgetItem *___qtablewidgetitem = displayBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "NAME", 0));
        QTableWidgetItem *___qtablewidgetitem1 = displayBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "AUTHOR", 0));
        QTableWidgetItem *___qtablewidgetitem2 = displayBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "QUANTITY", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Author:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Quantity: ", 0));
        addManuallyButton->setText(QApplication::translate("MainWindow", "Add Manually", 0));
        label_2->setText(QApplication::translate("MainWindow", "ADD BOOKS MANUALLY:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
