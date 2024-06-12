#include<iostream>
using namespace std;
int gcd(int a,int b){
    int i = min(a,b);
    while (i > 0)
    {
      if(a%i == 0 && b%i==0)
         return i;
      
      i--;
    }
    return 1;
} 
int gcdBetter(int a,int b){
    while (a!=b)
    {
        if(a>b){
            a = a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
    
}
int gcdEfficient(int a,int b){
    if(b==0) return a;
    return gcdEfficient(b , a%b);
}
int main(){
    int a =12;
    int b = 15;
    cout<<gcd(a,b)<<endl;
    cout<<gcdEfficient(a,b);
    cout<<gcdBetter(a,b);
}