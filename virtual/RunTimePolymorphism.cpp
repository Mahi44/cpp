#include <iostream>

class base{
    public:
        void sayHello(){
            std::cout << "Hello Base!" << std::endl;
        }
};

class derived : public base{
    public:
        void sayHello(){
            std::cout << "Hello derived!" << std::endl;
        }
};

class derived1 : public base{
    public:
        void sayHello(){
            std::cout << "Hello derived1!" << std::endl;
        }
};

class diamond : public derived1, public derived{

};


class vBase{
    public:
        virtual void sayHello(){
            std::cout << "Hello Base!" << std::endl;
        }
};

class vDerived : public vBase{
    public:
        virtual void sayHello(){
            std::cout << "Hello derived!" << std::endl;
        }
};

class vDerived1 : public vBase{
    public:
        virtual void sayHello(){
            std::cout << "Hello derived1!" << std::endl;
        }
};

class vDiamond : public vDerived1, public vDerived{

};


void nonVirtualDemo(){
    base b1, *bp;
    derived d1, *dp;
    bp = &d1;
    b1.sayHello();
    d1.sayHello();
    bp->sayHello();

    diamond d;
    // d.sayHello();   //this will create issue as compiler wont know which sayHello have to call derived or derived1's one
}

void virtualDemo(){
    vBase b1, *bp;
    vDerived d1, *dp;
    bp = &d1;
    b1.sayHello();
    d1.sayHello();
    bp->sayHello();

    vDerived1 *dp1;
    vDiamond d;
    dp1 = &d;

    dp1->sayHello();   //this will create issue as compiler wont know which sayHello have to call derived or derived1's one

}

int main(){
    int executer = 2;
    if(executer == 1){
        nonVirtualDemo();
    }
    else if (executer == 2){
        virtualDemo();
    }
}