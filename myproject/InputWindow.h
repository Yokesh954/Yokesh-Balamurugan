#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class InputWindow : public QWidget
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = nullptr);

signals:
    void flowInputsChanged(int flow1, int flow2, int flow3);

private:
    QLineEdit *input1;
    QLineEdit *input2;
    QLineEdit *input3;
    QPushButton *applyButton;
};

#endif // INPUTWINDOW_H