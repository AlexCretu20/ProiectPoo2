#include "VeganPraji.h"
VeganPraji::VeganPraji(const std::string &denumire_, int pret_, int nringrediente_, const std::vector<std::string> &ingrediente_, int valabilitate_, const std::string &dataProductie_, const std::vector<std::string> &ingreInt_)
        :Prajitura(denumire_,pret_,nringrediente_,ingrediente_, valabilitate_, dataProductie_),  ingreInt{ingreInt_}
{
    std::cout<<"Am creat o prajitura vegana\n";
}

//adaugam in plus un timp pe care il petrece in cuptor de 30 minute
int VeganPraji::TimpPregatire(const std::vector<int> ingredient_timp) const
{
    int timp=0, timp_total=0, timp_cuptor=30;
    for (auto i:ingredient_timp)
    {
        timp=timp+i;
        if(timp!=i) timp_total=timp_total+timp;// cand e diferit de primul element,
        //dc nu am cu ce ingredient sa-l amestec pe primul
    };
    timp_total=timp_total+timp_cuptor;
    return timp_total;
}

//Am verificat daca este si o prajitura vegana
void  VeganPraji::Pregatire(const std::vector<std::string>ingrediente_in_stoc, const std::vector<int> ingredient_timp ) const
{
    int k=0,ok=0;
    for (auto i:ingrediente)
        for ( auto j:ingrediente_in_stoc)
            if(i==j) k++;
    for (auto i:ingreInt)
        for (auto j:ingrediente)
            if(i==j) ok=0;
    if (k!=nringrediente) std::cout<<"Nu avem ingredientele necesare sa facem prajitura\n";
    else if(ok==0) std::cout<<"Nu este prajitura vegana\n";
    else{
        //adaugam ingredientele in ordinea crescatoare a numarului de litere
        std::cout << "Acum adaungam ingredientele intr-un castron mare:";
        //std::sort(ingrediente.begin(),ingrediente.end(), compLung);
        for (auto i: ingrediente)
            std::cout << i << ",";
        // adaugam si rezultatul de TimpPregatire
        std::cout << std::endl;
        std::cout << "Apoi amestecam foarte bine totul cu un tel\n";
        std::cout << "Prajitura va fi gata in" << TimpPregatire(ingredient_timp) << "minute\n";
    }

}

void VeganPraji::Afisare(std::ostream &os, const PrajiAbsracta &Praji) const
{
    std::cout<<"Afisam detaliile despre prajitura vegana cu codul de bare"<<CodBare<<"\n";
}

VeganPraji::~VeganPraji()
{
    std::cout<<"S-a distrus o prajitura vegana\n";
}

