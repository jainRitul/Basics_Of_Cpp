#include<iostream>
using namespace std;
int lcm(int a,int b)
{
    int i = max(a,b);
    while (i<= a*b)
      if(i%a==0 && i %b==0)return i;i++;
    
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    return a;

    return gcd(b,a%b);
}
int lcmEfficient(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main(){
    int a =60;
    int b = 213;
    cout<<lcm(a,b);
    cout<<lcmEfficient(a,b);
}