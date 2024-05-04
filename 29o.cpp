// constuctor with default argument
#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int x, int y = 1, int z = 10)
    {
        data1 = x; // if value is not inintialised in inmplicit call then default value is assigned
        data2 = y;
        data3 = z;
    }
    void printdata(void);
};
void simple ::printdata(void)
{
    cout << "The data1 is :  " << data1 << " Data2 is " << data2 << " & data3 is" << data3 << endl;
}

int main()
{
    simple s(100, 101);
    s.printdata();
    return 0;
}