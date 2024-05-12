#include <iostream>
using namespace std;
// multilevel inheritance
class student
{
protected:
    int rollnumber;

public:
    void setrollnumber(int);
    void getrollnumber(void);
};
void student ::setrollnumber(int k)
{
    rollnumber = k;
}
void student ::getrollnumber(void)
{
    cout << "The roll num is : " << rollnumber << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(int m1, int m2);
    void getmarks(void);
};
void exam ::setmarks(int m1, int m2)
{
    maths = m1;
    physics = m2;
};
void exam ::getmarks(void)
{
    cout << "The marks of maths are: " << maths << endl;
    cout << "The marks of physics are:  " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        getrollnumber();

        getmarks();
        cout << "the percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{ // exam abhi;
    result abhi;
    abhi.setrollnumber(2);
    abhi.setmarks(100, 99);
    abhi.display();
    return 0;
}

/*
    If we are inhereting B from A and C from B: [A--->B--->C]
    1.A is base class for b and B is base class for C
    2. A--->B--->C is called inheritence path
*/
