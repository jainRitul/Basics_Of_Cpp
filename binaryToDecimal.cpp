
#include<iostream>
using namespace std;
int binToDec(int n){
    int base = 1;
    int res = 0;
    while (n > 0)
    {
        int last = n % 10;
        res += last * base;
        base = base*2;
        n=n/10;
    }
    return res;
}
int main()
{ 
    int bin = 1100;
    cout<<binToDec(bin);
}