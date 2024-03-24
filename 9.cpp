#include <iostream>
using namespace std;
// break , contine
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;

        if (i == 3)
        { // num will not be printed after 3
            break;
        }
    }
    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}