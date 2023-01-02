#pragma once
#include "Person.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

ref class Clients : public Person
{
public:
	Clients();
	~Clients();
	void Create(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, DateTimePicker^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode) override;
	void Update(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, DateTimePicker^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode) override;
	bool Exist() override;
	static int ID;
	static System::String^ FirstName;
	static System::String^ LastName;
	static int AddressNum;
	static int AddressFloor;
	static System::String^ AddressStreet;
	static System::String^ AddressCity;
	static int AddressPostalCode;
	static DateTime BirthDate;
private:
};