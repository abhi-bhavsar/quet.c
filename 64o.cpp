#include <iostream>
#include <map>
#include <string>
using namespace std;
// map is basically key->value ex;rohan->44 (roll call of rohan)
// map is an associative array;
int main()
{
    map<string, float> marksmap;
    marksmap["Abhi"] = 98.60;
    marksmap["somesh"] = 84.12;
    marksmap["shruti"] = 91.70;
    marksmap["aditya"] = 82.07;
    marksmap["shrusti"] = 78.9;
    marksmap["ajay"] = 56.60;
    marksmap.insert({{"steve", 78}, {"roger", 80}});
    map<string, float>::iterator itr;
    for (itr = marksmap.begin(); itr != marksmap.end(); itr++)
    {
        cout << (*itr).first << " -->" << (*itr).second << "\n";
    }
    cout << "Size of Map : " << marksmap.size() << endl;
    cout << "Size of empty : " << marksmap.empty() << endl;
    cout << "Size of maxsiz : " << marksmap.max_size() << endl;

    return 0;
}