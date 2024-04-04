#include <iostream>
using namespace std;
// recurssive function
/* int factorial(int n);
 int main(){
     int n;
     cout<<"enter num: "<<endl;
     cin>>n;
     cout<<"the factorial of given num is: "<<factorial(n);

     return 0;
 }
  int factorial(int n){
      if(n==0 || n==1){
          return 1;
      }
      return n * factorial(n-1);
  }*/
int fib(int n);
int main()
{
    int n;
    cout << "enter num" << endl;
    cin >> n;
    cout << "the fibonacci term at " << n << " is " << fib(n);
    return 0;
}
int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
