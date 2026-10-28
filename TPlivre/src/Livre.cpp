#include "Livre.hpp"
#include <iostream>

int Livre::nbLivres = 0;

Livre::Livre(std::string titre, std::string auteur, int annee) {
	this->titre = titre;
	this->auteur = auteur;
	this->annee = annee;

	nbLivres++;
}

void Livre::afficher() const {
	std::cout << "Titre : " << titre << std::endl;
	std::cout << "Auteur : " << auteur << std::endl;
	std::cout << "Annee : " << annee << std::endl;
	std::cout << "-------------------" << std::endl;
}

void Livre::afficherTotal() {
	std::cout << "Nombre total de livres : " << nbLivres << std::endl;
}
