#include "PrajiAbstracta.h"

PrajiAbsracta::PrajiAbsracta(const std::string &denumire_, int pret_,int nringrediente_, std::vector<std::string> ingrediente_)
        :denumire{denumire_}, pret{pret_}, nringrediente{nringrediente_}, ingrediente{ingrediente_}, CodBare{CodBareGenerator++}
{
    std::cout<<"Am creat o prajitura abstracta \n";
}
int PrajiAbsracta::CodBareGenerator=1;

int PrajiAbsracta::GetPret()
{
    return pret;
}


int PrajiAbsracta::GetProfit(const std::vector<int> ingredient_pret, PrajiAbsracta &p) const
{
    int cost=0;
    for (auto i:ingredient_pret)
    {
        cost=cost+i;
    }
    if(p.GetPret()<cost) std::cout<<"Aceasta prajitura nu ne aduce niciun profit";
    else return (p.GetPret()-cost);
}
void PrajiAbsracta:: ContineCod(const int cod)
{
    int cifre=1, copie=cod, ok=0, cp=0;
    cp=CodBare;
    while(copie!=0)
    {
        cifre=cifre*10;
        copie=copie/10;
    }
    while( cp>=cod)
    {
        if( cp%cifre==cod)
        {
            ok=1;
            break;
        }
        cp=CodBare/10;
    }
    if (ok==1) std::cout<<"Da\n";
    else std::cout<<"Nu\n";

}
//Operator de afișare definit în clasa abstractă care apelează o funcție virtuală
//de afișare, a obiectului derivat
std::ostream &operator<<(std::ostream &os,const PrajiAbsracta &Praji )
{
    Praji.Afisare(os,Praji);
    os<<"Denumire "<<Praji.denumire<<"\tPret "<<Praji.pret<<"\n"<<"Numar ingrediente "<<Praji.nringrediente<<" ";
    for (auto i:Praji.ingrediente)
    {
        os<<i<<",";
    }
    return os;
}

PrajiAbsracta::~PrajiAbsracta()=default;


