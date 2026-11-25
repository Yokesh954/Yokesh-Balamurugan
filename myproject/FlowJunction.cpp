#include "FlowJunction.h"
#include <QPainter>
#include <QPen>

FlowJunction::FlowJunction(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(50, 50);
}

void FlowJunction::setVerticalFlow(bool vertical)
{
    verticalFlow = vertical;
    update();
}

void FlowJunction::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(QPen(Qt::black, 2));
    painter.setBrush(Qt::white);
    painter.drawEllipse(3, 3, 44, 44);

    painter.setPen(QPen(Qt::green, 3));

    if (verticalFlow)
    {
        painter.drawLine(25, 35, 25, 15);
        painter.drawLine(25, 15, 19, 21);
        painter.drawLine(25, 15, 31, 21);
    }
    else
    {
        painter.drawLine(15, 25, 35, 25);
        painter.drawLine(35, 25, 29, 19);
        painter.drawLine(35, 25, 29, 31);
    }
}