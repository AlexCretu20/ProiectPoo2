#ifndef UNTITLED9_VEGANPRAJI_H
#define UNTITLED9_VEGANPRAJI_H

#include <iostream>
#include <vector>
#include "PrajiAbstracta.h"
#include "Prajitura.h"
#include "Fruct.h"
#include "FructePraji.h"


class VeganPraji: public Prajitura
{
private:
    std::vector<std::string> ingreInt; //{"laptele","oua","unt","branza","smantana"};
public:
    VeganPraji(const std::string &denumire_=" ", int pret_=-1, int nringrediente_=-1, const std::vector<std::string> &ingrediente_=std::vector<std::string>(), int valabilitate_=-1, const std::string &dataProductie_=" ", const std::vector<std::string> &ingreInt_=std::vector<std::string>());
    int TimpPregatire(const std::vector<int> ingredient_timp) const override;
    void  Pregatire(const std::vector<std::string>ingrediente_in_stoc, const std::vector<int> ingredient_timp ) const override;
    void Afisare(std::ostream &os, const PrajiAbsracta &Praji) const override;
    ~VeganPraji() override;
};


#endif //UNTITLED9_VEGANPRAJI_H
