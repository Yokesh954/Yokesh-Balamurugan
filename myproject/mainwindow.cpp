#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , inputWindow(new InputWindow(this))
    , progressInputWindow(new ProgressInputWindow(this))
    , inputWindow2(new InputWindow2(this))
{
    ui->setupUi(this);

    // Show existing input windows
    inputWindow->show();
    progressInputWindow->show();

    // Show flow selection window
    inputWindow2->setWindowFlag(Qt::Window);
    inputWindow2->show();

    // Flow line colour control
    connect(inputWindow2, &InputWindow2::flowSelected,
            this, [this](int value)
            {
                // Reset all lines to BLACK
                ui->line_4->setStyleSheet(
                    "background-color: black; color: black;");
                ui->line_10->setStyleSheet(
                    "background-color: black; color: black;");
                ui->line_11->setStyleSheet(
                    "background-color: black; color: black;");
                ui->line_3->setStyleSheet(
                    "background-color: black; color: black;");
                ui->line_2->setStyleSheet(
                    "background-color: black; color: black;");

                // OBOGS FLOW - Input 0
                if (value == 0)
                {
                    ui->line_4->setStyleSheet(
                        "background-color: green; color: green;");
                    ui->line_3->setStyleSheet(
                        "background-color: green; color: green;");
                    ui->line_2->setStyleSheet(
                        "background-color: green; color: green;");
                }

                // BOS FLOW - Input 1
                else if (value == 1)
                {
                    ui->line_10->setStyleSheet(
                        "background-color: green; color: green;");
                    ui->line_3->setStyleSheet(
                        "background-color: green; color: green;");
                    ui->line_2->setStyleSheet(
                        "background-color: green; color: green;");
                }

                // EOS FLOW - Input 2
                else if (value == 2)
                {
                    ui->line_11->setStyleSheet(
                        "background-color: green; color: green;");
                    ui->line_2->setStyleSheet(
                        "background-color: green; color: green;");
                }
            });

    // Existing progress bar control
    connect(progressInputWindow,
            &ProgressInputWindow::progressValueChanged,
            this, [this](int value)
            {
                int percentage = 0;

                if (value == 525)
                    percentage = 24;
                else if (value == 600)
                    percentage = 60;
                else if (value == 700)
                    percentage = 80;
                else if (value == 725)
                    percentage = 100;

                ui->progressBar_2->setValue(percentage);
            });
}

MainWindow::~MainWindow()
{
    delete ui;
}