#include <iostream>

class InlineDemo{
    int i;
    static int k ;
    public:
        inline InlineDemo() {
            i = 10;
            std::cout << i << std::endl;
        }
        void show(){
            std::cout << i << std::endl;
        }
        inline ~InlineDemo(){
            i = 0;
            std::cout << i << std::endl;
        }

        void readOnly() const{
            int j = 11;
            k++;
            std::cout << j << std::endl;
        }
};




int main(){
    InlineDemo id;
}
