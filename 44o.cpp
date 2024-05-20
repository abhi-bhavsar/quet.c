#include <iostream>
using namespace std;
// pointers in classes;

int main()
{

    int a = 5;
    int *ptr = &a;
    delete ptr;
    cout << *(ptr) << endl; //-->now throws garbage
    // using new keyword/operator
    int *p = new int(5);
    delete p;
    // throws garbage;
    float *ptr1 = new float(54.09);
    char *ptr2 = new char('P');
    delete ptr2;
    cout << *(p) << endl;
    cout << *(ptr1) << endl;
    cout << *(ptr2) << endl;
    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // if memory is not available at run-time then it will throw error
    delete[] arr;
    cout << arr[0] << endl; // dynamic memory allocation
    // delete operator/keyword --->it frees respective contigous memory allocation
    //-->frees is_array

    return 0;
}