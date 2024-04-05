// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
/*class Employee{
    private :
    int a,b,c;
    public :
    int d,e;
    void setdata(int a1,int b1,int c1);  //decalred here;
    void getdata(){
        cout<<"the val if a is : "<<a<<endl;
       cout<<"the val if b is : "<<b<<endl;
        cout<<"the val if c is : "<<c<<endl;
        cout<<"the val if d is : "<<d<<endl;
        cout<<"the val if e is : "<<e<<endl;
    }
};
void Employee :: setdata(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main() {
    Employee Abhi;
    //Abhi.a = 1; this will thow error as a is private variable
    Abhi.d = 3;
    Abhi.e = 5;
    Abhi.setdata(1,2,6);
    Abhi.getdata();
     return 0;
}*/
// Nesting members
/*class binary{
    private:
    string s;
    void chk_bin(void);
    public :
    void read(void);
    void ones(void);
    void display(void);
};
void binary :: read(void){
    cout<<"Enter binary number:   "<<endl;
    cin>>s;
}
void binary ::  chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary number!"<<endl;
            exit(0);
        }
    }
}
void binary :: ones(void){
    chk_bin();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
         else{
            s.at(i) = '0';
        }
    }
}
void binary :: display(void){
    cout<<"Display Number : "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }cout<<endl;
}
int main(){

    binary b;
     b.read();
    // b.display();
//     b.chk_bin();   -->cant be if private
     b.ones();
     b.display();
    return 0;
}*/

/*class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void) {counter = 0;}
    void setprice(void);
    void displayprice(void);
};
void shop :: setprice(void){
        cout<<"enter id of item no "<<counter+1<<" is"<<endl;
        cin>>itemid[counter];
        cout<<"enter price of item"<<endl;
        cin>>itemprice[counter];
        counter++;
}
void shop :: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the item id "<<itemid[i]<<"price is : "<<itemprice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
dukaan.displayprice();
    return 0;
}*/
/*class shop {
    private :
    int itemprice[100];
    int itemid[100];
    int counter;
        public :
        void initcounter(void){ counter = 0;};
        void setprice(void);
        void displayprice(void);
    };
void shop :: setprice(void){
    cout<<"enter the item id : "<<endl;
    cin>>itemid[counter];
    cout<<"enter the item price : "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
int main(){
    shop dukkan;
    dukkan.initcounter();
    for(int i=1;i<=5;i++){
        dukkan.setprice();
    }
    dukkan.displayprice();
    return 0;
}*/
/*class Employee{
    int id;
    static int count;
    public :
    void setdata(void){
        cout<<"Enter the id : "<<endl;
    cin>>id;
    count++;
    }
    void getdata(void){
         cout<<"The id is  "<<id<<" of employee num "<<count <<endl;}

     static void getcount(void){
         cout<<"the value of count is "<<count<<endl;
     }
};//static variable is written outside of thwe class
  //syntax for declaring varable to be static
  //default value is  0
  //static variable gets attached to class and get updated as every new object get created

  //static function are created to control the static members
int Employee::count;
int main(){
    Employee E1,E2,E3,E4;
    E1.setdata();
    E1.getdata();
    Employee::getcount();
 E2.setdata();
    E2.getdata();
        Employee::getcount();
    E3.setdata();
    E3.getdata();
        Employee::getcount();
    E4.setdata();
    E4.getdata();
    Employee::getcount();

    return 0;
}*/

class employee
{
private:
    int id;
    // static
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the ID";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The employee id is " << id << "No of employee is " << count << endl;
    }
    static void getcount(void)
    {
        cout << "The count of employee is" << count;
    }
};
int employee::count;
int main()
{
    employee e1, e2, e3;
    e1.setdata();
    e1.getdata();
    employee::getcount();
    e2.setdata();
    e2.getdata();
    employee::getcount();
    e3.setdata();
    e3.getdata();
    employee::getcount();
    return 0;
}
