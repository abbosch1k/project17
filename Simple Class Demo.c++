#include <iostream>
using namespace std;

class Person{
public:
    string name;
    void greet(){ cout<<"Hello "<<name; }
};

int main(){
    Person p;
    p.name="Alice";
    p.greet();
}
