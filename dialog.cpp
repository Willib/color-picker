#include "dialog.h"
#include "ui_dialog.h"
#include "XColorMaster.h"
#include "XGradientSlider.hpp"
#include "XColorPreview.hpp"
#include "XColorDialog.h"
#include <QLayout>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
//    XColorSquare* colorSquare = new XColorSquare(this);
//    colorSquare->setColor(Qt::red);
//    colorSquare->setCheckedColor('H');
//    XColorPreview *color = new XColorPreview(this);
//    color->setColor(Qt::red);

//    XColorDialog *dialog = new XColorDialog(this);

     sc = new XColorMaster(this);
     sc->setGeometry(10,10,25,25);

//    XGradientSlider *slider = new XGradientSlider(this);
//    slider->setFirstColor(Qt::red);
//    slider->setLastColor(Qt::green);
//    QVBoxLayout *hLayout = new QVBoxLayout;
//    hLayout->addWidget(sc);
//    hLayout->addWidget(slider);
//    hLayout->addWidget(dialog);
//    this->setLayout(hLayout);
//    hLayout->addWidget(color);
//    hLayout->addWidget(sc);
//    setLayout(hLayout);
}

Dialog::~Dialog()
{
    delete ui;
}
