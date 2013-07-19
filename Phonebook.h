#include <iostream>
#include <string>
using namespace std;

#ifndef Phonebook_H
#define Phonebook_H

template <class T>
class Phonebook
{
private:
	List<string> m_listCountries;
	List<Phonebook> m_listPhoneNumbers;

public:
	void ReadFile (const string& filename);
	void OutputAllCountries();
	void OutputAllPhonenumbers();
	void OutputPhonenumbersFilter(const string& country);
	void OutputPhonenumbersFilter(char letter);
};

template <class T>
void Phonebook<T>::ReadFile(const string& filename)
{
	string first, last, phone, country;
	while (infile>> first>>last>>phone>>country)
	{
		PhoneNumber tempPhone(first, last, phone, country);
		m_listPhoneNumbers.AddItem(tempPhone);
		m_listCountries.AddItem(country);

		close.infile;
	}
}

template <class T>
void Phonebook<T>::OutputAllCountries()
{

	OutputAll(m_listCountries).List;
}

template <class T>
void Phonebook<T>::OutputAllPhonenumbers()
{
	OutputAll(m_listPhoneNumbers).List;
}

template <class T>
void Phonebook<T>::OutputPhonenumbersFilter(const string& country)
{
	for(int i = 0; i <m_size; i++)
	{
		PhoneNumber item;
		PhoneNumber item = m_listPhoneNumbers.GetItem(i);
		if (country.iteem = item)
		{
			cout<<item<<endl;
		}
		else 
		{
			return false;
		}
	}
}

template <class T>
void Phonebook<T>::OutputPhonenumbersFilter(char letter)
{
	OutputAll(m_listPhoneNumbers).List;
	if (item.m_lastNme[0]==letter)
	{
		cout<<item<<endl;
	}
}


#endif