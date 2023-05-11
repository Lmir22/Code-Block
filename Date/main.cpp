#include <iostream>
#include <cstring>

using namespace std;

const int numths = 12;
const int nmsz = 10;

class Date
{
private:
    int month;
    int day;
    int year;

    char names [numths][nmsz];

    void setNames();

public:
    Date();
    Date(int, int, int);

    void setMonth(int mt);
    void setDay (int dy);
    void setYear (int yr);

    void showDate1();
    void showDate2();
    void showDate3();
};

Date::Date()
{
    setNames();
}

Date::Date(int mt, int dy, int yr)
{
    setMonth(mt);
    setDay(dy);
    setYear(yr);
    setNames();
}

void Date::setNames()
{
    strcpy(names[0],"January");
    strcpy(names[1],"February");
    strcpy(names[2],"March");
    strcpy(names[3],"April");
    strcpy(names[4],"May");
    strcpy(names[5],"June");
    strcpy(names[6],"July");
    strcpy(names[7],"August");
    strcpy(names[8],"September");
    strcpy(names[9],"October");
    strcpy(names[10],"November");
    strcpy(names[11],"December");
}

void Date::setMonth(int mt)
{
    if (mt >= 1 && mt <= 12)
        month = mt;
    else
    {
        cout << mt << "is an invalid" << "value for the month. \n";
        exit(EXIT_FAILURE);
    }
    }
void Date::setDay(int dy)
{
if (dy >=1 && dy <=31)
    day = dy;
    else
    {
        cout << dy << "is an invalid" << "value for the day. \n";
        exit (EXIT_FAILURE);
    }
}

void Date::setYear(int yr)
{
    year = yr;
}

void Date::showDate1()
{
    cout << month << "/" << day << "/" << year << endl;
}

void Date::showDate2()
{
   cout << names[month+1] << " " << day << ", " << year << endl;
}

void Date::showDate3()
{
   cout << day << " " << names[month+1] << " " << year << endl;
}
int main()
{
Date today (12, 25, 2018);
today.showDate1();

today.setMonth(10);
   today.setDay(25);
   today.setYear(2018);
today.showDate2();
today.showDate3();
return 0;
}










