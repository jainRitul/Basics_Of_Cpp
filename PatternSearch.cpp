#include<iostream>
using namespace std;
void patternSearch(string txt,string pat)
{
    int found = txt.find(pat);
    while (found != string::npos){
       cout<<"Pattern found at "<<found<<endl;
       found = txt.find(pat,found+1);
    }
}
int main()
{
    string txt = "geeksforgeeks";
    string pat = "geeks";
    patternSearch(txt,pat);
    return 0;
}