#pragma once
#include <string>

class Automobil {
private:
    std::string marca;
    int anulFabricatiei;
    double pret;

public:
    Automobil(const std::string& marca, int anulFabricatiei, double pret);
    void afisareInformatii() const;
    int getAnulFabricatiei() const;
    double getPret() const;
};
