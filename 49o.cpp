#include <iostream>
using namespace std;

class baseclass
{
public:
    int varbase;
    void display()
    {
        cout << "The Baseclass varbase is : " << varbase << endl;
    }
};
class derivedclass : public baseclass
{
public:
    int varderived;
    void display()
    {
        cout << "The baseclass varbase is : " << varbase << endl;
        cout << "The derivedclass varderived is : " << varderived << endl;
    }
};
// pointer to derived class;
int main()
{
    baseclass *baseclasspointer;
    baseclass baseobj;
    derivedclass deriveobj;
    baseclasspointer = &deriveobj;
    // baseclasspointer->varbase = 4;
    // baseclasspointer->display();
    //  baseclasspointer->varbase = 100;
    // baseclasspointer->display();

    derivedclass *derivedclasspointer;
    derivedclasspointer = &deriveobj;
    derivedclasspointer->varbase = 200;
    derivedclasspointer->varderived = 400;
    derivedclasspointer->display();

    return 0;
}