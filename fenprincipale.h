#ifndef FENPRINCIPALE_H
#define FENPRINCIPALE_H


#include <QApplication>
#include <QWidget>
#include <QLineEdit>
#include <QBoxLayout>
#include <QFormLayout>
#include <QButtonGroup>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QIcon>
#include <QMessageBox>
//#include <QtGui>
#include <QObject>
#include <QComboBox>
#include <QString>
#include <string>
#include <iostream>
#include <fstream>
#include "json.hpp"
#include "fenqcm.h"
using namespace std;
using json = nlohmann::json;


class FenPrincipale : public QWidget
{
    Q_OBJECT //lancer compiler->qmake car Q_OBJECT est une


public:
    FenPrincipale();
    QLineEdit *m_nom, *m_prenom;
    QComboBox *type_etudiant;
    string nom;
    string prenom;
    string niveau;
    int writeCSV(FenQCM*, json);

public slots:
    void Debut_QCM();



private :
//    QMessageBox *alerte;
    QPushButton *demarrer;
    QFormLayout *info_etudiant;
    QVBoxLayout *layoutPrincipale;


};

#endif // FENPRINCIPALE_H
