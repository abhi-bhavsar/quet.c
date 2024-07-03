#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    // writng
    ofstream likhana;
    likhana.open("text.txt");
    likhana << "Hellow brother .." << endl;
    likhana.close();
    ifstream padhana;
    string str, str1;
    padhana.open("text.txt");
    // padhana >> str;
    // cout << str;
    // getline(padhana, str1);
    // cout << str1;
    // using while loop to read multiple lines
    while (padhana.eof() == 0)
    {
        getline(padhana, str1);
        cout << str1 << endl;
    }

    padhana.close();
    return 0;
}