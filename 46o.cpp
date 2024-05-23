#include <iostream>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(int x, float y)
    {
        id = x;
        price = y;
    }
    void getdata()
    {
        cout << "code of item is " << id << endl;
        cout << "price of item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    int i, p;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter ID and Price : " << endl;
        cin >> p >> q;
        (*ptr).setdata(p, q);
        // ptr->setdata(p,q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "item number" << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}