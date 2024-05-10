//
// Created by Alexandra on 10.05.2024.
//

#include "Fruct.h"
Fruct::Fruct(std::string nume_, std::string culoare_):nume{nume_},culoare{culoare_}
{
    std::cout<<"Am adaugat fructele in prajitura\n";
}
std::ostream &operator<<(std::ostream &os, const Fruct &f)
{
    os<<"Nume "<<f.nume<<",";
    f.AfisareNume(os);
    return os;
}

void Fruct::AfisareNume(std::ostream &os) const
{
    os<<nume<<",";
}
