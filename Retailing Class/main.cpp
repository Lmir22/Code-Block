#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class RetailItem
{
private:
   string description;
   int unitsonhand;
   double price;

public:
   RetailItem(string des, int uoh, double pri)
      {
      description = des;
      unitsonhand = uoh;
      price = pri;
      }


   void setDescript(string des)
      {
       description = des;
       }

   void setUniOnHan(int uoh)
      {
        unitsonhand = uoh;
       }

   void setPrice(double pri)
      {
        price = pri;
       }

   string getDescript()
      {
        return description;
       }

   int getUniOnHan()
      {
        return unitsonhand;
       }

   double getPrice()
      {
        return price;
       }
};

void showItem(RetailItem);

int main()
{
   RetailItem it1("Jacket", 12, 59.95);
   RetailItem it2("Designer Jeans", 40, 34.95);
   RetailItem it3("Shirt", 20, 24.95);


   showItem(it1);
   showItem(it2);
   showItem(it3);

   return 0;
}


void showItem(RetailItem it)
{
   cout << setprecision(2) << fixed << showpoint;
   cout << "Description: " << it.getDescript() << endl;
   cout << "Units on hand: " << it.getUniOnHan() << endl;
   cout << "Price: $" << it.getPrice() << endl << endl;
}
