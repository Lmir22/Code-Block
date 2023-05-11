#include <iostream>
using namespace std;


int gre_ComDiv( int, int );

int main()
{
    int l, g;

    cout << "Please enter the first number:  ";
    cin >> l;

    cout << "Please enter the second number: ";
    cin >> g;

    cout << "The Greatest Common Divisor of " << l << " & " << g
         << " is: " << gre_ComDiv( l, g );

    return 0;
}

int gre_ComDiv( int l, int g)
{
    if (g==0)
        return l;
    return gre_ComDiv( g, l % g );
}
