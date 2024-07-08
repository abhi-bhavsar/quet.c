#include <iostream>
using namespace std;
// class template wirth multiple parameter;
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void classdisplay()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    myclass<int, char> obj(6, 'A');
    myclass<char, char> obj1('A', 'B');
    obj.classdisplay();
    obj1.classdisplay();
    return 0;
}