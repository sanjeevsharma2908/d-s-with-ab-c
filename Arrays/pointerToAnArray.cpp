
#include<iostream>
#include<stdlib.h>


using namespace std;

int main(){
    // int A[5]={0,1,2,3,4};// this array is created inside the stack memory of the main fu
    // int *p = A;
    // for(int i= 0; i < 5; i++){
    //    cout<<A[i]<<endl;
    //    cout<<p[i]<<endl;
    // }
    // return 0;



    //Accessing an array stored in heap memory


    int *p;//
    //p = ( int * )malloc(5* sizeof( int ));// it'll allocates an array of size of 5 integer inside heap memory {in c language}
    p = new int [5];// this is dynamically created array of size 5
    // her only p is inside the function but the array is allocated in the  heap memory
    p[0] = 0;p[1] = 10;p[2] = 20; p[3] = 30; p[4] = 40; 

    for(int i=0; i<5; i++){
        cout<<p[i]<<endl;
        }
        delete [] p;// when using the dynamically allocated memory you have to release the memory
    return 0;



}




