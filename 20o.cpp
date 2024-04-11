#include <iostream>
using namespace std;
// objects memory allocation using arrays
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "enter the id of the item " << endl;
    cin >> itemid[counter];
    cout << "enter the price of the item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        // cout<<"1 "<<endl;
        cout << "the price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop company;
    company.initcounter();
    company.setprice();
    company.setprice();
    company.setprice();
    company.setprice();
    company.displayprice();
    return 0;
}
/*
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class complex {
    int a,b;
    public :
    void setdata(int v1  , int v2){
        a = v1;
        b = v2;
    }
    void setdatabysum(complex s1  ,complex s2){
        a = s1.a+s2.a;
        b = s2.b+s2.b;
    }
    void printdata(){
        cout<<"complex num : "<<a<<"+"<<"i"<<b<<endl;}
};
int main(){
    complex c1,c2,c3;
    c1.setdata(4,6);
    c1.printdata();
    c2.setdata(6,2);
    c2.printdata();
    c3.setdatabysum(c1,c2);
    c3.printdata();


    return 0;
}*/