#include <iostream>
using namespace std;
// operators and header files in c++
// user defined header files & system header files

int main()
{
    int a = 4, b = 2;
    // arithematic operators
    cout << "operators in c++" << endl
         << endl
         << "Arirthematic operators in c++" << endl
         << "the val of a+b is: " << a + b << endl
         << "the val of a-b is: " << a - b << endl
         << "the val of a*b is: " << a * b << endl
         << "the val of a/b is: " << a / b << endl
         << "the val of a++ is: " << a++ << endl // after executing a -5
         << "the val of a-- is: " << a-- << endl // first print a as 5 then ;a =5 -1 = 4
         << "the val of --a is: " << --a << endl
         << "the val of ++a is: " << ++a << endl
         << endl;

    cout << "the comparision operators are: " << endl;

    cout << "the val of a==b is: " << (a == b) << endl
         << "the val of a!=b is: " << (a != b) << endl
         << "the val of a>b is: " << (a > b) << endl
         << "the val of a<b is: " << (a < b) << endl
         << "the val of a>=b is: " << (a >= b) << endl
         << "the val of a<=b is: " << (a <= b) << endl
         << endl;

    cout << "the logical operatores are: " << endl
         << "the val of  logical operator ((a==b) && (a<b)) is: " << ((a == b) && (a < b)) << endl
         << "the val of logical operator ((a>b || a==b)) is: " << ((a > b || a == b)) << endl
         << "the val of logical operator not (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}
