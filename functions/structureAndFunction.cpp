#include <iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};



int area(struct Rectangle r)
{
    return r.length * r.breadth;
};

int peri(struct Rectangle r)
{
    return 2 * (r.length + r.breadth);
};

int main()

{
    Rectangle r={0,0};
    int length = 0, breadth = 0;
    cout << "Enter length and Breadth";
    cin >> r.length >> r.breadth;

    int a = area(r);

    int p = peri(r);

    cout << "perimeter:" << p << endl
         << "Area: " << a << endl;

    return 0;
};
