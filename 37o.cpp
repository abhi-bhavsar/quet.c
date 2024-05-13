#include <iostream>
using namespace std;

// syntax for multiple inheritence;
/*class derived c : visibility_mode_1 base_1 , visibility_mode_2 base_2{
    body of class c
};*/

class base1
{
protected:
    int base1int;

public:
    void setdata(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setdata1(int a)
    {
        base2int = a;
    }
};
class derived : public base1, public base2
{
public:
    void getdata()
    {
        cout << "The value of base1 is : " << base1int << endl;
        cout << "The vlaue of base2 is : " << base2int << endl;
        cout << "the sum of base1 and base2 is : " << base1int + base2int << endl;
    }
};

/*
The derived class will look something like this :
base1int : protected
bade2int : protected
data memeber function which are are public in base classes they will remain public as inherited publically
*/
int main()
{
    derived a, b;
    a.setdata(2);
    a.setdata1(6);
    a.getdata();

    return 0;
}
