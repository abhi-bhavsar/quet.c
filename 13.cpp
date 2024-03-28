#include <iostream>
using namespace std;
// function prototype
int sum(int a, int b)
{
    int c = a + b;
    return c;
};
void greet();
int main()
{
    int a, b;
    cout << "enter first num:  " << endl;
    cin >> a;
    cout << "enter second num: " << endl;
    cin >> b;
    cout << "sum is : " << sum(a, b) << endl;
    greet();

    return 0;
}
void greet()
{
    cout << "hello,how are you? ";
}