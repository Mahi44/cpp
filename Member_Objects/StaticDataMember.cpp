#include <iostream>

class one{
    public:
        int i;
        static int j;
        static int k;
        static int l;
        // int getJ(){
        //     return j;
        // }    
};

int main(){
    one i;
    // std::cout << "size of one: " << sizeof(one) << std::endl;
    // std::cout << "size of i: " << sizeof(i) << std::endl;
    std::cout << "j: " << i.j << std::endl;
    // std::cout << "j: " << i.getJ() << std::endl;
}