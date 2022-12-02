#include "../Include.h"

class Demo{
    int iq;
    public:
        void show(){
            print iq nl;
        }
        virtual void iqMethod() = 0;
        virtual void iqDegradation() = 0;
};

class Derived : public Demo {
    public:
        virtual void iqMethod(){
            print "IQ is calculated based on some questions" nl;
        }
        virtual void iqDegradation(){
            print "IQ is Degraded" nl;
        }
};

int main(){
    Demo *b;
    Derived d;
    b = &d;
    b->iqMethod();
    
}