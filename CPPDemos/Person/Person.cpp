#include<iostream>
using namespace std;

class Person
{
private:
	char * pName;
	int id;

public:

	Person()
	{
		pName = NULL;
		id = 0;
	}

	Person(char * n, int i)
	{
		int len = strlen(n);
		pName = new char[len + 1];
		strcpy_s(pName, len, n);
		id = i;
	}

	Person(const Person & obj)
	{
		int len = strlen(obj.pName);
		pName = new char[len + 1];
		strcpy_s(pName, len, obj.pName);
		id = obj.id;
	}

	Person & operator=(const Person & obj)
	{
		if (this != &obj)
		{
			int len = strlen(obj.pName);
			pName = new char[len + 1];
			strcpy_s(pName, len, obj.pName);
			id = obj.id;
		}
		
		return * this;
	}

	char * getName()
	{
		return pName;
	}
	void setName(char * n)
	{
		int len = strlen(n);
		pName = new char[len + 1];
		strcpy_s(pName, len, n);
	}

	int getId()
	{
		return id;
	}
	void setId(int i)
	{
		id = i;
	}

	

	Person(const Person && obj)
	{
		int len = strlen(obj.pName);
		pName = new char[len + 1];
		strcpy_s(pName, len, obj.pName);
		id = obj.id;
	}

	~Person()
	{
		delete[] pName;
	}
};