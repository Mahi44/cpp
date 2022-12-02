#include <iostream>
#define print std::cout << 
#define nl << std::endl

using namespace std;

class ArrayRotation {
    int data;
    public:
        ArrayRotation(){
            print "In default constructor" nl;
            data = 0;
        }
        inline ArrayRotation(int data){
            print "In parameterized constructor" nl;
            this->data = data;
        }
        void setData(int data){
            this->data = data;
        }
        int getData() const{
            return data;
        }
};

int main(int argc, char** args){
    ArrayRotation ar[10] = {1,2,3,4,5,6,7,8,9,10};
    int rotateBy = std::stoi(args[1]);
    print rotateBy nl;
    
    return 0;
}