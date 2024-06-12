#include<iostream>
using namespace std;
int fun(int *x)
{
    *x = *x+10;
    return *x;
}
int main()
{
    int x = 10;
    fun(&x);


    //&& two ampersand means r reference or can use const keyword if only want to use right hand side value and don't want to modify that


    //we use reference for reflecting the changes in the variable and also to upgrade the 
    // performance because by passing value as copy every time compiler will create a new 
    // copy which is an extra overhead to obercome this issue we can use pass by reference 
    // which will modify the same location

    int &y = x;
    //this above line shows that y is reference variable 


    //but below line is to using & as an operator for finding an address
    cout<<&x<<endl;

    //it will give the value
    //defrence
    //* is also used for pointer declartion
    cout<<*(&x)<<endl;


    //pointer to variable
    // ptr stores the address of r and when we derefence * operator than it will give us value of r
    int r = 10;
    int *ptr = &r;
    cout<<*ptr<<endl;
    *ptr = *ptr + 34;
    cout<<r<<endl;


    double *m = new double ;
    int *k = new int;
    //pointer have same size so you don't have worry size based on datatype
    cout<<sizeof(m)<<endl;//return 8
    cout<<sizeof(k)<<endl;//return 8
    *k=89;
    cout<<k<<endl;



    //passing reference and taking pointer in the function call to reflect the changes
    int l = 45;
    fun(&l);
    cout<<l; 
}