#include <iostream>
#define print std::cout << 
#define nl << std::endl


struct BaseS{
    int id;
    std::string name;
};

struct DerivedS : private BaseS{
    void show(){
        print id << "Name: " << name nl;
    }
};

void structDemo(){
    BaseS b;
    DerivedS d;
    d.show();
}

class BaseC{
public:
    int id;
    std::string name;
};

class DerivedC : private BaseC{
public:
    void show(){
        print id << "Name: " << name nl;
    }
};

void classDemo(){
    BaseC b;
    DerivedC d;
    d.show();
}



int main(){
    structDemo();
    classDemo();
    return 0;
}
