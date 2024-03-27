#include <iostream>
using namespace std;
// structure,union,enum;
/*struct employee{
    int id;
    char fav_char;
    float salary;
}*/
typedef struct employee
{
    int id;
    char fav_char;
    float salary;
} ep;
union ceo
{
    int salary;
    float holding;
    char tag;
};
// ep is (typedef)  struct employee can now be written as ep
int main()
{
    /*struct employee rogers;
       ep steve;
      steve.id= 5;
      steve.fav_char='s';
      steve.salary= 1200000;
      cout<<steve.id<<endl;
      cout<<steve.fav_char<<endl;
      cout<<steve.salary<<endl;*/

    // union
    /*
      union ceo c;
      //single entity can be used from union at a time it means using salary;holdings;tag will throw garbage valuw for salary and holding and it will give right value for tag as only single entity can be used at a time(memory is shared);
      c.salary = 2300000;
      c.holding = 5;
      c.tag = 'P';
      cout<<"the salary of ceo is "<<c.salary<<endl;
      cout<<"the holings of ceo are: "<<c.holding<<endl;
      cout<<"the tag of ceo is: "<<c.tag;
  */
    /*enum meal {breakfast , lunch , dinner };
   meal m1 = lunch;
   cout<<m1;*/
    return 0;
}