#include <iostream>
using namespace std;
// parameterised constuctor  // passing parameter to constructor

class complex
{
    int a, b;

public:
    void printdata(void)
    {
        cout << "The complex number is : " << a << "+i " << b << endl;
    }
    complex(int x, int y);
};
complex::complex(int x, int y) // this is parameterised constuctor as it takes 2 parameter
{
    a = x;
    b = y;
}
/*int main()
{
    complex c1(3, 5); // -->implicit call
    c1.printdata();
    complex c2 = complex(4, 5); // explicit call
    c2.printdata();
    return 0;
}
// parameterised constructor
class cons
{
    int real;
    float imaginary;

public:
    cons() {}
    cons(int x, float y);
    void get_complex()
    {
        cout << " " << real << "+i" << imaginary << endl;
    }
};
cons::cons(int x, float y)
{
    real = x;
    imaginary = y;
}

int main()
{
    cons c1(5, 6);
    c1.get_complex();
    cons c2 = cons(5, 5);
    c2.get_complex();
    return 0;
}*/