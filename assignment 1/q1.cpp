#include <iostream>
using namespace std;

int ans(int n, int r)
{
    // base condition

    if (n == r)
        return 1;

    if (r == 0)
        return 1;

    // recursive case

    return ans(n - 1, r) + ans(n - 1, r - 1);
}

int main()
{

    cout << ans(10, 4);
}