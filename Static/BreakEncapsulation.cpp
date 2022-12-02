#include "../Include.h"


class Test{
    int a;
    static Test t1;
    public:
        explicit Test(int);
        explicit Test();
        static void set_test();
        void init();
        void print1();
};

Test::Test():a(t1.a){}

Test::Test(int value):a(value){}

Test Test::t1(1);

void Test::init(){
    a=t1.a;
}

void Test::print1(){
    std::cout<<a;
}

int main()
{
    Test t;
    t.print1();
    return 0;
}