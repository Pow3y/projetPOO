#include "pch.h"
#include "SqlServices.h"
#include "Connection.h"

SqlServices::SqlServices()
{
}

SqlServices::~SqlServices()
{
}

void SqlServices::ConnectToDB()
{
	auto test = gcnew System::Data::SqlClient::SqlConnection(Login::ConnectionString);
	test->Open();
}
void SqlServices::ExecuteSQL()
{

}