// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// nestling of member function
// one function can be hidden between another func ie, check binary can be implemented within ones complement means it will i/p bin then check if it is correct then it will apply ones complement
// chk_bin is not passed as private funct
// by default members of class are the private
class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void display(void);
    void ones(void);
};

void binary::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
    chk_bin(); // Call chk_bin to validate the binary number after it's input by the user
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

/*void binary::display(void) {
    cout << "Binary number: " << s << endl;
}*/
void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}
void binary::display(void)
{
    cout << "binary number: " << s << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    cout << "after ones complement" << endl;
    b.ones();
    b.display();

    return 0;
}
