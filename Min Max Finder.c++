#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={3,8,2,9};
    cout<<*min_element(arr,arr+4)<<" ";
    cout<<*max_element(arr,arr+4);
}
