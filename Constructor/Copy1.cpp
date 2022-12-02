#include "../Include.h"

class Demo{
    std::string name;
    public:
        Demo(){
            name = std::string("");
        }
        Demo(std::string name){
            this->name = std::string(name);
        }
        Demo(Demo &obj){
            name = std::string(obj.name);
        }
        void show(){
            print name nl;
        }
        void set(std::string name){
            this->name = std::string(name);
        }
};

int main(){
    Demo d("this is cnn");
    Demo d1(d);
    d1.show();

}