#include <iostream>
#include <vector>

#include <iostream>
#include <vector>
#include "PrajiAbstracta.h"
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
    p.push_back(new Prajitura("tort",30,ingre_vec.size(),ingre_vec,4,"10.04"));
    std::vector<std::string> ingre_vec2={"faina","zahar","lapte","cacao"};
    p.push_back(new Prajitura("tort2",35,ingre_vec2.size(),ingre_vec2,6,"12.04"));
    Fruct capsuna("capsuna","rosie");
    Fruct banana("banana","galbena");
    Fruct mar("mar","rosie");
    std::vector<Fruct> fr={capsuna,banana,mar};
    p.push_back(new FructePraji("Tort cu fructe", 40,3,ingre_vec,6,"13.05",fr.size(),fr.data()));
    std::vector<std::string> ingrInterzise={"laptele","oua","unt","branza","smantana"};
    p.push_back(new VeganPraji("Tort cu fructe", 40,3,ingre_vec,6,"13.05",ingrInterzise));
    std::vector<int> ingre_timp={3,4,5};
    std::vector<std::string> ingre_stoc={"faina","oua","lapte","miere"};
    std::vector<int> ingre_pret={3,4,5};

    for(auto i:p)
    {
        std::cout<<*i<<std::endl;
        int timp=i->TimpPregatire(ingre_timp);
        std::cout<<"Timpul de pregatire "<<timp<<std::endl;
        i->Pregatire(ingre_stoc,ingre_timp);
        int profit=i->GetProfit(ingre_pret,*i);
        std::cout<<"Profitul este:"<<profit<<std::endl;
        std::cout<<"Stocul initial este: "<<FructePraji::GetStoc()<<"\n";
        FructePraji::AddStoc();
        std::cout<<"Stocul actualizat este: "<<FructePraji::GetStoc()<<"\n";
        std::cout<<"---------------------------------------------\n";
    }
    for (auto i:p)
    {
        delete i;
    }

    //Utilizarea corectă a claselor polimorfice, de ilustrat în main() pe o colecție
    //de obiecte de tip Baza cu dynamic_cast, să se apeleze toate metodele
    //obiectului de tip derivată.
    //+ folosim si exceptii
//    for(PrajiAbsracta *pr:p)
//    {
//        try {
//            if (auto *prajitura_pr = dynamic_cast<Prajitura *>(pr))
//            {
//                //transmitere prin pointer
//                std::cout << *prajitura_pr << "\n";
//                int timp = prajitura_pr->TimpPregatire(ingre_timp);
//                prajitura_pr->Pregatire(ingre_stoc, ingre_timp);
//                int profit = prajitura_pr->GetProfit(ingre_pret, *pr);
//                std::cout << "Profitul este:" << profit << std::endl;
//                std::cout << "---------------------------------------------\n";
//            }else if(auto *fructepraji_pr = dynamic_cast<FructePraji*>(pr))
//            {
//                //std::cout << *fructepraji_pr << "\n";
//                int timp = fructepraji_pr ->TimpPregatire(ingre_timp);
//                fructepraji_pr ->Pregatire(ingre_stoc, ingre_timp);
//                int profit = fructepraji_pr ->GetProfit(ingre_pret, *pr);
//                std::cout << "Profitul este:" << profit << std::endl;
//                std::cout << "Stocul initial este: " << FructePraji::GetStoc() << "\n";
//                FructePraji::AddStoc();
//                std::cout << "Stocul actualizat este: " << FructePraji::GetStoc() << "\n";
//                std::cout << "---------------------------------------------\n";
//            } else if(auto *veganpraji_pr = dynamic_cast<VeganPraji*>(pr))
//            {
//                std::cout << *veganpraji_pr << "\n";
//                int timp = veganpraji_pr->TimpPregatire(ingre_timp);
//                veganpraji_pr->Pregatire(ingre_stoc, ingre_timp);
//                int profit = veganpraji_pr->GetProfit(ingre_pret, *pr);
//                std::cout << "Profitul este:" << profit << std::endl;
//                std::cout << "---------------------------------------------\n";
//            } else {
//                throw Exceptie1("A aparut o eraore la dynamic_cast\n");
//            }
//        } catch(const Exceptie1& err){
//            std::cout<<"Eroare la dynamic_cast"<<err.what()<<std::endl;
//            }
//        }
//    for(PrajiAbsracta *pr:p)
//    {
//        delete pr;
//    }
    return 0;
}
