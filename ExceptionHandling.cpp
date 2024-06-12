#include<iostream>
using namespace std;
int main(){
    double x , y;
    cin>>x >> y;
    try{
        if(x == 0.0){
            throw 0;
        }
        if(y == 0.0){
            throw string("Y is zero");
        }
        cout<<x/y ;
    }
    catch(int x){
        cout<<x;
    }
    catch(string &e2){
        cout<<e2;
    }
    catch(...){
        cout<<"Exception occured";
    }
    cout<<endl;
    cout<<"bye";
}