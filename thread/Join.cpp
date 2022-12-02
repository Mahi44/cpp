
#include "../Include.h"
#include <thread>

void foo(){
    print "From foo" << std::this_thread::get_id() nl;
}


void fun(){
    std::this_thread::sleep_for( std::chrono::milliseconds(1000));
    print "From fun " nl;
}

void run(){
    std::thread thread2(fun);
    std::thread thread1(foo);

    if(thread1.joinable()){
        print "run is joinable" nl;
    }
    thread2.join();
    thread1.join();
    if(!thread1.joinable()){
        print "run is NOT joinable" nl;
    }
    print "From run"  << std::this_thread::get_id() nl;

    print "hardware concurrency: " << std::thread::hardware_concurrency() nl;

}

void show(int a ){
    print a nl;
}



int main(){
    run();
}