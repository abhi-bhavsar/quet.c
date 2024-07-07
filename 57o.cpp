#include <iostream>
using namespace std;
template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dotproduct(vector &v, vector &vr)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i] * vr.arr[i];
        }

        return d;
    }
};
int main()
{
    vector<float> v1(3);
    vector<float> v2(3);
    vector<float> v3(3);
    v1.arr[0] = 4.6;
    v1.arr[1] = 5.4;
    v1.arr[2] = 9.2;
    v2.arr[0] = 2.9;
    v2.arr[1] = 3.1;
    v2.arr[2] = 4.0;
    v3.arr[0] = 5.7;
    v3.arr[1] = 2.7;
    v3.arr[2] = 6.7;

    float a = v2.dotproduct(v1, v3);
    cout << a << endl;
    return 0;
}