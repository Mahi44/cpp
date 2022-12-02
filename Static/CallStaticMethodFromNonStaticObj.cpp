#include <iostream>

class derived;

class base{
    public:
    virtual void display() = 0;
};

class derived : public base
{
    public:
    void display(){
        std::cout << "displaying derived"<< std::endl;
    }
};

base* getDerivedPtr(){
    return new derived();
}

int main(){
    base *d = getDerivedPtr();
    d->display();
    return 0;
}