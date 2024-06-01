#include "pch.h"
#include "Automobil.h"
#include <iostream>

Automobil::Automobil(const std::string& marca, int anulFabricatiei, double pret)
    : marca(marca), anulFabricatiei(anulFabricatiei), pret(pret) {}

void Automobil::afisareInformatii() const {
    std::cout << "Marca: " << marca << ", Anul fabricatiei: " << anulFabricatiei << ", Pret: " << pret;
}

int Automobil::getAnulFabricatiei() const {
    return anulFabricatiei;
}

double Automobil::getPret() const {
    return pret;
}
