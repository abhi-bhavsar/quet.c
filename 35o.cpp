#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    int b;
    base(){};
    base(int x, int y)
    {
        a = x;
        b = 10;
    }
    void getdata()
    {
        cout << "a is: " << endl;
    }
};
class derive : protected base
{
public:
    int commoncode;
    void setdata()
    {
        a = 10;
        commoncode = 456545;
    }
    void getdata1();
};
void derive ::getdata1()
{
    cout << "the commoncode is :" << commoncode << endl;
    cout << "The a is :  " << a << endl;
}
int main()
{
    derive red;
    red.setdata();
    red.getdata1();
    return 0;
}