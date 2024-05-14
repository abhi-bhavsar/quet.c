#include <iostream>
using namespace std;
#include <cmath>
/*You have to create 2 classes:*/

/*SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes
Also, answer the questions given below.

What type of Inheritance are you using?  -->Multilevel Inheritence
Which mode of Inheritance are you using?    --->protected for declaring variable and accessing them public vissibility mode
Create an object of HybridCalculator and display results of simple and scientific calculator.
How is code reusability implemented?   -->due to multilevel inherit, simple and calci fun are implemented in scientific calci which provides code reusability*/
class calculator
{
protected:
    int firstnum, secondnum;

public:
    void setdata(int x, int y)
    {
        firstnum = x;
        secondnum = y;
    }
    void displaysum()
    {
        cout << "The sum of Elements are : " << firstnum + secondnum << endl;
    }
    void displaydifference()
    {
        cout << "The difference is : " << secondnum - firstnum << endl;
    }
    void displayproduct()
    {
        cout << "The product of Elements is : " << firstnum * secondnum << endl;
    }
    void displaydivision()
    {
        cout << "The division is : " << firstnum / secondnum << endl;
    }
    void displayremainder()
    {
        cout << "The remainder is : " << firstnum % secondnum << endl;
    }
};
class simplecalculator : public calculator
{
protected:
    int anum;

public:
    void setnumber(int x)
    {
        anum = x;
    }
    void checknumber(int x)
    {
        if (x % 2 != 0)
        {
            cout << "Odd number" << endl;
        }
        else
        {
            cout << "Even number" << endl;
        }
    }
};
class scientificcalculator : public simplecalculator
{
    // protected:
    //     int num1, num2;

public:
    // {
    //     num1 = x;
    //     num2 = y;
    // }
    int prime(int x)
    {
        simplecalculator ::setnumber(x);
        int i;
        for (i = 2; i < sqrt(x); i++)
        {
            if (x % i == 0)
            {
                return false;
                break;
            }
        }
        return true;
    }
    bool checkprime(int x)
    {
        // scientificcalculator ::setnumber(x);
        int y = prime(x);
        if (y > 1)
        {
            cout << "It's prime" << endl;
        }
        else
        {
            cout << "Not a prime" << endl;
        }
    }
    void table(int x)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << " " << x << "* " << i << " = " << x * i << endl;
        }
    }
};

int main()
{
    scientificcalculator abhi;
    abhi.table(2);
    abhi.checkprime(9);
    abhi.setdata(8, 8);
    abhi.displayproduct();
    abhi.setnumber(5);
    abhi.checknumber(5);
    return 0;
}