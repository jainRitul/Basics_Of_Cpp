#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n == 0 || n==1 ) return false;
    if(n == 2 || n==3) return true;
    if(n%2 == 0 || n%3==0) return false;

    for(int i = 5 ;i*i<=n;i+=6){
        if(n%i == 0 || n%(i+2) ==0 ) return false;
    }return true;
}
void primeFactor(int n){
    if(n<=1) return ;
   for(int i=2;i<=n;i++){
     if(isPrime(i)){
        while (n%i == 0)
        {
           cout<<i<<" ";
           n = n/i;
        }
        
     }
   }cout<<endl;
}
void primeFactorbetter(int n){
    if(n<=1) return;

    for(int i =2;i*i<=n;i++){
        while (n % i == 0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n > 1) cout<<n;
    cout<<endl;
}
void primeFactorEfficient(int  n){
    if(n<=1) return;
    while (n%2==0)
    {
      cout<<2<<" ";
      n = n/2;
    }
    while (n%3==0)
    {
      cout<<3<<" ";
      n = n/3;
    }

    for(int  i = 5;i*i<=n;i+=6){
        while (n%i ==0 )
        {
           cout<<i<<" ";
           n = n/i;
        }
        while (n%(i+2) ==0 )
        {
           cout<<i+2<<" ";
           n = n/(i+2);
        }
        
    }
    if(n>3 ) cout<<n;
    
}
int main(){
    int n  = 13;
    primeFactor(n);
    primeFactorbetter(n);
    primeFactorEfficient(n);
}