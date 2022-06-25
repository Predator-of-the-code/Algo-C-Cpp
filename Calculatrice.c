#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choixOperation(0);
    double a(0), b(0);
    double resultat(0);
    cout << "Quelle opération veux-tu faire ?\n 1- Addition\n 2- Soustraction\n 3- Multiplication\n 4- Division\n 5- Fonction puissance\n 6- Racine carrée\n" << endl << "Ton choix ? ";
    cin >> choixOperation;

    if (choixOperation >= 1 && choixOperation <= 6)
    {
        cout << "Donnez une valeur pour a = ";
        cin >> a;

        if (choixOperation >= 1 && choixOperation <= 5)
        {
            cout << "Donnez une valeur pour b = ";
            cin >> b;
            if (choixOperation == 1)
            {
                resultat = a + b;
                cout << "Le resultat de l'addition de " << a << " et de " << b << " est egal a " << resultat << "." << endl;
            }
            if (choixOperation == 2)
            {
                resultat = a - b;
                cout << "Le resultat de la soustraction de " << a << " et de " << b << " est egal a " << resultat << "." << endl;
            }
            if (choixOperation == 3)
            {
                resultat = a * b;
                cout << "Le resultat de la multiplication de " << a << " et de " << b << " est egal a " << resultat << "." << endl;
            }
            if (choixOperation == 4)
            {
                resultat = a / b;
                cout << "Le resultat de la division de " << a << " et de " << b << " est egal a " << resultat << "." << endl;
            }
            if (choixOperation == 5)
            {
                resultat = pow(a, b);
                cout << "Le resultat de la fonction puissance de " << a << " et de " << b << " est egal a " << resultat << "." << endl;
            }
        }
        if (choixOperation > 5)
        {
            if (choixOperation == 6)
            {
                resultat = sqrt(a);
                cout << "Le resultat de la racine carrée de " << a << " est egal a " << resultat << "." << endl;
            }
        }
    }
    else
    {
        cout << "Cette operation n'existe pas encore. A bientot !" << endl;
    }
    return 0;
}
