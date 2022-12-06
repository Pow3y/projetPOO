#pragma once
#include <iostream>
#include <string>

ref class Person
{
public:
	Person();
	~Person();
	virtual void Create();
	virtual void Remove();
	virtual void Update();
	virtual bool Exist();

protected:
	int ID;
	System::String^ FirstName;
	System::String^ LastName;
	int AddressNum;
	int AddressFloor;
	System::String^ AddressStreet;
	System::String^ AddressCity;
	int AddressPostalCode;
};

