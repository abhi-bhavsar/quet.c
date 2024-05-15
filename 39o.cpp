#include <iostream>
using namespace std;

// Ambiguity resolution operator in inhertence

class base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Kaise ho aap ?" << endl;
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base1 ::greet();
    }
};

class b
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};
class d : public b // though inherited it will call it on say func
{
    int a;

public:
    void say()
    { // overwrited base class b's void say function
        cout << "I am going to win " << endl;
    }
};

int main()
{ /*   Ambiguity 1 :
    base1 object1;
    base2 object2;
    object1.greet();
    object2.greet();
    derived ob3;
    ob3.greet(); // it should print How are you? -->base 1 greet
*/
    // Ambiguity 2 :
    b obj1;
    d obj2;
    obj1.say();
    obj2.say();
    return 0;
}