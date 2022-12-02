#include "../Include.h"

class A{
    int i = 0;
    public:
        virtual void show() = 0;
        A(){
            i = 10;
            print i nl;
            // show();
        }
        ~A(){
            i = 0 ;
            print i nl;
            // show();
        }
};

void A::show(){
    print "show from A" nl;
}

class B : public A{
    public:
        virtual void show(){
            print "show from B" nl;
        }
};

int main(){
    // A a;
    B b;
    b.show();
}