//********************************************************
// Auteur : MP Pinaud
// date : 15/05/20017
// fichier: test_date.cpp
// Programme de test de la classe CDate
//********************************************************
#include <iostream>
using namespace std;
#include "Date.h"


void test_constructeur();
void test_egal();


void main ()
{

	int rep;
	do
	{
		cout << "Test de la classe CDate" << endl;
		cout << "**************************" << endl<< endl;

		cout << "Quelle methode voulez-vous tester ?" << endl;
		cout << "1 - Constructeur " << endl;
		cout << "2 - Comparaison ==" << endl;

		cout << "0 - Sortie du test de la classe CDate" <<endl;

		cin >> rep;

		switch (rep)
		{

			case 1 :	test_constructeur();
						break;
			case 2 :	test_egal();
						break;

			case 0 :	{
					cout << "Fin du test de la classe CDate" <<endl;
					cout << "*********************************" << endl;
							break;
						}
			default :	cout << "Erreur de saisie" <<endl;
						break;
		}
		cout <<endl << endl;
	} while (rep != 0);
}


//**************************************************************
// Fonction:test_constructeur
// Rôle :	teste le constructeur et affiche la date  à l'aide des méthodes d'accès
//***************************************************************

void test_constructeur()
{
	int j, m, a;
	cout << "Test du constructeur de la classe CDate:" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Saisir la date utilisee pour tester" << endl;
	cout << "jour :";
	cin >>j;
	cout << "mois :";
	cin >>m;
	cout << "annee :";
	cin >>a;

	// Création de la date
	// A COMPLETER


	// Affichage de la date sous la forme jour/mois/annee
	cout << "Affichage de la date:" << endl << endl;
	// A COMPLETER
}


//**************************************************************
// Fonction:test_egal
// Rôle :	teste la comparaison == de la classe CDate
//***************************************************************

void test_egal()
{

}


