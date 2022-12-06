#include "pch.h"
#include "Clients.h"

Clients::Clients(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, DateTimePicker^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode)
{
    try {
        this->ID = Convert::ToInt32(ID->Text);
    }
	catch (Exception^ e)
	{
		MessageBox::Show("ID must be a number");
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
		MessageBox::Show("Postal code be a number");
	}
    try{
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
}

Clients::~Clients()
{
    
}

void Clients::Create()
{
    if (this->Exist())
    {
        // 
    }
    else
    {
        // faire requete pour créer client
        // vider text box
        Windows::Forms::MessageBox::Show("Client created");
    }
}

void Clients::Remove()
{
    if (this->Exist())
    {
        // faire requete pour suppr client
        // vider text box
        Windows::Forms::MessageBox::Show("Client deleted");
    }
    else
    {
        Windows::Forms::MessageBox::Show("Client doesn't exists");
    }
}

void Clients::Update()
{
    if (this->Exist())
    {
        // faire requete pour suppr client
        // vider text box
        Windows::Forms::MessageBox::Show("Client updated");
    }
    else
    {
        Windows::Forms::MessageBox::Show("Client doesn't exists");
    }
}

bool Clients::Exist()
{
    // faire requête et si client existe mettre True sinon false
    return true;
}