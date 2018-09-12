#include "fenqcm.h"
#include "json.hpp"
#include <iostream>
#include <fstream>
#include <string>

using json = nlohmann::json;
using namespace std;

static std::ifstream ifs("/home/coddy/Documents/AMBB/appli_parrainage/questions.json");
static json j = json::parse(ifs);
static json score;

FenQCM::FenQCM() : QDialog()
{
    // Initialisation du layout principale
    QVBoxLayout *layout_principal = new QVBoxLayout;
    QGridLayout *layout_bouton = new QGridLayout;

    // Initialisatiopn des Widgets
    string numero_question_str = std::to_string(numero_question);
    string question = j[numero_question_str]["question"];
    QString q_question = QString::fromStdString(question);
    QString q_rep1 = QString::fromStdString(j[numero_question_str]["1"]["text"]);
    QString q_rep2 = QString::fromStdString(j[numero_question_str]["2"]["text"]);
    QString q_rep3 = QString::fromStdString(j[numero_question_str]["3"]["text"]);
    QString q_rep4 = QString::fromStdString(j[numero_question_str]["4"]["text"]);

    QLabel * la_question = new QLabel(q_question);
    QPushButton *rep1 = new QPushButton(q_rep1);
    QPushButton *rep2 = new QPushButton(q_rep2);
    QPushButton *rep3 = new QPushButton(q_rep3);
    QPushButton *rep4 = new QPushButton(q_rep4);

    // Customisation des boutons :

    la_question->setFixedHeight(200);
    la_question->setAlignment(Qt::AlignCenter);

    rep1->setFixedSize(400,200);
    rep2->setFixedSize(400,200);
    rep3->setFixedSize(400,200);
    rep4->setFixedSize(400,200);


    // Remplissage du Layou principale
    layout_bouton->addWidget(rep1,0,0);
    layout_bouton->addWidget(rep2,0,1);
    layout_bouton->addWidget(rep3,1,0);
    layout_bouton->addWidget(rep4,1,1);

    // Dernières étape : ajout du Layout dans la fenêtre
    layout_principal->addWidget(la_question);
    layout_principal->addLayout(layout_bouton);
    this->setLayout(layout_principal);


    // Paramètres de la page
    //this->setFixedSize(500,250); // Changer les dimensions de la page
    this->setWindowTitle("AMBB QCM");

    connect(rep1, SIGNAL(clicked()),this,SLOT(actionReponse1()));
    connect(rep2, SIGNAL(clicked()),this,SLOT(actionReponse2()));
    connect(rep3, SIGNAL(clicked()),this,SLOT(actionReponse3()));
    connect(rep4, SIGNAL(clicked()),this,SLOT(actionReponse4()));
}

void FenQCM::actionReponse1(){
    answer =1 ;
    questionSuivante();

}

void FenQCM::actionReponse2(){
    answer =2 ;

}

void FenQCM::actionReponse3(){
    answer =3 ;

}

void FenQCM::actionReponse4(){
    answer =4 ;

}

void FenQCM::questionSuivante(){
    numero_question++;
    if(numero_question == j.size()){
        cout << "Fin" << endl;
    }

}


