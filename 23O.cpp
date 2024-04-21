#include <iostream>
using namespace std;
// friend function

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex setbysum(complex o1, complex o2);
    void displaydata(void)
    {
        cout << "The complex number is " << a << " +i" << b << endl;
    }
};
complex setbysum(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o2.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 4);
    c1.displaydata();
    c2.setdata(3, 7);
    c2.displaydata();
    c3 = setbysum(c1, c2);
    c3.displaydata();

    return 0;
}