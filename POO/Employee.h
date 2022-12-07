#pragma once
#include "Person.h"
#include <iostream>

using namespace System;

ref class Employee : public Person
{
public:
	Employee();
	~Employee();
	void Create() override;
	void Remove() override;
	void Update() override;
private:
	int SuperiorID;
	DateTime HiringDate;
	static int ID;
	static System::String^ FirstName;
	static System::String^ LastName;
	static int AddressNum;
	static int AddressFloor;
	static System::String^ AddressStreet;
	static System::String^ AddressCity;
	static int AddressPostalCode;

};

