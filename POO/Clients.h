#pragma once
#include "Person.h"

using namespace System;

ref class Clients : public Person
{

public:
	Clients();
	~Clients();
	void Create() override;
	void Remove() override;
	void Update() override;

private:
	int ID;
	DateTime BirthDate;
};