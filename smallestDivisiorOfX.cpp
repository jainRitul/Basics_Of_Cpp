#include<iostream>
using namespace std;
void smallestDivisor(int n){
    for(int i = 2;i<=n;i++){
        if(n % i==0){cout<<i;break;}
    }
}
int main(){
    int n =25;
    smallestDivisor(n);
}