#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==target) return m;
        if(arr[m]<target) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,7,9};
    cout<<binarySearch(arr,5,7);
}
