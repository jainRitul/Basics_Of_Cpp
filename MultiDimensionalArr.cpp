#include<iostream>
#include <vector>
using namespace std;
int main(){

   int m = 3,n=2;
   
   int **arr;
   arr = new int *[m];
   for(int i = 0;i<m;i++){
     arr[i] = new int[n];
     for(int j =0;j<n;j++){
        arr[i][j] = 0;
        cout<<arr[i][j]<<" ";
     }
     cout<<endl;
   }
   cout<<endl;
   int *arr1[m];
   for(int i = 0;i<m;i++){
     arr1[i] = new int[n];
     for(int j =0;j<n;j++){
        arr1[i][j] = 0;
        cout<<arr1[i][j]<<" ";
     }
     cout<<endl;
   }

   vector<int>v[m];

   for(int i = 0;i<m;i++){
    for(int j =0;j<n;j++){
        v[i].push_back(10);
        cout<<v[i][j]<<" ";
    }cout<<endl;
   }  


}


//multidimensional arr are initalized using double pointer like this **arr; and also by single pointer
// // arr = new int *[m];
// for(int i=0;i<m;i++)
//   arr[i] - new int[n];
