#include <iostream>
using namespace std;
// classes ---> public & private

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
        cout << "the value of c is : " << c << endl;
        cout << "the value of d is : " << d << endl;
        cout << "the value of e is : " << e << endl;
    }
};
void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee harry;
    // harry.a = 7;//variable a can't be modified since it's prviate
    harry.d = 5;
    harry.e = 4;
    harry.setdata(1, 2, 3);
    harry.getdata();

    return 0;
}

/*

class ceo{
    private :
    int sal,work;
    public :
    int stokes,investment,perquisites;
    void setdata(int salary, int workinghors);
    void getdata(){
     cout<<"the salary of ceo is : "<<sal<<endl;
cout<<"the workinghours of ceo is : "<<work<<endl;
     cout<<"the stokes of ceo is : "<<stokes<<endl;
cout<<"the investment of ceo is : "<<investment<<endl;
     cout<<"the perquisites of ceo is : "<<perquisites<<endl;
    }
};
void ceo :: setdata (int salary, int workinghors){
    sal = salary;
     work = workinghors;
}
int main(){
    ceo Abhi;
    Abhi.stokes = 51;
    Abhi.investment = 12000000;
    Abhi.perquisites = 10;
    Abhi.setdata(120000000,100);
    Abhi.getdata();

    return 0;
}
*/
