#include <fstream>
#include <iostream>
#include  <cstring>
using namespace std;

int main() {
     cout << "Enter the file name: ";
     string fileN;
     getline(cin, fileN);

     ifstream in_f("marry.txt", ios::in);

     string read;

     for (int count = 1; !in_f.eof(); ++count)
        {
          getline(in_f, read);

          cout << read << endl;
          if (count % 24 == 0) system("Pause");
     }

     system("Pause");
}
