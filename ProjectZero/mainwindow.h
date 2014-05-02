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

        void on_searchEdit_textChanged(const QString &arg1);

        void on_searchByNameEdit_textChanged(const QString &arg1);

        void on_searchByAuthorEdit_textChanged(const QString &arg1);

        void on_lineEdit_2_textChanged(const QString &arg1);

        void on_searchByIndexEdit_textChanged(const QString &arg1);

        void on_label_8_linkHovered(const QString &link);

        void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
