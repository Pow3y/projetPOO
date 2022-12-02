#pragma once
#include <iostream>

ref class SqlServices
{
public:
	SqlServices();
	~SqlServices();
	void ConnectToDB();
	void ExecuteSQL();
private:
	System::String^ ConnectionString;
	
};