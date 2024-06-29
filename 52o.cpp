#include <iostream >
using namespace std;
// abstract classes and pure virtual  function

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // now its pure virtual function and the class is also abstract-->pointer have to use derive classes function
};
class cwhvideo : public cwh
{
protected:
    int videolength;

public:
    cwhvideo(string s, float r, int vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "The Title of the video is   : " << title << endl;
        cout << "The Rating of the  video is : " << rating << endl;
        cout << "The length of video is      :   " << videolength << endl;
        cout << endl;
    }
};
class cwhtutorial : public cwh
{
protected:
    int wordslength;

public:
    cwhtutorial(string s, float r, int txt) : cwh(s, r)
    {
        wordslength = txt;
    }
    void display()
    {
        cout << "The title of the tutorial is      :  " << title << endl;
        cout << "The rating of the tutorial is     :  " << rating << endl;
        cout << "The wordlength of the tutorrial is :  " << wordslength << endl;
        cout << endl;
    }
};

int main()
{
    string title;
    float r1, r2;
    int vdl, wdl;
    title = "Clanguage";
    r1 = 4.5;
    r2 = 4.3;
    vdl = 24;
    wdl = 1230;
    cwhvideo obj1(title, r1, vdl);
    obj1.display();
    cwhtutorial obj2(title, r2, wdl);
    obj2.display();
    cout << endl;
    cout << "using pointner" << endl;
    cout << endl;
    // cwh *object[2];
    // object[0] = &obj1;
    // object[1] = &obj2;
    // object[0]->display();
    // object[1]->display();
    cwh *firstobj, *secondobj;
    firstobj = &obj1;
    secondobj = &obj2;
    firstobj->display();
    (*secondobj).display();

    return 0;
}
