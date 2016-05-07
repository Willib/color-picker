#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "XColorMaster.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    enum CheckedColor
    {
        H,S,V,R,G,B
    }checkedColor;
private:
    Ui::Dialog *ui;
    XColorMaster *sc;
};

#endif // DIALOG_H
