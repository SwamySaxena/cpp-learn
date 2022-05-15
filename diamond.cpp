#include <iostream>
using namespace std;

class A{
    protected:
    int id;
};

class B: virtual public A{
    public:
    int len;
    B(){
        this->id = 100;
    }

};

class C: virtual public A{
    public:
    int radius;
    C(){
        this->id = 200;
    }

};

class D: public C, public B{
    public:
    int getId(){
        return B::id;
    }
};

int main(){
    D d;
    cout<<d.getId()<<endl;
}