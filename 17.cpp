#include <iostream>
using namespace std;
// function overloading  -
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int cylinder(int r, int h)
{
    return 3.14 * r * r * h;
}
int cube(int a)
{
    return a * a * a;
}
int cuboid(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout << "the sum of 3 and 5 is : " << sum(3, 5) << endl;
    cout << "the sum of 3 and 5 and 7 is : " << sum(3, 5, 7) << endl;
    cout << "the volume of cynlinder with r = 3 and h = 5 is : " << cylinder(3, 5) << endl;
    cout << "the area of cube is : " << cube(3) << endl;
    cout << "the volm of cuboid is : " << cuboid(3, 5, 7) << endl;
    return 0;
}