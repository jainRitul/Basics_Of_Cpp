#include<iostream>
using namespace std;
void printArr(int arr[]){
    //if you compute n over here than it will compute  like *arr size which is 8 and arr[0] size is 4
    //so it is not recommeded practice to do like that in arr
    //arr[] = *arr in function printArr
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl;  
}
int main(){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printArr(arr);
}