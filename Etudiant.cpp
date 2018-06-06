#include "Etudiant.h"
#include <iostream>

using namespace std;

void Etudiant::afficherPoints() const
{

    cout << "hello world";
    // cout << "le nombre de points est de : " << endl;

}

Etudiant::Etudiant() // Constructeur
{
    m_points=1000;
}

// int return_points() const 
// {
//     return m_points;
// }

Etudiant::~Etudiant()
{

}