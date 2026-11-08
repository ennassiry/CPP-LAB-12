
#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:
    // Constructeur
    Produit(string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }

    // Surcharge de l'operateur << comme fonction amie
    friend ostream& operator<<(ostream& os, const Produit& p);
};

// Definition de la fonction amie
ostream& operator<<(ostream& os, const Produit& p) {
    os << "Nom : " << p.nom << endl;
    os << "Prix : " << p.prix << " DH" << endl;
    os << "Quantite : " << p.quantite << endl;

    return os;
}

int main() {
    // Creation d'un objet Produit
    Produit p1("Ordinateur", 7500, 3);

    // Affichage direct avec cout
    cout << p1;

    return 0;
}
