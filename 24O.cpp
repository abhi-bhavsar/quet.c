#include <iostream>
using namespace std;
// friend function & emebers :
// forward declaration -->  to use the class which is not declared yet
class complex;
class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex o1, complex o2); // declared here
    int sumimgcomplex(complex, complex);
};
class complex
{
public:
    // not every func of calculator needs to be friend with complex to  access the data it can accessible to func of calculator by declaring the class as friend
    int a, b;
    // individually declaring function as
    // friend int calculator::sumrealcomplex(complex o1, complex o2);
    // friend int calculator::sumimgcomplex(complex o1, complex o2); // declared friend for data sharing a funtion of one class is supposed to be friend of function from another class --by declaration
    // Aliter :: declaring the entire calculator class as friend_
    friend class calculator; //----->declaring the whole class as friend
public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    } // a funtion of one class is supposed to be friend of function from another class --by declaration
    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void displaydata(void)
    {
        cout << "The complex number is : " << a << " +i" << b << endl;
    }
};
int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a; // function definition to perform action
}
int calculator::sumimgcomplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{

    complex c1, c2, c5;
    calculator c3, c4;
    c1.setdata(1, 5);
    c1.displaydata();
    c2.setdata(7, 3);
    c2.displaydata();
    c5.setdatabysum(c1, c2);
    c5.displaydata();
    cout << "The sum of real numbers is :" << c3.sumrealcomplex(c1, c2) << endl;
    cout << "The sum img part is " << c4.sumrealcomplex(c1, c2) << "i" << endl;
    return 0;
}