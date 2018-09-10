#include "fenprincipale.h"
#include "fencodegenerecpp.h"
#include "dialog.h"
#include <iostream>

//QString FenPrincipale::nom= "khcdbhdcs";


FenPrincipale::FenPrincipale() : QWidget()
{

    QVBoxLayout *layoutPrincipale = new QVBoxLayout;

    //Formulaire de base
    m_nom = new QLineEdit;
    m_prenom = new QLineEdit;
    QFormLayout *info_etudiant = new QFormLayout;
    info_etudiant->addRow("Nom : ",m_nom);
    info_etudiant->addRow("Prenom : ",m_prenom);

    //Combobox
    QComboBox *type_etudiant = new QComboBox;
    type_etudiant->addItem("Parrain / Maraine");
    type_etudiant->addItem("Fillot / Fillotte");

    QPushButton *demarrer = new QPushButton("Démarrer", this);

    //Remplissage du layout principale
    layoutPrincipale -> addLayout(info_etudiant);
    layoutPrincipale -> addWidget(type_etudiant);
    layoutPrincipale -> addWidget(demarrer);


    this->setLayout(layoutPrincipale);
    this->setWindowTitle("AMBB Application Parrainage");
    this->setWindowIcon(QIcon("biologo.svg"));

    //connect(m_nom, SIGNAL(textChanged(const QString &)), this, SLOT(nom(const QString &)));
    connect(demarrer,SIGNAL(clicked()),this, SLOT(Debut_QCM()));
}

void FenPrincipale::Debut_QCM()
{
    nom = m_nom->text();
//    std::cout << m_nom.text().toStdString();
    QMessageBox::critical(this,"erreur",nom );
}
