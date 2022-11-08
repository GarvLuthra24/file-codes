#include <iostream>
using namespace std;

class nums
{
private:
    int a;
    int b;

public:
    nums()
    {
        this->a = 0;
        this->b = 0;
    }
    nums(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << "a: " << this->a << endl;
        cout << "b: " << this->b << endl;
        return;
    }
    friend void swap(nums &);
};

// friend function

void swap(nums &num1)
{

    // pointer to data members

    int(nums ::*opt1) = &nums::a;
    int(nums ::*opt2) = &nums::b;

    int temp = num1.*opt1;
    num1.*opt1 = num1.*opt2;
    num1.*opt2 = temp;
    return;
}

int main()
{

    // pointer to member function
    void (nums ::*show)() = &nums ::display;
    nums Pair(5, 4);
    cout << "Before Swapping" << endl;

    (Pair.*show)();

    swap(Pair);

    cout << "After Swapping" << endl;

    (Pair.*show)();

    return 0;
}