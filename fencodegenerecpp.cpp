#include "fencodegenerecpp.h"

FenCodeGenerecpp::FenCodeGenerecpp(QString &code, QWidget *parent=0) : QDialog(parent)
{
    canvas_code = new QTextEdit(code);
    canvas_code->setReadOnly(true);
    canvas_code->setFont(QFont("Courier",8));
    fermer = new QPushButton("Fermer");

    //init du layout
    layout_code = new QVBoxLayout();

    layout_code->addWidget(canvas_code);
    layout_code->addWidget(fermer);


    this->setLayout(layout_code);

    connect(fermer,SIGNAL(clicked(bool)),this,SLOT(accept()));
}
