#include <iostream>
using namespace std;

int gcd(int a,int b){
    while(b){ int t=b; b=a%b; a=t; }
    return a;
}

int main(){
    int a=12,b=18;
    cout<<(a*b)/gcd(a,b);
}
