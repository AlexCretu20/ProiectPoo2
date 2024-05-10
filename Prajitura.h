#ifndef UNTITLED9_PRAJITURA_H
#define UNTITLED9_PRAJITURA_H

#include <iostream>
#include <vector>
#include "cmake-build-debug/PrajiAbstracta.h"


class Prajitura: public PrajiAbsracta{
private:
    int valabilitate;
    std::string dataProductie;
public:
    Prajitura(const std::string &denumire_=" ", int pret_=-1, int nringrediente_=-1, const std::vector<std::string> &ingrediente_=std::vector<std::string>(), int valabilitate_=-1, const std::string &dataProductie_=" " );
    Prajitura(const Prajitura& other);
    //opetaror de atribuire prin copiere
    Prajitura& operator=(const Prajitura& other);
    //constructor de mutare
    Prajitura(Prajitura&& other);
    //operetor de atribuire prin mutare
    Prajitura& operator=(Prajitura&& other);
    int TimpPregatire(const std::vector<int> ingredient_timp) const override;
    void  Pregatire(const std::vector<std::string>ingrediente_in_stoc, const std::vector<int> ingredient_timp ) const override;
    int GetProfit(const std::vector<int> ingredient_pret, PrajiAbsracta &p) const override;
    void Afisare( std::ostream &os, const PrajiAbsracta &Praji) const override;
    ~Prajitura() override;
private:
    static bool compLung(const std::string &a, const std:: string &b)
    {
        return(a.size()<b.size());
    }


};





#endif //UNTITLED9_PRAJITURA_H
