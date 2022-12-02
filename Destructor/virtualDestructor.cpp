#include <iostream>
#define print std::cout << 
#define nl << std::endl

class base{
    public:
        base(){
            print "base constructor" nl;
        };
        virtual ~base(){
            print "base destructor" nl;
        };
};

class derived : public base{
    public:
        derived(){
            print "derived constructor" nl;
        };
        ~derived(){
            print "derived destructor" nl;
        };
};

int main(){
    base *b;
    derived *d = new derived();
    b = d;
    delete b;
    print "over" nl;
}