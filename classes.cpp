#include <iostream>
using namespace std;

class Student{
    int marks =0;
    string name;

    public :
    Student(){//defualt constructor
    }

    Student(int mark) : marks(mark){ //member initializer list
        this->name = "Swamy";
    }

    Student(int marks, string name){//parameterized constructor
        this->marks = marks;
        this->name = name;
    }

    void setmarks(int n);
    void setname(string n){
        name = n;
    }
    int getmarks(){
        return marks;
    }
    string getname(){
        return name;
    }

    ~Student(){
        cout<<"deleting this object: "<<this->name<<" "<<this->marks<<endl;
        delete &marks;
        delete &name;
    }
};

void Student::setmarks(int n){ //scope resolution operator
    marks = n;
}

int main(){
    Student s(10, "Swamy");
    //s.setmarks(10);
    //s.setname("Swamy");
    Student t(20,"Saxena");
    cout<<s.getmarks()<<" "<<s.getname()<<endl;
    cout<<t.getmarks()<<" "<<t.getname()<<endl;
}
