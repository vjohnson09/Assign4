#include <iostream>
#include <string>
#include "List Template.h"
#include "PhoneNumber.h"
#include "PhoneNumber.h"
using namespace std;

enum MenuOptions
{ QUIT, VIEW_ALL_ENTRIES, FILTER_BY_COUNTRY, FILTER_BYLETTER};

int main()
{
	string phonebook;
	//Phonebook phonebook;
	cout<<"ReadFile"<<"numbers.txt"<<endl;
	bool done = false;
	int choice;
	while (done != true)
	{
		cout<< VIEW_ALL_ENTRIES<<".VIEW_ALL_ENTRIES"<<endl;
	if (choice == VIEW_ALL_ENTRIES)
	{
		cout<<phonebook.OutputAllPhonenumbers<<endl;

	}
	if (choice ==  FILTER_BY_COUNTRY)
	{
		cout<<"Enter name of country"<<endl;
	cout<<phonebook.FILTER_BY_COUNTRY<<endl;
	}
	if (choice ==  FILTER_BYLETTER)
	{

		cout<<"Enter a upper-case letter"<<endl;
		cout<<phonebook. FILTER_BYLETTER<<endl;
	}

	}

	List<string> myList;
	myList.AddItem("Kansas City" );
	myList.AddItem("Olathe" );
	myList.AddItem("Raytown" );
	myList.AddItem("Olathe" );
	myList.AddItem("Independence" );

	cout<< "Size of list is: " <<myList.GetSize()<<endl;

	myList.OutputAll();



	string tempNumber;
	
	class T;

	List<PhoneNumber<T>> List;
//	PhoneNumber<T> tempNumber("first1", "last1", "123-456-7890", "US");

	myList.AddItem(tempNumber);
	myList.AddItem(tempNumber);

//	tempNumber.Setup("first2", "last2", "321-456-2345", "US");
	myList.AddItem(tempNumber);

	cout<<"The list size is: " <<myList.GetSize()<<endl;

	myList.OutputAll();


	int pauser;

	//Phonebook phonebook;
	//phonebook.ReadFile("numbers.txt");

	//phonebook.OutputAllCountries();
	//cin>>pauser;

	//phonebook.OutputAllPhonenumbersFilter("France");

	//phonebook.OutputPhonenumbersFilter('T');
	//cin>>pauser;

	return 0;
}