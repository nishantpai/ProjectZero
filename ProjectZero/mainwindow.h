#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    private slots:
        void on_pushButton_4_clicked();

        void on_pushButton_5_clicked();

        void on_addFromFileButton_clicked();

        void on_displayLibraryButton_clicked();

        void on_addManuallyButton_clicked();

        void on_searchButton_clicked();

        void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
