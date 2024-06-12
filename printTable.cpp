#include<iostream>
using namespace std;
void printtable(int n){
    for(int i =1;i<=10;i++){
        cout<<n * i<<" ";
    }
}
int main(){
    int n =234;
    printtable(n);
}