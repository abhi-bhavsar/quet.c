#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    // this can also be used to get object in return
    /*  A &setdata(int a)
       {
           this->a = a;
           return *this;
       }*/
    //  this is keyword which which is pointer points to the object which invokes the member function
    void getdata()
    {
        cout << "The val of a is : " << a << endl;
    }
};

int main()
{
    A a;
    a.setdata(5); //.getdata();
    a.getdata();

    return 0;
}