#pragma once
#include "Person.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

ref class Employee : public Person
{
public:
	Employee();
	~Employee();
	void Create(TextBox^ IDEmployes, TextBox^ EmployesLastName, TextBox^ EmployesFirstname, DateTimePicker^ HiringhDate, TextBox^ NumAdrEmployes, TextBox^ NameStreetEmployes, TextBox^ FloorEmployes, TextBox^ CityEmployes, TextBox^ PostalCodeEmployes, TextBox^ Superior) override;
	void Remove() override;
	void Update(TextBox^ IDEmployes, TextBox^ EmployesLastName, TextBox^ EmployesFirstname, DateTimePicker^ HiringDate, TextBox^ NumAdrEmployes, TextBox^ NameStreetEmployes, TextBox^ FloorEmployes, TextBox^ CityEmployes, TextBox^ PostalCodeEmployes, TextBox^ Superior) override;
	bool Exist() override;
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

