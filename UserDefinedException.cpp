#include<iostream>
#include<exception>
using namespace std;
//bad_alloc is exception is thrown when new operator have any issue
class MyException : public exception{
     virtual const char *what() const throw()
     {
         return "Exception occured";
     }
};
int main(){
    try{
      throw  MyException();
    }
    catch(exception &e1){
        cout<<e1.what();
    }
}