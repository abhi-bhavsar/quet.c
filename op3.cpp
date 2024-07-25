#include <iostream>
#include <string>
using namespace std;
// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
class person
{
    string name;
    int age;
    string country;

public:
    // person(string n, int a, string c)
    // {
    //     name  = n;
    //     age =  a  ;
    // country   = c ;
    // }
    void setdata(string n, int a, string c)
    {
        name = n;
        age = a;
        country = c;
    }
    void getdata()
    {
        cout << "The Person's name is : " << name << endl
             << "The Person's age is : " << age << endl
             << "The Person's country is : " << country;
    }
};
int main()
{
    person p2;
    // string r;
    // cin >> r;
    p2.setdata("Abhi", 18, "Bharat");
    p2.getdata();
    return 0;
}
