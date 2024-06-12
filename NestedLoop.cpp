#include<iostream>
using namespace std;
void printtable(int n){
    for(int i =1;i<=n;i++){
      for (int j = 1; j <=10; j++)
      {
        cout<<i*j<<" ";
      }cout<<endl;
      
    }
}
int main(){
    int n =4;
    printtable(n);
}