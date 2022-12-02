#pragma once
#include "Person.h"
#include <iostream>

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
	int HiringDate;
};

