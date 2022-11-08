#include <iostream>
#include <cmath>
using namespace std;

class square;
class rectangle
{
private:
    int l;
    int b;

public:
    rectangle()
    {
        this->l = 0;
        this->b = 0;
    }
    rectangle(int l, int b)
    {
        this->l = l;
        this->b = b;
    }

    int area()
    {
        return this->l * this->b;
    }

    friend class square;
};

class square
{
private:
    float s;

public:
    square()
    {
        this->s = 0;
    }
    square(int s)
    {
        this->s = s;
    }
    void rectangleToSquare(rectangle &r)
    {
        float area = r.l * r.b;
        this->s = sqrt(area);
    }
    void side()
    {
        cout << "Side of square: " << this->s << endl;
    }
};

int main()
{
    rectangle r(5, 6);
    cout << "Area of rectangle: " << r.area() << endl;
    square s;
    s.rectangleToSquare(r);
    s.side();
    return 0;
}