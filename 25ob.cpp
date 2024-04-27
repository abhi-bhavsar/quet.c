#include <iostream>
using namespace std;
class c2;
class c1
{
    int val;

public:
    void setdata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};
class c2
{
    int val2; // friend fun should be declared so thar exchnage can access the classes data

public:
    void setdata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &x, c2 &y);
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 obj1;
    c2 obj2;
    obj1.setdata(34);
    obj2.setdata(43);
    cout << endl;
    exchange(obj1, obj2);
    cout << "the cal of c1 is : ";
    obj1.display();
    cout << "the cal of c2 is : ";
    obj2.display();
    return 0;
}
