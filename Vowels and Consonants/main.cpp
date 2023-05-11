#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int SIZE = 73; //size for array


int vow(char *); // (vow) vowel function
int cons(char *); //(cons) = consonant function


int main()
{
	char cstring[SIZE]; //string placeholder
	char opt; // menu option.




	// Lets the user put in a string.
	cout << "Please enter a string that has less than "
		 << SIZE+2 << " letters:\n";
	cin.getline(cstring, SIZE);

                     //The Menu Displayed
	do
	{
		cout << "               Options\n";
		cout << "A) Count the vowels in the string\n";
		cout << "B) Count the consonants in the string\n";
		cout << "C) Count both vowels and consonants\n";
		cout << "D) Enter another string\n";
		cout << "E) Exit this program\n";
		cin  >> opt;
		opt = toupper(opt);


		switch (opt)
		{
		      //Gives option to count vowels.
			case 'A' : cout << "This string has " << vow(cstring)
							<< " vowels:\n" << cstring << endl;
						break;

              //Gives option to count consonants.
			case 'B' : cout << "This string has " << cons(cstring)
							<< " consonants:\n" << cstring << endl;
					    break;

              //Gives option to count both vowels and consonants.
			case 'C' : cout << "This string has " << (vow(cstring) + cons(cstring))
							<< " consonants and vowels:\n" << cstring << endl;
						break;

              //Gives option to exit the program
			case 'D' : cout << "Please enter another string that has less than "
		 					<< SIZE+2 << " letters:\n";
		 				cin.ignore();
		 			   cin.getline(cstring, SIZE);
		}



	} while (opt != 'E');
}


int vow(char *VS) //C-string for vowels.
{
	int count = 0;


	for (int x = 0; x < strlen(VS); x++)
	{
		if (toupper(VS[x]) == 'A' ||
			toupper(VS[x]) == 'E' ||
			toupper(VS[x]) == 'I' ||
			toupper(VS[x]) == 'O' ||
			toupper(VS[x]) == 'U'
		   )
			count++;
	}
	return count;
}

int cons(char *VS) //C-string for consonants.
{
	int count = 0;


	for (int x = 0; x < strlen(VS); x++)
	{
		if (isalpha(VS[x]))
			count++;
	}


	return count - vow(VS);
}
