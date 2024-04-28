#include <iostream>
using namespace std;
// constructor in classes
class complex
{
    int a, b;

public:
    // creating a construct
    // a construsct is special member function with the same name as of class
    // it is used to initialize the object if its class
    // it is automatically invoked
    complex(void); // constuctor declaration    -->declared here
    void printdata(void)
    {
        cout << "The complex number is : " << a << "+i" << b << endl;
    }
};
complex::complex(void) //  --->define here          object is being constructed here
{
    a = 10;
    b = 0;
}
int main()
{
    complex c1;
    c1.printdata();
    return 0;
}