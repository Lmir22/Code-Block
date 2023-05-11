#include <iostream>
using namespace std;

void drive(int);

int main()
{
	int n;

	cout << "Please enter the amount you want print: ";
	cin  >> n;

	drive(n);
}

void drive(int n)
{
	if (n > 0)
	{
		cout << "No Parking\n";
		drive(--n);
	}
}
