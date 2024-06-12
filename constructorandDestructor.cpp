#include<iostream>
using namespace std;
class Point{
    private:
    int x;
    int y;

    public:
    void print(){
       cout<<x<<" "<<y<<endl;
    }
    //this type of constructor are initilizer list which will work same as constructor
    Point():x(0),y(0){
       
    }
    Point(int x,int y){
       this->x = x;
       this->y = y;
    }
};
int main(){
  //if no value is passed than constructor without argu will be called  
  Point p1,p2(10,20);
  Point p3(30,40);
  Point p4(60,50);
  p1.print();
  p2.print();
  Point *ptr = new Point(20,30);
  ptr->print();
  return 0;
}