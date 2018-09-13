#include <QApplication>
#include <QTextCodec>
#include "fenprincipale.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
    static FenPrincipale fenprinci;
    fenprinci.show();
    return app.exec();
}
