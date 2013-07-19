#include <iostream>
#include <string>
using namespace std;

#ifndef List Template_H
#define List Template_H

template <class T>
class List
{
	
private:
	T m_list;
	int m_size;
	int m_allocated;

public:
	List():myList
	{ 
		PhoneNumber(const string& first, const	string& last, const	string& phone, const string& country);
	}
	List(int m_size, int m_allocated);
	~List();
	void AddItem(T item);
	void OutputAll();
	int GetSize ();
	T& GetItem(int index);
	void Resize();
	bool IsAlreadyInList(const T& item);
};


	template <class T>
	List<T>::List(int m_size, int m_allocated)
	{
		T* m_list = new T [m_allocated];
	}

	template <class T>
	 List<T>::~List()
	{
		delete [] m_list
	}

	template <class T>
	void List<T>::AddItem(T item)
	{
		if (m_size==m_allocated)
		{
			Resize();
		}

		m_list[m_size]=item;
		m_size++;
	}

	template <class T>
	void List<T>::OutputAll()
	{
		for (int i = 0; i <m_size; i++)
		{
			cout<< i << " "<<m_list[i]<<endl;
		}
	}

	template <class T>
	int List<T>::GetSize()
	{
		
		return m_size;
	}

	template <class T>
	T& List<T>:: GetItem (int index)
	{
		return m_list[index];
	}

	template <class T>
	void List<T>::Resize()
    {
		cout<<"Resize"<<m_name<<endl;
		cout<<"Old Size"<<m_allocated<<endl;
		T* tempList = new T[m_allocated];
		for (int i = 0; i<m_size; i++)
		{
			tempList[i] = m_list[i];
		}

		delete [] m_list;
		m_allocated += 10;
		m_list = new T[ m_allocated ];

		for ( int i = 0; i < m_size; i++ )
		{
        m_list[i] = tempList[i];
		}
		{
		delete [] tempList;
		}

	}

	template <class T>
	bool List<T>::IsAlreadyInList(const T& item)
	{
		for (int i = 0; i<= item;i++)
		{
			item = m_list[i];
		
		if (item!= m_list[i])
		{
			return false;
		}
		else 
		{
			return true;
		}
		}
	}
	#endif
	
