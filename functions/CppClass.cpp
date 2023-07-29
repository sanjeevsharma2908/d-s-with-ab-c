#include <iostream>
using namespace std;

class Rectangle
{
private:
    /* data */
    int length;
    int breadth;

public:
    Rectangle(/* args */) // default constructor
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) // parameterized constructor
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l) // mutating constructor/mutator function
    {
        length = l;
    }
    void setBreadth(int b) // mutating constructor/mutator function
    {
        breadth = b;
    }
    int getLength() // Accessor function
    {
        return length;
    }
    int getBreadth() // Accessor function
    {
        return breadth;
    }
    ~Rectangle() // destructor function
    {
        cout << "Destroyed Rectangle" << endl;
        // if there is dynamically allocated memory we can free it
    }
};

int main()
{
    Rectangle r(10, 5);
    {
        cout<<"Area: "<<r.area()<<endl;
        cout<<"Perimeter: "<<r.perimeter()<<endl;
        
    };


    return 0;
}
