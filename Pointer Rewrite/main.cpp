#include <iostream>
using namespace std;

int doSomething(int *, int *);

int main()
{
    int z = 8,
        *x = &z,
        *y = &z;

    z = doSomething(x, y);

    cout << "z = " << z << endl;

    return 0;
}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}
