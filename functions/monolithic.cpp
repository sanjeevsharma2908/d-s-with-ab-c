#include <iostream>


//Everything is written inside the main fuction -which is why it is called `Monolithic Programming`
using namespace std;

int main(){
   int length = 0 , breadth = 0 ;

   cout<<"Enter Length and Breadth"<<endl;

   cin>> length >> breadth;

   int area = length * breadth;

   int peri = 2* ( length+ breadth);

   cout <<"Area:"<< area << endl <<"Perimeter:"<< peri << endl;

   return 0;
}