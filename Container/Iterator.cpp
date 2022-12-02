#include <iostream>
#include <vector>

using namespace std;

template <class T, class compare = less<T> >
class SortVec : public vector<T>
{
    public:
        SortVec(){}
        SortVec(int n, const T& x = T());
        void insert(const T &obj);
        int search(const T &obj);
        void merge(const SortVec<T> &v);
};

int main(){
    SortVec<int> v, w;
    v.insert(7); v.insert(1);
    int n = v.search(7);
    w.insert(3); w.insert(9);
    v.merge(w);
    return 0;
}