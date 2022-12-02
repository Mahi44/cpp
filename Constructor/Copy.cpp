#include <iostream>
#define print std::cout << 
#define nl << std::endl


class Paper{
    std::string content;
    int price;
    public:
        void printContent(){
            print content nl;
        }
        void printPrice(){
            print price nl;
        }
        Paper(const Paper &p){
            content = p.content;
            price = p.price + 20;
            print "Copy constructor is called" nl;
        }
        Paper(std::string content, int price){
            this->content = content;
            this->price = price;
        }
        void printPaper(){
            printContent();
            printPrice();
        }
};

class shallowDeepCopy{
    int *p1, *p2;
    public:
        void setP1(int *p){
            p1 = p;
        }
        void setP2(int *p){
            p2 = p;
        }
        void printshallowDeepCopy(){
            print *p1 nl ;
            print *p2 nl;
        }
        void changeP1(){
            *p1 += 10;
        }
};

Paper compilerTempObj(){
    Paper p1("", 1); 
    return p1;
}

void demoPaper(){
    Paper p1(std::string("this is content of paper"), 6);
    Paper p2("", 0);
    p2 = p1;
    p1.printPaper();
    p2.printPaper();
    Paper p3(p1);
    p3.printPaper();
    Paper p4 = p1;
    p4.printPaper();
    Paper p5 = compilerTempObj();
    p5.printPaper();
    // Paper p = compilerTempObj(); //this will give error if we don't use const reference of class in copy constructor
    //The reason for compiler error is, compiler created temporary objects cannot be bound to non-const references and the original program tries to do that

} 

void demoShallowDeepCopy(){
    shallowDeepCopy obj1;
    obj1.setP1(new int(1));
    obj1.setP2(new int(2));
    shallowDeepCopy obj2 = obj1;
    obj1.printshallowDeepCopy();
    obj2.printshallowDeepCopy();
    obj1.changeP1();
    obj1.printshallowDeepCopy();
    obj2.printshallowDeepCopy();

}

class base{
    public:
        int i;
        virtual void showI(){
            print "base show" nl;
            print i nl;
        }
        base(){
            i = 10;
            print "base default C" nl;
            showI();
        };
        base(int i){
            this->i = i;
            print "base param " << i nl;
            showI();
        }
};

class derived : public base{
    public:
        virtual void showI(){
            print "derived show" nl;
            print i nl;
        }
        derived() : base(){
            base *b;
            b = this;
            b->showI();
            print "derived default C" nl;
        };
        derived(int i){
            print "derived param " << i nl;
        }

};

void callVirtualFromConstructor(){
    derived d;
}



int main(){
    int executer = 3;
    if(executer == 1){
        demoPaper();
    }
    else if(executer == 2){
        demoShallowDeepCopy();
    }
    else if(executer == 3){
        callVirtualFromConstructor();
    }

    int *a = new int(110);
    print *a nl;
    delete a;
    double *db = new double[10];
    delete[] db;
}