#include<iostream>
using namespace std;
int average(int arr[],int n) //throw (string)
{
   if(n == 0){
    throw string("n is zero");
   }
   int sum = 0;
   for(int i =0;i<n;i++)
     sum += arr[i];
   return sum /n;   
}
int main(){
    int arr[] = {1,2,3,4};
    int n =4;
    try{
          int res = average(arr,n);
          cout<<res;
    }
    catch(string &e1){
        cout<<e1;
    }
  
}