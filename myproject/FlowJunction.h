#ifndef FLOWJUNCTION_H
#define FLOWJUNCTION_H

#include <QWidget>

class FlowJunction : public QWidget
{
    Q_OBJECT

public:
    explicit FlowJunction(QWidget *parent = nullptr);

    void setVerticalFlow(bool vertical);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    bool verticalFlow = false;
};

#endif // FLOWJUNCTION_H