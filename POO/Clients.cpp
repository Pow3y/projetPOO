#include "pch.h"
#include "Clients.h"

Clients::Clients(TextBox^ ID, TextBox^ LastName, TextBox^ Firstname, TextBox^ BirthDate, TextBox^ NumAdr, TextBox^ NameStreet, TextBox^ Floor, TextBox^ City, TextBox^ PostalCode)
{
    try {
		this->ID = Convert::ToInt32(ID->Text);
    }
	catch (Exception^ ex)
	{
        MessageBox::Show("Le type de ID est incorrect il doit être de type INT");
	}
}

Clients::~Clients()
{
    
}

void Clients::Create()
{
    if (this->Exist())
    {
        Windows::Forms::MessageBox::Show("Client already exist",MessageBoxIcon::Warning);
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