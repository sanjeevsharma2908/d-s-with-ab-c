#include<iostream>
using namespace std;
struct Rectangle 
{
    int length;
    int breadth;
    char x; // for making its accessibility easier compiler will assign [4bytes] for this variable, however it'll be using only[1 bytes]
    // inside the structure padding is done 
};
int main(){
 struct Rectangle r1={10,5};

 r1.breadth = 50 ;
 r1.breadth = 100 ;
 cout<<r1.length<<endl;
 cout<<r1.breadth<<endl;
 return 0;
    
 } 
