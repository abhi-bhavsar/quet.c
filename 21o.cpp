#include <iostream>
// static variable and static functon -->static data members
// static functions can only access static data members(static variables)
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of the employee is " << id << " and this is employee number: " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the val of count is " << count << endl;
    }
};
int employee::count; // default value is 0;
int main()
{
    employee rohit, marcus, steve;
    rohit.setdata();
    rohit.getdata();
    employee::getcount();

    marcus.setdata();
    marcus.getdata();
    employee::getcount();

    steve.setdata();
    steve.getdata();
    employee::getcount();

    return 0;
}
/*
class employee{
    int id;
    static int count;
    public :
    void getdata(void){
        cout<<"enter the id of epmloyee:  "<<endl;
        cin>>id;
        count++;
    }
    void setdata(void){
        cout<<"the id of employee is "<<id<<"and the employee num is : "<<count<<endl;
    }
    static void countdata(void){
        cout<<"the value of count is : "<<count<<endl;
    }
};
int employee:: count = 100;  //defaultl value is 0;

int main(){
    employee a,b,c,d,e;
    a.getdata();
    a.setdata();
    a.countdata();
    b.getdata();
    b.setdata();
    b.countdata();
    c.getdata();
    c.setdata();
    c.countdata();
    d.getdata();
    d.setdata();
    d.countdata();
    e.getdata();
    e.setdata();
    e.countdata();
    return 0;
}*/