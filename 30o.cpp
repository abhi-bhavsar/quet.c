// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float returnvalue;
    float interestrate;

public:
    bankdeposit(){};                    //  --->helps to create blank objects then to initialize them with futher declaration
    bankdeposit(int p, int y, float r); // rate in float
    bankdeposit(int p, int y, int r);   // rate in proper int
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}
bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankdeposit::show()
{
    cout << "The principal amt  " << principal
         << "for years  " << years << "with rate  " << interestrate
         << "is " << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}
