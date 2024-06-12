#include<iostream>
#include<algorithm>
using namespace std;
int add(int x,int y){
    return x + y ;
}
int multiply(int x,int y){
    return x * y ;
}
//here in this function we are passing functinality as argument
int fun(int x,int y,int(*fun_ptr)(int,int)){
    return fun_ptr(x,y);
}
bool compare(int x,int y) {return abs(x) > abs(y);}
int main(){
    cout<<fun(10,20,add)<<endl;
    cout<<fun(10,20,multiply)<<endl;

    //real world example of this
    int arr[] = {2,-3,2,0,-9,-8};
    int n = sizeof(arr)/sizeof(arr[0]);

    //we can pass compare function to sort items as per our requirement
    sort(arr,arr+n,compare);
    for(int i = 0;i<n;i++)
    cout<<arr[i]<<" ";
}