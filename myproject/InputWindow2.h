#ifndef INPUTWINDOW2_H
#define INPUTWINDOW2_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class InputWindow2 : public QWidget
{
    Q_OBJECT

public:
    explicit InputWindow2(QWidget *parent = nullptr);

signals:
    void flowSelected(int value);

private:
    QLineEdit *inputBox;
    QPushButton *submitButton;
};

#endif // INPUTWINDOW2_H