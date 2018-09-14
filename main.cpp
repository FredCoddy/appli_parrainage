#include <QApplication>
#include <QTextCodec>
#include "fenprincipale.h"
#include "QRect"
#include "QDesktopWidget"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));
    static FenPrincipale fenprinci;
//    fenprinci.setGeometry(
//        QStyle::alignedRect(
//            Qt::LeftToRight,
//            Qt::AlignCenter,
//            fenprinci.size(),
//            qApp->desktop()->availableGeometry()
//        ));
    QRect screenGeometry = QApplication::desktop()->screenGeometry();
    int x = (screenGeometry.width()-fenprinci.width()) / 2;
    int y = (screenGeometry.height()-fenprinci.height()) / 2;
    fenprinci.move(x, y);
    fenprinci.show();
    return app.exec();
}
