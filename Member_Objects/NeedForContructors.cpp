#include <iostream>

class one{
    int i;
    public:
    one(){
        i = 10;
    }
    int get() const {
        return i;
    }
    void set(){
        i = 10;
    }
};

class two {
    const one ek;
    public:
        two() : ek(){
            std::cout << "i: " << ek.get() << std::endl;
        }
        int get(){
            return ek.get();
        }
};

int main(){
    two t;
    std::cout << t.get();
}