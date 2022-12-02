#include "../Include.h"

class Name{
    mutable std::string surname;
    std::string fname;
    static int count;
    void showNumber();
    public:
        Name(std::string fname, std::string surname){
            this->fname = fname;
            this->surname = surname;
        }

        void changeName(const Name &name) const{
            // fname = name.fname;
            surname = name.surname;
            Name::count++;
        }

        void showName(){
            print fname + " " + surname nl;
            print Name::count nl; 
        }
};

int Name::count = 20;
void Name::showNumber() {
    print "Number" nl;
}



int main(){
    Name n1("Mahi", "Parmar");
    Name n2("Kajal", "Solanki");
    n1.showName();
    n2.showName();
    n2.changeName(n1);
    n2.showName();

}