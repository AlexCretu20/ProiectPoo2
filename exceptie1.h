#ifndef UNTITLED9_EXCEPTIE1_H
#define UNTITLED9_EXCEPTIE1_H

#include <iostream>
#include <vector>
#include "PrajiAbstracta.h"
#include "Prajitura.h"
#include "Fruct.h"
#include "FructePraji.h"
#include "VeganPraji.h"

class Exceptie1: public std::runtime_error
{
public:
    Exceptie1(const char* mesaj):std::runtime_error(mesaj){}
    const char* what() const noexcept override{
        return "S-a gasit runtime error\n";
    }
};

#endif //UNTITLED9_EXCEPTIE1_H
