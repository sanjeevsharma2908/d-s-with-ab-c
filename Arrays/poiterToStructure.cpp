#include<iostream>

using namespace std;
struct rectangle{
    int length;
    int breadth;
};

int main(){

 rectangle r1={10,5};
 cout<<r1.length<<endl;
 cout<<r1.breadth<<endl;

rectangle *p = &r1; //creating rectangle in heap;
 p = new rectangle;
 p->length = 100;
 p->breadth = 50;


cout<<p->length<<endl;
cout<<p->breadth<<endl;

    return 0;
}