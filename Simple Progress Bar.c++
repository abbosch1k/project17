
#include <iostream>
#include <thread>
using namespace std;

int main(){
    for(int i=0;i<=20;i++){
        cout<<"\r[";
        for(int j=0;j<i;j++) cout<<"#";
        cout<<"]";
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}
