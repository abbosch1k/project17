#include <iostream>
using namespace std;

int main(){
    int n=1234,sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    cout<<sum;
}
