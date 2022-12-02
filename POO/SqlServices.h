#pragma once
#include "Connection.h"

ref class SqlServices
{
public:
	SqlServices();
	~SqlServices();
	void ConnectToDB();
	void ExecuteSQL();
private:

};