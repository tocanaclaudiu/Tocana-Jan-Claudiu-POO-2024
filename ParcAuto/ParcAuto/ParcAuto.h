#pragma once
#include <vector>
#include "Automobil.h"

class ParcAuto {
private:
    std::vector<Automobil> automobile;

public:
    void adaugaAutomobil(const Automobil& masina);
    void afiseazaAutomobile() const;
    void afiseazaAutomobileDupaAnulFabricatiei(int an) const;
    void afiseazaAutomobileDupaPret(double pretMaxim) const;
};
