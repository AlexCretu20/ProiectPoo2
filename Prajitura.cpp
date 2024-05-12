#include "PrajiAbstracta.h"
#include "Prajitura.h"
#include <algorithm>
#include <string>

bool compLung(std::string &a, std::string &b)
{
    return(a.size()<b.size());
}
Prajitura::Prajitura(const std::string &denumire_, int pret_, int nringrediente_, const std::vector<std::string> &ingrediente_, int valabilitate_, const std::string &dataProductie_)
: PrajiAbsracta(denumire_, pret_, nringrediente_,ingrediente_), valabilitate{valabilitate_},dataProductie{dataProductie_}

{
    std::cout<<"Am creat o prajitura\n";

}

Prajitura::Prajitura(const Prajitura& other): PrajiAbsracta(other)
{
    valabilitate=other.valabilitate;
    dataProductie=other.dataProductie;
}

Prajitura& Prajitura::operator=(const Prajitura& other)
{
    if(this!=&other)
    {
        valabilitate=other.valabilitate;
        dataProductie=other.dataProductie;
    }
    return *this;
}

Prajitura::Prajitura(Prajitura&& other):valabilitate{other.valabilitate}, dataProductie{other.dataProductie}
{
    other.valabilitate=-1;
    other.dataProductie=" ";
}

Prajitura& Prajitura::operator=(Prajitura&& other)
{
    if(this!=&other)
    {
        valabilitate=other.valabilitate;
        dataProductie=other.dataProductie;
        other.valabilitate=-1;
        other.dataProductie=" ";
    }
    return *this;
}

// fct imi spune pt fiecare ingredient cat timp am nevoie ca sa-l omogenizez cu restul ingredientelor
// ex: 3, 3,4,5,6--> 6+10+15+21=51(timp_total va afisa 51)
//      \/
//       6+4->10, 5
//             \  /
//
int Prajitura::TimpPregatire(const std::vector<int> ingredient_timp) const
{
    int timp=0, timp_total=0;
    for (auto i:ingredient_timp)
    {
        timp=timp+i;
        if(timp!=i) timp_total=timp_total+timp;// cand e diferit de primul element,
        //dc nu am cu ce ingredient sa-l amestec pe primul
    };
    return timp_total;
}
// imi spune ordinea in care sa adauga ingredientele si apoi daca contine toate
// imgredientele necesare
void Prajitura::Pregatire(const std::vector<std::string>ingrediente_in_stoc, const std::vector<int> ingredient_timp ) const
{
    int k=0;
    for (auto i:ingrediente)
        for ( auto j:ingrediente_in_stoc)
            if(i==j) k++;
    if (k!=nringrediente) std::cout<<"Nu avem ingredientele necesare sa facem prajitura\n";
    else
    {
        //adaugam ingredientele in ordinea crescatoare a numarului de litere
        for (auto i:ingrediente)
            std::cout<<i<<",";
        std::cout<<"Acum adaungam ingredientele intr-un castron mare:";
        std::sort(ingrediente.begin(),ingrediente.end());
        for (auto i:ingrediente)
            std::cout<<i<<",";
        // adaugam si rezultatul de TimpPregatire
        std::cout<<std::endl;
        std::cout<<"Apoi amestecam foarte bine totul cu un tel\n";
        std::cout<<"Prajitura va fi gata in"<<TimpPregatire(ingredient_timp)<<"minute\n";
    }
}
// am modificat functia adaugand si un tva de 3%
int Prajitura:: GetProfit(const std::vector<int> ingredient_pret, PrajiAbsracta &p) const
{
    int cost=0, tva=3;
    for (auto i:ingredient_pret)
    {
        cost=cost+i;
    }
    if(p.GetPret()<cost+(tva*p.GetPret()/100)) std::cout<<"Aceasta prajitura nu ne aduce niciun profit";
    else return (p.GetPret()-cost-(tva*p.GetPret()/100));

}

void Prajitura:: Afisare( std::ostream &os, const PrajiAbsracta &Praji) const
{
    os<<"\nAcestea sunt informatiile despre prajitura cu codul de bare "<<CodBare<<std::endl;
}

//bool Prajitura::compLung(const std::string &a, const std::string &b) {
//    return a.size()<b.size();
//}




Prajitura:: ~Prajitura()
{
    std::cout<<"S-a distrus prajitura\n";
}

