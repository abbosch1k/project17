#include <iostream>
using namespace std;

int main(){
    string s="hello world";
    int count=0;
    for(char c:s)
        if(string("aeiou").find(c)!=string::npos)
            count++;
    cout<<count;
}
