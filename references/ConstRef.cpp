#include <iostream>
#define print std::cout << 
#define nl << std::endl

void usecase1(){
    float x = 3.4f;
    float &ref = x;
    const float &crefx = x;
    x += 1;
    // crefx += 1;             //this is giving error as crefx is const and cannot be changed
    print x nl;
    print ref nl;
    print crefx nl;
}

void usecase2(){
    const float x = 3.4f;
    // float &ref = x;
    const float &crefx = x;
    // x += 1;
    // crefx += 1;             //this is giving error as crefx is const and cannot be changed
    print x nl;
    // print ref nl;
    print crefx nl;
}

int& usecase3(){
    static int a = 10; //The object referenced by the return value must exist after leaving the function.
    return a;
}

void toUpper(std::string &str){
    for(int i = 0 ; i < str.length() ; i++){
        str[i] = std::toupper(str[i]);
    }
}

void assignmentToString(){
    std::string test("Test with assignment");
    print test nl;
    toUpper(test);
    print test nl;
    toUpper(test = "hey this is");
    print test nl;
    toUpper(test += "hey this is 2");
    print test nl;
}

int & usecase4(){
    int a = 10;
    return a;
}

int main(){
    // usecase1();
    int runtest = 4;
    if(runtest == 1){
        int b = usecase3();
        print b nl;
        assignmentToString();
    }
    else if(runtest  == 4){
        int &a = usecase4();
        print a nl; 
        int *p;
        int &b = *p;
        print b nl;   
    }
}