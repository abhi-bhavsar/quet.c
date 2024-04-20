#include <iostream>
using namespace std;
// array of objects and passing object as function arguments
/*class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "enter the id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "the id of employee is: " << id << " salary is: " << salary << endl;
    }
};
int main()
{ // let us assume complany named --> fb
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}*/
// complex numbers using classes func arg

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex t1, complex t2)
    {
        a = t1.a + t2.a;
        b = t1.b + t2.b;
    }
    void displaydata(void)
    {
        cout << "Your complex number is " << a << "+i" << b;
        cout << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setdata(2, 3);
    c1.displaydata();
    c2.setdata(6, 7);
    c2.displaydata();
    c3.setdatabysum(c1, c2);
    c3.displaydata();
    return 0;
}
