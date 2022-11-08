#include <iostream>
using namespace std;

class Pair
{
private:
    int i;
    int j;

public:
    Pair()
    {
        this->i = 0;
        this->j = 0;
    }
    Pair(int x, int y)
    {
        this->i = x;
        this->j = y;
    }

    void display()
    {
        cout << "i: " << this->i << endl;
        cout << "j: " << this->j << endl;
        return;
    }
    friend int addition(Pair &);
};

int addition(Pair &p)
{

    // pointer to data members
    int(Pair ::*opt1) = &Pair ::i;
    int(Pair ::*opt2) = &Pair ::j;
    return p.*opt1 + p.*opt2;
}

int main()
{
    // pointer to member function
    void (Pair ::*show)(void) = &Pair::display;
    Pair p1(1, 2);
    (p1.*show)();
    int add = addition(p1);
    cout << "Addition: " << add << endl;
    return 0;
}