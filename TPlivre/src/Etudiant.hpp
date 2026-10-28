
#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include "Universite.hpp"

class Etudiant {
private:
    std::string nom;
    int age;
    Universite* universite;

    static int nbEtudiants;

public:
    Etudiant(std::string nom, int age, Universite* universite);

    void afficher() const;

    static void afficherTotal();
};

#endif
