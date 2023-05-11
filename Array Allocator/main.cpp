#include <iostream>

using namespace std;

int *AllRay(int);

int main()
{
    const int Ray_Siz = 7;
    int *num = AllRay (Ray_Siz);

    cout << "Enter values: " << endl;
    for (int x = 0; x < Ray_Siz; x++)
    {
        cout << "#" << (x+1) << ": ";
        cin >> *(num + x);
    }
    for (int x = 0; x < Ray_Siz; x++)
        cout << *(num + x) << endl;

    delete [] num;
    num = nullptr;
    return 0;
}

int *AllRay (int SZ)
{
    return new int [SZ];
}


