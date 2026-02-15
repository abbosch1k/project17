
#include <iostream>
using namespace std;

struct Car{
    string brand;
    int year;
};

int main(){
    Car c={"BMW",2024};
    cout<<c.brand<<" "<<c.year
