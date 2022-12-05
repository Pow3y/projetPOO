#pragma once
#include "Connection.h"

ref class SqlServices
{
private:
	System::Data::SqlClient::SqlConnection^ DataBase;
public:
	SqlServices();
	~SqlServices();
	Exception^ OpenDB();
	bool CloseDB();
	System::Data::DataTable^ ExecuteSQL(String^);
};