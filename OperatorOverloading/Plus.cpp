#include <iostream>

class Complex{
    private:
        int real, imaginary;
    public:
        Complex(int real, int imaginary){
            this-> real =  real; 
            this->imaginary = imaginary;
        }
        Complex(){
            real = 0;
            imaginary = 0;
        }
        Complex operator+ (Complex c){
            return Complex((this->real + c.real) , (this->imaginary + c.imaginary));
        }
        operator int() {
            return ((this->real ) + (this->imaginary ));
        }
        void print(){
            std::cout << real << "+" << imaginary << "i" << std::endl;
        }
};

int main(){
    Complex c(10, 12);
    Complex c2(20, 30);
    c = c + c2;
    int num = c;
    c.print();
}

