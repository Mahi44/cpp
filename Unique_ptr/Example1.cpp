#include <iostream>


class base{
    public:
    virtual void display() = 0;
    virtual ~base(){
        std::cout << "Deleting base" << std::endl;
    }
};

class derived : public base
{
    public:
    void display(){
        std::cout << "displaying derived"<< std::endl;
    }
    // virtual ~derived(){
    //     std::cout << "Deleting derived" << std::endl;
    // }
};

base* getDerivedPtr(){
    return new derived();
}

int main(){
    base* b_ptr = getDerivedPtr();
    b_ptr->display();
    delete b_ptr;

    std::unique_ptr<base> b_u_ptr (getDerivedPtr());
    b_u_ptr->display();

    std::unique_ptr<derived> d_u_p (new derived());
    d_u_p->display();
    return 0;
}