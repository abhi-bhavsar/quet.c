#include <iostream>
using namespace std;
// copy constuctor

class number
{
    int a;

public:
    number(){};
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "copy constuctor is called";
        a = obj.a;
    }
    void display()
    {
        cout << " The number for the object is : " << a << endl;
    }
};
int main()
{
    number x(2), y(4), z(6), x1, x2;
    x.display();
    y.display();
    z.display();  // when no copy constuctor is found , compiler provides it's own copy construct
    number z1(x); //  -->in the newly created object z1 it will resembles obj x value which is '2'
    z1.display();
    x1 = x; // copy constructor is not invoked
    x1.display();
    number x3 = x;
    x3.display();
    // copy construct is invoked
    // when object is newly created as assign  to pre.obj then invoked otherwise if any two objects already present and we assign to copy one's data then copy constructor is not invoked
    return 0;
}
