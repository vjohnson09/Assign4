#include <iostream>
#include <string>
# include "List Template.h"
using namespace std;

#ifndef PhoneNumber_H
#define PhoneNumber_H

template <class T>
class PhoneNumber
{
	
private:
	string m_firstName;
	string m_lastName;
	string m_phoneNumber;
	string m_country;


public:
	friend class Phonebook;

	PhoneNumber();
	PhoneNumber(const string& first, const	string& last, const	string& phone, const string& country);
	void Setup (const string& first, const	string& last, const	string& phone, const string& country);
	friend bool operator == (const PhoneNumber& item1, const PhoneNumber& item2);
	friend ostream& operator << (ostream& out, const PhoneNumber& item);

};


template <class T>
PhoneNumber<T>::PhoneNumber()
{
	string first, last, country;
}

template <class T>
 PhoneNumber<T>::PhoneNumber(const string& first, const	string& last, const	string& phone, const string& country)
{
	Setup(const string& first, const	string& last, const	string& phone, const string& country);
}

template <class T>
void PhoneNumber<T>::Setup (const string& first, const	string& last, const	string& phone, const string& country)
{
	m_firstName = first;
	m_lastName = last;
	m_phoneNumber = phone;
	m_country= country;
}

template <class T>
bool operator == (const PhoneNumber<T>& item1 , const PhoneNumber<T>& item2 ) 
{
	if (item1 = item2)
	{
		return true
	}
	else
	{
	return false
	}
}


template <class T>
 ostream& operator << (ostream& out, PhoneNumber<T>& item)
{
	out<< item.m_lastName<<endl;
	out<< item.m_firstName<<endl;
	out<< item.m_country<<endl;
	out<< item.m_phoneNumber<<endl;
	return out;
}
#endif