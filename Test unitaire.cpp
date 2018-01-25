//********************************************************
// Auteur : MP Pinaud
// date : 26/9/2017
// fichier: test_CRobotPekee.cpp
// Programme de test unitaire de la classe CRobotPekee
//********************************************************
#include <iostream>
#include «WRobotPekee.h»
using namespace std;

void main ()
{
	cout << "Tests unitaires de la classe CRobotPekee"<< endl;
	cout << "****************************************" << endl<< endl;

	// Créer un robot et le connecter
	CRobotPekee Robot("Pekee", "localhost")
	int angle;
	int rep;
	int distance;
	do
	{

	// Hello

		cout << "Quelle methode voulez-vous tester ?	 " << endl;
		cout << "1 -  Avancer le Robot					 " << endl;
		cout << "2 -  Reculer le robot				     " << endl;
		cout << "3 -  Tourner à gauche				     " << endl;
		cout << "4 -  Tourner à droite					 " << endl;
		cout << "5 -  Faire clignoter le robot           " << endl;
		cout << "6 -  Avancer sur une distance           " << endl;
		cout << "7 -  Reculer sur une distance           " << endl;
		cout << "8 -  Tourner à gauche sur un angle x	 " << endl;
		cout << "9 -  Tourner à droite sur un angle y	 " << endl;

		cout << "0 - Sortie du test de la classe CRobotPekee" <<endl;

		cin >> rep;

		switch (rep)
		{
			case 1 :	{
						
				Robot.avancer();
							break;
						}

			case 2 :	{
				Robot.reculer();
							break;
						}

			case 3 :	{
				Robot.tourneG();
							break;
						}

			case 4 :	{
				Robot.tournerD();
						}
							break;

			case 5 :	{
				Robot.clignoter();
						}

							break;

			case 6 :	{
				cout <<  "Entrer une distance "<<endl;
				cin >> distance ;
				Robot.avancer(distance);
						}
							break;
			case 7 :	{
				cout << " Entrer une distance "<<endl;
				cin >> distance ;
				Robot.reculer(distance);
						}
							break;
			case 8 :	{
				cout << " Entrer un angle de rotation : "<<endl;
				cin >> angle ;
				Robot.tournerG(distance,vitesseT);
						}
							break;
			case 9 :	{
				cout << " Entrer un angle de rotation : "<<endl;
				cin >> angle ;
				Robot.tournerD(distance,vitesseT);
						}
							break;
						}

			default :
						break;
		}
		cout <<endl << endl;
	} while (rep != 0);
}


