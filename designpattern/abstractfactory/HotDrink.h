#pragma once
#include <iostream>

class HotDrink{
    public:
        virtual ~HotDrink() = default;
        virtual void prepare(int amount) = 0;
};

class Tea : public HotDrink{
    public:
        void prepare(int amount){
            std::cout << "preparing tea for amount " << amount << std::endl;
        }
};

class Coffee : public HotDrink{
    public:
        void prepare(int amount){
            std::cout << "preparing Coffee for amount " << amount << std::endl;
        }
};