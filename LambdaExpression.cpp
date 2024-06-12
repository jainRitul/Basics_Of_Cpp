#include<iostream>
#include<algorithm>
using namespace std;

int main(){
   int arr[] = {-1,-3,2,3};
   int n  = 4;
   auto mycmp = [](int a,int b){return abs(a) > abs(b);};
   sort(arr,arr+n,mycmp);
   
   for(auto x : arr)
     cout<<x<<" ";
}