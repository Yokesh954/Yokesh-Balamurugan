#include "ProgressInputWindow.h"

#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QMessageBox>

ProgressInputWindow::ProgressInputWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Progress Input");
    setFixedSize(250, 180);
    setWindowFlag(Qt::Window);

    QLabel *label = new QLabel("Enter progress value:", this);

    inputBox = new QLineEdit(this);
    inputBox->setPlaceholderText("525, 600, 700 or 725");

    applyButton = new QPushButton("Apply", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(label);
    layout->addWidget(inputBox);
    layout->addWidget(applyButton);

    connect(applyButton, &QPushButton::clicked, this, [this]()
            {
                QString input = inputBox->text();

                if (input != "525" && input != "600" &&
                    input != "700" && input != "725")
                {
                    QMessageBox::warning(this, "Invalid Input",
                                         "Enter 525, 600, 700 or 725.");
                    return;
                }

                emit progressValueChanged(input.toInt());
            });
}