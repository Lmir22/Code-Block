#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstring>

using namespace std;

void cap(char sent[], int const length);

int main()
{
    const int length = 100;
    char sent[length];

    cout << "What is the capitalized string: \n" << endl;
    cin.getline(sent, length);

    cap(sent, length);

    system("pause");
    return(0);
}

void cap(char sent[], int length)
{

     char *stript;
     int count = 0;

     sent[0] = toupper(sent[0]);

     for (int x = 0; x < length; x++)
     {
         stript = strstr(&sent[x], ".");
         if(stript==NULL) break;

         if (*stript == '.')
         {
                     *stript = toupper(*stript);
         }
     }

     while (sent[count] != '\0')
     {
          cout << sent[count];
          count++;
     }
}
