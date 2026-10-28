#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>

class Livre {
private:
	std::string titre;
	std::string auteur;
	int annee;

	static int nbLivres;

public:
	Livre(std::string titre, std::string auteur, int annee);

	void afficher() const;

	static void afficherTotal();
};

#endif
