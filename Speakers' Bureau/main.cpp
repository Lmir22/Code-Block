#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct speakBur //speaker bureau
{
string nm; //name of speaker
string TeleNum; //telephone number of speaker
string speakTop;   //topic for speaker
int fe;             //the fee
};

void getSpeak(speakBur *); // get speaker
void priSpeak(speakBur *); // print speaker
void ediSpeak(speakBur *); // edit speaker
void sechSpeaktop(speakBur*); // search for speaker topic

int main()
{
int numofSpeak = 10;  //number of speakers
int ind;   //index
speakBur inf[10];  // speaker bureau information

int menu;
const int ent = 1, //enter information for speaker
chg = 2,   // change information for speaker
pri = 3,  // print speaker information
sech = 4, // search for topic
lev = 5; // exit program

do
{
cout << "Please pick from the menu: \n" //menu display
<< "1) Enter the information for speakers: \n" //option 1
<< "2) Change a speaker information: \n" //option 2
<< "3) Print the speakers information: \n" //option 3
<< "4) Search for the speakers topic: \n" //option 4
<< "5) Exit: \n" //option 5
<< "Choose: ";
cin >> menu;

switch (menu)
{
case ent: //enter
{
getSpeak(inf);
}

break;

case chg:
{

ediSpeak(inf);
}
break;
case pri:
{
priSpeak(inf);
}
break;


case sech:
{
sechSpeaktop(inf);
}
}
}
while (menu != lev);

system("pause");
return 0;
}
void getSpeak(speakBur *p)
{

int x = 0;
int size = 10;
for (x = 0; x < size; x++)
{
cout << "Enter the information for the speaker " << x << " : \n";
cout << "Name:";
cin.ignore();
getline(cin, p[x].nm);
cout << "\nTelephone Number:";
cin.ignore();
getline(cin, p[x].TeleNum);
cout << "\nThe Topic:";
cin.ignore();
getline(cin, p[x].speakTop);
cout << "\nRequired Fee:";
cin >> p[x].fe;
}
}

void priSpeak(speakBur *p)
{
int x = 0;
int size = 10;
for (x = 0; x < size; x++)
{
cout << "Information that is entered for every speaker is: \n";
cout << "Speaker " << x << endl;
cout << "Name: " << p[x].nm << endl;
cout << "Telephone Number: " << p[x].TeleNum << endl;
cout << "Topic: " << p[x].speakTop << endl;
cout << "Required fee: " << p[x].fe << endl;
}
}

void ediSpeak(speakBur *p)
{
int x;
cout << "Enter the number of the speaker that you want to change." << endl;
cin >> x;
if (x <= 9)
{
cout << endl;
cout << "Please enter the new information about the speaker: \n";
cout << "Name:";
cin.ignore();
getline(cin, p[x].nm);
cout << "\nTelephone Number:";
getline(cin, p[x].TeleNum);
cout << "\nTopic:";
getline(cin, p[x].speakTop);
cout << "\nRequired Fee:";
cin >> p[x].fe;
}
else
{
cout << "Choose a number between 0-9" << endl;
}
}
void sechSpeaktop(speakBur *p)
{
int x = 0;
int top;

cout << " Type in the desired topic " << endl;

cin >> top;

}
