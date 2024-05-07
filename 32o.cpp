#include <iostream>
using namespace std;
// deconstructor
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time ehen constructor is called for the object number " << count << endl;
    }
    ~num()
    {
        cout << "this is the time ehen destructor is called for the object number " << count << endl;
        count--;
    }
};
// when an object is destroyed destructor destroys the dynamic memory allocated during object creation
int main()
{
    cout << "we are inside the main function" << endl;
    cout << "creating our first object" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "creating two more objects " << endl;
        num n2;
        {
            cout << "entering this block" << endl;
            cout << "creating one  more objects " << endl;
            num n3;
        }
        cout << "exiting this block" << endl; // exiting block destroys the inside objects
    }
    cout << "back to main" << endl;
    return 0;
}