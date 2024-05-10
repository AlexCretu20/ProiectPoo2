#ifndef UNTITLED9_EXCEPTIE2_H
#define UNTITLED9_EXCEPTIE2_H

#include <iostream>
#include <vector>
#include "cmake-build-debug/PrajiAbstracta.h"
#include "Prajitura.h"
#include "Fruct.h"
#include "FructePraji.h"
#include "VeganPraji.h"


class PrevenireErorii2: public std::logic_error
{
public:
    const char* what() const noexcept override{
        return "S-a gasit o eroare de logica";
    }
};
#endif //UNTITLED9_EXCEPTIE2_H
