#include "diagramcanvas.h"
#include <QPainter>

DiagramCanvas::DiagramCanvas(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(1000, 700);
}

void DiagramCanvas::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);

    // Drawing pen
    QPen pen(Qt::black, 2);
    painter.setPen(pen);

    // White background
    painter.fillRect(rect(), Qt::white);

    // We will add your oxygen system diagram here.
    //First outer rectangle
        painter.drawRect(100, 100, 250, 180);
}