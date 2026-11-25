#ifndef PROGRESSINPUTWINDOW_H
#define PROGRESSINPUTWINDOW_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class ProgressInputWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ProgressInputWindow(QWidget *parent = nullptr);

signals:
    void progressValueChanged(int value);

private:
    QLineEdit *inputBox;
    QPushButton *applyButton;
};

#endif // PROGRESSINPUTWINDOW_H