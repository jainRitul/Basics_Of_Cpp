#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
      int j = 1;
      while (j <= n-i)
      {
       cout<<" ";
       j++;
      }
      while (j <= n)
      {
       cout<<"* ";
       j++;
      }
      cout<<endl;
      
    }
}
int main(){
    int n =3;
    pattern(n);
}