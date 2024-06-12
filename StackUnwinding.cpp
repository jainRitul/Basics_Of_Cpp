#include<iostream>
using namespace std;
//here i have demostrate the concept of stack unwinding in exception handling 
//stack winding refers to when exception occur then it goes through the all the caller function if noone has try catch then it will crash your program
void f1(){
    cout<<"f1 begins"<<endl;
    throw 100;
    //f1 has an exception then it return backs to f2 for handling but f2 dosenot have an  blk to handle f2 calls main for handling and main has handler so exception is handled successfully
    
    cout<<"f1 end"<<endl;
}
void f2(){
    cout<<"f2 begins"<<endl;
    f1();
    cout<<"f2 end"<<endl;
}
int main(){
    try{
        f2();
    }
    catch(int i){
        cout<<"exception caught" <<endl;
    }
    cout<<"bye"<<endl;
}