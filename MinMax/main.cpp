#include <iostream>
using namespace std;


template <class X>
X mi_n(X int1, X int2)
{
	if (int1 < int2)
		return int1;
	else
		return int2;
}

template <class X>
X ma_x(X int1, X int2)
{
	if (int1 > int2)
		return int1;
	else
		return int2;
}

int main()
{
	int intnum1, intnum2;
	double dblnum1, dblnum2;
	string nx1, nx2;


	cout << "Enter two integers:\n";
	cin  >> intnum1 >> intnum2;

	cout << "Lesser: " <<  mi_n(intnum1, intnum2) << endl;
	cout << "Greater: " << ma_x(intnum1, intnum2) << endl;


	cout << "Enter two float numbers:\n";
	cin  >> dblnum1 >> dblnum2;

	cout << "Lesser: " << mi_n(dblnum1, dblnum2) << endl;
	cout << "Greater: " << ma_x(dblnum1, dblnum2) << endl;


	cout << "Enter two strings:\n";
	cin >> nx1 >> nx2;

	cout << "Lesser: " << mi_n(nx1, nx2) << endl;
	cout << "Greater: " << ma_x(nx1, nx2) << endl;

	return 0;
}
