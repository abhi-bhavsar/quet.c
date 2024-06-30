#include <iostream>
#include <fstream>
using namespace std;
// primarily using two func to open a file in c++-->constructor and member function() of class
// ofstream and instream are basically the classes provided by the fstream

/*int main()
{
    string st = " secrets  held in my heart";
    string st2;
    ofstream out("sample53.txt  "); // opening files using constructor  and writing into it     writing the operation
    out << st;
    // ifstream in("sample53.txt");
    // // in >> st2;
    // getline(in, st2);
    // cout << st2;
    return 0;
}*/
int main()
{
    string strwrite, strread;
    // strwrite = "How are you miss? ";
    // ofstream far("sample53.txt");
    // far << strwrite;
    ifstream in("sample53.txt");
    //   in >> strread;
    while (strread == "0/")
    {
        getline(in, strread);
        cout << strread;
        cout << endl;
         
    }

    return 0;
}

