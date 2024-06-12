
#include<iostream>
using namespace std;
void printFibSeq(int n){
    int a = 1;
    int b = 1;
    int c = 0;
    cout<< "1 1 ";

    for(int i =2;i<=n;i++){
        
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}
int main()
{
   int  n = 7;
   printFibSeq(n);
}