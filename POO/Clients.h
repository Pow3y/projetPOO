#pragma once
#include "Person.h"

using namespace System;

ref class Clients : public Person
{

public:
	Clients(int ID,System::String^ LastName, System::String^ Firstname, System::DateTime BirthDate, int NumAdr, System::String^ NameStreet, int Floor, System::String^ City, int PostalCode);
	~Clients();
	void Create() override;
	void Remove() override;
	void Update() override;
	bool Exist() override;
	
private:
	DateTime BirthDate;
};