#include <iostream>
#include <chrono>
using namespace std;

int main(){
    auto start=chrono::steady_clock::now();
    while(chrono::steady_clock::now()-start < chrono::seconds(2));
    cout<<"Done";
}
