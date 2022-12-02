#pragma once
#include "Person.h"

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
	int BirthDate;
};