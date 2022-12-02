#pragma once
ref class Person
{
public:
	Person();
	~Person();
	virtual void create();
	virtual void remove();
	virtual void update();
	
protected:
	System::String ID;
	System::String FirstName;
	System::String LastName;
};

