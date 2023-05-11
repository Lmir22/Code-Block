#include<iostream>
using namespace std;


void str_rev(string load)
{

if(load.size() == 0)

return;

str_rev(load.substr(1));

cout<< load[0];

}


int arr_Rectotal(int[],int);

int ttl(int dig);

int gre_ComDiv( int, int );

int main()
{

int x;
cout << "How many elements will be in the array: " ;
cin >> x;

int ray[x];
cout << "\nPlease enter the required "
<< x << " elements for the array: " ;

for(int j = 0; j < x; j++)
cin >> ray[j];

int total = arr_Rectotal(ray,x);

cout << "\nThe overall sum of the array: "
<< total<< endl;

int dig;
cout <<"\n\nPlease enter an integer: ";
cin >> dig;

cout <<"\nThe recursive sum of the integer : "
<< ttl(dig) << endl;

string load;

cout<<"\n\nPlease enter a string of code: ";
cin>>load;

cout<<"\nYour string in reverse: ";
str_rev(load);

 int l, g;

    cout << "\n\n\nPlease enter the first number:  ";
    cin >> l;

    cout << "\nPlease enter the second number: ";
    cin >> g;

    cout << "\nThe Greatest Common Divisor of "
    << l << " & " << g << " is: " << gre_ComDiv( l, g );

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

int ttl(int dig)

{
    if(dig!=0)
    return dig + ttl(dig - 1);
    return 0;
}

int gre_ComDiv( int l, int g)
{
    if (g==0)
        return l;
    return gre_ComDiv( g, l % g );
}
