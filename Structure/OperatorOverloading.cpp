#include "../Include.h"

struct Car{
    int fuel;
    float milage;
    std::string name;

    Car(int fuel, float milage, std::string name
    ){
        this->fuel = fuel;
        this->milage = milage;
        this->name = name;
    }

    void operator+(Car &c){
        fuel = c.fuel;
        milage = c.milage;
        name = name + c.name;
    }

    void show(){
        print fuel << milage << name nl;
    }
};

int main(){
    Car c1 (1,2.5, "BMW");
    Car c2 (10,21.5, "Marc");
    c1+c2;
    c1.show();
}