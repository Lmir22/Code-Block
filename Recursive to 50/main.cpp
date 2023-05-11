#include <iostream>
using namespace std;

int total(int dig);

int main()

{

int dig;

cout <<"Please enter an integer : ";
cin >> dig;

cout <<"The recursive sum of the integer : " << total(dig);

return 0;

}

int total(int dig)

{
    if(dig!=0)
    return dig + total(dig - 1);
    return 0;
}
