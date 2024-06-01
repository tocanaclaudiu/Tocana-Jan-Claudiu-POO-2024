#include "pch.h"
#include <iostream>
#include "ParcAuto.h"

int main() {
    ParcAuto parc;

    parc.adaugaAutomobil(Automobil("Toyota", 2018, 25000.0));
    parc.adaugaAutomobil(Automobil("Ford", 2017, 22000.0));
    parc.adaugaAutomobil(Automobil("BMW", 2020, 40000.0));

    std::cout << "Automobile in parc:\n";
    parc.afiseazaAutomobile();

    std::cout << "\nAutomobile fabricate in 2018:\n";
    parc.afiseazaAutomobileDupaAnulFabricatiei(2018);

    std::cout << "\nAutomobile cu pret maxim 25000:\n";
    parc.afiseazaAutomobileDupaPret(25000.0);

    return 0;
}
