#ifndef UNTITLED9_EXCEPTIE2_H
#define UNTITLED9_EXCEPTIE2_H

#include <iostream>
#include <vector>
#include "PrajiAbstracta.h"
#include "Prajitura.h"
#include "Fruct.h"
#include "FructePraji.h"
#include "VeganPraji.h"


class Exceptie2: public std::logic_error
{
public:
    Exceptie2(const char* mesaj):std::logic_error(mesaj){}
    const char* what() const noexcept override{
        return "S-a gasit o eroare de logica";
    }
};
#endif //UNTITLED9_EXCEPTIE2_H
