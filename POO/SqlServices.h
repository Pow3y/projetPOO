#pragma once
#include "Connection.h"

ref class SqlServices
{
private:
	static System::Data::SqlClient::SqlConnection^ DataBaseCo;
public:
	SqlServices();
	~SqlServices();
	void ConnectDB();
	System::Data::DataTable^ ExecuteSQL(String^);
};