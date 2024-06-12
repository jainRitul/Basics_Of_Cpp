#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{10,2,30,10,3};
    for_each(v.begin(),v.end(),[](int &x){return x = x*2;});

    for_each(v.begin(),v.end(),[](int x){cout<<x<<" ";});
    cout<<endl;
    //counting element > than 10
    int count = count_if(v.begin(),v.end(),[](int x){ return x>=10;});
    cout<<count<<" ";

    //getting first element greater than 20
    auto it = find_if(v.begin(),v.end(),[](int x) {return x > 20;});
    cout<<(*it)<<" ";

    //accumulate for add and multiply
    // int sum  = accumulate(v.begin(), v.end(),0);
    // cout<<sum<<endl;

    //int mul = accumulate(v.begin(),v.end(),1,[](int x,int y){return x * y;});
    //cout<<mul<<" ";
}