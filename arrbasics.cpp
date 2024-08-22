#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    arr[0] = 2;
    arr[1] = 5;
    arr[2] = 10;
    arr[3] = 15;
    arr[4] = 56;
    // cout << arr[1] << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << "\t";
    // }
    for (int a : arr)
    {
        cout << a << endl;
    }
    cout << endl;
    cout << sizeof(arr);
    return 0;
}