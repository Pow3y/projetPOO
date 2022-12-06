#include "pch.h"
#include "Clients.h"

Clients::Clients(int ID,System::String^ LastName, System::String^ Firstname, System::DateTime BirthDate, int NumAdr, System::String^ NameStreet, int Floor, System::String^ City, int PostalCode)
{
    this->ID = ID;
    this->LastName = LastName;
    this->FirstName = Firstname;
    this->BirthDate = BirthDate;
    this->AddressNum = NumAdr;
    this->AddressStreet = NameStreet;
    this->AddressFloor = Floor;
    this->AddressCity = City;
    this->AddressPostalCode = PostalCode;
}

Clients::~Clients()
{
    
}

void Clients::Create()
{
    if (this->Exist())
    {
        Windows::Forms::MessageBox::Show("Client already exist");
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