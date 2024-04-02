#include <iostream>
using namespace std;

inline int product(int x, int y)
{
    return x * y;
}
int main()
{
    int a, b;
    cout << "enter values" << endl;
    cin >> a >> b;
    cout << "the prod is " << product(a, b);
    // if this function called multiple times which has simple code then we can use inline fuction so that fucntion called can be replaced with function code at the compile time
    return 0;
}

// default argument
float money(int cash, float rate = 1.10)
{
    return cash * rate;
}
int main()
{
    int cash = 1000;
    float rate;
    cout << "you will recieve " << money(cash) << endl; // here it takes default 1.10 rate
    cout << "vip will recieve " << money(cash, 1.15) << endl;
    // it can changed if not default is taken into consideration
    return 0;
}