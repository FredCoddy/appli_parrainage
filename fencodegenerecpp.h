#ifndef FENCODEGENERECPP_H
#define FENCODEGENERECPP_H

#include <QTextEdit>
#include <QLayout>
#include <QPushButton>
#include <QtGui>
#include <QDialog>

class FenCodeGenerecpp : public QDialog
{
public:
    FenCodeGenerecpp(QString &code, QWidget *parent);
    QVBoxLayout *layout_code;

private:
    QTextEdit *canvas_code;
    QPushButton *fermer;

};

#endif // FENCODEGENERECPP_H
