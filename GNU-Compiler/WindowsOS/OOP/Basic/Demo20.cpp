#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    virtual void print(); // Pure Virtual
    void show()
    {
        cout << "show base class" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "print derived class" << endl;
    }

    void show()
    {
        cout << "show derived class" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    bptr->print();
    bptr->show();

    return 0;
}
