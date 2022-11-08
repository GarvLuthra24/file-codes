#include <iostream>
using namespace std;

class complex
{
private:
    int r;
    int c;

public:
    complex()
    {
        this->r = 0;
        this->c = 0;
    }
    complex(int r, int c)
    {
        this->r = r;
        this->c = c;
    }
    void display()
    {
        cout << this->r << "+i" << this->c << endl;
    }

    friend complex *subtract(complex &, complex &);
};

complex *subtract(complex &a, complex &b)
{
    complex *n = new complex;
    n->r = a.r - b.r;
    n->c = a.c - b.c;
    return n;
}

int main()
{
    complex c1(5, 4);
    cout << "complex 1: ";
    c1.display();
    complex c2(1, 2);
    cout << "complex 2: ";
    c2.display();

    complex *n = subtract(c1, c2);

    cout << "complex1 - complex2 : ";
    n->display();
    return 0;
}
