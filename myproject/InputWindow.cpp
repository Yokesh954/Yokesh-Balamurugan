#include "InputWindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QMessageBox>

InputWindow::InputWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Flow Inputs");
    setFixedSize(300, 250);

    setWindowFlag(Qt::Window);

    QLabel *label1 = new QLabel("Flow Junction 1:", this);
    QLabel *label2 = new QLabel("Flow Junction 2:", this);
    QLabel *label3 = new QLabel("Flow Junction 3:", this);

    input1 = new QLineEdit(this);
    input2 = new QLineEdit(this);
    input3 = new QLineEdit(this);

    input1->setPlaceholderText("Enter 0 or 1");
    input2->setPlaceholderText("Enter 0 or 1");
    input3->setPlaceholderText("Enter 0 or 1");

    applyButton = new QPushButton("Apply", this);

    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(label1);
    layout->addWidget(input1);

    layout->addWidget(label2);
    layout->addWidget(input2);

    layout->addWidget(label3);
    layout->addWidget(input3);

    layout->addWidget(applyButton);

    connect(applyButton, &QPushButton::clicked, this, [this]()
            {
                QString v1 = input1->text();
                QString v2 = input2->text();
                QString v3 = input3->text();

                if ((v1 != "0" && v1 != "1") ||
                    (v2 != "0" && v2 != "1") ||
                    (v3 != "0" && v3 != "1"))
                {
                    QMessageBox::warning(this, "Invalid Input",
                                         "All inputs must be 0 or 1.");
                    return;
                }

                emit flowInputsChanged(v1.toInt(), v2.toInt(), v3.toInt());
            });
}