#ifndef UNTITLED9_EXCEPTIE1_H
#define UNTITLED9_EXCEPTIE1_H

#include <iostream>
#include <vector>
#include "cmake-build-debug/PrajiAbstracta.h"
#include "Prajitura.h"
#include "Fruct.h"
#include "FructePraji.h"
#include "VeganPraji.h"

class PrevenireErorii: public std::runtime_error
{
public:
    const char* what() const noexcept override{
        return "S-a gasit runtime error\n";
    }
};

#endif //UNTITLED9_EXCEPTIE1_H
