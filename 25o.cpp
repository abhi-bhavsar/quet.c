#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setdata(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "The sum of Data form Object of X and Y is  :" << o1.data + o2.num << endl;
}
int main()
{
    X a;
    Y b;
    a.setdata(2);
    b.setdata(4);
    add(a, b);
    return 0;
}