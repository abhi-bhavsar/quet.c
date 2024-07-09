#include <iostream>
using namespace std;
/*int funcavg(int x, float y)
{
    float avg = (x + y) / 2;
    return avg;
}
int funcavg2(float x, float y)
{
    float avg = (x + y) / 2;
    return avg;
}*/
template <class t1, class t2>
float funcavg(t1 a, t2 b)
{
    float avg = a + b / 2.0;
    return avg;
}
template <class t1>
void swapp(t1 &a, t1 &b)
{
    t1 temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    // a = funcavg(4, 5.5);
    //  cout << a << endl;
    int x = 7, y = 10;
    swapp(x, y);
    cout << x << endl
         << y << endl;
    return 0;
}
