#include <iostream>
using namespace std;
class Rectangle
{ 
    public: // in c++ classes members are by default private, however in struct 
    int length;
    int breadth;

    void initialise(int l, int b)
    {
        length = l;
        breadth = b;
    };

    int area()
    {
        return length * breadth;
    };

    int peri()
    {
        return 2 * (length + breadth);
    };
};


int main()

{
    Rectangle r;
    int l, b;
    cout << "Enter length and Breadth";
    cin >> l >> b;

    r.initialise(l, b);

    int a = r.area();

    int p = r.peri();

    cout << "perimeter:" << p << endl
         << "Area: " << a << endl;

    return 0;
};
