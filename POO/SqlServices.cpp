#include "pch.h"
#include "SqlServices.h"
#include "Connection.h"

SqlServices::SqlServices()
{
	
}

SqlServices::~SqlServices()
{
	
}

void SqlServices::ConnectDB() {
		DataBaseCo = gcnew System::Data::SqlClient::SqlConnection(Login::ConnectionString);
		DataBaseCo->Open();
}

System::Data::DataTable^ SqlServices::ExecuteSQL(System::String^ Query)
{
	System::Data::SqlClient::SqlCommand^ cmd = gcnew System::Data::SqlClient::SqlCommand(Query, DataBaseCo);
	System::Data::SqlClient::SqlDataReader^ reader = cmd->ExecuteReader();
	System::Data::DataTable^ dt = gcnew System::Data::DataTable();
	dt->Load(reader);
	return dt;
}