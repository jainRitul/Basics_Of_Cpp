#include<iostream>
using namespace std;
void fun(){
    cout<<"function begins";
}
int main(){
   void (*fun_ptr)() = &fun;
   fun_ptr();
   return 0;
}