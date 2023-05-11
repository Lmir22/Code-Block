  #include <iostream>
  #include <fstream>
  #include <string> .

  using namespace std;

   int main()
   {
      cout << "Enter the file name: ";
      string fileN;
      getline(cin, fileN);

      ifstream in_F("head.txt", ios::in);

      string read;

      for (int count = 1; !in_F.eof(); ++count)
      {
          getline(in_F, read);
          cout << read << endl;
          if (count % 10 == 0)
            system("Pause");
      }


          in_F.close();
          cout << "Conversion complete.\n";

      }

