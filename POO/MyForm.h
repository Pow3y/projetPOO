#pragma once
#include "Connection.h"
#include "SqlServices.h"
#include "Clients.h"
#include "Employee.h"
#include <stdexcept>

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
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerDelivery;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerEmission;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelModCommand;
private: System::Windows::Forms::Button^ ModifyCommandButton;
private: System::Windows::Forms::Button^ AddCommandButton;
private: System::Windows::Forms::Button^ DelCommandButton;
private: System::Windows::Forms::TabPage^ tabClient;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelClient;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailClient;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ textBoxPrénomClient;
private: System::Windows::Forms::TextBox^ textBoxIdClient;


private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBoxNomClient;

private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirthDate;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBoxNumRue;
private: System::Windows::Forms::TextBox^ textBoxNomRue;


private: System::Windows::Forms::Label^ label1;




private: System::Windows::Forms::TabPage^ tabEmployes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelEmployes;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailEmployes;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerHiring;




private: System::Windows::Forms::TabPage^ tabStocks;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelStocks;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelDetailStocks;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox18;




private: System::Windows::Forms::TabPage^ tabStats;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBoxEtage;
private: System::Windows::Forms::TextBox^ textBoxVille;















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
            this->tabCommandes = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelCommand = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanelDetailsCommand = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->dateTimePickerDelivery = (gcnew System::Windows::Forms::DateTimePicker());
            this->dateTimePickerEmission = (gcnew System::Windows::Forms::DateTimePicker());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanelModCommand = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ModifyCommandButton = (gcnew System::Windows::Forms::Button());
            this->AddCommandButton = (gcnew System::Windows::Forms::Button());
            this->DelCommandButton = (gcnew System::Windows::Forms::Button());
            this->tabClient = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanelClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanelDetailClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxPrénomClient = (gcnew System::Windows::Forms::TextBox());
            this->textBoxIdClient = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBoxNomClient = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePickerBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->textBoxNumRue = (gcnew System::Windows::Forms::TextBox());
            this->textBoxNomRue = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBoxEtage = (gcnew System::Windows::Forms::TextBox());
            this->textBoxVille = (gcnew System::Windows::Forms::TextBox());
            this->tabEmployes = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->dateTimePickerHiring = (gcnew System::Windows::Forms::DateTimePicker());
            this->tabStocks = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanelDetailStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->tabStats = (gcnew System::Windows::Forms::TabPage());
            this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanelHotbar->SuspendLayout();
            this->panel1->SuspendLayout();
            this->tabAffichage->SuspendLayout();
            this->tabCommandes->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->tableLayoutPanelCommand->SuspendLayout();
            this->tableLayoutPanelDetailsCommand->SuspendLayout();
            this->tableLayoutPanelModCommand->SuspendLayout();
            this->tabClient->SuspendLayout();
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tableLayoutPanelClient->SuspendLayout();
            this->tableLayoutPanelDetailClient->SuspendLayout();
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
            this->tableLayoutPanelHotbar->Name = L"tableLayoutPanelHotbar";
            this->tableLayoutPanelHotbar->RowCount = 1;
            this->tableLayoutPanelHotbar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelHotbar->Size = System::Drawing::Size(1223, 63);
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
            this->StatsButton->Location = System::Drawing::Point(979, 1);
            this->StatsButton->Margin = System::Windows::Forms::Padding(1);
            this->StatsButton->Name = L"StatsButton";
            this->StatsButton->Size = System::Drawing::Size(243, 61);
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
            this->ClientButton->Location = System::Drawing::Point(3, 1);
            this->ClientButton->Margin = System::Windows::Forms::Padding(1);
            this->ClientButton->Name = L"ClientButton";
            this->ClientButton->Size = System::Drawing::Size(242, 61);
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
            this->StocksButton->Location = System::Drawing::Point(735, 1);
            this->StocksButton->Margin = System::Windows::Forms::Padding(1);
            this->StocksButton->Name = L"StocksButton";
            this->StocksButton->Size = System::Drawing::Size(242, 61);
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
            this->EmployesButton->Location = System::Drawing::Point(491, 1);
            this->EmployesButton->Margin = System::Windows::Forms::Padding(1);
            this->EmployesButton->Name = L"EmployesButton";
            this->EmployesButton->Size = System::Drawing::Size(242, 61);
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
            this->CommandesButton->Location = System::Drawing::Point(247, 1);
            this->CommandesButton->Margin = System::Windows::Forms::Padding(1);
            this->CommandesButton->Name = L"CommandesButton";
            this->CommandesButton->Size = System::Drawing::Size(242, 61);
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
            this->panel1->Size = System::Drawing::Size(1223, 606);
            this->panel1->TabIndex = 9;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
            // 
            // tabAffichage
            // 
            this->tabAffichage->Appearance = System::Windows::Forms::TabAppearance::Buttons;
            this->tabAffichage->Controls->Add(this->tabCommandes);
            this->tabAffichage->Controls->Add(this->tabClient);
            this->tabAffichage->Controls->Add(this->tabEmployes);
            this->tabAffichage->Controls->Add(this->tabStocks);
            this->tabAffichage->Controls->Add(this->tabStats);
            this->tabAffichage->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tabAffichage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tabAffichage->ImeMode = System::Windows::Forms::ImeMode::Off;
            this->tabAffichage->ItemSize = System::Drawing::Size(71, 25);
            this->tabAffichage->Location = System::Drawing::Point(0, 123);
            this->tabAffichage->Name = L"tabAffichage";
            this->tabAffichage->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->tabAffichage->SelectedIndex = 0;
            this->tabAffichage->Size = System::Drawing::Size(1223, 483);
            this->tabAffichage->TabIndex = 8;
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
            this->tabCommandes->Padding = System::Windows::Forms::Padding(1, 1, 1, 1);
            this->tabCommandes->Size = System::Drawing::Size(1215, 450);
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
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(1213, 316);
            this->tableLayoutPanel2->TabIndex = 8;
            // 
            // dataGridView2
            // 
            this->dataGridView2->AllowUserToAddRows = false;
            this->dataGridView2->AllowUserToDeleteRows = false;
            this->dataGridView2->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView2->Location = System::Drawing::Point(68, 31);
            this->dataGridView2->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->ReadOnly = true;
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(1077, 265);
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
            this->tableLayoutPanelCommand->Location = System::Drawing::Point(1, 317);
            this->tableLayoutPanelCommand->Name = L"tableLayoutPanelCommand";
            this->tableLayoutPanelCommand->RowCount = 1;
            this->tableLayoutPanelCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelCommand->Size = System::Drawing::Size(1213, 132);
            this->tableLayoutPanelCommand->TabIndex = 7;
            // 
            // tableLayoutPanelDetailsCommand
            // 
            this->tableLayoutPanelDetailsCommand->ColumnCount = 5;
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                23)));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->label5, 3, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->label7, 0, 2);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->textBox9, 1, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->label8, 0, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->dateTimePickerDelivery, 1, 2);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->dateTimePickerEmission, 4, 1);
            this->tableLayoutPanelDetailsCommand->Controls->Add(this->label18, 3, 2);
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
            this->tableLayoutPanelDetailsCommand->Size = System::Drawing::Size(964, 126);
            this->tableLayoutPanelDetailsCommand->TabIndex = 2;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label5->Location = System::Drawing::Point(503, 20);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(149, 53);
            this->label5->TabIndex = 16;
            this->label5->Text = L"Date d\'émission :";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label7->Location = System::Drawing::Point(3, 73);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(163, 53);
            this->label7->TabIndex = 10;
            this->label7->Text = L"Date de livraison :";
            // 
            // textBox9
            // 
            this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox9->Location = System::Drawing::Point(172, 23);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(302, 22);
            this->textBox9->TabIndex = 2;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label8->Location = System::Drawing::Point(3, 20);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(163, 53);
            this->label8->TabIndex = 6;
            this->label8->Text = L"Référence commande :";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // dateTimePickerDelivery
            // 
            this->dateTimePickerDelivery->CustomFormat = L"";
            this->dateTimePickerDelivery->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerDelivery->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerDelivery->Location = System::Drawing::Point(172, 76);
            this->dateTimePickerDelivery->Name = L"dateTimePickerDelivery";
            this->dateTimePickerDelivery->Size = System::Drawing::Size(302, 22);
            this->dateTimePickerDelivery->TabIndex = 17;
            // 
            // dateTimePickerEmission
            // 
            this->dateTimePickerEmission->CustomFormat = L"";
            this->dateTimePickerEmission->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerEmission->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerEmission->Location = System::Drawing::Point(658, 23);
            this->dateTimePickerEmission->Name = L"dateTimePickerEmission";
            this->dateTimePickerEmission->Size = System::Drawing::Size(303, 22);
            this->dateTimePickerEmission->TabIndex = 18;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label18->Location = System::Drawing::Point(503, 73);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(149, 53);
            this->label18->TabIndex = 19;
            this->label18->Text = L"Adresse de livraison :";
            // 
            // textBox7
            // 
            this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox7->Location = System::Drawing::Point(658, 76);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(303, 22);
            this->textBox7->TabIndex = 20;
            // 
            // tableLayoutPanelModCommand
            // 
            this->tableLayoutPanelModCommand->ColumnCount = 1;
            this->tableLayoutPanelModCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelModCommand->Controls->Add(this->ModifyCommandButton, 0, 1);
            this->tableLayoutPanelModCommand->Controls->Add(this->AddCommandButton, 0, 0);
            this->tableLayoutPanelModCommand->Controls->Add(this->DelCommandButton, 0, 2);
            this->tableLayoutPanelModCommand->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelModCommand->Location = System::Drawing::Point(973, 3);
            this->tableLayoutPanelModCommand->Name = L"tableLayoutPanelModCommand";
            this->tableLayoutPanelModCommand->RowCount = 3;
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33334F)));
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModCommand->Size = System::Drawing::Size(237, 126);
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
            this->ModifyCommandButton->Location = System::Drawing::Point(3, 44);
            this->ModifyCommandButton->Name = L"ModifyCommandButton";
            this->ModifyCommandButton->Size = System::Drawing::Size(231, 36);
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
            this->AddCommandButton->Size = System::Drawing::Size(231, 35);
            this->AddCommandButton->TabIndex = 2;
            this->AddCommandButton->Text = L"Ajouter";
            this->AddCommandButton->UseVisualStyleBackColor = false;
            // 
            // DelCommandButton
            // 
            this->DelCommandButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->DelCommandButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->DelCommandButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DelCommandButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->DelCommandButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->DelCommandButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->DelCommandButton->Location = System::Drawing::Point(3, 86);
            this->DelCommandButton->Name = L"DelCommandButton";
            this->DelCommandButton->Size = System::Drawing::Size(231, 37);
            this->DelCommandButton->TabIndex = 4;
            this->DelCommandButton->Text = L"Supprimer";
            this->DelCommandButton->UseVisualStyleBackColor = false;
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
            this->tabClient->Size = System::Drawing::Size(1215, 450);
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
                167)));
            this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel7, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 1, 1);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(1, 1);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 3;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1213, 316);
            this->tableLayoutPanel1->TabIndex = 6;
            this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint_1);
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->ColumnCount = 1;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel7->Controls->Add(this->button1, 0, 1);
            this->tableLayoutPanel7->Controls->Add(this->button2, 0, 0);
            this->tableLayoutPanel7->Controls->Add(this->button3, 0, 2);
            this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel7->Location = System::Drawing::Point(1048, 32);
            this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 3;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(163, 263);
            this->tableLayoutPanel7->TabIndex = 3;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button1->Location = System::Drawing::Point(2, 89);
            this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(159, 83);
            this->button1->TabIndex = 5;
            this->button1->Text = L"Modifier";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button2->Location = System::Drawing::Point(2, 2);
            this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(159, 83);
            this->button2->TabIndex = 2;
            this->button2->Text = L"Ajouter";
            this->button2->UseVisualStyleBackColor = false;
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
            this->button3->Location = System::Drawing::Point(2, 176);
            this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(159, 85);
            this->button3->TabIndex = 4;
            this->button3->Text = L"Supprimer";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(68, 31);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(977, 265);
            this->dataGridView1->TabIndex = 4;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
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
            this->tableLayoutPanelClient->Controls->Add(this->tableLayoutPanelDetailClient, 0, 0);
            this->tableLayoutPanelClient->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelClient->Location = System::Drawing::Point(1, 317);
            this->tableLayoutPanelClient->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanelClient->Name = L"tableLayoutPanelClient";
            this->tableLayoutPanelClient->RowCount = 1;
            this->tableLayoutPanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelClient->Size = System::Drawing::Size(1213, 132);
            this->tableLayoutPanelClient->TabIndex = 5;
            // 
            // tableLayoutPanelDetailClient
            // 
            this->tableLayoutPanelDetailClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailClient->ColumnCount = 11;
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                13)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailClient->Controls->Add(this->label6, 3, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label3, 3, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxPrénomClient, 4, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxIdClient, 1, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label4, 0, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNomClient, 1, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->dateTimePickerBirthDate, 4, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label20, 6, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label21, 6, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNumRue, 7, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxNomRue, 7, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label1, 0, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label23, 9, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label24, 9, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxEtage, 10, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBoxVille, 10, 2);
            this->tableLayoutPanelDetailClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailClient->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanelDetailClient->Name = L"tableLayoutPanelDetailClient";
            this->tableLayoutPanelDetailClient->RowCount = 3;
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailClient->Size = System::Drawing::Size(964, 126);
            this->tableLayoutPanelDetailClient->TabIndex = 2;
            this->tableLayoutPanelDetailClient->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel15_Paint);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label6->Location = System::Drawing::Point(229, 73);
            this->label6->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(138, 53);
            this->label6->TabIndex = 17;
            this->label6->Text = L"Date de naissance :";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label3->Location = System::Drawing::Point(230, 20);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(136, 53);
            this->label3->TabIndex = 16;
            this->label3->Text = L"Prénom :";
            // 
            // textBoxPrénomClient
            // 
            this->textBoxPrénomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxPrénomClient->Location = System::Drawing::Point(370, 22);
            this->textBoxPrénomClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxPrénomClient->Name = L"textBoxPrénomClient";
            this->textBoxPrénomClient->Size = System::Drawing::Size(130, 22);
            this->textBoxPrénomClient->TabIndex = 14;
            // 
            // textBoxIdClient
            // 
            this->textBoxIdClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxIdClient->Location = System::Drawing::Point(75, 74);
            this->textBoxIdClient->Margin = System::Windows::Forms::Padding(1);
            this->textBoxIdClient->Name = L"textBoxIdClient";
            this->textBoxIdClient->Size = System::Drawing::Size(132, 22);
            this->textBoxIdClient->TabIndex = 11;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label4->Location = System::Drawing::Point(2, 73);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(70, 53);
            this->label4->TabIndex = 10;
            this->label4->Text = L"Id client :";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // textBoxNomClient
            // 
            this->textBoxNomClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNomClient->Location = System::Drawing::Point(76, 22);
            this->textBoxNomClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNomClient->Name = L"textBoxNomClient";
            this->textBoxNomClient->Size = System::Drawing::Size(130, 22);
            this->textBoxNomClient->TabIndex = 2;
            // 
            // dateTimePickerBirthDate
            // 
            this->dateTimePickerBirthDate->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerBirthDate->Location = System::Drawing::Point(369, 74);
            this->dateTimePickerBirthDate->Margin = System::Windows::Forms::Padding(1);
            this->dateTimePickerBirthDate->Name = L"dateTimePickerBirthDate";
            this->dateTimePickerBirthDate->Size = System::Drawing::Size(132, 22);
            this->dateTimePickerBirthDate->TabIndex = 18;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label20->Location = System::Drawing::Point(524, 20);
            this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(96, 53);
            this->label20->TabIndex = 19;
            this->label20->Text = L"Num de rue :";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label21->Location = System::Drawing::Point(523, 73);
            this->label21->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(98, 53);
            this->label21->TabIndex = 20;
            this->label21->Text = L"Nom de rue :";
            // 
            // textBoxNumRue
            // 
            this->textBoxNumRue->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNumRue->Location = System::Drawing::Point(624, 22);
            this->textBoxNumRue->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxNumRue->Name = L"textBoxNumRue";
            this->textBoxNumRue->Size = System::Drawing::Size(130, 22);
            this->textBoxNumRue->TabIndex = 21;
            // 
            // textBoxNomRue
            // 
            this->textBoxNomRue->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxNomRue->Location = System::Drawing::Point(623, 74);
            this->textBoxNomRue->Margin = System::Windows::Forms::Padding(1);
            this->textBoxNomRue->Name = L"textBoxNomRue";
            this->textBoxNomRue->Size = System::Drawing::Size(132, 22);
            this->textBoxNomRue->TabIndex = 22;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label1->Location = System::Drawing::Point(3, 20);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(68, 53);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Nom :";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label23->Location = System::Drawing::Point(771, 20);
            this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(54, 53);
            this->label23->TabIndex = 23;
            this->label23->Text = L"Etage :";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label24->Location = System::Drawing::Point(771, 73);
            this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(54, 53);
            this->label24->TabIndex = 24;
            this->label24->Text = L" Ville :";
            // 
            // textBoxEtage
            // 
            this->textBoxEtage->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxEtage->Location = System::Drawing::Point(829, 22);
            this->textBoxEtage->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxEtage->Name = L"textBoxEtage";
            this->textBoxEtage->Size = System::Drawing::Size(133, 22);
            this->textBoxEtage->TabIndex = 25;
            // 
            // textBoxVille
            // 
            this->textBoxVille->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBoxVille->Location = System::Drawing::Point(829, 75);
            this->textBoxVille->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->textBoxVille->Name = L"textBoxVille";
            this->textBoxVille->Size = System::Drawing::Size(133, 22);
            this->textBoxVille->TabIndex = 26;
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
            this->tabEmployes->Size = System::Drawing::Size(1215, 450);
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
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(1213, 316);
            this->tableLayoutPanel3->TabIndex = 9;
            // 
            // dataGridView3
            // 
            this->dataGridView3->AllowUserToAddRows = false;
            this->dataGridView3->AllowUserToDeleteRows = false;
            this->dataGridView3->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView3->Location = System::Drawing::Point(68, 31);
            this->dataGridView3->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->ReadOnly = true;
            this->dataGridView3->RowHeadersWidth = 51;
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->Size = System::Drawing::Size(1077, 272);
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
            this->tableLayoutPanelEmployes->Location = System::Drawing::Point(1, 317);
            this->tableLayoutPanelEmployes->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanelEmployes->Name = L"tableLayoutPanelEmployes";
            this->tableLayoutPanelEmployes->RowCount = 1;
            this->tableLayoutPanelEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelEmployes->Size = System::Drawing::Size(1213, 132);
            this->tableLayoutPanelEmployes->TabIndex = 8;
            // 
            // tableLayoutPanel8
            // 
            this->tableLayoutPanel8->ColumnCount = 1;
            this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel8->Controls->Add(this->button4, 0, 1);
            this->tableLayoutPanel8->Controls->Add(this->button5, 0, 0);
            this->tableLayoutPanel8->Controls->Add(this->button6, 0, 2);
            this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel8->Location = System::Drawing::Point(972, 2);
            this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
            this->tableLayoutPanel8->RowCount = 3;
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
            this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel8->Size = System::Drawing::Size(239, 128);
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
            this->button4->Location = System::Drawing::Point(2, 44);
            this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(235, 38);
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
            this->button5->Location = System::Drawing::Point(2, 2);
            this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(235, 38);
            this->button5->TabIndex = 2;
            this->button5->Text = L"Ajouter";
            this->button5->UseVisualStyleBackColor = false;
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
            this->button6->Location = System::Drawing::Point(2, 86);
            this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(235, 40);
            this->button6->TabIndex = 4;
            this->button6->Text = L"Supprimer";
            this->button6->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanelDetailEmployes
            // 
            this->tableLayoutPanelDetailEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
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
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->label2, 3, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox6, 4, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->label9, 0, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox11, 1, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->label10, 0, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->label14, 3, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox15, 4, 2);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->textBox8, 7, 1);
            this->tableLayoutPanelDetailEmployes->Controls->Add(this->label19, 6, 1);
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
            this->tableLayoutPanelDetailEmployes->Size = System::Drawing::Size(964, 126);
            this->tableLayoutPanelDetailEmployes->TabIndex = 2;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label2->Location = System::Drawing::Point(337, 20);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(79, 53);
            this->label2->TabIndex = 16;
            this->label2->Text = L"Prénom :";
            // 
            // textBox6
            // 
            this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox6->Location = System::Drawing::Point(422, 23);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(168, 22);
            this->textBox6->TabIndex = 14;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label9->Location = System::Drawing::Point(2, 73);
            this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(136, 53);
            this->label9->TabIndex = 10;
            this->label9->Text = L"Date d\'embauche :";
            // 
            // textBox11
            // 
            this->textBox11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox11->Location = System::Drawing::Point(143, 23);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(168, 22);
            this->textBox11->TabIndex = 2;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label10->Location = System::Drawing::Point(3, 20);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(134, 53);
            this->label10->TabIndex = 6;
            this->label10->Text = L"Nom :";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label14->Location = System::Drawing::Point(336, 73);
            this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(81, 53);
            this->label14->TabIndex = 17;
            this->label14->Text = L"Supérieur :";
            // 
            // textBox15
            // 
            this->textBox15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox15->Location = System::Drawing::Point(422, 76);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(168, 22);
            this->textBox15->TabIndex = 18;
            // 
            // textBox8
            // 
            this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox8->Location = System::Drawing::Point(790, 23);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(171, 22);
            this->textBox8->TabIndex = 19;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label19->Location = System::Drawing::Point(616, 20);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(168, 53);
            this->label19->TabIndex = 20;
            this->label19->Text = L"Adresse postale :";
            // 
            // dateTimePickerHiring
            // 
            this->dateTimePickerHiring->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerHiring->Location = System::Drawing::Point(141, 74);
            this->dateTimePickerHiring->Margin = System::Windows::Forms::Padding(1);
            this->dateTimePickerHiring->Name = L"dateTimePickerHiring";
            this->dateTimePickerHiring->Size = System::Drawing::Size(109, 22);
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
            this->tabStocks->Size = System::Drawing::Size(1215, 450);
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
            this->tableLayoutPanel4->Size = System::Drawing::Size(1213, 316);
            this->tableLayoutPanel4->TabIndex = 9;
            // 
            // dataGridView4
            // 
            this->dataGridView4->AllowUserToAddRows = false;
            this->dataGridView4->AllowUserToDeleteRows = false;
            this->dataGridView4->BackgroundColor = System::Drawing::Color::Black;
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView4->Location = System::Drawing::Point(68, 31);
            this->dataGridView4->Margin = System::Windows::Forms::Padding(1);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->ReadOnly = true;
            this->dataGridView4->RowHeadersWidth = 51;
            this->dataGridView4->RowTemplate->Height = 24;
            this->dataGridView4->Size = System::Drawing::Size(1077, 265);
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
            this->tableLayoutPanelStocks->Location = System::Drawing::Point(1, 317);
            this->tableLayoutPanelStocks->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanelStocks->Name = L"tableLayoutPanelStocks";
            this->tableLayoutPanelStocks->RowCount = 1;
            this->tableLayoutPanelStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelStocks->Size = System::Drawing::Size(1213, 132);
            this->tableLayoutPanelStocks->TabIndex = 8;
            // 
            // tableLayoutPanel9
            // 
            this->tableLayoutPanel9->ColumnCount = 1;
            this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel9->Controls->Add(this->button7, 0, 1);
            this->tableLayoutPanel9->Controls->Add(this->button8, 0, 0);
            this->tableLayoutPanel9->Controls->Add(this->button9, 0, 2);
            this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel9->Location = System::Drawing::Point(972, 2);
            this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
            this->tableLayoutPanel9->RowCount = 3;
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
            this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
            this->tableLayoutPanel9->Size = System::Drawing::Size(239, 128);
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
            this->button7->Location = System::Drawing::Point(2, 44);
            this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(235, 38);
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
            this->button8->Location = System::Drawing::Point(2, 2);
            this->button8->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(235, 38);
            this->button8->TabIndex = 2;
            this->button8->Text = L"Ajouter";
            this->button8->UseVisualStyleBackColor = false;
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button9->Location = System::Drawing::Point(2, 86);
            this->button9->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(235, 40);
            this->button9->TabIndex = 4;
            this->button9->Text = L"Supprimer";
            this->button9->UseVisualStyleBackColor = false;
            // 
            // tableLayoutPanelDetailStocks
            // 
            this->tableLayoutPanelDetailStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
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
            this->tableLayoutPanelDetailStocks->Controls->Add(this->label11, 3, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox12, 4, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox13, 1, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->label12, 0, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox14, 1, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->label13, 0, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox16, 7, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->textBox17, 7, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->label15, 6, 1);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->label16, 6, 2);
            this->tableLayoutPanelDetailStocks->Controls->Add(this->label17, 3, 2);
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
            this->tableLayoutPanelDetailStocks->Size = System::Drawing::Size(964, 126);
            this->tableLayoutPanelDetailStocks->TabIndex = 2;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label11->Location = System::Drawing::Point(323, 20);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(209, 53);
            this->label11->TabIndex = 16;
            this->label11->Text = L"Désignation :";
            // 
            // textBox12
            // 
            this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox12->Location = System::Drawing::Point(538, 23);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(144, 22);
            this->textBox12->TabIndex = 14;
            // 
            // textBox13
            // 
            this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox13->Location = System::Drawing::Point(144, 74);
            this->textBox13->Margin = System::Windows::Forms::Padding(1);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(148, 22);
            this->textBox13->TabIndex = 11;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label12->Location = System::Drawing::Point(2, 73);
            this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(139, 53);
            this->label12->TabIndex = 10;
            this->label12->Text = L"Quantité :";
            // 
            // textBox14
            // 
            this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox14->Location = System::Drawing::Point(146, 23);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(144, 22);
            this->textBox14->TabIndex = 2;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label13->Location = System::Drawing::Point(3, 20);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(137, 53);
            this->label13->TabIndex = 6;
            this->label13->Text = L"Référence produit :";
            // 
            // textBox16
            // 
            this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox16->Location = System::Drawing::Point(816, 23);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(145, 22);
            this->textBox16->TabIndex = 17;
            // 
            // textBox17
            // 
            this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox17->Location = System::Drawing::Point(816, 76);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(145, 22);
            this->textBox17->TabIndex = 18;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label15->Location = System::Drawing::Point(716, 20);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(93, 53);
            this->label15->TabIndex = 19;
            this->label15->Text = L"Prix :";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->label16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label16->Location = System::Drawing::Point(715, 73);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(95, 53);
            this->label16->TabIndex = 20;
            this->label16->Text = L"Taux de Tva :";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label17->Location = System::Drawing::Point(323, 73);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(209, 53);
            this->label17->TabIndex = 21;
            this->label17->Text = L"Seuil de réaprovisionnement :";
            // 
            // textBox18
            // 
            this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox18->Location = System::Drawing::Point(538, 76);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(144, 22);
            this->textBox18->TabIndex = 22;
            // 
            // tabStats
            // 
            this->tabStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabStats->Controls->Add(this->checkBox5);
            this->tabStats->Controls->Add(this->tableLayoutPanel5);
            this->tabStats->Location = System::Drawing::Point(4, 29);
            this->tabStats->Name = L"tabStats";
            this->tabStats->Padding = System::Windows::Forms::Padding(1);
            this->tabStats->Size = System::Drawing::Size(1215, 450);
            this->tabStats->TabIndex = 4;
            this->tabStats->Text = L"Stats";
            // 
            // checkBox5
            // 
            this->checkBox5->AutoSize = true;
            this->checkBox5->Location = System::Drawing::Point(383, 287);
            this->checkBox5->Name = L"checkBox5";
            this->checkBox5->Size = System::Drawing::Size(98, 21);
            this->checkBox5->TabIndex = 0;
            this->checkBox5->Text = L"checkBox5";
            this->checkBox5->UseVisualStyleBackColor = true;
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
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 17)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(1213, 448);
            this->tableLayoutPanel5->TabIndex = 9;
            // 
            // dataGridView6
            // 
            this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView6->Location = System::Drawing::Point(43, 43);
            this->dataGridView6->Name = L"dataGridView6";
            this->dataGridView6->RowHeadersWidth = 51;
            this->dataGridView6->RowTemplate->Height = 24;
            this->dataGridView6->Size = System::Drawing::Size(1127, 385);
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
            this->tableLayoutPanel6->Size = System::Drawing::Size(1223, 60);
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
            this->label22->Location = System::Drawing::Point(495, 0);
            this->label22->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(231, 60);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Nom Société";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1223, 606);
            this->Controls->Add(this->panel1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
            this->tableLayoutPanelHotbar->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->tabAffichage->ResumeLayout(false);
            this->tabCommandes->ResumeLayout(false);
            this->tabCommandes->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->tableLayoutPanelCommand->ResumeLayout(false);
            this->tableLayoutPanelDetailsCommand->ResumeLayout(false);
            this->tableLayoutPanelDetailsCommand->PerformLayout();
            this->tableLayoutPanelModCommand->ResumeLayout(false);
            this->tabClient->ResumeLayout(false);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel7->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tableLayoutPanelClient->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->PerformLayout();
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
            this->tabStats->PerformLayout();
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
        }
		catch (const std::exception & e)
		{
			MessageBox::Show("Erreur de connexion à la base de données");
		}
	}
	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		Application::DoEvents();
		this->dataGridView1->Refresh();
		SqlServices^ DB = gcnew SqlServices();
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
private Void dataGridView1_CellContentClick(System::Object^ sender, DataGridViewCellEventArgs e) {
    if (e->RowIndex >= 0) {
        DataGridViewRow row = this->dataGridView1->Rows[e.RowIndex];
        textBoxNomClient->Text = row.Cells["Last_Client"]->Value->ToString();
    }
};
}