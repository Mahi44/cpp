#include "../Include.h"

class Integer{
    int i;
    public:
        Integer(){
            i = 0;
        }
        Integer(int i){
            this->i = i;
        }
        int getInteger(){
            return i;
        }
        void setIntger(int i){
            this->i = i;
        }
        void operator++(){
            i = i + 20;
        }
        void operator++(int){
            i = i + 10;
        }
        void show(){
            print i nl;
        }
};

int main(){
    Integer obj(5);
    obj++;
    obj.show();
    ++obj;
    obj.show();
}

