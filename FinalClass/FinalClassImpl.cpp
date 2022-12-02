// C++ program with compilation
// error to demonstrate that
// Final class cannot be inherited
#include <iostream>
using namespace std;

// The class to be made final
class Final;

// used to make the Final class final
class MakeFinal {
private:
	MakeFinal() { cout << "MakFinal constructor" << endl; }
	friend class Final;
};

class Final : virtual MakeFinal {
public:
	Final() { cout << "Final constructor" << endl; }
};

// Compiler error
class Derived : public Final {
public:
	Derived() { cout << "Derived constructor" << endl; }
};

class base final {

};
class derived : base
{

};

int main(int argc, char* argv[])
{
	Derived d;
    derived d1;
	return 0;
}
