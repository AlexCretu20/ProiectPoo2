#ifndef UNTITLED9_FRUCT_H
#define UNTITLED9_FRUCT_H

#include <iostream>
#include <vector>
#include "PrajiAbstracta.h"
class Fruct{
private:
    std::string nume;
    std::string culoare;
public:
    Fruct(std::string nume_="", std::string culoare_="");
    friend std::ostream &operator<<(std::ostream &oss, const Fruct &f);
    void AfisareNume(std::ostream &oss) const ;
    ~Fruct();
};

#endif //UNTITLED9_FRUCT_H
