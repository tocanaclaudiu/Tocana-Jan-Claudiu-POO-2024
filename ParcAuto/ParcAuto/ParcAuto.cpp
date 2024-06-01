#include "pch.h"
#include "ParcAuto.h"
#include <iostream>

void ParcAuto::adaugaAutomobil(const Automobil& masina) {
    automobile.push_back(masina);
}

void ParcAuto::afiseazaAutomobile() const {
    for (const auto& masina : automobile) {
        masina.afisareInformatii();
        std::cout << std::endl;
    }
}

void ParcAuto::afiseazaAutomobileDupaAnulFabricatiei(int an) const {
    for (const auto& masina : automobile) {
        if (masina.getAnulFabricatiei() == an) {
            masina.afisareInformatii();
            std::cout << std::endl;
        }
    }
}

void ParcAuto::afiseazaAutomobileDupaPret(double pretMaxim) const {
    for (const auto& masina : automobile) {
        if (masina.getPret() <= pretMaxim) {
            masina.afisareInformatii();
            std::cout << std::endl;
        }
    }
}
