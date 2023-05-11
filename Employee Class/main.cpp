#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
	string name;
	int idNumber;
	string department;
	string position;

public:
    Employee();
	Employee(string, int, string, string);
	Employee (string, int);

	void setName (string nm)
	{
		name = nm;
	}

	void setIdNumber(int id)
	{
		idNumber = id;
	}

	void setDepartment(string dep)
	{
		department = dep;
	}

	void setPosition (string ps)
	{
		position = ps;
	}

	string getName()
	{
		return (name);
	}

	int getIdNumber()
	{
		return(idNumber);
	}

	string getDepartment()
	{
		return(department);
	}

	string getPosition()
	{
		return (position);
	}

};

Employee::Employee(string nm, int id, string dep, string ps)
{
	name = nm;
	idNumber = id;
	department = dep;
	position = ps;
}

Employee::Employee(string nm, int id)
{
    name = nm;
    idNumber = id;
    department = "";
    position = "";
}

Employee::Employee()
{
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

void showEmployee(Employee);


int main()
{
	Employee sus("Susan Meyers", 47899, "Accounting", "Vice President");

	Employee mrk("Mark Jones", 39119);
	mrk.setDepartment("IT");
	mrk.setPosition("Programmer");

	Employee joy;
	joy.setName("Joy Rogers");
	joy.setIdNumber(81774);
	joy.setDepartment("Manufacturing");
	joy.setPosition("Engineer");

	showEmployee(sus);
	showEmployee(mrk);
	showEmployee(joy);

	return 0;
}

void showEmployee(Employee emp)
{
    cout << "Name: " << emp.getName() << endl;
    cout << "ID Number: " << emp.getIdNumber() << endl;
    cout << "Department: " << emp.getDepartment() << endl;
    cout << "Position: " << emp.getPosition() << endl << endl;
}


