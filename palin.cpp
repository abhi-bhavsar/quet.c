#include <iostream>
using namespace std;
int main()
{
    int i, number;
    cout << "number: " << endl;
    int str1[6], str2[6];
    cin >> number;
    int count = 0;
    while (number != 0)
    {
        int rem = number % 10;
        str1[count] = rem;
        number = number / 10;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        cout << str1[i];
        str2[i] = str1[i];
    }
    for (int i = 0; i < count / 2; i++)
    {
        int temp = str2[i];
        str2[i] = str2[count - 1 - i];
        str2[count - 1 - i] = temp;
    }
    cout << "\n";
    for (int i = 0; i < count; i++)
    {

        cout << "" << str2[i];
    }
    for (int i = 0; i < count; i++)
    {
        if (str2[i] != str1[i])
        {
            cout << "\nnot a palindrome";
            exit(0);
        }
    }
    cout << "\nit's a palindrome" << endl;
    return 0;
}
/*
bool palin_chk(int n){
    int reverse_num=0,original_num = n;
    while (original_num >0){
        int digit = n % 10 ;
        reverse_num =  reverse_num * 10 + digit;
        n = n  /10;
    }
    return ( original_num==reverse_num);

}
int main(){
    int n;
    cout<<"enter num"<<endl;
    cin>>n;
 // int palin =;
    if(  palin_chk(n)){
        cout<<n<<" its a palin";
    }
    else {
        cout<<n<<" not a palin";
    }
    return 0;
}*/