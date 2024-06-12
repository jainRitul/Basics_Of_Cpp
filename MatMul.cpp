#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n =2;
    vector<vector<int>>a(n,vector<int>(n,0));
    vector<vector<int>>b(n,vector<int>(n,0));
    vector<vector<int>>mul(n,vector<int>(n,0));

    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            int t;
            cin>>t;
            a[i][j] = t;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            int t;
            cin>>t;
            b[i][j] = t;
        }
    }
    
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            mul[i][j] = 0;
            for(int k=0;k<n;k++){
              mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
     for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
           cout<<mul[i][j] <<" ";
        }
        cout<<endl;
    }
}