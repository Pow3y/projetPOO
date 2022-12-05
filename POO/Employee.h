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
};

