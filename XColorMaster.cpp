#include "XColorMaster.h"
#include <QPainter>
#include <QMouseEvent>

XColorMaster::XColorMaster(QWidget *parent) :
    QWidget(parent),color(Qt::black), nWidth(25),colorDialog(new XColorDialog),
    background(Qt::darkGray, Qt::DiagCrossPattern)
{
    colorDialog->hide();
    background.setTexture(QPixmap(QString(":/images/alphaback.png")));

    connect(colorDialog, SIGNAL(colorSelected(QColor)), this, SLOT(ChangeColor(QColor)));
    this->installEventFilter(this);
}

void XColorMaster::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(QPen(Qt::white,2));
    painter.setBrush(background);
    painter.drawRect(0,0,nWidth,nWidth);
    painter.setBrush(color);
    painter.drawRect(0,0,nWidth, nWidth);
}

void XColorMaster::SetSquareWidth(int width)
{
    this->nWidth = width;
}

void XColorMaster::ChangeColor(QColor color)
{
    this->color = color;
    update();
}

bool XColorMaster::eventFilter(QObject *obj, QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *event = static_cast<QMouseEvent*> (e);
        if(event->button() == Qt::LeftButton)
        {
            colorDialog->SetColor(color);
            colorDialog->show();
        }
        return true;
    }
    return QWidget::eventFilter(obj,e);
}

//void XColorMaster::mousePressEvent(QMouseEvent *event)
//{
//    if(event->button() == Qt::LeftButton)
//    {
//        colorDialog->SetColor(color);
//        colorDialog->show();
//    }
//}
