
#include "Universite.hpp"
#include <iostream>

Universite::Universite(std::string nom) {
    this->nom = nom;
}

void Universite::afficherNom() const {
    std::cout << nom << std::endl;
}
