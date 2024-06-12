#include<iostream>
using namespace std;
void reverese(string &str){
    int s = 0;
    int e = str.length()-1;
    while (s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
    
}
int main(){
    string str = "ritul jain";
    reverese(str);
    cout<<str<<" ";
}