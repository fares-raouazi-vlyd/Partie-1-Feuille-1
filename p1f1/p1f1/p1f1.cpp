#include <iostream>

int main()
{
	return 0;
}
void AirPerimetre()
{
	std::cout << "Quelle est la longueur du terrain ? " << std::endl;
	float longueur;
	std::cin >> longueur;
	std::cout << "Quelle est la largeur du terrain ? " << std::endl;
	float largeur;
	std::cin >> largeur;
	std::cout << "Surface : " << longueur * largeur << " m2, perimetre : " << (longueur + largeur) * 2 << " m" << std::endl;
}
void EurosCentimes()
{
	std::cout << "Quel est le prix en euros ? " << std::endl;
	float prix;
	std::cin >> prix;
	int prixInt = (int)prix;
	std::cout << "Montant total : " << prixInt << " euros et " << (prix - prixInt) * 100 << " centimes." << std::endl;
}
void PartagePizza()
{
	std::cout << "Combien de pizzas ont ete commandees ?" << std::endl;
	int pizza;
	std::cin >> pizza;
	std::cout << "Combien d'amis sont presents ?" << std::endl;
	int ami;
	std::cin >> ami;
	int part = (pizza * 8) / ami;
	std::cout << part << " parts par personne, il reste " << pizza * 8 - part * ami << " parts en plus." << std::endl;
}
void TempsDeJeu()
{
	std::cout << "Combien de secondes de jeu au total ?" << std::endl;
	int sec;
	std::cin >> sec;
	int hour = sec / 3600;
	sec = sec - 3600 * hour;
	int min = sec / 60;
	sec = sec - 60 * min;
	std::cout << hour << "h " << min << "min " << sec << "s." << std::endl;
}
void AsciiVoisin()
{
	std::cout << "Saisir un caractere : " << std::endl;
	char cara;
	std::cin >> cara;
	int ascii = (int) cara;
	char avant = ascii - 1;
	char apres = ascii + 1;
	std::cout << "Code ASCII de " << cara << " : " << ascii << ". Avant : " << avant << ", Apres : " << apres << "." << std::endl;
}