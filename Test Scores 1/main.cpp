#include <iostream>
#include <iomanip>
using namespace std;
void ArSelSor(double *, int);
void ArPtr(double *, int);
void AVERA(double, int);
int main()
{
 //dynamically allocate an array
 //acumulator
 //averge scores
 //number of test scores

 double *scor,
 sum = 0.0;
//average;
int AvScor;

   //Get how many test scores the users wants to enter.
cout << "Number of test scores?";
cin >> AvScor;
//condition about the scores
scor = new double[AvScor];
if (scor == NULL)
 return 0;
//Get the number of each test
cout << "Enter test scores.\n";



for (int count = 0; count < AvScor; count++)
{
 cout << "Test score #" << (count + 1) << ": ";
 cin >> *(scor + count);

}

//total score operation
for (int count = 0; count < AvScor; count++)
{
 sum += *(scor + count);
}
AVERA(sum, AvScor);
//the array pointers
ArSelSor(scor, AvScor);
cout << "Sorted Order: \n";
ArPtr(scor, AvScor);

//free memory.
delete[] scor;
scor = 0;


return 0;

}
// bubble sort
void ArSelSor(double *array, int size)
{
int wel;
bool swap;
do
{
 swap = false;
 for (int count = 0; count < (size - 1); count++)
 {
  if (*(array + count) > *(array + count + 1))
  {
   wel = *(array + count);
   *(array + count) = *(array + count + 1);
   *(array + count + 1) = wel;
   swap = true;
  }
 }
} while (swap);
}
// sort function
void ArPtr(double *array, int size)
{
for (int count = 0; count< size; count++)
 cout << *(array + count) << " ";
cout << endl;
}
// average function
void AVERA(double sum, int AvScor)
{
double aver;
//average operation
aver = sum / AvScor;

//Display the results
cout << fixed << showpoint << setprecision(2);
cout << "Overall Average: " << aver << endl;
}
