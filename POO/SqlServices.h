#pragma once
#include "iostream"

ref class SqlServices
{
public:
	SqlServices();
	~SqlServices();
	bool ConnectToDB();
private:
	System::String^ ConnectionString;
};