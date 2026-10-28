
#include "Etudiant.hpp"
#include <iostream>

int Etudiant::nbEtudiants = 0;

Etudiant::Etudiant(std::string nom, int age, Universite* universite) {
    this->nom = nom;
    this->age = age;
    this->universite = universite;

    nbEtudiants++;
}

void Etudiant::afficher() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Age : " << age << std::endl;

    std::cout << "Universite : ";
    if (universite != nullptr) {
        universite->afficherNom();
    } else {
        std::cout << "Aucune universite" << std::endl;
    }

    std::cout << "-------------------" << std::endl;
}

void Etudiant::afficherTotal() {
    std::cout << "Nombre total d'etudiants : " << nbEtudiants << std::endl;
}
