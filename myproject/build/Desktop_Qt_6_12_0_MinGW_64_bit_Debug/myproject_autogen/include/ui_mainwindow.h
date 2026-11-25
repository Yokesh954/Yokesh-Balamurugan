/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QFrame *frame;
    QLabel *label;
    QFrame *line_2;
    QFrame *frame_2;
    QLabel *label_2;
    QFrame *line_3;
    QFrame *frame_3;
    QProgressBar *progressBar;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line_4;
    QFrame *frame_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *line_5;
    QFrame *frame_5;
    QLabel *label_9;
    QFrame *line_6;
    QProgressBar *progressBar_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QFrame *frame_6;
    QLabel *label_14;
    QFrame *line_7;
    QFrame *line_8;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QLabel *junction3;
    QLabel *junction1;
    QLabel *junction2;
    QFrame *frame_7;
    QLabel *label_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1441, 743);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 10, 1120, 641));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(210, 480, 120, 80));
        QPalette palette;
        QBrush brush(QColor(0, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        frame->setPalette(palette);
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 63, 20));
        line_2 = new QFrame(groupBox);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(150, 360, 101, 16));
        QPalette palette1;
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        line_2->setPalette(palette1);
        line_2->setFrameShadow(QFrame::Shadow::Plain);
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::Shape::HLine);
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(30, 330, 120, 80));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush2);
        frame_2->setPalette(palette2);
        frame_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        frame_2->setFrameShape(QFrame::Shape::Box);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 30, 63, 20));
        line_3 = new QFrame(groupBox);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(260, 260, 20, 91));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        line_3->setPalette(palette3);
        line_3->setFrameShadow(QFrame::Shadow::Plain);
        line_3->setLineWidth(5);
        line_3->setFrameShape(QFrame::Shape::VLine);
        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(169, 39, 171, 131));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::HighlightedText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Link, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::LinkVisited, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush2);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush2);
        QBrush brush3(QColor(0, 255, 0, 128));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::HighlightedText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Link, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::LinkVisited, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush2);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::HighlightedText, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Link, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::LinkVisited, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush2);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush3);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush2);
#endif
        frame_3->setPalette(palette4);
        frame_3->setFrameShape(QFrame::Shape::Box);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        progressBar = new QProgressBar(frame_3);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(30, 50, 118, 23));
        progressBar->setValue(40);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 80, 21, 20));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 80, 31, 20));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 10, 63, 20));
        line_4 = new QFrame(groupBox);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(290, 230, 221, 20));
        line_4->setFrameShadow(QFrame::Shadow::Plain);
        line_4->setLineWidth(5);
        line_4->setFrameShape(QFrame::Shape::HLine);
        frame_4 = new QFrame(groupBox);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(510, 230, 201, 101));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        frame_4->setPalette(palette5);
        frame_4->setFrameShape(QFrame::Shape::Box);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        frame_4->setMidLineWidth(0);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 60, 63, 20));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 30, 63, 20));
        label_8 = new QLabel(frame_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(130, 30, 63, 20));
        line_5 = new QFrame(groupBox);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(710, 225, 261, 21));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        line_5->setPalette(palette6);
        line_5->setFrameShadow(QFrame::Shadow::Plain);
        line_5->setLineWidth(9);
        line_5->setFrameShape(QFrame::Shape::HLine);
        frame_5 = new QFrame(groupBox);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(970, 200, 120, 80));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        frame_5->setPalette(palette7);
        frame_5->setFrameShape(QFrame::Shape::Box);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_9 = new QLabel(frame_5);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 30, 63, 20));
        line_6 = new QFrame(groupBox);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(600, 330, 3, 61));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        line_6->setPalette(palette8);
        line_6->setFrameShadow(QFrame::Shadow::Plain);
        line_6->setLineWidth(5);
        line_6->setFrameShape(QFrame::Shape::VLine);
        progressBar_2 = new QProgressBar(groupBox);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(550, 390, 181, 23));
        progressBar_2->setValue(24);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(550, 420, 31, 20));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(590, 420, 31, 20));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(630, 420, 21, 20));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(660, 420, 31, 20));
        frame_6 = new QFrame(groupBox);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(550, 20, 120, 80));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        frame_6->setPalette(palette9);
        frame_6->setFrameShape(QFrame::Shape::Box);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        label_14 = new QLabel(frame_6);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 30, 81, 20));
        line_7 = new QFrame(groupBox);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(570, 100, 20, 131));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        line_7->setPalette(palette10);
        line_7->setFrameShadow(QFrame::Shadow::Plain);
        line_7->setLineWidth(5);
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_8 = new QFrame(groupBox);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(620, 100, 20, 131));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        line_8->setPalette(palette11);
        line_8->setFrameShadow(QFrame::Shadow::Plain);
        line_8->setLineWidth(5);
        line_8->setFrameShape(QFrame::Shape::VLine);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(530, 140, 41, 20));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(670, 140, 63, 20));
        line_9 = new QFrame(groupBox);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(710, 310, 241, 20));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        line_9->setPalette(palette12);
        line_9->setFrameShadow(QFrame::Shadow::Plain);
        line_9->setLineWidth(5);
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_10 = new QFrame(groupBox);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(260, 170, 20, 51));
        line_10->setFrameShadow(QFrame::Shadow::Plain);
        line_10->setLineWidth(5);
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_11 = new QFrame(groupBox);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(260, 390, 20, 91));
        line_11->setFrameShadow(QFrame::Shadow::Plain);
        line_11->setLineWidth(5);
        line_11->setFrameShape(QFrame::Shape::VLine);
        junction3 = new QLabel(groupBox);
        junction3->setObjectName("junction3");
        junction3->setGeometry(QRect(950, 300, 40, 40));
        junction3->setStyleSheet(QString::fromUtf8("QLabel#junction3 {\n"
"    border: 2px solid black;\n"
"    border-radius: 20px;\n"
"    background-color: transparent;\n"
"}"));
        junction3->setFrameShape(QFrame::Shape::Box);
        junction1 = new QLabel(groupBox);
        junction1->setObjectName("junction1");
        junction1->setGeometry(QRect(250, 220, 40, 40));
        QPalette palette13;
        QBrush brush4(QColor(0, 0, 0, 0));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush4);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush4);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush4);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush4);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush4);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush4);
        junction1->setPalette(palette13);
        junction1->setStyleSheet(QString::fromUtf8("QLabel#junction1 {\n"
"    border: 2px solid black;\n"
"    border-radius: 20px;\n"
"    background-color: transparent;\n"
"}"));
        junction1->setFrameShape(QFrame::Shape::Box);
        junction2 = new QLabel(groupBox);
        junction2->setObjectName("junction2");
        junction2->setGeometry(QRect(250, 350, 40, 40));
        junction2->setStyleSheet(QString::fromUtf8("QLabel#junction2 {\n"
"    border: 2px solid black;\n"
"    border-radius: 20px;\n"
"    background-color: transparent;\n"
"}"));
        junction2->setFrameShape(QFrame::Shape::Box);
        frame_7 = new QFrame(groupBox);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(920, 350, 120, 80));
        frame_7->setFrameShape(QFrame::Shape::Box);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        label_17 = new QLabel(frame_7);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 30, 63, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1441, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ijdji", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "kjhjckdkh", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "bjhuehu", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "jsvdjk", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Lo", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "700\302\260C", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "jciojsdj", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "21", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "75", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "dhvkhdfvjkh", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "L1", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "L2", nullptr));
        junction3->setText(QString());
        junction1->setText(QString());
        junction2->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "hchsdu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
