#include "pch.h"
#include "SqlServices.h"
#include "Connection.h"

SqlServices::SqlServices()
{
	DataBaseCo = gcnew System::Data::SqlClient::SqlConnection();
	DataBaseCo->ConnectionString = Login::ConnectionString;
}

SqlServices::~SqlServices()
{
	
}

Exception^ SqlServices::OpenDB()
{
    try
    {
        DataBaseCo->Open();
        return nullptr;
    }
    catch (System::Data::SqlClient::SqlException^ e)
    {
        return e;
    }
}

bool SqlServices::CloseDB()
{
	try
	{
		DataBaseCo->Close();
		return true;
	}
	catch (System::Data::SqlClient::SqlException^ e)
	{
		return false;
	}
}

System::Data::DataTable^ SqlServices::ExecuteSQL(String^ Query)
{
	System::Data::SqlClient::SqlCommand^ SqlQuery = gcnew System::Data::SqlClient::SqlCommand(Query);
	SqlQuery->Connection = DataBaseCo;
	System::Data::DataTable^ table = gcnew System::Data::DataTable();
	System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(SqlQuery);
	adapter->Fill(table);
	return table;
}