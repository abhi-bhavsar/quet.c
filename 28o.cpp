#include <iostream>
using namespace std;
// constructor overloading
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0; // second constructor
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void printdata(void);
    // void printdata(void)
    // {
    //     cout << "The complex number is : " << a << "+i" << b << endl;
    // }
};
void complex::printdata(void)
{
    cout << "The complex number is : " << a << "+i" << b << endl;
}
int main()
{
    complex c1(3, 5);
    c1.printdata();
    complex c2(3); // the arguments which matches with one of multiple construct that construct will be executed using the private data of classes
    c2.printdata();
    complex c3;
    c3.printdata();
    return 0;
}