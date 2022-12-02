#include "../Include.h"

template <typename T> T add(T a, T b){
    return a + b;
}

template <typename T1, typename T2> T1 min(T1 a, T2 b){
    return b;
}


template <typename T>
class TDemo{
    T name;
    public:
        TDemo(T name){
            this->name = name;
        }
        void show(){
            print name nl;
        }
};

int main(){
    int a = 10, b = 20;
    double a1 = 10, b1 = 20;
    print add(a, b) nl;
    print add(a1, b1) nl;
    print min(a, b1) nl;

    TDemo<int> obj(5);
    obj.show();
    TDemo<std::string> obj1("hi");
    obj1.show();

}