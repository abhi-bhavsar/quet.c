#include <iostream>
// endl has same effect as \n
// variables in c++
#include <iostream>
using namespace std;
int A = 34; // this is global  variable
int main()
{
    // int A= 35;  // name of global and local variable can be same
    // lcoal>global precedence
    int a = 4, z = 5;
    a = 6; // a gets updated
    float pi = 3.14;
    char c = 'A';
    bool b = true;
    cout << "the value of a is: " << a << endl
         << "the value of b is: " << z << endl
         << "the value of pi is: " << pi << endl
         << "the vlaue of c is: " << c << endl
         << "the valuecof A is: " << A << endl
         << "the value of b is: " << b;
    //     cout<<"size of int: "<<sizeof(int)<<endl;
    //   cout<<"size of char: "<<sizeof(char)<<endl;
    //   cout<<"size of double floating : "<<sizeof(double)<<endl;
    //   cout<<"size of boolean: "<<sizeof(bool)<<endl;
    //   cout<<"size of long: "<<sizeof(long)<<endl;

    return 0;
}