#include <iostream>
#include <cmath>
using namespace std;
// 1. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
const double pi = 3.14; //
class circle
{
    int radius;

public:
    circle(int x)
    {
        radius = x;
    }
    float getarea()
    {
        return pi * pow(radius, 2);
    }
    float getcircumference()
    {
        return 2 * pi * radius;
    }
};
int main()
{
    circle c1(5);
    float area = c1.getarea();
    float circumference = c1.getcircumference();
    printf("Area : %f \n Circumference : %f", area, circumference);
    return 0;
}
