#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "InputWindow.h"
#include "ProgressInputWindow.h"
#include "InputWindow2.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    InputWindow *inputWindow;
    ProgressInputWindow *progressInputWindow;
    InputWindow2 *inputWindow2;
};

#endif // MAINWINDOW_H