#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n =3;
    vector<vector<int>>v(n,vector<int>(n,0));
    vector<vector<int>>ans(n,vector<int>(n,0));

    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            int t;
            cin>>t;
            v[i][j] = t;
        }
    }
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            ans[i][j] = v[j][i];
        }
        cout<<endl;
    }
     for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}