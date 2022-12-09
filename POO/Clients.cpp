#include "pch.h"
#include "Clients.h"
#include "SqlServices.h"

Clients::Clients()
{
	
}

Clients::~Clients()
{
    
}

void Clients::Create(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, DateTimePicker^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode)
{
    try {
        this->AddressNum = Convert::ToInt32(NumAdr->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Address number must be a number");
        return;
    }
    try {
        this->AddressPostalCode = Convert::ToInt32(PostalCode->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Postal Code be a number");
        return;
    }
    try {
        this->AddressFloor = Convert::ToInt32(Floor->Text);
    }
    catch (Exception^ e)
    {
        if (Floor->Text != "")
        {
            MessageBox::Show("Floor must be a number or empty");
            return;
        }
    }
    SqlServices^ DB = gcnew SqlServices();
    if (DB->ExecuteQuery("SELECT Id_City FROM projetPOO.dbo.residence_cities WHERE City_Name ='"+ City->Text +"' AND Post_Code = '"+ PostalCode->Text+"'") == 0) {
        MessageBox::Show("La ville et le code postal ne correspondent pas");
        return;
    }
    MessageBox::Show("City->Text" + City->Text + "Post_Code" + PostalCode->Text);
    this->FirstName = Firstname->Text;
    this->LastName = LastName->Text;
    this->AddressStreet = NameStreet->Text;
    this->AddressCity = City->Text;
    this->BirthDate = BirthDate->Value;
    DB->ConnectDB();
    System::Data::DataTable^ q1 = DB->ExecuteSQL("SELECT Id_City FROM projetPOO.dbo.residence_cities WHERE City_Name ='" + City->Text + "' AND Post_Code = '" + PostalCode->Text + "'");
    DB->ExecuteQuery("INSERT INTO projetPOO.dbo.Address VALUES ('" + System::Convert::ToString(this->AddressNum) + "','" + this->AddressStreet + "','" + System::Convert::ToString(this->AddressFloor) + "'," + q1->Rows[0]->ItemArray[0] +")");
    DB->ExecuteQuery("INSERT INTO projetPOO.dbo.Client VALUES ( '" + this->LastName + "','" + this->FirstName + "','" + BirthDate->Value.Year + "-" + BirthDate->Value.Month + "-" + BirthDate->Value.Day + "')");
	System::Data::DataTable^ q = DB->ExecuteSQL("SELECT MAX(Id_Client) FROM projetPOO.dbo.Client");
	System::Data::DataTable^ q2 = DB->ExecuteSQL("SELECT MAX(Id_Adr) FROM projetPOO.dbo.Address");
    DB->ExecuteQuery("INSERT INTO projetPOO.dbo.Live_InC VALUES ( " + q->Rows[0]->ItemArray[0]->ToString() + ", "+ q2->Rows[0]->ItemArray[0]->ToString() + ")");
	
    MessageBox::Show("Client Created");
}

void Clients::Update(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, DateTimePicker^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode)
{
    try {
        this->ID = Convert::ToInt32(ID->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("ID must be INT");
        return;
    }
    try {
        this->AddressNum = Convert::ToInt32(NumAdr->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Address number must be a number");
        return;
    }
    try {
        this->AddressPostalCode = Convert::ToInt32(PostalCode->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Postal Code be a number");
        return;
    }
    try {
        this->AddressFloor = Convert::ToInt32(Floor->Text);
    }
    catch (Exception^ e)
    {
		if (Floor->Text != "")
		{
			MessageBox::Show("Floor must be a number or empty");
            return;
		}
    }
    this->FirstName = Firstname->Text;
    this->LastName = LastName->Text;
    this->AddressStreet = NameStreet->Text;
    this->AddressCity = City->Text;
    this->BirthDate = BirthDate->Value;
    if (this->Exist())
    {
		SqlServices^ DB = gcnew SqlServices();
        DB->ConnectDB();
        DB->ExecuteQuery("UPDATE projetPOO.dbo.Client SET Last_Client = '"+ this->LastName +"',First_Client = '" + this->FirstName + "',Birth_Date = '" + BirthDate->Value.Year+"-"+ BirthDate->Value.Month+"-"+BirthDate->Value.Day+ "' WHERE Id_Client = " + System::Convert::ToString(this->ID));
        DB->ExecuteQuery("UPDATE projetPOO.dbo.Address SET Number_Adr = '" + System::Convert::ToString(this->AddressNum) + "',Street_Adr = '" + this->AddressStreet + "',Floor = '" + Floor->Text + "' WHERE Id_Adr = (SELECT Id_Adr FROM projetPOO.dbo.Live_InC WHERE Id_Client = "+ System::Convert::ToString(this->ID) +")");
        Windows::Forms::MessageBox::Show("Client updated");
    }
    else
    {
        Windows::Forms::MessageBox::Show("Client ID doesn't exists");
    }
}

bool Clients::Exist()
{
    // faire requête et si client existe mettre True sinon false
    return true;
}