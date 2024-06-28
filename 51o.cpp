#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r; // abstract classes are those classes which will be used for inheriting or deriving other classes from it and has atleast one virtual function are called as abstract
    }
    virtual void display()
    // virtual void display()=0;
    { // if  display in cwh is not virtual this wil run using pointer to access data members of derived class;
        cout << "self function is called" << endl;
    };
};
class cwhvideo : public cwh
{
    int videolength;

public:
    cwhvideo(string s, float r, int vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "The title of vidoe is : " << title << endl;
        cout << "Ratings of video is : " << rating << endl;
        cout << "Length of vidoe is : " << videolength << " in minutes" << endl;
        cout << endl;
    }
};
class cwhtext : public cwh
{
    int textcount;

public:
    cwhtext(string s, float r, int tx) : cwh(s, r)
    {
        textcount = tx;
    }
    void display()
    {
        cout << "The title of tutorial  is : " << title << endl;
        cout << "Ratings of tutorial :  " << rating << "Out of 5 Stars" << endl;
        cout << "Length :  " << textcount << " of tutorial " << endl;
        cout << endl;
    }
};
int main()
{
    string title;
    float rating, rating1, vl;
    int tx;
    //  for vidoe;
    title = "c++tutorial";
    rating = 4.5;
    vl = 28;
    tx = 2800;
    cwhvideo videos(title, rating, vl);
    //  videos.display();
    cwhtext tutorial(title, rating1, tx);
    //  tutorial.display();

    // cwh *obj[2];
    // obj[0] = &videos;
    // obj[1] = &tutorial;
    // obj[0]->display();
    // obj[1]->display();
    cwh *object1, *object2;
    object1 = &videos;
    object2 = &tutorial;
    object1->display();
    object2->display();
    return 0;
}
