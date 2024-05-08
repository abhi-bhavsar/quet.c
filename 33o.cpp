#include <iostream>
using namespace std;
class employee // base class
{
public:
    int id;
    float salary;
    employee(){};
    employee(int inid)
    {
        id = inid;
        salary = 50000;
    }
};
class programmer : public employee
{ // when
public:
    programmer(int intid)
    {
        id = intid;
    } // when we make derived class it calls base call to default consturctor if we dont have default constructor then it throws error
    int languagecode = 9;

    void getdata()
    {
        cout << "The id is  " << id;
    }
};
/*derived class syntax :
class{{derived class name}}:{{visibility-mode}}{{base-class name}}{
    method/class members/etc.
}*/
// creating programmer class derived from employee :
// default visibility mode is private
int main()
{
    employee steve(2), rogers(3);
    cout << steve.salary << endl;
    cout << rogers.salary << endl;
    programmer skill_b(1);
    cout << skill_b.languagecode << endl;
    cout << skill_b.id << endl; // it can access id only if visibility mode set to public
    skill_b.getdata();

    return 0;
}
