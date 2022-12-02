#include "../Include.h"

class LL{
    int key;
    LL *next;
    public:
        int getKey(){
            return key;
        }
        LL* getNext(){
            return next;
        }
        void setKey(int key){
            this->key = key;
        }
        void setNext(LL* next){
            this->next = next;
        }
        LL(){
            key = 0;
            next = nullptr;
        }
        LL(int key){
            this->key = key;
            next = nullptr;
        }
};

LL* populateLL(LL* root){
    int key = 1;
    print "press 0 to finish adding else type value of element " nl;
    std::cin >> key;
    while(key){
        LL *node = new LL(key);
        LL *temp = root;
        if(temp == nullptr){
            temp = root = node;
        }
        else{
            while(temp->getNext() != nullptr){
                temp = temp->getNext();
            }
            temp->setNext(node);
        }
        print "press 0 to finish adding else type value of element " nl;
        std::cin >> key;
    }
    return root;
}
void traverseLL(LL* root){
    while(root != nullptr ){
        print root->getKey() << ", ";
        root = root->getNext();
    }
}

//considering n is always smaller than length of linked list
void nthElement(LL *root, int n){
    LL *first = root, *second = root;
    while(n--){
        second = second->getNext();
    }
    while(second != nullptr){
        first = first->getNext();
        second = second->getNext();
    }
    print "nth element is : " ;
    print first->getKey() nl;
}

int main(){
    LL *root = nullptr;
    root = populateLL(root);
    traverseLL(root);
    int n;
    print "Which element you want to get from end" nl;
    std::cin >> n;
    nthElement(root, n);
}