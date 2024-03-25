#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *b = &a;
    // adress of operator
    cout << "the address of a is " << &a << endl;
    cout << "the address of a is " << b << endl;
    //    * (value at) ---> derefernce operator
    cout << "the value at address of a is " << a << endl;
    cout << "the value at address of a is " << *b << endl;
    // pointer to pointer
    int **c = &b;
    cout << "the address of b is " << &b << endl;
    cout << "the address of pointer b is " << c << endl;
    cout << "the value at address of c is " << *b << endl;
    cout << "the value at address of c is   " << **c << endl;

    return 0;
}