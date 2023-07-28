// Moduler Programming and functional programming or we can say Procedural Programming

#include <iostream>
using namespace std;


int area (int length , int breadth){
    return length* breadth;
};

int peri(int length , int breadth){
    return 2*(length+breadth);
};

int main(){
    int length = 0, breadth = 0;
    cout<<"Enter length and Breadth"<<endl;
     cin>>length>>breadth;

     int a = area(length, breadth);

     int p = peri(length, breadth);

     cout<<"perimeter:"<<p<<endl<<"Area: "<<a<<endl;

     return 0;

};