#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE


class Etudiant
{
    public: // Les Prototypes

    Etudiant(); // appel du constructeur
    void afficherPoints() const;
    int return_points() const;
    ~Etudiant();

    private: // Les atributs

    int m_points;

};

#endif