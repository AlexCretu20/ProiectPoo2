#ifndef UNTITLED9_FRUCTEPRAJI_H
#define UNTITLED9_FRUCTEPRAJI_H

#include <iostream>
#include <vector>

#include "PrajiAbstracta.h"
#include "Prajitura.h"
#include "Fruct.h"

// facem o clasa in care sa ne folosim de pointeri
// este un tip de prajitura care pe langa ingredietele de baza contine si fructe
class FructePraji:public Prajitura, public Fruct{
private:
    static int stoc;
    Fruct *fructe;
    int nrFructe; // pointer
public:
    FructePraji(const std::string &denumire_=" ", int pret_=-1, int nringrediente_=-1, const std::vector<std::string> &ingrediente_=std::vector<std::string>(), int valabilitate_=-1, const std::string &dataProductie_=" ", int nrFructe_=-1,Fruct *fructe_= nullptr);
    int TimpPregatire(const std::vector<int> ingredient_timp) const override;
    void  Pregatire(const std::vector<std::string>ingrediente_in_stoc, const std::vector<int> ingredient_timp ) const override;
    static int GetStoc();
    static void AddStoc();
    int GetNrFructe();
    void Afisare(std::ostream &os, const PrajiAbsracta &Praji) const override;
    ~FructePraji();
};


#endif //UNTITLED9_FRUCTEPRAJI_H
