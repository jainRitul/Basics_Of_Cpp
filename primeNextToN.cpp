#include<iostream>
using namespace std;
bool isPrime(int n ){
    if(n<=1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0){
        return false;

    }
    for(int i = 5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}
int nextPrime(int n){
    while (true)
    {
       
    }
    
    if(isPrime(n)){
        return n;
    }
    else {
        n++;
    }
    nextPrime(n);
   
}
int main(){
    int n  =13;
    cout<<nextPrime(n+1);
}