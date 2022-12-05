#include "pch.h"
#include "SqlServices.h"
#include "Connection.h"

SqlServices::SqlServices()
{
	DataBase = gcnew System::Data::SqlClient::SqlConnection();
	DataBase->ConnectionString = Login::ConnectionString;
}

SqlServices::~SqlServices()
{
	
}

Exception^ SqlServices::OpenDB()
{
    try
    {
        DataBase->Open();
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
		DataBase->Close();
		return true;
	}
	catch (System::Data::SqlClient::SqlException^ e)
	{
		return false;
	}
}

System::Data::DataTable^ SqlServices::ExecuteSQL(String^ sql)
{
	System::Data::DataTable^ table = gcnew System::Data::DataTable();
	System::Data::SqlClient::SqlDataAdapter^ adapter = gcnew System::Data::SqlClient::SqlDataAdapter(sql, DataBase);
	adapter->Fill(table);
	return table;
}