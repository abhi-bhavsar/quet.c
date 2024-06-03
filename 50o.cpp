#include <iostream>
using namespace std;

// virtual functions ;
// pointer from base class pointing to dervied class object and if we want to access derived functions then we needs virtusl function;
class baseclass
{
public:
    int varbase = 2;
    virtual void display()
    {
        cout << "1.Base class var : " << varbase << endl;
    }
};
class deriveclass : public baseclass
{
public:
    int varderive = 4;
    void display()
    {
        cout << "2.base class var : " << varbase << endl;
        cout << "2.Derive class var : " << varderive << endl;
    }
};
int main()
{
    baseclass *baseclasspointer;
    baseclass objbase;
    deriveclass objderive;
    baseclasspointer = &objderive;
    baseclasspointer->varbase;
    baseclasspointer->display();

    return 0;
}