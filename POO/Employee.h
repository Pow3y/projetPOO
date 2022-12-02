#pragma once
#include <string>
#include "Person.h"

ref class Employee : public Person
{
public:
	Employee();
	~Employee();
	void Create() override;
	void Remove() override;
	void Update() override;
private:
	System::String SuperiorID;
	System::String HiringDate;
};

