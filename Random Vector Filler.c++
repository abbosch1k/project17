#include <iostream>
#include <vector>
#include <random>
using namespace std;

int main(){
    vector<int> v(5);
    mt19937 gen(random_device{}());
    uniform_int_distribution<> d(1,10);
    for(int& x:v){ x=d(gen); cout<<x<<" "; }
}
