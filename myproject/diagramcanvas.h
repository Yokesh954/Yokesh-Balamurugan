#ifndef DIAGRAMCANVAS_H
#define DIAGRAMCANVAS_H

#include <QWidget>

class DiagramCanvas : public QWidget
{
    Q_OBJECT

public:
    explicit DiagramCanvas(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // DIAGRAMCANVAS_H