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
	int ExecuteQuery(System::String^ Query);
	System::Data::DataTable^ ExecuteSQL(System::String^);
};