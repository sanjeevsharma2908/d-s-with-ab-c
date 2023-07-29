
#include <iostream>

using namespace std;
template<class T>
class Arithmetic
{
private:
    T a;
   T b;

public:
    Arithmetic(T a, T b);
    T add();
   T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a; //   `this`  refers to to the private member variable
    this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithmetic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    // Arithmetic<int> ar(10, 5);
    // cout << "Addition :" << ar.add() << endl;
    // cout << "Subtraction :" << ar.sub() << endl;

    //   Arithmetic<float> ar(10.99, 5.55);
    // cout << "Addition :" << ar.add() << endl;
    // cout << "Subtraction :" << ar.sub() << endl;

      Arithmetic<char> ar('A', 'B');
    cout << "Addition :" <<(int) ar.add() << endl;
    cout << "Subtraction :" <<(int) ar.sub() << endl;

    return 0;
}