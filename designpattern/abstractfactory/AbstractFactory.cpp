#include <iostream>
#include "TeaFactory.h"
#include "CoffeeFactory.h"

HotDrink* makeDrink(std::string drink, int amount){
    if(drink == "tea"){
        HotDrink *hd = new Tea();
        hd->prepare( amount);
        return hd;
    }
    else{
        HotDrink *hd = new Coffee();
        hd->prepare(amount);
        return hd;
    }
}

int main(){
    HotDrink* hd = makeDrink("tea", 283);
    HotDrink* hd2 = makeDrink("Coffee", 333);
}