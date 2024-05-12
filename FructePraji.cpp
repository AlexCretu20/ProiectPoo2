#include "FructePraji.h"
int FructePraji::stoc=5;

int FructePraji::GetNrFructe()
{
    return nrFructe;
}

FructePraji::FructePraji(const std::string &denumire_, int pret_, int nringrediente_, const std::vector<std::string> &ingrediente_, int valabilitate_, const std::string &dataProductie_, int nrFructe_,Fruct *fructe_)
        : Prajitura(denumire_,pret_,nringrediente_,ingrediente_,valabilitate_,dataProductie_), nrFructe{nrFructe_}
{
    if(nrFructe==0) fructe= nullptr;
    else{
        fructe=new Fruct[nrFructe];
        for (int i=0; i<nrFructe; i++)
            {
                fructe[i]=fructe_[i];
            }
    }

}
//modificam functia adaugand 5 minute in plus pt fiecare fruct
int FructePraji::TimpPregatire(const std::vector<int> ingredient_timp) const
{
    int timp=0, timp_total=0;
    for (auto i:ingredient_timp)
    {
        timp=timp+i;
        if(timp!=i) timp_total=timp_total+timp;// cand e diferit de primul element,
        //dc nu am cu ce ingredient sa-l amestec pe primul
    }
    timp_total=timp_total+5*nrFructe;
    return timp_total;
}

void FructePraji::Pregatire(const std::vector<std::string>ingrediente_in_stoc, const std::vector<int> ingredient_timp ) const
{
    int k=0;
    for (auto i:ingrediente)
        for ( auto j:ingrediente_in_stoc)
            if(i==j) k++;
    if (k!=nringrediente) std::cout<<"Nu avem ingredientele necesare sa facem prajitura";
    else
    {
        //adaugam ingredientele in ordinea crescatoare a numarului de litere
        std::cout<<"Acum adaungam ingredientele intr-un castron mare:";
        //std::sort(ingrediente.begin(),ingrediente.end(), compLung2);
        for (auto i:ingrediente)
            std::cout<<i<<",";
        // adaugam si rezultatul de TimpPregatire
        std::cout<<std::endl;
        std::cout<<"Apoi amestecam foarte bine totul cu un tel\n";
        if(nrFructe!=0)
        {
            std::cout<<"Acum adaugam fructele ";

//            for (int i=0; i<nrFructe; i++)
//            {
//                Fruct* f=&fructe[i];
//                std::cout<<*f;
//            }
            for(int i=0; i<nrFructe;i++)
            {
                //Fruct& f=fructe[i];
                std::cout<<fructe[i];
            }


        }
        std::cout<<"\nPrajitura va fi gata in "<<TimpPregatire(ingredient_timp)<<" minute\n";
    }

}

int FructePraji::GetStoc()
{
    return stoc;
}

void FructePraji::AddStoc()
{
    stoc++;
}

void FructePraji::Afisare(std::ostream &os, const PrajiAbsracta &Praji) const
{
    std::cout<<"Afisam o prajitura care contne fructe si are un stoc de " << stoc<<" si codul de bare "<<CodBare<<"\n";

}

FructePraji::~FructePraji()
{
    std::cout<<"S-a distrus o prajitura cu fructe\n";
    for (int i=0;i<nrFructe;i++)
    {
        delete[] fructe;
    }

}
