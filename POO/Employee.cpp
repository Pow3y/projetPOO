#include "pch.h"
#include "Employee.h"
#include "SqlServices.h"
using namespace ::System::Windows::Forms;

Employee::Employee()
{

}

Employee::~Employee()
{

}

void Employee::Create(TextBox^ IDEmployes, TextBox^ EmployesLastName, TextBox^ EmployesFirstname, DateTimePicker^ HiringhDate, TextBox^ NumAdrEmployes, TextBox^ NameStreetEmployes, TextBox^ FloorEmployes, TextBox^ CityEmployes, TextBox^ PostalCodeEmployes, TextBox^ Superior)
{
    try {
        this->AddressNum = Convert::ToInt32(NumAdrEmployes->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Address number must be a number");
        return;
    }
    try {
        this->AddressPostalCode = Convert::ToInt32(PostalCodeEmployes->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Postal Code be a number");
        return;
    }
    try {
        this->AddressFloor = Convert::ToInt32(FloorEmployes->Text);
    }
    catch (Exception^ e)
    {
        if (FloorEmployes->Text != "")
        {
            MessageBox::Show("Floor must be a number or empty");
            return;
        }
    }
    SqlServices^ DB = gcnew SqlServices();
    if (DB->ExecuteQuery("SELECT Id_City FROM projetPOO.dbo.residence_cities WHERE City_Name ='" + CityEmployes->Text + "' AND Post_Code = '" + PostalCodeEmployes->Text + "'") == 0) {
        MessageBox::Show("La ville et le code postal ne correspondent pas");
        return;
    }
    MessageBox::Show("City->Text" + CityEmployes->Text + "Post_Code" + PostalCodeEmployes->Text);
    this->FirstName = EmployesFirstname->Text;
    this->LastName = EmployesLastName->Text;
    this->AddressStreet = NameStreetEmployes->Text;
    this->AddressCity = CityEmployes->Text;
    this->HiringDate = HiringDate->Value;
    DB->ConnectDB();
    System::Data::DataTable^ q1 = DB->ExecuteSQL("SELECT Id_City FROM projetPOO.dbo.residence_cities WHERE City_Name ='" + CityEmployes->Text + "' AND Post_Code = '" + PostalCodeEmployes->Text + "'");
    DB->ExecuteQuery("INSERT INTO projetPOO.dbo.Address VALUES ('" + System::Convert::ToString(this->AddressNum) + "','" + this->AddressStreet + "','" + System::Convert::ToString(this->AddressFloor) + "'," + q1->Rows[0]->ItemArray[0] + ")");
    DB->ExecuteQuery("INSERT INTO projetPOO.dbo.Client VALUES ( '" + this->LastName + "','" + this->EmployesFirstName + "','" + HiringDate->Value.Year + "-" + HiringDate->Value.Month + "-" + HiringDate->Value.Day + "')");
    System::Data::DataTable^ q = DB->ExecuteSQL("SELECT MAX(Id_Client) FROM projetPOO.dbo.Client");
    System::Data::DataTable^ q2 = DB->ExecuteSQL("SELECT MAX(Id_Adr) FROM projetPOO.dbo.Address");
    DB->ExecuteQuery("INSERT INTO projetPOO.dbo.Live_InC VALUES ( " + q->Rows[0]->ItemArray[0]->ToString() + ", " + q2->Rows[0]->ItemArray[0]->ToString() + ")");

    MessageBox::Show("Employee Created");
}

void Employee::Update(TextBox^ IDEmployes, TextBox^ EmployesLastName, TextBox^ EmployesFirstname, DateTimePicker^ HiringDate, TextBox^ NumAdrEmployes, TextBox^ NameStreetEmployes, TextBox^ FloorEmployes, TextBox^ CityEmployes, TextBox^ PostalCodeEmployes)
{
    try {
        this->ID = Convert::ToInt32(IDEmployes->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("ID must be INT");
        return;
    }
    try {
        this->AddressNum = Convert::ToInt32(NumAdrEmployes->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Address number must be a number");
        return;
    }
    try {
        this->AddressPostalCode = Convert::ToInt32(PostalCodeEmployes->Text);
    }
    catch (Exception^ e)
    {
        MessageBox::Show("Postal Code be a number");
        return;
    }
    try {
        this->AddressFloor = Convert::ToInt32(FloorEmployes->Text);
    }
    catch (Exception^ e)
    {
        if (FloorEmployes->Text != "")
        {
            MessageBox::Show("Floor must be a number or empty");
            return;
        }
    }
    this->FirstName = EmployesFirstname->Text;
    this->LastName = EmployesLastName->Text;
    this->AddressStreet = NameStreetEmployes->Text;
    this->AddressCity = CityEmployes->Text;
    this->HiringDate = HiringhDate->Value;
    if (this->Exist())
    {
        SqlServices^ DB = gcnew SqlServices();
        DB->ConnectDB();
        DB->ExecuteQuery("UPDATE projetPOO.dbo.Employee SET Last_Employee = '" + this->LastName + "',First_Employee = '" + this->FirstName + "',Hiring_Date = '" + HiringDate->Value.Year + "-" + HiringDate->Value.Month + "-" + HiringDate->Value.Day + "' WHERE Id_Employee = " + System::Convert::ToString(this->ID));
        DB->ExecuteQuery("UPDATE projetPOO.dbo.Address SET Number_Adr = '" + System::Convert::ToString(this->AddressNum) + "',Street_Adr = '" + this->AddressStreet + "',Floor = '" + FloorEmployes->Text + "' WHERE Id_Adr = (SELECT Id_Adr FROM projetPOO.dbo.Live_InC WHERE Id_Client = " + System::Convert::ToString(this->ID) + ")");
        Windows::Forms::MessageBox::Show("Employee updated");
    }
    else
    {
        Windows::Forms::MessageBox::Show("Employee ID doesn't exists");
    }
}

bool Employee::Exist()
{
    // faire requête et si employé existe mettre True sinon false
    return true;