#include <QApplication>
#include <QTextCodec>
#include "fenprincipale.h"
#include "QRect"
#include "QDesktopWidget"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
    static FenPrincipale fenprinci;
    fenprinci.setFixedSize(500,300);
    fenprinci.setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            fenprinci.size(),
            qApp->desktop()->availableGeometry()
        ));
    fenprinci.show();
    return app.exec();
}
