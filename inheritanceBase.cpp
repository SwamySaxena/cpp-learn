#include <iostream>
using namespace std;

class p{
    int l;
    public:
    p(){
        this->l = 11;
    }
    p(int l){
        this->l = l;
    }

    int getL(){
        return this->l;
    }

    ~p(){
        cout<<"Destructor of p"<<endl;
    }
};

class m : public p{
    int x;
    public:
    m(){
        this->x = 22;
    }

    m(int x) : p(x){
        this->x = x;
    }

    int getX(){
        return this->x;
    }

    ~m(){
        cout<<"Destructor of m"<<endl;
    }
};

int main(){
    m t;
    m c(10);
    cout<<t.getX()<<endl;
    cout<<t.getL()<<endl;
    cout<<c.getX()<<endl;
    cout<<c.getL()<<endl;
}