#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //capture list  = "[]" used to get access of the variable declared in the function local variable 
    //global and static variable are bydefault accessible
    //   [capture list ](parameter){body}
    int x = 4,y = 5;

    //[&,x] it means everything by reference only x is by value
    //[=,&x] it means everything by value only x is by reference
    //[x] it means x is by  value
    //[&x] it means x is by  reference

    auto lambda_exp = [&](int a)mutable{x = x+a;y=y+a;};
    lambda_exp(10);
    cout<<x<<" "<< y<<" "<<endl;  
}