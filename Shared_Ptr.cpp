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

int main(){
    shared_ptr<Test>ptr1 = make_shared<Test>(20);
    shared_ptr<Test>ptr2(new Test(10));

    ptr1->fun();
    ptr2->fun();



    shared_ptr<Test>ptr3;
    cout<<"Main begin"<<endl;
    {
      shared_ptr<Test>ptr4 = make_shared<Test>(30);
      ptr3 = ptr4;
    }
    cout<<"Main Ends" <<endl;




    //weak ptr
    weak_ptr<Test>ptr5;
    cout<<"Main begin"<<endl;
    {
      shared_ptr<Test>ptr6 = make_shared<Test>(40);
      ptr5= ptr6;
    }
    cout<<"Main Ends" <<endl;
}