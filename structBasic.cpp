#include <string>
#include<iostream>
using namespace std;
typedef struct Student
{
    string name;
    int roll_no;
    int age;
    string address;
}S;
int main(){
   S s ;
   s.name = "ritul jain";
   s.roll_no = 21;
   s.age = 20;
   s.address = "Kalinjara banswara rajasthan";
   cout<<s.name<<" "<<s.age<<endl ;

   S s1 = {"prinjal",2,20,"rajasthan"};
   cout<<s1.name;
   
}
