#include<iostream>
using namespace std;
//struct and class one difference which is struct is by default public and class is bydefault private but we can make it private or public as per our requiremnet
struct Point{
   int x;
   int y;
   Point(int a,int b){
      x = a;
      y = b;
   }
   void print(){
    cout<<x<<" "<<y<<endl;
   }
};
class Point2{
    public:
    int x;
    int y;
};

int main()
{
   Point2 p1;
   p1.x = 10;
   cout<<p1.x<<endl;
   
   Point p(10,20);
   p.print();

  
}
