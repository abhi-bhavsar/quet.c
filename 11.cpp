#include <iostream>
using namespace std;
// array and pointer;
int main()
{
  /*int marks[4]={3,4,5,6};
  int scimarks[2];;
  scimarks[0]= 0;
  scimarks[1]= 1;    //value of an array can be modified further
      cout<<marks[0]<<endl;
        cout<<marks[1]<<endl;
      cout<<marks[2]<<endl;
      cout<<marks[3]<<endl;
     cout<<scimarks[0]<<endl;
     cout<<scimarks[1]<<endl;*/
  // using lops to i/p and o/p array
  int marks[4];
  /*for (int i = 0; i < 4; i++)
  {
    cin >> marks[i];
  }
  cout << endl;   */
  /* for(int i=0;i<4;i++){
       cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
   }*/
  // pointer and arrays
  // int *p = marks;
  /*  cout<<"the value at marks[0] is "<<*p<<endl;
       cout<<"the value at marks[1] is "<<*(p+1)<<endl;
    cout<<"the value at marks[2] is "<<*(p+2)<<endl;
    cout<<"the value at marks[3] is "<<*(p+3)<<endl;*/
  /*  cout << *(p++) << endl;
     cout << *(++p) << endl;
 */
  // using while for input and o/p of string
  int i = 0;
  while (i < 4)
  {
    cin >> marks[i];
    i++;
  }
  cout << endl;
  i = 0; // set i=0 again as it is incremneted to 4 in first while loop
  while (i < 4)
  {
    cout << marks[i] << endl;
    i++;
  }

  return 0;
}