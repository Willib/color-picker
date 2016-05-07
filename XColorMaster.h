#ifndef XCOLORMASTER_H
#define XCOLORMASTER_H

#include <QWidget>
#include <QColor>
#include "XColorDialog.h"

class XColorMaster : public QWidget
{
    Q_OBJECT
public:
    explicit XColorMaster(QWidget *parent = 0);

    void SetSquareWidth(int width);
public slots:
    void ChangeColor(QColor color);
protected:
    void paintEvent(QPaintEvent *);
//    void mousePressEvent(QMouseEvent *);
    bool eventFilter(QObject *, QEvent *);

private:
    QColor          color;
    int             nWidth;
    XColorDialog*   colorDialog;
    QBrush          background;

};

#endif // XCOLORMASTER_H
