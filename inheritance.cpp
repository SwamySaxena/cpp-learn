#include <iostream>
using namespace std;

class employee{
    protected:
    int id;
    string name;
    int bossId;

    public:
    employee(int id, string name, int bossId){
        this->id = id;
        this->name = name;
        this->bossId = bossId;
    }

    void display(){
        cout<<name<<" "<<id<<" "<<"reports to "<<bossId<<endl;
    }
    void display(string salut){
        cout<<salut<<endl;
        cout<<name<<" "<<id<<" "<<"reports to "<<bossId<<endl;
    }
};

class manager : public employee{
    protected:
    int teamId;

    public:
    manager(int id, string name, int bossId, int teamId) : employee( id,  name,  bossId), teamId(teamId){}

    void display(){
        cout<<"Team ID: "<<teamId<<endl;
        employee::display();
    }
};

int main(){
    manager m(1,"SWAMY", 10,100);
    m.display();
}