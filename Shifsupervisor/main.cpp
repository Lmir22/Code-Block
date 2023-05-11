#include<iostream>
#include<string>
using namespace std;

class Employee
{
protected:string EmpName;
         int EmpNumber;
         string Hiredate;

public:   Employee()
          {
              EmpName=" ";
              EmpNumber=0;
              Hiredate=" ";
          }
          //Parameterized constructor
          Employee(string name,int number,string date)
          {
              EmpName=name;
              EmpNumber=number;
              Hiredate=date;
          }
      //Member functions
public: void setEmpName(string);
        void setEmpNumber(int);
        void setHireDate(string);
        string getEmpName();
        int getEmpNumber();
        string getHireDate();
};
//Defining member functions
void Employee::setEmpName(string str)
{
     EmpName=str;
}//end setEmpName
void Employee::setEmpNumber(int num)
{
     EmpNumber=num;
}//end setEmpNumber
void Employee::setHireDate(string date)
{
      Hiredate=date;
}//end setHireDate
string Employee::getEmpName()
{
     return EmpName;
}//end getEmpName
int Employee::getEmpNumber()
{
     return EmpNumber;
}//end getEmpNumber
string Employee::getHireDate()
{
     return Hiredate;
}//end getHireDate
class ShiftSupervisor: public Employee
{
private: double AnnualSalary;
          double AnnualBonus;
public: //Default constructor
        ShiftSupervisor()
        {
             AnnualSalary=0.0;
             AnnualBonus=0.0;
        }
        //parameterized constructor
       ShiftSupervisor(double sal, double bonus)
        {
           AnnualSalary=sal;
           AnnualBonus=bonus;
        }
        //Declaring member functions
public:void setAnnualSalary(double);
        void setAnnualBonus(double);
        double getAnnualSalary();
        double getAnnualBonus();
};
void ShiftSupervisor::setAnnualBonus(double bonus)
{
     AnnualBonus=bonus;
}//end setAnnualBonus
void ShiftSupervisor::setAnnualSalary(double sal)
{
   AnnualSalary=sal;
}//end setAnnualSalary
double ShiftSupervisor::getAnnualBonus()
{
     return AnnualBonus;
}//end getAnnualBonus
double ShiftSupervisor::getAnnualSalary()
{
    return AnnualSalary;
}//end getAnnualSalary
//Main function
int main()
{
//start main
     //object to class ShiftSupervisor
   ShiftSupervisor emp1;
   //variable declaration
   string name;
   string date;
   double Abonus,Asalary;
   //Set data values to class object
   cout<<"Enter Employee Name:";
   cin>>name;
   emp1.setEmpName(name);
   emp1.setEmpNumber(562);
   emp1.setHireDate("June 21");
   cout<<"Enter Anual Bonus:";
   cin>>Abonus;
   emp1.setAnnualBonus(Abonus);
   cout<<"Enter Anual Salary:";
   cin>>Asalary;
   emp1.setAnnualSalary(Asalary);
   //Outputting data by calling Accessor functions
   cout<<"----Shift Supervisor Details---"<<endl;
   cout<<"The Employee's Name:"<<emp1.getEmpName()<<endl;
   cout<<"The Employee's Number:"<<emp1.getEmpNumber()<<endl;
   cout<<"The Employee's Hire Date:"<<emp1.getHireDate()<<endl;
   cout<<"The Employee's Annual salary:"<<emp1.getAnnualSalary()<<endl;
   cout<<"The Employee's Annual Bonus :"<<emp1.getAnnualBonus()<<endl;
   system("pause");
}//end main
