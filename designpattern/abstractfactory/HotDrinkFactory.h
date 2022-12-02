#pragma once
#include <iostream>
#include "HotDrink.h"

class HotDrinkFactory : public HotDrink{
    public:
        virtual HotDrink* make() = 0;
};