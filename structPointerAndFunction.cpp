#include<iostream>
using namespace std;
struct Point
{
   int x;
   int y;
};
void print(Point p ){
    cout<<p.x<<" "<<p.y<<endl;
}
int main(){
   Point p = {10,20};
   print(p);


   //arr of structure
   Point p1[5];
   for(int i = 0;i<5;i++){
        p1[i].x=i;
        p1[i].y=i*10;
   }
   for(int i=0;i<5;i++)
        cout<<p1[i].x<<" "<<p1[i].y<<endl;



   
}