#include "InputWindow2.h"

#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QMessageBox>

InputWindow2::InputWindow2(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Flow Selection");
    setFixedSize(300, 180);

    QLabel *titleLabel = new QLabel("Enter Flow Number (0, 1, 2)", this);

    inputBox = new QLineEdit(this);
    inputBox->setPlaceholderText("0 = OBOGS, 1 = BOS, 2 = EOS");

    submitButton = new QPushButton("Submit", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(titleLabel);
    layout->addWidget(inputBox);
    layout->addWidget(submitButton);

    connect(submitButton, &QPushButton::clicked, this, [this]()
            {
                bool ok;
                int value = inputBox->text().toInt(&ok);

                if (!ok || value < 0 || value > 2)
                {
                    QMessageBox::warning(this, "Invalid Input",
                                         "Please enter only 0, 1, or 2.");
                    return;
                }

                emit flowSelected(value);
            });
}