#include<iostream>
using namespace std;
int firstDigit(int n){
    if(n<10) return n;
    while (n>10)
    {
        n = n/10;
    }return n;
    
}
int main(){
    int n = 0;
    cout<<firstDigit(n);
}