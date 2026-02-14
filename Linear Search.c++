#include <iostream>
using namespace std;

int main(){
    int arr[]={4,7,1,9};
    int target=1;
    for(int i=0;i<4;i++)
        if(arr[i]==target)
            cout<<"Found at "<<i;
}
