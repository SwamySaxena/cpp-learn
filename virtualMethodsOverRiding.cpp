#include <iostream>
using namespace std;

class Shape{
    public:
    virtual float getArea() = 0;
};

class Rectangle : public Shape{
    private:
    float width;
    float height;

    public:
    Rectangle(float width, float height): width(width), height(height){}

    float getArea(){
        return this->width * this->height;
    }

};

int main(){
    Rectangle r(2,5);
    cout<<r.getArea()<<endl;
    Shape *s = &r;
    cout<<s->getArea()<<endl;
}