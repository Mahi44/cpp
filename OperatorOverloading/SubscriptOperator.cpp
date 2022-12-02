#include "../Include.h"

class Car{
    int arr[10];
    public:
        int& operator[] (int i){
            if(i >= 0 && i < sizeof(arr) / sizeof(arr[0])){
                return arr[i+1];
            }
            else{
                print "array out of bound but sending 0 index " nl;
                return arr[0];
            }
        }
        void printArray(){
            for (int i : arr){
                print i nl;
            }
        }

};


int main(){
    Car c;
    c[0] =10;
    c[1] =12;
    c[21] =22;
    c.printArray();
}