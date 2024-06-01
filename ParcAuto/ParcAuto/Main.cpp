#include "pch.h"
#include <iostream>
#include "ParcAuto.h"

Automobil citesteAutomobilDeLaConsola() {
    std::string marca;
    int anulFabricatiei;
    double pret;

    std::cout << "Introduceti marca masinii: ";
    std::cin >> marca;

    std::cout << "Introduceti anul fabricatiei: ";
    std::cin >> anulFabricatiei;

    std::cout << "Introduceti pretul: ";
    std::cin >> pret;

    return Automobil(marca, anulFabricatiei, pret);
}

int main() {
    ParcAuto parc;

    int optiune;
    do {
        std::cout << "\nMeniu:\n";
        std::cout << "1. Adauga masina\n";
        std::cout << "2. Afiseaza toate masinile din parc\n";
        std::cout << "3. Afiseaza masinile dupa anul fabricatiei\n";
        std::cout << "4. Afiseaza masinile dupa pret\n";
        std::cout << "0. Iesire\n";

        std::cout << "\nIntroduceti optiunea: ";
        std::cin >> optiune;

        switch (optiune) {
        case 1: {
            std::cout << "\nAdauga o noua masina:\n";
            parc.adaugaAutomobil(citesteAutomobilDeLaConsola());
            break;
        }
        case 2: {
            std::cout << "\nAutomobile in parc:\n";
            parc.afiseazaAutomobile();
            break;
        }
        case 3: {
            int an;
            std::cout << "\nIntroduceti anul fabricatiei: ";
            std::cin >> an;
            std::cout << "\nAutomobile fabricate in " << an << ":\n";
            parc.afiseazaAutomobileDupaAnulFabricatiei(an);
            break;
        }
        case 4: {
            double pretMaxim;
            std::cout << "\nIntroduceti pretul maxim: ";
            std::cin >> pretMaxim;
            std::cout << "\nAutomobile cu pret maxim " << pretMaxim << ":\n";
            parc.afiseazaAutomobileDupaPret(pretMaxim);
            break;
        }
        case 0: {
            std::cout << "\nIesire din program.\n";
            break;
        }
        default: {
            std::cout << "\nOptiune invalida. Va rugam selectati o optiune valida.\n";
            break;
        }
        }
    } while (optiune != 0);

    return 0;
}
