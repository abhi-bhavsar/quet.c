#include <iostream>
using namespace std;
// argument initialisation section in constuctor
//  constructor_name(argument list) : inintialisation section {assignment and construct body}

class test
{
    int a, b;

public:
    // test(int i ,int j): a(i),b(j)   ---> valid
    // test(int i ,int j): a(i),b(j+i)  -->valid
    // test(int i ,int j): a(i),b(j *2)   -->valid
    //  test(int i ,int j): a(b+i),b(j+a)c  -->invalid
    // test(int i ,int j): b(j),a(i+b)-->this will create problems a is declared first so it will be initialised first

    test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed " << endl;
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    }
};

int main()
{
    test r(4, 7);

    return 0;
}