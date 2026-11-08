
#include <iostream>
using namespace std;

class Vecteur2D {
private:
    double x;
    double y;

public:
    // Constructeur
    Vecteur2D(double a, double b) {
        x = a;
        y = b;
    }

    // Surcharge de l'operateur +
    Vecteur2D operator+(const Vecteur2D& v) const {
        return Vecteur2D(x + v.x, y + v.y);
    }

    // Methode d'affichage
    void afficher() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {

    // Creation de deux vecteurs
    Vecteur2D v1(3, 4);
    Vecteur2D v2(2, 5);

    // Addition des deux vecteurs
    Vecteur2D v3 = v1 + v2;

    // Affichage
    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    cout << "Resultat de l'addition : ";
    v3.afficher();

    return 0;
}
