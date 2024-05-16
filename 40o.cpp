#include <iostream>
using namespace std;

// virtaul base class  ---> hybrid inheritence (including multiple and multilevel inheritence)
/* student --->test   --->result
           --->sport  --->result  */
class student
{
protected:
    int rollcall;

public:
    void setrollcall(int a)
    {
        rollcall = a;
    }
    void displayrollcall()
    {
        cout << "Your roll call is " << rollcall << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, electronics;

public:
    void setmarks(int m1, int m2)
    {
        maths = m1;
        electronics = m2;
    }
    void displaymarks()
    {
        cout << "Your marks are : "
             << "Maths : " << maths
             << " Electronics : " << electronics << endl;
    }
};
class sport : virtual public student
{
protected:
    float score;

public:
    void setscore(float a)
    {
        score = a;
    }
    void displayscore()
    {
        cout << "The score is : " << score << endl;
    }
};
class result : public test, public sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + electronics + score;
        displayrollcall();
        displayscore();
        displaymarks(); // suppose to be marks and score to be given out of 100
        cout << "Your Total Is : " << (total / 3) << endl;
    }
};
int main()
{
    result p02;
    p02.setrollcall(2);
    p02.setscore(98);
    p02.setmarks(99, 100);
    p02.display();
    return 0;
}