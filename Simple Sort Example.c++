#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={5,1,4,2};
    sort(arr, arr+4);
    for(int x:arr) cout<<x<<" ";
}
