
#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP

#include <string>

class Universite {
private:
    std::string nom;

public:
    Universite(std::string nom);

    void afficherNom() const;
};

#endif
