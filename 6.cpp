#include <iostream>
#include <iomanip>
using namespace std;
// constant ,manipulators, operators precedence
int main()
{
     /*const float pi =3.14;
     cout<<pi<<endl;
     int a =5;
   //  cout<<"a is: "<<a<<endl;
     a=6;  // val get updated
     cout<<"a is: "<<a;*/
     int a = 3, b = 70, c = 900;
     cout << "the val of a is : " << a << endl
          << "the val of b is : " << b << endl
          << "the val of c is : " << c << endl
          << endl;

     cout << "the val of a is : " << setw(3) << a << endl
          << "the val of b is : " << setw(3) << b << endl
          << "the val of c is : " << setw(3) << c << endl;

     int s = (c / a) * b + (b * a) - (c % b) + a;
     cout << s;

     return 0;
}