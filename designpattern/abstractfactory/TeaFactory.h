#pragma once
#include "HotDrinkFactory.h"
#include "HotDrink.h"

class TeaFactory : public HotDrinkFactory
{
    public:
        HotDrink* make(){
            return new Tea();
        }
};