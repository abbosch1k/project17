#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n=153,temp=n,sum=0;
    while(temp){
        int d=temp%10;
        sum+=pow(d,3);
        temp/=10;
    }
    cout<<(sum==n);
}
