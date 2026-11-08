
#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    // Constructeur
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    // Surcharge de l'operateur ==
    bool operator==(const Date& d) const {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    // Surcharge de l'operateur !=
    bool operator!=(const Date& d) const {
        return !(*this == d);
    }

    // Methode d'affichage
    void afficher() const {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

int main() {

    // Creation de deux dates
    Date d1(15, 6, 2026);
    Date d2(15, 6, 2026);

    cout << "Date 1 : ";
    d1.afficher();

    cout << "Date 2 : ";
    d2.afficher();

    // Comparaison avec ==
    if (d1 == d2) {
        cout << "Les deux dates sont identiques." << endl;
    }
    else {
        cout << "Les deux dates sont differentes." << endl;
    }

    // Comparaison avec !=
    if (d1 != d2) {
        cout << "Les deux dates sont differentes." << endl;
    }
    else {
        cout << "Les deux dates sont identiques." << endl;
    }

    return 0;
}
