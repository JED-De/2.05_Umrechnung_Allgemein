#include <iostream>
using namespace std;
int auswahl;
double eingabe;
double ausgabe;

int main()
{
	cout << "Ihre Eingabe: ? ";
	cin >> eingabe;
	cout << endl
		<< "Ihre Auswahl der Umwandlung:" << endl
		<< " 1 - Celsius in Fahrenheit" << endl
		<< " 2 - Meter in Fuss" << endl
		<< " 3 - Euro in US Dollar " << endl;
	cin >> auswahl;
	ausgabe = ((eingabe * 1.8 + 32)*(2 - auswahl)*(3 - auswahl) / 2 
		+ (eingabe * 3.2808)*(1 - auswahl)*(3 - auswahl) / -1 
		+ (eingabe * 1.2957)*(1 - auswahl)*(2 - auswahl) / 2);
	cout << "Das Ergebnis lautet: " << ausgabe << endl << endl;
	system("PAUSE");
	return 0;
}