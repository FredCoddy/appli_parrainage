#ifndef FENQCM_H
#define FENQCM_H

//#include <QtGui>
#include <QBoxLayout>
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QMessageBox>
#include <QLabel>
#include <string>
#include "json.hpp"
using namespace std;
using json = nlohmann::json;
using namespace std;

class FenQCM : public QDialog{
    Q_OBJECT

  public :
    FenQCM();
    void questionSuivante();
    void calculScore();
    void categoryCreator();
    json score;

  public slots:
    void actionReponse1();
    void actionReponse2();
    void actionReponse3();
    void actionReponse4();

  private:
    QLabel *la_question, *rep1lbl, *rep2lbl, *rep3lbl, *rep4lbl, *label_num_question;
    QGridLayout * layout_bouton;
    QVBoxLayout * layout_principal ;
    QPushButton *rep1, *rep2, *rep3, *rep4;
    int *value,answer, numero_question=1;
};

#endif // FENQCP_H
