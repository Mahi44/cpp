#include <iostream>

class base {

};
class derived : public base{

};

int main(){
    base* b = new derived();
}