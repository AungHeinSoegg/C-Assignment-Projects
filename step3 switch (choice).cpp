#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>

using namespace std;
	
class member

{
private:
	string name, id_no, type, point;

public:
	void addMember();
	void insert();
	void showDetail();
};

void member::addMember()
{
	mainmenu:
	int choice;
	char x;
	system("cls");
	
	cout << "Student Management System" << endl;
	cout << "<<<<<<<<--------->>>>>>>>" << endl;
	cout << "1. Add New Member" << endl;
	cout << "2. Modifies an EXisting Member" << endl;
	cout << "3. Display The Member Details From The File" << endl;
	cout << "4. Exit" << endl;
	
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Choose No For Confirm Your Option:[ 1/ 2/ 3/ 4]" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Enter Your Choose: ";
	cin >> choice;
	
	switch(choice)
	{
		case 1://add new member detail and adding another member for next in case 1.
		do
		{
			member::insert();
			member::showDetail();
			
				cout << "Add Anothe Member Detail (Y,N): ";
				cin >> x;
			
		} 
		while (x == 'y' || x == 'Y');
		system("PAUSE"); 
		break;
		
		default:
		cout << "\n\t\t\t Invaild choice...Please Try Again...";
		system("PAUSE");
		break;
	}
	goto mainmenu;

}
void member::insert() // Adding Member Detail.
{
	system("cls");
	fstream file;
	cout << "=====> ADD NEW MEMBER <=====" << endl;

	cout << "Enter Member Name: ";
	cin >> name;
	cout << "Enter Member ID  : ";
	cin >> id_no;
	cout << "Enter Member's Type(Ordinary/ Sailver/ Gold): ";
	cin >> type;
	cout << "Enter Member Credit Point: ";
	cin >> point;
}
void member::showDetail()
{
	cout << "=====> WELCOME <=====" << endl;
	cout<<"Member Name 	: "<<name<<endl;
	cout<<"Member Number: "<<id_no<<endl;
	cout<<"Member Type	: "<<type<<endl;
	cout<<"Credit Point	: "<<point<<endl;
	cout<<"......................." << endl;	
}	
int main()
{
	member m;
	m.addMember();
	m.insert();
	m.showDetail();
}

