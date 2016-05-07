#include "dialog.h"
#include "XColorDialog.h"
#include "XColorSquare.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

//    XColorDialog *dialog = new XColorDialog;
//    dialog->show();
    return a.exec();
}
