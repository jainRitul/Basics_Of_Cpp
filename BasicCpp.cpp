#include<iostream>
using namespace std;

int main(){

    // string name;
    // cout<<"Enter your name";
    // //cin will ignore the string after space so to elimitate that problem with cin we use getline
    // getline(cin,name);
    // cout<<"Welcome" << name<<endl;
    
    
    //arithmatic operator
    cout<<(-10%3)<<endl;
    cout<<std::boolalpha<<endl;
    cout<<false<<endl;

    //escape seqence are used for printing "" \ on the screen
    cout<<"Welcome to \"GeeksForGeeks\""<<endl;
    cout<<"C:\\xyx\\abc"<<endl;
    cout<<"Printing \\ example"<<endl;


    //IO manipulation

    int x = 26;
    cout<<std::showbase;
    cout<<std::hex;
    cout<<x<<endl;
    cout<<std::uppercase;
    cout<<x<<endl;


    double y = 12.2300;
    cout<<y<<endl;
    double z = 1234.22321;
    cout<<z<<endl;
    double w = 1244567.323;
    cout<<w<<endl;
    double v = 12e+2;
    cout<<v<<endl;

    //fixed and scinetifc format of writing float
    cout<<std::fixed;
    cout<<z<<endl;
    cout<<std::scientific;
    cout<<z<<endl;


}
