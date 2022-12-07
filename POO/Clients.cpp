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
        System::Convert::ToString(ID);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("ID must be empty");
    }
    try {
        this->AddressNum = Convert::ToInt32(NumAdr->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Address number must be a number");
    }
    try {
        this->AddressPostalCode = Convert::ToInt32(PostalCode->Text);

    }
    catch (Exception^ e)
    {
        MessageBox::Show("Postal Code be a number");
    }
    try {
        this->AddressFloor = Convert::ToInt32(Floor->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Floor must be a number");
    }
    this->FirstName = Firstname->Text;
    this->LastName = LastName->Text;
    this->AddressStreet = NameStreet->Text;
    this->AddressCity = City->Text;
    this->BirthDate = BirthDate->Value;
    // Create command
    
}

void Clients::Update(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, DateTimePicker^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode)
{
    try {
        this->ID = Convert::ToInt32(ID->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("ID must be INT");
    }
    try {
        this->AddressNum = Convert::ToInt32(NumAdr->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Address number must be a number");
    }
    try {
        this->AddressPostalCode = Convert::ToInt32(PostalCode->Text);

    }
    catch (Exception^ e)
    {
        MessageBox::Show("Postal Code be a number");
    }
    try {
        this->AddressFloor = Convert::ToInt32(Floor->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Floor must be a number");
    }
    this->FirstName = Firstname->Text;
    this->LastName = LastName->Text;
    this->AddressStreet = NameStreet->Text;
    this->AddressCity = City->Text;
    this->BirthDate = BirthDate->Value;
    if (this->Exist())
    {
        // faire requete pour suppr client
        // vider text box
		SqlServices^ DB = gcnew SqlServices();
        DB->ConnectDB();
        DB->ExecuteQuery("UPDATE projetPOO.dbo.Client SET Last_Client = '"+ this->LastName +"',First_Client = '" + this->FirstName + "',Birth_Date = '" + System::Convert::ToString(this->BirthDate) + "' WHERE Id_Client = " + System::Convert::ToString(this->ID));
        DB->ExecuteQuery("UPDATE projetPOO.dbo.Address SET Number_Adr = '" + System::Convert::ToString(this->AddressNum) + "',Street_Adr = '" + this->AddressStreet + "',Floor = '" + System::Convert::ToString(this->AddressFloor) + "' WHERE Id_Adr = (SELECT Id_Adr FROM projetPOO.dbo.Live_InC WHERE Id_Client = "+ System::Convert::ToString(this->ID) +")");
        
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