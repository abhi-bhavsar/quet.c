#include <iostream>
using namespace std;

class base
{
    int data1; // this is default private member can not be accessed through inheritance
public:
    int data2;
    void setdata();
    int getdata1(); // to excess private member of base class we need any function of base class
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : private base // class is being derived publically
{
    int data3;

public:
    int process(); // private memeber of base class can not be inherited but function accessing it can be inherited
    void display();
};

int derived ::process()
{
    setdata();
    data3 = data2 * getdata1(); // now the function of base class becomes private and cannot be accessed outside of it hence we need any thoer inside with them we can access them
    return data3;
}
void derived ::display()
{
    cout << "The value of data1 is " << getdata1() << endl;
    cout << "The value of data2 is  " << getdata2() << endl;
    cout << "The value of data3 is  " << process() << endl;
}
int main()
{
    derived der;
    // der.setdata();
    der.process();
    der.display();
}
