#include <iostream>
using namespace std;

// template functin overloading , overloading template function
template <class t>
class abhi
{
public:
    t data1;
    abhi(t x)
    {
        data1 = x;
    }
    void display();
};

template <class t>
void abhi<t>::display()
{
    cout << data1 << endl;
}
template <class t>
void func(t a)
{
    cout << "T am templetised function " << a << endl;
}
template <class t>
void func1(t a)
{
    cout << "T am temletised function1 " << a << endl;
}
int main()
{
    // abhi<float> a(5.9);
    // cout << a.data1 << endl;
    // a.display();
    func(4);
    func1(5);
    return 0;
}

// STL  -->standard templete library
// provides -->reuse (well tested components)