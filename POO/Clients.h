#pragma once
#include "Person.h"

using namespace System;
using namespace System::Windows::Forms;

ref class Clients : public Person
{

public:
	Clients(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, DateTimePicker^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode);
	~Clients();
	void Create() override;
	void Remove() override;
	void Update() override;
	bool Exist() override;
	
private:
	DateTime BirthDate;
};