#include "../Include.h"
#include "../PrintArray.h"

void reverse(std::string &str){
    int size = str.length();
    for(int i = 0 ; i < size / 2 ; i++){
        str[i] = str[i] ^ str[size - i - 1];
        str[size - i - 1] = str[i] ^ str[size - i - 1];
        str[i] = str[i] ^ str[size - i - 1];
    }
}

void reverseArray(int arr[], int size){
    for(int i = 0 ; i < size / 2 ; i++){
        arr[i] = arr[i] ^ arr[size - i - 1];
        arr[size - i - 1] = arr[i] ^ arr[size - i - 1];
        arr[i] = arr[i] ^ arr[size - i - 1];
    }
}

int main(){
    std::string str ("this is string");
    reverse(str);
    print str nl;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    printArrGeneric(arr, size);
}