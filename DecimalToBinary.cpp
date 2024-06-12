
#include<iostream>
#include<iomanip>
#include <vector>
using namespace std;
void decToBin(int n){
  vector<int>v;
  while (n>0)
  {
    v.push_back(n%2);
    n = n/2;
  }
  for(int i = v.size()-1;i>=0;i--)
    cout<<v[i];
}
int main()
{   int dec = 8;
    decToBin(dec);
}