#include<iostream>
using namespace std;

int arr_Rectotal(int[],int);

int main()
{

int x;
cout << "How many elements will be in the array : " ;
cin >> x;

int ray[x];
cout << "Please enter the required " << x << " elements for the array : " ;
for(int j = 0; j < x; j++)
cin >> ray[j];

int total = arr_Rectotal(ray,x);

cout << "The overall sum of the array  : " << total << endl;

return 0;
}

int arr_Rectotal(int array[],int x)
{

if(x == 1)
return array[0];

else if(x <= 0)
return 0;

else
return arr_Rectotal(array,x - 1) + array[x - 1];
}
