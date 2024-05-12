//
// Created by Alexandra on 10.05.2024.
//

#include "Fruct.h"
Fruct::Fruct(std::string nume_, std::string culoare_):nume{nume_},culoare{culoare_}
{
    std::cout<<"Am adaugat fructele in prajitura\n";
}
std::ostream &operator<<(std::ostream &oss, const Fruct &f)
{
    oss<<f.nume<<",";
    return oss;
}

void Fruct::AfisareNume(std::ostream &oss) const
{
    oss<<nume<<",";
}

Fruct::~Fruct()=default;