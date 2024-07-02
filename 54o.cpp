#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    string str; //" abhishek Bhavsar";
    // connecting the file with hout stream
    ofstream out("text.txt");
    // creating name string  filling it by user input;
    cout << "enter your name?" << endl;
    cin >> str;
    // writing a string to the file
    out << str + " is my name";
    out.close();
    string str1;
    string str2;
    ifstream in("text.txt");
    in >> str1;
    getline(in, str2);
    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}