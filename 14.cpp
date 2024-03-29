#include <iostream>
using namespace std;
void swap(int a, int b);
void swappointer(int *a, int *b);
void swapreferncevar(int &a, int &b);
int main()
{
    int a, b;
    cout << "value of a is : " << endl;
    cin >> a;
    cout << "value of b is : " << endl;
    cin >> b;
    cout << "using void function" << endl;
    swap(a, b);
    cout << endl;
    cout << "swapping using pointer" << endl;
    swappointer(&a, &b); // call by reference using pointer
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;
    // val of a & b is now swapped henced next func will return its earlier value
    cout << endl;
    cout << "swapping using refernce variable" << endl;
    swapreferncevar(a, b);
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;
}
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp; // since values are passsed by address changes made here will reflect in main function
}
void swapreferncevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
