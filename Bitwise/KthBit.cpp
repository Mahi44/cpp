#include "../Include.h"

int setKthBit(int num, int k){
    int i = 1 << (k-1);
    num = num | i;
    return num;
}

int main(){
    int num ;
    int k ;
    print "Enter num" nl;
    std::cin >> num;
    print "Enter k" nl;
    std::cin >> k;

    print setKthBit(num, k) nl;
}