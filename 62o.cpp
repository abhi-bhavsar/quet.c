#include <iostream>
#include <vector>
using namespace std;
// ayyay can't be resized but vector manages its size
// Modeifiers->push back -->add elements to the end
//  v.size--->return vectors size;
template <class t1>
void display(vector<t1> &v)
{
    for (int i = 0l; i < v.size(); i++)
    {
        cout << "nothing here" << endl;
        cout << v[i] << endl; //"->"<< v.at(i) << " ,";
    }
}
int main()
{
    vector<int> v1;
    vector<char> v2(4);   // creating 4 elemtent vector v2
    vector<char> v3(v2);  // creating v3 from vect v2;
    vector<int> v4(5, 4); // 5 times 4 (4 stores 5 times)
    display(v1);
    // v2.push_back(5);
    // display(v2);
    // display(v3);
    display(v4);
    cout << v4.size();
    int element, size;
    // cout << "Enter the size of an array: " << endl;
    // cin >> size;

    /* for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << endl;
        cin >> element;
        v1.push_back(element);
    }
    // v1.pop_back();
    // display(v1);
    cout << endl;
    vector<int>::iterator iter = v1.begin();*/
    // to insert the element  at the begining
    //    v1.insert(iter + 3, 4, 10);              // inset to third position;   //to inset its 4copies
    //  display(v1);
    return 0;
}

// template <class t>
// void display(vector <t> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<endl;
//     }
// }
// int main(){
//     vector <int> v1;
//     vector <float> v2();
//     vector <char> v3 ;
//     vector <int> v4(5,4);
//      vector<int>::iterator it = v4.begin();
//      vector <int > ::iterator ext  = v4.begin();
//     vector <int> :: iterator iflo  = v4.begin();
//   vector <float> :: iterator twin  = v2.begin();
//   int  i, size ;
//     char elements;
//    cin>>size;
//   for(i=0;i<size;i++){
//         cout<<"Enter the elements : ";
//         cin>>elements;
// v2.push_back(elements);
//         // v1.push_back(elements);
//         v3.push_back(elements);
//     }
//     cout<<v3.size()<<endl;
//  v4.insert(it + 4,2,10);
// v4.insert(iflo + 2, 2, 100);
// v4.pop_back(); // deletes last one;
// display(v4);

// return 0;
// }
//
