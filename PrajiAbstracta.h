#ifndef UNTITLED9_PRAJIABSTRACTA_H
#define UNTITLED9_PRAJIABSTRACTA_H

#include <iostream>
#include <vector>


class PrajiAbsracta{
private:
    static int CodBareGenerator; // variabila statica
protected:
    std::string denumire;
    int pret;
    int nringrediente;
    std::vector<std::string> ingrediente;
    const int CodBare; //variabila constanta
public:
    int GetPret();
    virtual int TimpPregatire(const std::vector<int> ingredient_timp) const=0;
    virtual void  Pregatire(const std::vector<std::string>ingrediente_in_stoc, const std::vector<int> ingredient_timp ) const=0;
    // fct virtuala care este scrisa in clasa abstracta dar nu si implementata in alte clase
    virtual int GetProfit(const std::vector<int> ingredient_pret, PrajiAbsracta &p) const;
    // fct non-virtuale care este definita in clasa abstracta
    void ContineCod(const int Cod);
    friend std::ostream &operator<<(std::ostream &os, const PrajiAbsracta &Praji);
    virtual ~PrajiAbsracta();
protected:
    PrajiAbsracta(const std::string &denumire_=" ", int pret_=-1,int nringrediente_=-1, std::vector<std::string> ingrediente_=std::vector<std::string>());
    virtual void Afisare( std::ostream &os, const PrajiAbsracta &Praji) const=0;
};

#endif //UNTITLED9_PRAJIABSTRACTA_H
