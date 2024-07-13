#include <iostream>
#include <list>
using namespace std;
void display(list<int> &first)
{
    list<int>::iterator it;
    for (it = first.begin(); it != first.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length
                     // list<int>list(7) ;list of size 7 //
    list<int>::iterator iter1;
    list1.push_back(1);
    list1.push_back(245);
    list1.push_back(13);
    list1.push_back(4);
    list1.push_back(5);

    iter1 = list1.begin();
    // cout << *iter1 << " ";
    // iter1++;
    // cout << *iter1 << " ";
    // iter1++;
    // cout << *iter1 << " ";
    // iter1++;
    // cout << *iter1 << " ";
    // iter1++;
    // cout << *iter1 << " ";
    // iter1++;
    //  display(list1);
    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 54;
    iter++;
    *iter = 405;
    iter++;
    //  list2.remove(54);      //all the elements put in here will be removed (45,54,405) will empty the list
    // list2.pop_back();  // removes last one
    // list2.pop_front(); // removes front one
    //   display(list1);
    // // list1.sort();
    // // display(list1);
    // display(list2);
    // list1.merge(list2);
    // cout << "List 1 after merging" << endl;
    // display(list1);
    // list1.sort();
    // display(list1);
    // list1.reverse();
    // display(list1);
    list1.swap(list2);
    display(list1);
    list2.swap(list1);
    return 0;
}
