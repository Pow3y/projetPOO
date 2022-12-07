#pragma once
#include <iostream>
#include <string>

ref class Person
{
public:
	Person();
	~Person();
	virtual void Create();
	virtual void Remove();
	virtual void Update();
	virtual bool Exist();
};

