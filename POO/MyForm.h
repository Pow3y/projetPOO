#pragma once
#include "Connection.h"
#include "SqlServices.h"
#include "Clients.h"
#include "Employee.h"
#include <stdexcept>
#include <sstream>

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;
	using namespace System::Globalization;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelHotbar;



	private: System::Windows::Forms::Button^ StatsButton;
	private: System::Windows::Forms::Button^ StocksButton;
	private: System::Windows::Forms::Button^ EmployesButton;
	private: System::Windows::Forms::Button^ CommandesButton;
	private: System::Windows::Forms::Button^ ClientButton;





	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPaneljspcekecéle2;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2jspcekecé;


	private: System::Windows::Forms::Button^ SupprimerClientButton;
	private: System::Windows::Forms::Button^ AjouterClientButton;
	private: System::Windows::Forms::Button^ ModifierClientButton;
	

private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TabControl^ tabAffichage;
private: System::Windows::Forms::TabPage^ tabCommandes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelCommand;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailsCommand;
private: System::Windows::Forms::Label^ labelDateEmission;

private: System::Windows::Forms::Label^ labelDateLivraisonClient;

private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ labelReferenceCommandeCommande;

private: System::Windows::Forms::DateTimePicker^ dateTimePickerDelivery;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmission;
private: System::Windows::Forms::Label^ labelAdresseLivraison;

private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelModCommand;
private: System::Windows::Forms::Button^ ModifyCommandButton;
private: System::Windows::Forms::Button^ AddCommandButton;

private: System::Windows::Forms::TabPage^ tabClient;


private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelClient;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailClient;
private: System::Windows::Forms::Label^ labelBirthDateClient;

private: System::Windows::Forms::Label^ labelPrenomClient;

private: System::Windows::Forms::TextBox^ textBoxPrénomClient;
private: System::Windows::Forms::TextBox^ textBoxCodePostal;

private: System::Windows::Forms::Label^ labelCodePostalClient;




private: System::Windows::Forms::TextBox^ textBoxNomClient;

private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirthDate;
private: System::Windows::Forms::Label^ labelNumDeRueClient;
private: System::Windows::Forms::Label^ labelNomDeRueClient;


private: System::Windows::Forms::TextBox^ textBoxNumRue;
private: System::Windows::Forms::TextBox^ textBoxNomRue;
private: System::Windows::Forms::Label^ labelNomClient;







private: System::Windows::Forms::TabPage^ tabEmployes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelEmployes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailEmployes;
private: System::Windows::Forms::Label^ labelPrenomEmployes;

private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ labelDateEmbaucheEmployes;

private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ labelNomEmployes;
private: System::Windows::Forms::Label^ labelSuperieurEmployes;


private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ labelAdressePostaleEmployes;

private: System::Windows::Forms::DateTimePicker^ dateTimePickerHiring;




private: System::Windows::Forms::TabPage^ tabStocks;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelStocks;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailStocks;
private: System::Windows::Forms::Label^ labelDesignationStocks;

private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ labelQuantiteStocks;

private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ labelReferenceProduitStocks;

private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ labelPrixStocks;
private: System::Windows::Forms::Label^ labelTauxTvaStocks;


private: System::Windows::Forms::Label^ labelSeuilReaprovisionnementStocks;

private: System::Windows::Forms::TextBox^ textBox18;




private: System::Windows::Forms::TabPage^ tabStats;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::Label^ label22;




private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;

private: System::Windows::Forms::Button^ button5;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ labelEtageClient;
private: System::Windows::Forms::Label^ labelVilleClient;



private: System::Windows::Forms::TextBox^ textBoxEtage;
private: System::Windows::Forms::TextBox^ textBoxVille;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::Button^ button4;

    ;
private: System::Windows::Forms::Label^ labelClientId;
private: System::Windows::Forms::TextBox^ textBoxClientId;

















	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->tableLayoutPanelHotbar = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->StatsButton = (gcnew System::Windows::Forms::Button());
            this->ClientButton = (gcnew System::Windows::Forms::Button());
            this->StocksButton = (gcnew System::Windows::Forms::Button());
            this->EmployesButton = (gcnew System::Windows::Forms::Button());
            this->CommandesButton = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPaneljspcekecéle2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel2jspcekecé = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->SupprimerClientButton = (gcnew System::Windows::Forms::Button());
            this->AjouterClientButton = (gcnew System::Windows::Forms::Button());
            this->ModifierClientButton = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->tabAffichage = (gcnew System::Windows::Forms::TabControl());
            this->tabClient = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanelClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->labelClientId = (gcnew System::Windows::Forms::Label());
            this->labelBirthDateClient = (gcnew System::Windows::Forms::Label());
            this->labelPrenomClient = (gcnew System::Windows::Forms::Label());
            this->textBoxPrénomClient = (gcnew System::Windows::Forms::TextBox());
            this->textBoxCodePostal = (gcnew System::Windows::Forms::TextBox());
            this->labelCodePostalClient = (gcnew System::Windows::Forms::Label());
            this->textBoxNomClient = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePickerBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->labelNumDeRueClient = (gcnew System::Windows::Forms::Label());
            this->labelNomDeRueClient = (gcnew System::Windows::Forms::Label());
            this->textBoxNumRue = (gcnew System::Windows::Forms::TextBox());
            this->textBoxNomRue = (gcnew System::Windows::Forms::TextBox());
            this->labelNomClient = (gcnew System::Windows::Forms::Label());
            this->textBoxClientId = (gcnew System::Windows::Forms::TextBox());
            this->labelEtageClient = (gcnew System::Windows::Forms::Label());
            this->textBoxEtage = (gcnew System::Windows::Forms::TextBox());
            this->labelVilleClient = (gcnew System::Windows::Forms::Label());
            this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
            this->tabCommandes = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelCommand = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanelDetailsCommand = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->labelDateEmission = (gcnew System::Windows::Forms::Label());
            this->labelDateLivraisonClient = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->labelReferenceCommandeCommande = (gcnew System::Windows::Forms::Label());
            this->dateTimePickerDelivery = (gcnew System::Windows::Forms::DateTimePicker());
            this->dateTimePickerEmission = (gcnew System::Windows::Forms::DateTimePicker());
            this->labelAdresseLivraison = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanelModCommand = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ModifyCommandButton = (gcnew System::Windows::Forms::Button());
            this->AddCommandButton = (gcnew System::Windows::Forms::Button());
            this->tabEmployes = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->labelPrenomEmployes = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->labelDateEmbaucheEmployes = (gcnew System::Windows::Forms::Label());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->labelNomEmployes = (gcnew System::Windows::Forms::Label());
            this->labelSuperieurEmployes = (gcnew System::Windows::Forms::Label());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->labelAdressePostaleEmployes = (gcnew System::Windows::Forms::Label());
            this->dateTimePickerHiring = (gcnew System::Windows::Forms::DateTimePicker());
            this->tabStocks = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->labelDesignationStocks = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->labelQuantiteStocks = (gcnew System::Windows::Forms::Label());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->labelReferenceProduitStocks = (gcnew System::Windows::Forms::Label());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->labelPrixStocks = (gcnew System::Windows::Forms::Label());
            this->labelTauxTvaStocks = (gcnew System::Windows::Forms::Label());
            this->labelSeuilReaprovisionnementStocks = (gcnew System::Windows::Forms::Label());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->tabStats = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanelHotbar->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tabAffichage->SuspendLayout();
            this->tabClient->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tableLayoutPanelClient->SuspendLayout();
            this->tableLayoutPanel10->SuspendLayout();
            this->tableLayoutPanelDetailClient->SuspendLayout();
            this->tabCommandes->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->tableLayoutPanelCommand->SuspendLayout();
            this->tableLayoutPanelDetailsCommand->SuspendLayout();
            this->tableLayoutPanelModCommand->SuspendLayout();
            this->tabEmployes->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->tableLayoutPanelEmployes->SuspendLayout();
            this->tableLayoutPanel8->SuspendLayout();
            this->tableLayoutPanelDetailEmployes->SuspendLayout();
            this->tabStocks->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->tableLayoutPanelStocks->SuspendLayout();
            this->tableLayoutPanel9->SuspendLayout();
            this->tableLayoutPanelDetailStocks->SuspendLayout();
            this->tabStats->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
            this->tableLayoutPanel6->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanelHotbar
            // 
            this->tableLayoutPanelHotbar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
                static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
            this->tableLayoutPanelHotbar->ColumnCount = 6;
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                2)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelHotbar->Controls->Add(this->StatsButton, 5, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->ClientButton, 1, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->StocksButton, 4, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->EmployesButton, 3, 0);
            this->tableLayoutPanelHotbar->Controls->Add(this->CommandesButton, 2, 0);
            this->tableLayoutPanelHotbar->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanelHotbar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->tableLayoutPanelHotbar->Location = System::Drawing::Point(0, 60);
            this->tableLayoutPanelHotbar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelHotbar->Location = System::Drawing::Point(0, 38);
            this->tableLayoutPanelHotbar->Name = L"tableLayoutPanelHotbar";
            this->tableLayoutPanelHotbar->RowCount = 1;
            this->tableLayoutPanelHotbar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelHotbar->Size = System::Drawing::Size(1408, 40);
            this->tableLayoutPanelHotbar->TabIndex = 9;
            // 
            // StatsButton
            // 
            this->StatsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->StatsButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->StatsButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StatsButton->FlatAppearance->BorderSize = 0;
            this->StatsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StatsButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StatsButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->StatsButton->Location = System::Drawing::Point(1127, 1);
            this->StatsButton->Margin = System::Windows::Forms::Padding(1);
            this->StatsButton->Name = L"StatsButton";
            this->StatsButton->Size = System::Drawing::Size(280, 38);
            this->StatsButton->TabIndex = 4;
            this->StatsButton->Text = L"Stats";
            this->StatsButton->UseVisualStyleBackColor = false;
            this->StatsButton->Click += gcnew System::EventHandler(this, &MyForm::StatsButton_Click);
            // 
            // ClientButton
            // 
            this->ClientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->ClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ClientButton->FlatAppearance->BorderSize = 0;
            this->ClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClientButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ClientButton->Location = System::Drawing::Point(4, 1);
            this->ClientButton->Margin = System::Windows::Forms::Padding(1);
            this->ClientButton->Name = L"ClientButton";
            this->ClientButton->Size = System::Drawing::Size(279, 38);
            this->ClientButton->TabIndex = 0;
            this->ClientButton->Text = L"Client";
            this->ClientButton->UseVisualStyleBackColor = false;
            this->ClientButton->Click += gcnew System::EventHandler(this, &MyForm::ClientButton_Click);
            // 
            // StocksButton
            // 
            this->StocksButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->StocksButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->StocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StocksButton->FlatAppearance->BorderSize = 0;
            this->StocksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StocksButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StocksButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->StocksButton->Location = System::Drawing::Point(846, 1);
            this->StocksButton->Margin = System::Windows::Forms::Padding(1);
            this->StocksButton->Name = L"StocksButton";
            this->StocksButton->Size = System::Drawing::Size(279, 38);
            this->StocksButton->TabIndex = 3;
            this->StocksButton->Text = L"Stocks";
            this->StocksButton->UseVisualStyleBackColor = false;
            this->StocksButton->Click += gcnew System::EventHandler(this, &MyForm::StocksButton_Click);
            // 
            // EmployesButton
            // 
            this->EmployesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->EmployesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->EmployesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployesButton->FlatAppearance->BorderSize = 0;
            this->EmployesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->EmployesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->EmployesButton->Location = System::Drawing::Point(565, 1);
            this->EmployesButton->Margin = System::Windows::Forms::Padding(1);
            this->EmployesButton->Name = L"EmployesButton";
            this->EmployesButton->Size = System::Drawing::Size(279, 38);
            this->EmployesButton->TabIndex = 2;
            this->EmployesButton->Text = L"Employes";
            this->EmployesButton->UseVisualStyleBackColor = false;
            this->EmployesButton->Click += gcnew System::EventHandler(this, &MyForm::EmployesButton_Click);
            // 
            // CommandesButton
            // 
            this->CommandesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->CommandesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->CommandesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->CommandesButton->FlatAppearance->BorderSize = 0;
            this->CommandesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->CommandesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CommandesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->CommandesButton->Location = System::Drawing::Point(284, 1);
            this->CommandesButton->Margin = System::Windows::Forms::Padding(1);
            this->CommandesButton->Name = L"CommandesButton";
            this->CommandesButton->Size = System::Drawing::Size(279, 38);
            this->CommandesButton->TabIndex = 1;
            this->CommandesButton->Text = L"Commandes";
            this->CommandesButton->UseVisualStyleBackColor = false;
            this->CommandesButton->Click += gcnew System::EventHandler(this, &MyForm::CommandesButton_Click);
            // 
            // tableLayoutPaneljspcekecéle2
            // 
            this->tableLayoutPaneljspcekecéle2->ColumnCount = 5;
            this->tableLayoutPaneljspcekecéle2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekecéle2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekecéle2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekecéle2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekecéle2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPaneljspcekecéle2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPaneljspcekecéle2->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPaneljspcekecéle2->Name = L"tableLayoutPaneljspcekecéle2";
            this->tableLayoutPaneljspcekecéle2->RowCount = 1;
            this->tableLayoutPaneljspcekecéle2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPaneljspcekecéle2->Size = System::Drawing::Size(934, 94);
            this->tableLayoutPaneljspcekecéle2->TabIndex = 1;
            // 
            // textBox5
            // 
            this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox5->Location = System::Drawing::Point(747, 3);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(184, 22);
            this->textBox5->TabIndex = 4;
            // 
            // textBox4
            // 
            this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox4->Location = System::Drawing::Point(561, 3);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(180, 22);
            this->textBox4->TabIndex = 3;
            // 
            // textBox3
            // 
            this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox3->Location = System::Drawing::Point(375, 3);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(180, 22);
            this->textBox3->TabIndex = 2;
            // 
            // textBox2
            // 
            this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox2->Location = System::Drawing::Point(189, 3);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(180, 22);
            this->textBox2->TabIndex = 1;
            // 
            // textBox1
            // 
            this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox1->Location = System::Drawing::Point(3, 3);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(180, 22);
            this->textBox1->TabIndex = 0;
            // 
            // tableLayoutPanel2jspcekecé
            // 
            this->tableLayoutPanel2jspcekecé->ColumnCount = 1;
            this->tableLayoutPanel2jspcekecé->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2jspcekecé->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2jspcekecé->Location = System::Drawing::Point(943, 3);
            this->tableLayoutPanel2jspcekecé->Name = L"tableLayoutPanel2jspcekecé";
            this->tableLayoutPanel2jspcekecé->RowCount = 3;
            this->tableLayoutPanel2jspcekecé->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2jspcekecé->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33334F)));
            this->tableLayoutPanel2jspcekecé->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanel2jspcekecé->Size = System::Drawing::Size(230, 94);
            this->tableLayoutPanel2jspcekecé->TabIndex = 0;
            // 
            // SupprimerClientButton
            // 
            this->SupprimerClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->SupprimerClientButton->Location = System::Drawing::Point(3, 65);
            this->SupprimerClientButton->Name = L"SupprimerClientButton";
            this->SupprimerClientButton->Size = System::Drawing::Size(224, 26);
            this->SupprimerClientButton->TabIndex = 4;
            this->SupprimerClientButton->Text = L"Supprimer";
            this->SupprimerClientButton->UseVisualStyleBackColor = true;
            // 
            // AjouterClientButton
            // 
            this->AjouterClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->AjouterClientButton->Location = System::Drawing::Point(3, 3);
            this->AjouterClientButton->Name = L"AjouterClientButton";
            this->AjouterClientButton->Size = System::Drawing::Size(224, 25);
            this->AjouterClientButton->TabIndex = 2;
            this->AjouterClientButton->Text = L"Ajouter";
            this->AjouterClientButton->UseVisualStyleBackColor = true;
            // 
            // ModifierClientButton
            // 
            this->ModifierClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ModifierClientButton->Location = System::Drawing::Point(3, 34);
            this->ModifierClientButton->Name = L"ModifierClientButton";
            this->ModifierClientButton->Size = System::Drawing::Size(224, 25);
            this->ModifierClientButton->TabIndex = 5;
            this->ModifierClientButton->Text = L"Modifier";
            this->ModifierClientButton->UseVisualStyleBackColor = true;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)));
            this->panel1->Controls->Add(this->tabAffichage);
            this->panel1->Controls->Add(this->tableLayoutPanelHotbar);
            this->panel1->Controls->Add(this->tableLayoutPanel6);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1408, 579);
            this->panel1->TabIndex = 9;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // tabAffichage
            // 
            this->tabAffichage->Appearance = System::Windows::Forms::TabAppearance::Buttons;
            this->tabAffichage->Controls->Add(this->tabClient);
            this->tabAffichage->Controls->Add(this->tabCommandes);
            this->tabAffichage->Controls->Add(this->tabEmployes);
            this->tabAffichage->Controls->Add(this->tabStocks);
            this->tabAffichage->Controls->Add(this->tabStats);
            this->tabAffichage->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabAffichage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabAffichage->ImeMode = System::Windows::Forms::ImeMode::Off;
            this->tabAffichage->ItemSize = System::Drawing::Size(71, 25);
            this->tabAffichage->Location = System::Drawing::Point(0, 78);
            this->tabAffichage->Name = L"tabAffichage";
            this->tabAffichage->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->tabAffichage->SelectedIndex = 0;
            this->tabAffichage->Size = System::Drawing::Size(1408, 501);
            this->tabAffichage->TabIndex = 8;
            // 
            // tabClient
            // 
            this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)));
            this->tabClient->Controls->Add(this->tableLayoutPanel1);
            this->tabClient->Controls->Add(this->tableLayoutPanelClient);
            this->tabClient->Location = System::Drawing::Point(4, 29);
            this->tabClient->Name = L"tabClient";
            this->tabClient->Padding = System::Windows::Forms::Padding(1);
            this->tabClient->Size = System::Drawing::Size(1400, 468);
            this->tabClient->TabIndex = 0;
            this->tabClient->Text = L"Client";
            this->tabClient->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel1->ColumnCount = 3;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 1, 1);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(1, 1);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 3;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1398, 327);
            this->tableLayoutPanel1->TabIndex = 6;
            this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint_1);
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(101, 48);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1262, 265);
            this->dataGridView1->TabIndex = 4;
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
            // 
            // tableLayoutPanelClient
            // 
            this->tableLayoutPanelClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tableLayoutPanelClient->ColumnCount = 2;
            this->tableLayoutPanelClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanelClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelClient->Controls->Add(this->tableLayoutPanel10, 0, 0);
            this->tableLayoutPanelClient->Controls->Add(this->tableLayoutPanelDetailClient, 0, 0);
            this->tableLayoutPanelClient->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelClient->Location = System::Drawing::Point(1, 328);
            this->tableLayoutPanelClient->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanelClient->Name = L"tableLayoutPanelClient";
            this->tableLayoutPanelClient->RowCount = 1;
            this->tableLayoutPanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelClient->Size = System::Drawing::Size(1398, 139);
            this->tableLayoutPanelClient->TabIndex = 5;
            this->tableLayoutPanelClient->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanelClient_Paint);
            // 
            // tableLayoutPanel10
            // 
            this->tableLayoutPanel10->ColumnCount = 1;
            this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel10->Controls->Add(this->button3, 0, 1);
            this->tableLayoutPanel10->Controls->Add(this->button6, 0, 0);
            this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel10->Location = System::Drawing::Point(1120, 2);
            this->tableLayoutPanel10->Margin = System::Windows::Forms::Padding(2);
            this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
            this->tableLayoutPanel10->RowCount = 2;
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                8)));
            this->tableLayoutPanel10->Size = System::Drawing::Size(276, 135);
            this->tableLayoutPanel10->TabIndex = 3;
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button3->Location = System::Drawing::Point(3, 70);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(270, 62);
            this->button3->TabIndex = 5;
            this->button3->Text = L"Modifier";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button6->Location = System::Drawing::Point(3, 3);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(270, 61);
            this->button6->TabIndex = 2;
            this->button6->Text = L"Ajouter";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // tableLayoutPanelDetailClient
            // 
            this->tableLayoutPanelDetailClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailClient->ColumnCount = 9;
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelClientId, 0, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelBirthDateClient, 3, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelPrenomClient, 3, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxPrénomClient, 4, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxCodePostal, 1, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelCodePostalClient, 0, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNomClient, 1, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->dateTimePickerBirthDate, 4, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelNumDeRueClient, 6, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelNomDeRueClient, 6, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNumRue, 7, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNomRue, 7, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelNomClient, 0, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxClientId, 1, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelEtageClient, 3, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxEtage, 4, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->labelVilleClient, 6, 3);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxVille, 7, 3);
            this->tableLayoutPanelDetailClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailClient->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanelDetailClient->Name = L"tableLayoutPanelDetailClient";
            this->tableLayoutPanelDetailClient->RowCount = 5;
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailClient->Size = System::Drawing::Size(1112, 133);
            this->tableLayoutPanelDetailClient->TabIndex = 2;
            this->tableLayoutPanelDetailClient->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel15_Paint);
            // 
            // labelClientId
            // 
            this->labelClientId->AutoSize = true;
            this->labelClientId->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelClientId->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelClientId->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelClientId->Location = System::Drawing::Point(1, 82);
            this->labelClientId->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelClientId->Name = L"labelClientId";
            this->labelClientId->Size = System::Drawing::Size(96, 31);
            this->labelClientId->TabIndex = 27;
            this->labelClientId->Text = L"Client ID :";
            // 
            // labelBirthDateClient
            // 
            this->labelBirthDateClient->AutoSize = true;
            this->labelBirthDateClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelBirthDateClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelBirthDateClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelBirthDateClient->Location = System::Drawing::Point(357, 51);
            this->labelBirthDateClient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelBirthDateClient->Name = L"labelBirthDateClient";
            this->labelBirthDateClient->Size = System::Drawing::Size(138, 31);
            this->labelBirthDateClient->TabIndex = 17;
            this->labelBirthDateClient->Text = L"Date de naissance :";
            // 
            // labelPrenomClient
            // 
            this->labelPrenomClient->AutoSize = true;
            this->labelPrenomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelPrenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPrenomClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelPrenomClient->Location = System::Drawing::Point(357, 20);
            this->labelPrenomClient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelPrenomClient->Name = L"labelPrenomClient";
            this->labelPrenomClient->Size = System::Drawing::Size(138, 31);
            this->labelPrenomClient->TabIndex = 16;
            this->labelPrenomClient->Text = L"Prénom :";
            // 
            // textBoxPrénomClient
            // 
            this->textBoxPrénomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPrénomClient->Location = System::Drawing::Point(497, 21);
            this->textBoxPrénomClient->Margin = System::Windows::Forms::Padding(1);
            this->textBoxPrénomClient->Name = L"textBoxPrénomClient";
            this->textBoxPrénomClient->Size = System::Drawing::Size(236, 22);
            this->textBoxPrénomClient->TabIndex = 14;
            // 
            // textBoxCodePostal
            // 
            this->textBoxCodePostal->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxCodePostal->Location = System::Drawing::Point(99, 52);
            this->textBoxCodePostal->Margin = System::Windows::Forms::Padding(1);
            this->textBoxCodePostal->Name = L"textBoxCodePostal";
            this->textBoxCodePostal->Size = System::Drawing::Size(236, 22);
            this->textBoxCodePostal->TabIndex = 11;
            // 
            // labelCodePostalClient
            // 
            this->labelCodePostalClient->AutoSize = true;
            this->labelCodePostalClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelCodePostalClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelCodePostalClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelCodePostalClient->Location = System::Drawing::Point(1, 51);
            this->labelCodePostalClient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelCodePostalClient->Name = L"labelCodePostalClient";
            this->labelCodePostalClient->Size = System::Drawing::Size(96, 31);
            this->labelCodePostalClient->TabIndex = 10;
            this->labelCodePostalClient->Text = L"Code postal :";
            this->labelCodePostalClient->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // textBoxNomClient
            // 
            this->textBoxNomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNomClient->Location = System::Drawing::Point(99, 21);
            this->textBoxNomClient->Margin = System::Windows::Forms::Padding(1);
            this->textBoxNomClient->Name = L"textBoxNomClient";
            this->textBoxNomClient->Size = System::Drawing::Size(236, 22);
            this->textBoxNomClient->TabIndex = 2;
            // 
            // dateTimePickerBirthDate
            // 
            this->dateTimePickerBirthDate->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerBirthDate->Location = System::Drawing::Point(497, 52);
            this->dateTimePickerBirthDate->Margin = System::Windows::Forms::Padding(1);
            this->dateTimePickerBirthDate->Name = L"dateTimePickerBirthDate";
            this->dateTimePickerBirthDate->Size = System::Drawing::Size(236, 22);
            this->dateTimePickerBirthDate->TabIndex = 18;
            // 
            // labelNumDeRueClient
            // 
            this->labelNumDeRueClient->AutoSize = true;
            this->labelNumDeRueClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNumDeRueClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNumDeRueClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNumDeRueClient->Location = System::Drawing::Point(755, 20);
            this->labelNumDeRueClient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelNumDeRueClient->Name = L"labelNumDeRueClient";
            this->labelNumDeRueClient->Size = System::Drawing::Size(96, 31);
            this->labelNumDeRueClient->TabIndex = 19;
            this->labelNumDeRueClient->Text = L"Num de rue :";
            // 
            // labelNomDeRueClient
            // 
            this->labelNomDeRueClient->AutoSize = true;
            this->labelNomDeRueClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNomDeRueClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNomDeRueClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNomDeRueClient->Location = System::Drawing::Point(755, 51);
            this->labelNomDeRueClient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelNomDeRueClient->Name = L"labelNomDeRueClient";
            this->labelNomDeRueClient->Size = System::Drawing::Size(96, 31);
            this->labelNomDeRueClient->TabIndex = 20;
            this->labelNomDeRueClient->Text = L"Nom de rue :";
            // 
            // textBoxNumRue
            // 
            this->textBoxNumRue->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNumRue->Location = System::Drawing::Point(853, 21);
            this->textBoxNumRue->Margin = System::Windows::Forms::Padding(1);
            this->textBoxNumRue->Name = L"textBoxNumRue";
            this->textBoxNumRue->Size = System::Drawing::Size(236, 22);
            this->textBoxNumRue->TabIndex = 21;
            // 
            // textBoxNomRue
            // 
            this->textBoxNomRue->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNomRue->Location = System::Drawing::Point(853, 52);
            this->textBoxNomRue->Margin = System::Windows::Forms::Padding(1);
            this->textBoxNomRue->Name = L"textBoxNomRue";
            this->textBoxNomRue->Size = System::Drawing::Size(236, 22);
            this->textBoxNomRue->TabIndex = 22;
            // 
            // labelNomClient
            // 
            this->labelNomClient->AutoSize = true;
            this->labelNomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNomClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelNomClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNomClient->Location = System::Drawing::Point(3, 20);
            this->labelNomClient->Name = L"labelNomClient";
            this->labelNomClient->Size = System::Drawing::Size(92, 31);
            this->labelNomClient->TabIndex = 6;
            this->labelNomClient->Text = L"Nom :";
            this->labelNomClient->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // textBoxClientId
            // 
            this->textBoxClientId->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxClientId->Location = System::Drawing::Point(99, 83);
            this->textBoxClientId->Margin = System::Windows::Forms::Padding(1);
            this->textBoxClientId->Name = L"textBoxClientId";
            this->textBoxClientId->Size = System::Drawing::Size(236, 22);
            this->textBoxClientId->TabIndex = 28;
            // 
            // labelEtageClient
            // 
            this->labelEtageClient->AutoSize = true;
            this->labelEtageClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelEtageClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelEtageClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelEtageClient->Location = System::Drawing::Point(357, 82);
            this->labelEtageClient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelEtageClient->Name = L"labelEtageClient";
            this->labelEtageClient->Size = System::Drawing::Size(138, 31);
            this->labelEtageClient->TabIndex = 23;
            this->labelEtageClient->Text = L"Etage :";
            // 
            // textBoxEtage
            // 
            this->textBoxEtage->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxEtage->Location = System::Drawing::Point(497, 83);
            this->textBoxEtage->Margin = System::Windows::Forms::Padding(1);
            this->textBoxEtage->Name = L"textBoxEtage";
            this->textBoxEtage->Size = System::Drawing::Size(236, 22);
            this->textBoxEtage->TabIndex = 25;
            // 
            // labelVilleClient
            // 
            this->labelVilleClient->AutoSize = true;
            this->labelVilleClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelVilleClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelVilleClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelVilleClient->Location = System::Drawing::Point(755, 82);
            this->labelVilleClient->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelVilleClient->Name = L"labelVilleClient";
            this->labelVilleClient->Size = System::Drawing::Size(96, 31);
            this->labelVilleClient->TabIndex = 24;
            this->labelVilleClient->Text = L" Ville :";
            // 
            // textBoxVille
            // 
            this->textBoxVille->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxVille->Location = System::Drawing::Point(853, 83);
            this->textBoxVille->Margin = System::Windows::Forms::Padding(1);
            this->textBoxVille->Name = L"textBoxVille";
            this->textBoxVille->Size = System::Drawing::Size(236, 22);
            this->textBoxVille->TabIndex = 26;
            // 
            // tabCommandes
            // 
            this->tabCommandes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabCommandes->Controls->Add(this->tableLayoutPanel2);
            this->tabCommandes->Controls->Add(this->checkBox2);
            this->tabCommandes->Controls->Add(this->tableLayoutPanelCommand);
            this->tabCommandes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabCommandes->Location = System::Drawing::Point(4, 29);
            this->tabCommandes->Name = L"tabCommandes";
            this->tabCommandes->Padding = System::Windows::Forms::Padding(1);
            this->tabCommandes->Size = System::Drawing::Size(1400, 468);
            this->tabCommandes->TabIndex = 1;
            this->tabCommandes->Text = L"Commandes";
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel2->ColumnCount = 3;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel2->Controls->Add(this->dataGridView2, 1, 1);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(1, 1);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 3;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(1398, 327);
            this->tableLayoutPanel2->TabIndex = 8;
            // 
            // dataGridView2
            // 
            this->dataGridView2->AllowUserToAddRows = false;
            this->dataGridView2->AllowUserToDeleteRows = false;
            this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView2->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView2->Location = System::Drawing::Point(101, 48);
            this->dataGridView2->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->ReadOnly = true;
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(1262, 283);
            this->dataGridView2->TabIndex = 5;
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(477, 181);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(98, 21);
            this->checkBox2->TabIndex = 6;
            this->checkBox2->Text = L"checkBox2";
            this->checkBox2->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanelCommand
            // 
            this->tableLayoutPanelCommand->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelCommand->ColumnCount = 2;
            this->tableLayoutPanelCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanelCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelCommand->Controls->Add(this->tableLayoutPanelDetailsCommand, 0, 0);
            this->tableLayoutPanelCommand->Controls->Add(this->tableLayoutPanelModCommand, 1, 0);
            this->tableLayoutPanelCommand->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelCommand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tableLayoutPanelCommand->Location = System::Drawing::Point(1, 328);
            this->tableLayoutPanelCommand->Margin = System::Windows::Forms::Padding(2);
            this->tableLayoutPanelCommand->Name = L"tableLayoutPanelCommand";
            this->tableLayoutPanelCommand->RowCount = 1;
            this->tableLayoutPanelCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelCommand->Size = System::Drawing::Size(1398, 139);
            this->tableLayoutPanelCommand->TabIndex = 7;
            // 
            // tableLayoutPanelDetailsCommand
            // 
            this->tableLayoutPanelDetailsCommand->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailsCommand->ColumnCount = 5;
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                23)));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->labelDateEmission, 3, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->labelDateLivraisonClient, 0, 2);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->textBox9, 1, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->labelReferenceCommandeCommande, 0, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->dateTimePickerDelivery, 1, 2);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->dateTimePickerEmission, 4, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->labelAdresseLivraison, 3, 2);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->textBox7, 4, 2);
            this->tableLayoutPanelDetailsCommand->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailsCommand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
                static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tableLayoutPanelDetailsCommand->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanelDetailsCommand->Name = L"tableLayoutPanelDetailsCommand";
            this->tableLayoutPanelDetailsCommand->RowCount = 3;
            this->tableLayoutPanelDetailsCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailsCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->Size = System::Drawing::Size(1112, 133);
            this->tableLayoutPanelDetailsCommand->TabIndex = 2;
            // 
            // labelDateEmission
            // 
            this->labelDateEmission->AutoSize = true;
            this->labelDateEmission->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelDateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelDateEmission->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelDateEmission->Location = System::Drawing::Point(577, 20);
            this->labelDateEmission->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelDateEmission->Name = L"labelDateEmission";
            this->labelDateEmission->Size = System::Drawing::Size(149, 56);
            this->labelDateEmission->TabIndex = 16;
            this->labelDateEmission->Text = L"Date d\'émission :";
            // 
            // labelDateLivraisonClient
            // 
            this->labelDateLivraisonClient->AutoSize = true;
            this->labelDateLivraisonClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelDateLivraisonClient->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelDateLivraisonClient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelDateLivraisonClient->Location = System::Drawing::Point(3, 76);
            this->labelDateLivraisonClient->Name = L"labelDateLivraisonClient";
            this->labelDateLivraisonClient->Size = System::Drawing::Size(163, 57);
            this->labelDateLivraisonClient->TabIndex = 10;
            this->labelDateLivraisonClient->Text = L"Date de livraison :";
            // 
            // textBox9
            // 
            this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox9->Location = System::Drawing::Point(172, 23);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(377, 22);
            this->textBox9->TabIndex = 2;
            // 
            // labelReferenceCommandeCommande
            // 
            this->labelReferenceCommandeCommande->AutoSize = true;
            this->labelReferenceCommandeCommande->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelReferenceCommandeCommande->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelReferenceCommandeCommande->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelReferenceCommandeCommande->Location = System::Drawing::Point(3, 20);
            this->labelReferenceCommandeCommande->Name = L"labelReferenceCommandeCommande";
            this->labelReferenceCommandeCommande->Size = System::Drawing::Size(163, 56);
            this->labelReferenceCommandeCommande->TabIndex = 6;
            this->labelReferenceCommandeCommande->Text = L"Référence commande :";
            this->labelReferenceCommandeCommande->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // dateTimePickerDelivery
            // 
            this->dateTimePickerDelivery->CustomFormat = L"";
            this->dateTimePickerDelivery->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerDelivery->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerDelivery->Location = System::Drawing::Point(172, 79);
            this->dateTimePickerDelivery->Name = L"dateTimePickerDelivery";
            this->dateTimePickerDelivery->Size = System::Drawing::Size(377, 22);
            this->dateTimePickerDelivery->TabIndex = 17;
            // 
            // dateTimePickerEmission
            // 
            this->dateTimePickerEmission->CustomFormat = L"";
            this->dateTimePickerEmission->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerEmission->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerEmission->Location = System::Drawing::Point(730, 22);
            this->dateTimePickerEmission->Margin = System::Windows::Forms::Padding(2);
            this->dateTimePickerEmission->Name = L"dateTimePickerEmission";
            this->dateTimePickerEmission->Size = System::Drawing::Size(380, 22);
            this->dateTimePickerEmission->TabIndex = 18;
            // 
            // labelAdresseLivraison
            // 
            this->labelAdresseLivraison->AutoSize = true;
            this->labelAdresseLivraison->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelAdresseLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelAdresseLivraison->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelAdresseLivraison->Location = System::Drawing::Point(577, 76);
            this->labelAdresseLivraison->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelAdresseLivraison->Name = L"labelAdresseLivraison";
            this->labelAdresseLivraison->Size = System::Drawing::Size(149, 57);
            this->labelAdresseLivraison->TabIndex = 19;
            this->labelAdresseLivraison->Text = L"Adresse de livraison :";
            // 
            // textBox7
            // 
            this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox7->Location = System::Drawing::Point(730, 78);
            this->textBox7->Margin = System::Windows::Forms::Padding(2);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(380, 22);
            this->textBox7->TabIndex = 20;
            // 
            // tableLayoutPanelModCommand
            // 
            this->tableLayoutPanelModCommand->ColumnCount = 1;
            this->tableLayoutPanelModCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelModCommand->Controls->Add(this->ModifyCommandButton, 0, 1);
            this->tableLayoutPanelModCommand->Controls->Add(this->AddCommandButton, 0, 0);
            this->tableLayoutPanelModCommand->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelModCommand->Location = System::Drawing::Point(1120, 2);
            this->tableLayoutPanelModCommand->Margin = System::Windows::Forms::Padding(2);
            this->tableLayoutPanelModCommand->Name = L"tableLayoutPanelModCommand";
            this->tableLayoutPanelModCommand->RowCount = 2;
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelModCommand->Size = System::Drawing::Size(276, 135);
            this->tableLayoutPanelModCommand->TabIndex = 0;
            // 
            // ModifyCommandButton
            // 
            this->ModifyCommandButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->ModifyCommandButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ModifyCommandButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ModifyCommandButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ModifyCommandButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->ModifyCommandButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ModifyCommandButton->Location = System::Drawing::Point(3, 70);
            this->ModifyCommandButton->Name = L"ModifyCommandButton";
            this->ModifyCommandButton->Size = System::Drawing::Size(270, 62);
            this->ModifyCommandButton->TabIndex = 5;
            this->ModifyCommandButton->Text = L"Modifier";
            this->ModifyCommandButton->UseVisualStyleBackColor = false;
            // 
            // AddCommandButton
            // 
            this->AddCommandButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->AddCommandButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->AddCommandButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->AddCommandButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->AddCommandButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->AddCommandButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->AddCommandButton->Location = System::Drawing::Point(3, 3);
            this->AddCommandButton->Name = L"AddCommandButton";
            this->AddCommandButton->Size = System::Drawing::Size(270, 61);
            this->AddCommandButton->TabIndex = 2;
            this->AddCommandButton->Text = L"Ajouter";
            this->AddCommandButton->UseVisualStyleBackColor = false;
            // 
            // tabEmployes
            // 
            this->tabEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabEmployes->Controls->Add(this->tableLayoutPanel3);
            this->tabEmployes->Controls->Add(this->checkBox3);
            this->tabEmployes->Controls->Add(this->tableLayoutPanelEmployes);
            this->tabEmployes->Location = System::Drawing::Point(4, 29);
            this->tabEmployes->Name = L"tabEmployes";
            this->tabEmployes->Padding = System::Windows::Forms::Padding(1);
            this->tabEmployes->Size = System::Drawing::Size(1400, 468);
            this->tabEmployes->TabIndex = 2;
            this->tabEmployes->Text = L"Employes";
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel3->ColumnCount = 3;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel3->Controls->Add(this->dataGridView3, 1, 1);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(1, 1);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 3;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 8)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(1398, 327);
            this->tableLayoutPanel3->TabIndex = 9;
            // 
            // dataGridView3
            // 
            this->dataGridView3->AllowUserToAddRows = false;
            this->dataGridView3->AllowUserToDeleteRows = false;
            this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView3->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView3->Location = System::Drawing::Point(101, 48);
            this->dataGridView3->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->ReadOnly = true;
            this->dataGridView3->RowHeadersWidth = 51;
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->Size = System::Drawing::Size(1262, 287);
            this->dataGridView3->TabIndex = 5;
            // 
            // checkBox3
            // 
            this->checkBox3->AutoSize = true;
            this->checkBox3->Location = System::Drawing::Point(516, 164);
            this->checkBox3->Name = L"checkBox3";
            this->checkBox3->Size = System::Drawing::Size(98, 21);
            this->checkBox3->TabIndex = 6;
            this->checkBox3->Text = L"checkBox3";
            this->checkBox3->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanelEmployes
            // 
            this->tableLayoutPanelEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelEmployes->ColumnCount = 2;
            this->tableLayoutPanelEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanelEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelEmployes->Controls->Add(this->tableLayoutPanel8, 0, 0);
            this->tableLayoutPanelEmployes->Controls->Add(this->tableLayoutPanelDetailEmployes, 0, 0);
            this->tableLayoutPanelEmployes->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelEmployes->Location = System::Drawing::Point(1, 328);
            this->tableLayoutPanelEmployes->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanelEmployes->Name = L"tableLayoutPanelEmployes";
            this->tableLayoutPanelEmployes->RowCount = 1;
            this->tableLayoutPanelEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelEmployes->Size = System::Drawing::Size(1398, 139);
            this->tableLayoutPanelEmployes->TabIndex = 8;
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->ColumnCount = 1;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel8->Controls->Add(this->button4, 0, 1);
            this->tableLayoutPanel8->Controls->Add(this->button5, 0, 0);
            this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel8->Location = System::Drawing::Point(1119, 1);
            this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 2;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(278, 137);
            this->tableLayoutPanel8->TabIndex = 3;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button4->Location = System::Drawing::Point(1, 69);
            this->button4->Margin = System::Windows::Forms::Padding(1);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(276, 67);
            this->button4->TabIndex = 5;
            this->button4->Text = L"Modifier";
            this->button4->UseVisualStyleBackColor = false;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button5->Location = System::Drawing::Point(1, 1);
            this->button5->Margin = System::Windows::Forms::Padding(1);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(276, 66);
            this->button5->TabIndex = 2;
            this->button5->Text = L"Ajouter";
            this->button5->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanelDetailEmployes
            // 
            this->tableLayoutPanelDetailEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailEmployes->ColumnCount = 8;
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelPrenomEmployes, 3, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox6, 4, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelDateEmbaucheEmployes, 0, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox11, 1, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelNomEmployes, 0, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelSuperieurEmployes, 3, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox15, 4, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox8, 7, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->labelAdressePostaleEmployes, 6, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->dateTimePickerHiring, 1, 2);
            this->tableLayoutPanelDetailEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailEmployes->ForeColor = System::Drawing::Color::Black;
            this->tableLayoutPanelDetailEmployes->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanelDetailEmployes->Name = L"tableLayoutPanelDetailEmployes";
            this->tableLayoutPanelDetailEmployes->RowCount = 3;
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailEmployes->Size = System::Drawing::Size(1112, 133);
            this->tableLayoutPanelDetailEmployes->TabIndex = 2;
            // 
            // labelPrenomEmployes
            // 
            this->labelPrenomEmployes->AutoSize = true;
            this->labelPrenomEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelPrenomEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelPrenomEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelPrenomEmployes->Location = System::Drawing::Point(374, 20);
            this->labelPrenomEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelPrenomEmployes->Name = L"labelPrenomEmployes";
            this->labelPrenomEmployes->Size = System::Drawing::Size(79, 56);
            this->labelPrenomEmployes->TabIndex = 16;
            this->labelPrenomEmployes->Text = L"Prénom :";
            // 
            // textBox6
            // 
            this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox6->Location = System::Drawing::Point(457, 22);
            this->textBox6->Margin = System::Windows::Forms::Padding(2);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(208, 22);
            this->textBox6->TabIndex = 14;
            // 
            // labelDateEmbaucheEmployes
            // 
            this->labelDateEmbaucheEmployes->AutoSize = true;
            this->labelDateEmbaucheEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelDateEmbaucheEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelDateEmbaucheEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelDateEmbaucheEmployes->Location = System::Drawing::Point(2, 76);
            this->labelDateEmbaucheEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelDateEmbaucheEmployes->Name = L"labelDateEmbaucheEmployes";
            this->labelDateEmbaucheEmployes->Size = System::Drawing::Size(136, 57);
            this->labelDateEmbaucheEmployes->TabIndex = 10;
            this->labelDateEmbaucheEmployes->Text = L"Date d\'embauche :";
            // 
            // textBox11
            // 
            this->textBox11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox11->Location = System::Drawing::Point(143, 23);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(206, 22);
            this->textBox11->TabIndex = 2;
            // 
            // labelNomEmployes
            // 
            this->labelNomEmployes->AutoSize = true;
            this->labelNomEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelNomEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->labelNomEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelNomEmployes->Location = System::Drawing::Point(3, 20);
            this->labelNomEmployes->Name = L"labelNomEmployes";
            this->labelNomEmployes->Size = System::Drawing::Size(134, 56);
            this->labelNomEmployes->TabIndex = 6;
            this->labelNomEmployes->Text = L"Nom :";
            // 
            // labelSuperieurEmployes
            // 
            this->labelSuperieurEmployes->AutoSize = true;
            this->labelSuperieurEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelSuperieurEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelSuperieurEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelSuperieurEmployes->Location = System::Drawing::Point(373, 76);
            this->labelSuperieurEmployes->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->labelSuperieurEmployes->Name = L"labelSuperieurEmployes";
            this->labelSuperieurEmployes->Size = System::Drawing::Size(81, 57);
            this->labelSuperieurEmployes->TabIndex = 17;
            this->labelSuperieurEmployes->Text = L"Supérieur :";
            // 
            // textBox15
            // 
            this->textBox15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox15->Location = System::Drawing::Point(457, 78);
            this->textBox15->Margin = System::Windows::Forms::Padding(2);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(208, 22);
            this->textBox15->TabIndex = 18;
            // 
            // textBox8
            // 
            this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox8->Location = System::Drawing::Point(901, 22);
            this->textBox8->Margin = System::Windows::Forms::Padding(2);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(209, 22);
            this->textBox8->TabIndex = 19;
            // 
            // labelAdressePostaleEmployes
            // 
            this->labelAdressePostaleEmployes->AutoSize = true;
            this->labelAdressePostaleEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelAdressePostaleEmployes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelAdressePostaleEmployes->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelAdressePostaleEmployes->Location = System::Drawing::Point(689, 20);
            this->labelAdressePostaleEmployes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelAdressePostaleEmployes->Name = L"labelAdressePostaleEmployes";
            this->labelAdressePostaleEmployes->Size = System::Drawing::Size(208, 56);
            this->labelAdressePostaleEmployes->TabIndex = 20;
            this->labelAdressePostaleEmployes->Text = L"Adresse postale :";
            // 
            // dateTimePickerHiring
            // 
            this->dateTimePickerHiring->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerHiring->Location = System::Drawing::Point(141, 77);
            this->dateTimePickerHiring->Margin = System::Windows::Forms::Padding(1);
            this->dateTimePickerHiring->Name = L"dateTimePickerHiring";
            this->dateTimePickerHiring->Size = System::Drawing::Size(94, 22);
            this->dateTimePickerHiring->TabIndex = 21;
            // 
            // tabStocks
            // 
            this->tabStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabStocks->Controls->Add(this->tableLayoutPanel4);
            this->tabStocks->Controls->Add(this->checkBox4);
            this->tabStocks->Controls->Add(this->tableLayoutPanelStocks);
            this->tabStocks->Location = System::Drawing::Point(4, 29);
            this->tabStocks->Name = L"tabStocks";
            this->tabStocks->Padding = System::Windows::Forms::Padding(1);
            this->tabStocks->Size = System::Drawing::Size(1400, 468);
            this->tabStocks->TabIndex = 3;
            this->tabStocks->Text = L"Stocks";
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel4->ColumnCount = 3;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                67)));
            this->tableLayoutPanel4->Controls->Add(this->dataGridView4, 1, 1);
            this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel4->Location = System::Drawing::Point(1, 1);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 3;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 8)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(1398, 327);
            this->tableLayoutPanel4->TabIndex = 9;
            // 
            // dataGridView4
            // 
            this->dataGridView4->AllowUserToAddRows = false;
            this->dataGridView4->AllowUserToDeleteRows = false;
            this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView4->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView4->Location = System::Drawing::Point(101, 48);
            this->dataGridView4->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->ReadOnly = true;
            this->dataGridView4->RowHeadersWidth = 51;
            this->dataGridView4->RowTemplate->Height = 24;
            this->dataGridView4->Size = System::Drawing::Size(1262, 276);
            this->dataGridView4->TabIndex = 5;
            // 
            // checkBox4
            // 
            this->checkBox4->AutoSize = true;
            this->checkBox4->Location = System::Drawing::Point(501, 173);
            this->checkBox4->Name = L"checkBox4";
            this->checkBox4->Size = System::Drawing::Size(98, 21);
            this->checkBox4->TabIndex = 6;
            this->checkBox4->Text = L"checkBox4";
            this->checkBox4->UseVisualStyleBackColor = true;
            // 
            // tableLayoutPanelStocks
            // 
            this->tableLayoutPanelStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
            this->tableLayoutPanelStocks->ColumnCount = 2;
            this->tableLayoutPanelStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                80)));
            this->tableLayoutPanelStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanelStocks->Controls->Add(this->tableLayoutPanel9, 0, 0);
            this->tableLayoutPanelStocks->Controls->Add(this->tableLayoutPanelDetailStocks, 0, 0);
            this->tableLayoutPanelStocks->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelStocks->Location = System::Drawing::Point(1, 328);
            this->tableLayoutPanelStocks->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanelStocks->Name = L"tableLayoutPanelStocks";
            this->tableLayoutPanelStocks->RowCount = 1;
            this->tableLayoutPanelStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelStocks->Size = System::Drawing::Size(1398, 139);
            this->tableLayoutPanelStocks->TabIndex = 8;
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->ColumnCount = 1;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel9->Controls->Add(this->button7, 0, 1);
            this->tableLayoutPanel9->Controls->Add(this->button8, 0, 0);
            this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel9->Location = System::Drawing::Point(1119, 1);
            this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 2;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 8)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(278, 137);
            this->tableLayoutPanel9->TabIndex = 3;
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button7->Location = System::Drawing::Point(1, 69);
            this->button7->Margin = System::Windows::Forms::Padding(1);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(276, 67);
            this->button7->TabIndex = 5;
            this->button7->Text = L"Modifier";
            this->button7->UseVisualStyleBackColor = false;
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button8->Location = System::Drawing::Point(1, 1);
            this->button8->Margin = System::Windows::Forms::Padding(1);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(276, 66);
            this->button8->TabIndex = 2;
            this->button8->Text = L"Ajouter";
            this->button8->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanelDetailStocks
            // 
            this->tableLayoutPanelDetailStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailStocks->ColumnCount = 8;
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                27)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                27)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelDesignationStocks, 3, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox12, 4, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox13, 1, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelQuantiteStocks, 0, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox14, 1, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelReferenceProduitStocks, 0, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox16, 7, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox17, 7, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelPrixStocks, 6, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelTauxTvaStocks, 6, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->labelSeuilReaprovisionnementStocks, 3, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox18, 4, 2);
            this->tableLayoutPanelDetailStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailStocks->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanelDetailStocks->Name = L"tableLayoutPanelDetailStocks";
            this->tableLayoutPanelDetailStocks->RowCount = 3;
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailStocks->Size = System::Drawing::Size(1112, 133);
            this->tableLayoutPanelDetailStocks->TabIndex = 2;
            // 
            // labelDesignationStocks
            // 
            this->labelDesignationStocks->AutoSize = true;
            this->labelDesignationStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelDesignationStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelDesignationStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelDesignationStocks->Location = System::Drawing::Point(372, 20);
            this->labelDesignationStocks->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelDesignationStocks->Name = L"labelDesignationStocks";
            this->labelDesignationStocks->Size = System::Drawing::Size(209, 56);
            this->labelDesignationStocks->TabIndex = 16;
            this->labelDesignationStocks->Text = L"Désignation :";
            // 
            // textBox12
            // 
            this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox12->Location = System::Drawing::Point(585, 22);
            this->textBox12->Margin = System::Windows::Forms::Padding(2);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(196, 22);
            this->textBox12->TabIndex = 14;
            // 
            // textBox13
            // 
            this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox13->Location = System::Drawing::Point(144, 77);
            this->textBox13->Margin = System::Windows::Forms::Padding(1);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(198, 22);
            this->textBox13->TabIndex = 11;
            // 
            // labelQuantiteStocks
            // 
            this->labelQuantiteStocks->AutoSize = true;
            this->labelQuantiteStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelQuantiteStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelQuantiteStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelQuantiteStocks->Location = System::Drawing::Point(2, 76);
            this->labelQuantiteStocks->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelQuantiteStocks->Name = L"labelQuantiteStocks";
            this->labelQuantiteStocks->Size = System::Drawing::Size(139, 57);
            this->labelQuantiteStocks->TabIndex = 10;
            this->labelQuantiteStocks->Text = L"Quantité :";
            // 
            // textBox14
            // 
            this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox14->Location = System::Drawing::Point(146, 23);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(194, 22);
            this->textBox14->TabIndex = 2;
            // 
            // labelReferenceProduitStocks
            // 
            this->labelReferenceProduitStocks->AutoSize = true;
            this->labelReferenceProduitStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelReferenceProduitStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelReferenceProduitStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelReferenceProduitStocks->Location = System::Drawing::Point(3, 20);
            this->labelReferenceProduitStocks->Name = L"labelReferenceProduitStocks";
            this->labelReferenceProduitStocks->Size = System::Drawing::Size(137, 56);
            this->labelReferenceProduitStocks->TabIndex = 6;
            this->labelReferenceProduitStocks->Text = L"Référence produit :";
            // 
            // textBox16
            // 
            this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox16->Location = System::Drawing::Point(911, 22);
            this->textBox16->Margin = System::Windows::Forms::Padding(2);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(199, 22);
            this->textBox16->TabIndex = 17;
            // 
            // textBox17
            // 
            this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox17->Location = System::Drawing::Point(911, 78);
            this->textBox17->Margin = System::Windows::Forms::Padding(2);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(199, 22);
            this->textBox17->TabIndex = 18;
            // 
            // labelPrixStocks
            // 
            this->labelPrixStocks->AutoSize = true;
            this->labelPrixStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelPrixStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelPrixStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelPrixStocks->Location = System::Drawing::Point(813, 20);
            this->labelPrixStocks->Name = L"labelPrixStocks";
            this->labelPrixStocks->Size = System::Drawing::Size(93, 56);
            this->labelPrixStocks->TabIndex = 19;
            this->labelPrixStocks->Text = L"Prix :";
            // 
            // labelTauxTvaStocks
            // 
            this->labelTauxTvaStocks->AutoSize = true;
            this->labelTauxTvaStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelTauxTvaStocks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->labelTauxTvaStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelTauxTvaStocks->Location = System::Drawing::Point(812, 76);
            this->labelTauxTvaStocks->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelTauxTvaStocks->Name = L"labelTauxTvaStocks";
            this->labelTauxTvaStocks->Size = System::Drawing::Size(95, 57);
            this->labelTauxTvaStocks->TabIndex = 20;
            this->labelTauxTvaStocks->Text = L"Taux de Tva :";
            // 
            // labelSeuilReaprovisionnementStocks
            // 
            this->labelSeuilReaprovisionnementStocks->AutoSize = true;
            this->labelSeuilReaprovisionnementStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->labelSeuilReaprovisionnementStocks->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->labelSeuilReaprovisionnementStocks->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->labelSeuilReaprovisionnementStocks->Location = System::Drawing::Point(372, 76);
            this->labelSeuilReaprovisionnementStocks->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->labelSeuilReaprovisionnementStocks->Name = L"labelSeuilReaprovisionnementStocks";
            this->labelSeuilReaprovisionnementStocks->Size = System::Drawing::Size(209, 57);
            this->labelSeuilReaprovisionnementStocks->TabIndex = 21;
            this->labelSeuilReaprovisionnementStocks->Text = L"Seuil de réaprovisionnement :";
            // 
            // textBox18
            // 
            this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox18->Location = System::Drawing::Point(585, 78);
            this->textBox18->Margin = System::Windows::Forms::Padding(2);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(196, 22);
            this->textBox18->TabIndex = 22;
            // 
            // tabStats
            // 
            this->tabStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabStats->Controls->Add(this->tableLayoutPanel5);
            this->tabStats->Location = System::Drawing::Point(4, 29);
            this->tabStats->Name = L"tabStats";
            this->tabStats->Padding = System::Windows::Forms::Padding(1);
            this->tabStats->Size = System::Drawing::Size(1400, 468);
            this->tabStats->TabIndex = 4;
            this->tabStats->Text = L"Stats";
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel5->ColumnCount = 3;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                40)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                40)));
            this->tableLayoutPanel5->Controls->Add(this->dataGridView6, 1, 1);
            this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel5->Location = System::Drawing::Point(1, 1);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 3;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 11)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(1398, 466);
            this->tableLayoutPanel5->TabIndex = 9;
            // 
            // dataGridView6
            // 
            this->dataGridView6->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView6->Location = System::Drawing::Point(43, 43);
            this->dataGridView6->Name = L"dataGridView6";
            this->dataGridView6->RowHeadersWidth = 51;
            this->dataGridView6->RowTemplate->Height = 24;
            this->dataGridView6->Size = System::Drawing::Size(1312, 409);
            this->dataGridView6->TabIndex = 5;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->ColumnCount = 7;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                13)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                15)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                15)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                28)));
            this->tableLayoutPanel6->Controls->Add(this->label22, 3, 0);
            this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(1408, 38);
            this->tableLayoutPanel6->TabIndex = 10;
            this->tableLayoutPanel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel6_Paint);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label22->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->label22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label22.Image")));
            this->label22->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->label22->Location = System::Drawing::Point(563, 0);
            this->label22->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(265, 38);
            this->label22->TabIndex = 1;
            this->label22->Text = L"x";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1408, 579);
            this->Controls->Add(this->panel1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
            this->tableLayoutPanelHotbar->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->tabAffichage->ResumeLayout(false);
            this->tabClient->ResumeLayout(false);
            this->tableLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tableLayoutPanelClient->ResumeLayout(false);
            this->tableLayoutPanel10->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->PerformLayout();
            this->tabCommandes->ResumeLayout(false);
            this->tabCommandes->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->tableLayoutPanelCommand->ResumeLayout(false);
            this->tableLayoutPanelDetailsCommand->ResumeLayout(false);
            this->tableLayoutPanelDetailsCommand->PerformLayout();
            this->tableLayoutPanelModCommand->ResumeLayout(false);
            this->tabEmployes->ResumeLayout(false);
            this->tabEmployes->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->tableLayoutPanelEmployes->ResumeLayout(false);
            this->tableLayoutPanel8->ResumeLayout(false);
            this->tableLayoutPanelDetailEmployes->ResumeLayout(false);
            this->tableLayoutPanelDetailEmployes->PerformLayout();
            this->tabStocks->ResumeLayout(false);
            this->tabStocks->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->tableLayoutPanelStocks->ResumeLayout(false);
            this->tableLayoutPanel9->ResumeLayout(false);
            this->tableLayoutPanelDetailStocks->ResumeLayout(false);
            this->tableLayoutPanelDetailStocks->PerformLayout();
            this->tabStats->ResumeLayout(false);
            this->tableLayoutPanel5->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->ResumeLayout(false);

        }

#pragma endregion
		
	// chargement de la page
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SizeMode = TabSizeMode::Fixed;
		this->tabAffichage->ItemSize = System::Drawing::Size(0, 1);
		this->tabAffichage->Appearance = TabAppearance::Buttons;	
		this->dataGridView1->Refresh();
		try
		{
			SqlServices^ DB = gcnew SqlServices();
			DB->ConnectDB();
			this->dataGridView1->DataSource = DB->ExecuteSQL("Select Client.Id_Client , Last_Client , First_Client , Birth_Date , Number_Adr , Street_Adr,Floor , City_Name, Post_Code FROM[projetPOO].[dbo].[Client] join[projetPOO].[dbo].[Live_InC] ON Live_InC.Id_Client = Client.Id_Client join[projetPOO].[dbo].[Address] ON Address.Id_Adr = Live_InC.Id_Adr join[projetPOO].[dbo].[residence_cities] ON residence_cities.Id_City = Address.Id_City");
            this->dataGridView2->DataSource = DB->ExecuteSQL("Select Commands.Id_Command , Delivery_Date, Emissions_Date, Reference_command,Last_Client,First_Client,Birth_Date , A.Number_Adr AS Number_Adr_LIVRAISON , A.Street_Adr AS Street_Adr_LIVRAISON , A.Floor AS Floor_LIVRAISON , C.City_Name AS City_Name_LIVRAISON , C.Post_Code AS Post_Name_LIVRAISON,B.Number_Adr AS Number_Adr_FACTURATION , B.Street_Adr AS Street_Adr_FACTURATION , B.Floor AS Floor_FACTURATION , D.City_Name AS City_Name_FACTURATION , D.Post_Code AS Post_Name_FACTURATION , Include.quantity , Designate , Pay_Date , Price,Method_Name from[projetPOO].[dbo].[Commands] join [projetPOO].[dbo].[Client] ON Client.Id_Client = Commands.Id_Client join [projetPOO].[dbo].[Facturation] On Facturation.Id_Command = Commands.Id_Command join [projetPOO].[dbo].[Delivery] On Delivery.Id_Command = Commands.Id_Command join [projetPOO].[dbo].[Address] AS A ON A.Id_Adr = Facturation.Id_Adr join [projetPOO].[dbo].[Address] AS B ON B.Id_Adr = Delivery.Id_Adr join [projetPOO].[dbo].[residence_cities] AS C ON A.Id_City = C.Id_City join [projetPOO].[dbo].[residence_cities] AS D ON B.Id_City = D.Id_City join [projetPOO].[dbo].[Include]  ON Commands.Id_Command = Include.Id_Command join [projetPOO].[dbo].[Stocks]  ON Stocks.Id_Produit = Include.Id_Produit join [projetPOO].[dbo].[Payment_Details] On Payment_Details.Id_Command = Commands.Id_Command join [projetPOO].[dbo].[Payment_Methods] On Payment_Details.Id_Method = Payment_Methods.Id_Method");
            this->dataGridView3->DataSource = DB->ExecuteSQL("Select Personnel.Id_Personnel , LAST_Personnel , FIRST_Personnel , Hire_Date ,Id_Superior,  Number_Adr , Street_Adr,Floor , City_Name, Post_Code  FROM[projetPOO].[dbo].[Personnel] join[projetPOO].[dbo].[Live_InP] ON Live_InP.Id_Personnel = Personnel.Id_Personnel join[projetPOO].[dbo].[Address] ON Address.Id_Adr = Live_InP.Id_Adr join[projetPOO].[dbo].[residence_cities] ON residence_cities.Id_City = Address.Id_City");
            this->dataGridView4->DataSource = DB->ExecuteSQL("Select * FROM [projetPOO].[dbo].[Stocks] ");
            delete DB;
        }
		catch (const std::exception &)
		{
			MessageBox::Show("Erreur de connexion à la base de données");
		}
	}
	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		Application::DoEvents();
}

	private: System::Void ClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabClient;
	}
	private: System::Void CommandesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabCommandes;
	}
	private: System::Void StocksButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabStocks;
	}
	private: System::Void StatsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabStats;
	}
	private: System::Void EmployesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SelectedTab = tabEmployes;
	}
	// autres actions sur la page
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void tableLayoutPanel15_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox26_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void tableLayoutPanel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
       private: System::Void dataGridView1_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
           if (e->RowIndex >= 0) {
               DataRowView^ drv = (DataRowView^)dataGridView1->Rows[e->RowIndex]->DataBoundItem;
               DataRow^ test = drv->Row;
               textBoxNomClient->Text = test["Last_Client"]->ToString();
               textBoxPrénomClient->Text = test["First_Client"]->ToString();
               textBoxNumRue->Text = test["Number_Adr"]->ToString();
               textBoxNomRue->Text = test["Street_Adr"]->ToString();
               textBoxEtage->Text = test["Floor"]->ToString();
               textBoxVille->Text = test["City_Name"]->ToString();
               textBoxCodePostal->Text = test["Post_Code"]->ToString();
               textBoxClientId->Text = test["Id_Client"]->ToString();
               dateTimePickerBirthDate->Text = test["Birth_Date"]->ToString();
           }
       }
       private: System::Void dataGridView1_CellClick1(System::Object^ sender, DataGridViewCellEventArgs^ e) {
       }
       
private: System::Void tableLayoutPanelClient_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Clients^ Client = gcnew Clients(textBoxClientId, textBoxNomClient, textBoxPrénomClient, dateTimePickerBirthDate, textBoxNumRue, textBoxNomRue, textBoxEtage, textBoxVille, textBoxCodePostal);
}
private: System::Void textBoxIdClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}