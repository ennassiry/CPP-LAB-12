
#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;

public:
    // Constructeur
    Tableau(int n) {
        taille = n;
        data = new int[taille];

        // Initialisation des elements
        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    // Surcharge de l'operateur []
    int& operator[](int indice) {

        // Verification des bornes
        if (indice < 0 || indice >= taille) {
            throw out_of_range("Indice invalide !");
        }

        return data[indice];
    }

    // Destructeur
    ~Tableau() {
        delete[] data;
    }

    // Affichage du tableau
    void afficher() const {
        for (int i = 0; i < taille; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    try {
        // Creation d'un tableau de 5 entiers
        Tableau t(5);

        // Remplissage du tableau
        for (int i = 0; i < 5; i++) {
            cout << "Donner la valeur de t[" << i << "] : ";
            cin >> t[i];
        }

        // Affichage
        cout << "\nContenu du tableau : ";
        t.afficher();

        // Acces a un element
        cout << "\nElement t[2] = " << t[2] << endl;

        // Test d'un indice invalide
        cout << "\nTest d'un indice invalide : ";
        cout << t[10] << endl;
    }

    catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
