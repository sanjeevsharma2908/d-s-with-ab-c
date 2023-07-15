//call by value
//--it should be used when you want  a function to return a value by processing the passed value
#include<iostream>

using namespace std;

int addison (int a,int b){
    
    int sum = a + b;
    return sum;
}
// int main(){
//     int x = 20;
//     int y = 30;
//     int result = addison (x,y);
//     cout<<result<<endl;
//         return 0;

// }


//call by address

void swap (int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
};
// int main(){
// int num1 =10,num2=15;
// swap (&num1,&num2);
// cout<<"first Number "<<num1<<endl;
// cout<<"second Number "<<num2<<endl;
// return 0;
// }

// call by reference




void swap (int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    
};

int main(){
    int num1 =10,num2=15;
    swap (num1,num2);
    cout<<"first Number "<<num1<<endl;
    cout<<"second Number "<<num2<<endl;
    return 0;
};