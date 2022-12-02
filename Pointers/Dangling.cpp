#include "../Include.h"

int* getDanglingPtr(){
    int num = 10;
    int *ptr = &num;
    return ptr;
}

int main(){
    int *p = getDanglingPtr();
    print *p nl;
}