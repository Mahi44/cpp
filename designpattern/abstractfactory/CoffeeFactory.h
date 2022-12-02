#pragma once
#include "HotDrinkFactory.h"
#include "HotDrink.h"

class CoffeeFactory : public HotDrinkFactory
{
    public:
        HotDrink* make(){
            return new Coffee();
        }
};