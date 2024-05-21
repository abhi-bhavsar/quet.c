#include <iostream>
using namespace std;
// using pointer with classes
class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata()
    {
        cout << "The real part is : " << real << endl;
        cout << "The complex part is : " << imaginary << endl;
    }
};
int main()
{
    complex c1;
    complex *ptr = &c1;          // to access public memebers of object with pointer
    complex *ptr1 = new complex; // usig new operator for accessing data members of object
    complex *ptr2 = new complex;
    complex *ptr3 = new complex[3]; // array class pointer and new operator
    ptr2->setdata(5, 7);            // arrow can be used to derefernce
    ptr2->getdata();
    c1.setdata(5, 10);
    c1.getdata();
    (*ptr).setdata(2, 4);
    (*ptr).getdata();
    (*ptr1).setdata(9, 18);
    (*ptr1).getdata();
    (*ptr3).setdata(6, 12);
    (*ptr3).getdata();
    return 0;
}
/*
class product{
     int num1,num2;
     public :
     void setdata(int x, int y){
         num1 = x;
         num2 = y;
     }
     void getdata(){

         cout<< " product  is "<<num2*num1<<endl;
     }
 };    //types of syntaxes using pointer and  new operator
 int main(){
     product c2;
     c2.setdata(4,5);
     c2.getdata();
     cout<<endl;
     product *ptr  = &c2;
     (*ptr).setdata(5,5);
     (*ptr).getdata();
      cout<<endl;
     product *ptr1 =  new product;
     (*ptr1).setdata(6,7);
     (*ptr1).getdata();
      cout<<endl;
      product *ptr2 = new product;
      product *ptr3  = new product[3];
      ptr2->setdata(2,4);
      ptr2->getdata();
     return 0;
 }  */