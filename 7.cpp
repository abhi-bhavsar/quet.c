#include <iostream>
using namespace std;
// selcetion control structure using if-else and switch case;
int main()
{
    int age;
    cout << "enter age" << endl;
    cin >> age;
    /*         if(age<=12){
     cout<<"your are child"<<endl;
 }
 else if(age>12 &&age<18){
     cout<<"you are teenager"<<endl;
 }
 else if(age>=18 && age<60){
     cout<<"you are adult"<<endl;
 }
 else if(age>=60){
     cout<<"you are senior citizen"<<endl;
 }
 else {
     cout<<"invalid age entered"<<endl;
 }*/
    // switch case
    // if we do not include break in switch cases then all cases are executed including default

    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 60:
        cout << "you are 60" << endl;
        break;
    case 10:
        cout << "you are 10" << endl;
        break;
    default:
        cout << "no special cases" << endl;
        break;
    }
    return 0;
}