#include <iostream>

class A{
    int r, i;
    public:
        int getR(){
            return r;
        }
        int getI(){
            return i;
        }
        void setR(int r){
            this->r  = r;
        }
        void setI(int i){
            this->i  = i;
        }
        A operator+(A a){
            A temp;
            temp.r = r + a.r;
            temp.i = i + a.i;
            return temp;
        }
        A operator-(A a){
            A temp;
            temp.r = r - a.r;
            temp.i = i - a.i;
            return temp;
        }
        
        void display(){
            std::cout << r << "+" << i << "i" << std::endl;
        }
};



void testA(){
    A a,b;
    a.setI(10);
    a.setR(20);
    b.setI(100);
    b.setR(200);
    a.display();
    b.display();
    a = a + b;
    a.display();
}

int main(){
    testA();
}