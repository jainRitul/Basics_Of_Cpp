#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,40};
    int *ptr = arr;
    cout<<ptr[3]<<" "<<endl;//internally compiler will calculte ptr[3] as *(ptr+3)
    cout<<*(ptr+3)<<endl;
    //it is not recommded to get the value of arr through pointer use square brackets incited
    cout<<*(arr+3)<<endl;


    //can also create reference to arr and that arr will point to first elemnt of arr
    int (*p2)[4] = &arr;
    cout<<*p2<<endl; 
    cout<<**p2<<endl; 
    cout<<&arr<<endl;

    //null and nullptr
    //this will work fine it will give the warning both null and nullptr work same but by default null have value 0
    int x = NULL;
    cout<<x;

    //this will give you the error because you cannot initialize a simple int to a pointer
    // int y = nullptr;
    // cout<<y;
}