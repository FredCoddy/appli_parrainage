#include <QApplication>
#include "fencodegenerecpp.h"
#include "fenprincipale.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    FenPrincipale fenprinci;
    fenprinci.show();
    return app.exec();
}
