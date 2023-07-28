#include<iostream>
#include<stdlib.h>

using namespace std;


// pass by value
// struct rectangle {
//     int length;
//     int breadth;
// };
// void fun(struct rectangle r){
//     r.length=80;
//     cout<<"Length:"<<r.length<<endl<<"Breadth"<<r.breadth<<endl;
// }

// int main(){
//  rectangle r ={20,30};
//  cout<<r.length<<endl;
//   cout<<r.breadth<<endl;
//  fun(r);
// };

// pass by reference

struct Rectangle {
    int length;
    int breadth;
};
struct Rectangle  *fun()
{
    struct Rectangle *p;
    p = new Rectangle;

    p->length= 90;
    p->breadth= 100;
    return p;
};



int main(){
    struct Rectangle *ptr = fun();
   cout<<"Length:"<<ptr->length<<endl<<"Breadth:"<<ptr->breadth<<endl;
    
 return 0;
};