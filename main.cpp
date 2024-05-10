#include <iostream>
#include <vector>

#include <iostream>
#include <vector>
#include "cmake-build-debug/PrajiAbstracta.h"
#include "Prajitura.h"
#include "Fruct.h"
#include "FructePraji.h"
#include "VeganPraji.h"
#include "exceptie1.h"
#include "exceptie2.h"

int main()
{
    std::vector<PrajiAbsracta*> p;
    std::vector<std::string> ingre_vec={"faina","oua","lapte"};
    //p.push_back(new Prajitura("tort",30,3,ingre_vec,4,"10.04"));
    std::vector<std::string> ingre_vec2={"faina","zahar","lapte","cacao"};
    //p.push_back(new Prajitura("tort2",35,4,ingre_vec2,6,"12.04"));
    Fruct capsuna("capsuna","rosie");
    Fruct banana("banana","galbena");
    Fruct mar("mar","rosie");
    std::vector<Fruct> fr={capsuna,banana,mar};
    //p.push_back(new FructePraji("Tort cu fructe", 40,3,ingre_vec,6,"13.05",fr.size(),fr.data()));
    std::vector<std::string> ingrInterzise={"laptele","oua","unt","branza","smantana"};
    p.push_back(new VeganPraji("Tort cu fructe", 40,3,ingre_vec,6,"13.05",ingrInterzise));


    for(auto i:p)
    {
        std::cout<<*i<<std::endl;
        std::vector<int> ingre_timp={3,4,5};
        int timp=i->TimpPregatire(ingre_timp);
        std::cout<<"Timpul de pregatire "<<timp<<std::endl;
        std::vector<std::string> ingre_stoc={"faina","oua","lapte","miere"};
        i->Pregatire(ingre_stoc,ingre_timp);
//        std::vector<int> ingre_pret={3,4,5};
//        int profit=i->GetProfit(ingre_pret,*i);
//        std::cout<<"Profitul este:"<<profit<<std::endl;
//        std::cout<<"Stocul initial este: "<<FructePraji::GetStoc()<<"\n";
//        FructePraji::AddStoc();
//        std::cout<<"Stocul actualizat este: "<<FructePraji::GetStoc()<<"\n";
        std::cout<<"---------------------------------------------\n";
    }

    return 0;
}
