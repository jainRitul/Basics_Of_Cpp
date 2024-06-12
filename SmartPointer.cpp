#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template<class T>
//i have used the template so that it will work for all types

//there is problem with smart pointer because if two pointer pointing to same object than one pointer if goes out of scope memory will be deallocated
//that ' s why unique_ptr ,weak_ptr , and shared_ptr comes into picture
class Sp{
    T *ptr;
    public:
   Sp(T *p = NULL){
    ptr = p;
   }
   ~Sp(){
    delete ptr;
   }
   T & operator *(){
    return *ptr;
   }
};
int main(){
    //smart pointer is used to solve the problem with normal pointer such as memory leak , dangling pointer , wild pointer , buffer overflow
    Sp<int>sp(new int());
    *sp = 10;
    cout<<*sp;
}