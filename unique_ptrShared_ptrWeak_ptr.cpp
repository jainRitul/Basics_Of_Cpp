#include<iostream>
#include<memory>
using namespace std;
class Test{
     int x;
     public:
     Test(int a = 0){
        x = a;
        cout<<"Constructor"<<endl;
     }
     ~Test(){
        cout<<"Destructor"<<endl;
     }
     void fun(){
        cout<<x<<" "<<endl;
     }
     
};
//unique pointer does not have an coownership  but you can transfer the ownership from one var to other using move() fun
int main(){
    //unique_ptr will not allow to same location to two pointer
    cout<<"Main Begins"<<endl; 
    {  
    //    unique_ptr<Test>ptr(new Test(10));can also declare like that
       unique_ptr<Test>ptr = make_unique<Test>(10); // this the new way to declare
       ptr->fun();

       //without move you can not allocate a new variable to old if it is hold by unique pointer
       unique_ptr<Test>ptr1 =  move(ptr);
     
    }
    cout<<"Main Ends"<<endl;
}