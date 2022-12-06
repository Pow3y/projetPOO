#pragma once
#include "Connection.h"
#include "SqlServices.h"
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
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::DateTimePicker^ dateTimePickerBirthDate;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelModClient;
private: System::Windows::Forms::Button^ ModifyClientButton;
private: System::Windows::Forms::Button^ AddClientButton;
private: System::Windows::Forms::Button^ DelClientButton;
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
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelModEmployes;
private: System::Windows::Forms::Button^ ModifyEmployesButton;
private: System::Windows::Forms::Button^ AddEmployesButton;
private: System::Windows::Forms::Button^ DelEmployesButton;
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
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanelModStocks;
private: System::Windows::Forms::Button^ ModifyStocksButton;
private: System::Windows::Forms::Button^ AddStocksButton;
private: System::Windows::Forms::Button^ DelStocksButton;
private: System::Windows::Forms::TabPage^ tabStats;
private: System::Windows::Forms::CheckBox^ checkBox5;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::Label^ label22;






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
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->tableLayoutPanelClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanelDetailClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePickerBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanelModClient = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ModifyClientButton = (gcnew System::Windows::Forms::Button());
            this->AddClientButton = (gcnew System::Windows::Forms::Button());
            this->DelClientButton = (gcnew System::Windows::Forms::Button());
            this->tabEmployes = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
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
            this->tableLayoutPanelModEmployes = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ModifyEmployesButton = (gcnew System::Windows::Forms::Button());
            this->AddEmployesButton = (gcnew System::Windows::Forms::Button());
            this->DelEmployesButton = (gcnew System::Windows::Forms::Button());
            this->tabStocks = (gcnew System::Windows::Forms::TabPage());
            this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
            this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
            this->tableLayoutPanelStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
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
            this->tableLayoutPanelModStocks = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->ModifyStocksButton = (gcnew System::Windows::Forms::Button());
            this->AddStocksButton = (gcnew System::Windows::Forms::Button());
            this->DelStocksButton = (gcnew System::Windows::Forms::Button());
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->tableLayoutPanelClient->SuspendLayout();
            this->tableLayoutPanelDetailClient->SuspendLayout();
            this->tableLayoutPanelModClient->SuspendLayout();
            this->tabEmployes->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->tableLayoutPanelEmployes->SuspendLayout();
            this->tableLayoutPanelDetailEmployes->SuspendLayout();
            this->tableLayoutPanelModEmployes->SuspendLayout();
            this->tabStocks->SuspendLayout();
            this->tableLayoutPanel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
            this->tableLayoutPanelStocks->SuspendLayout();
            this->tableLayoutPanelDetailStocks->SuspendLayout();
            this->tableLayoutPanelModStocks->SuspendLayout();
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
                3)));
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
            this->tableLayoutPanelHotbar->Location = System::Drawing::Point(0, 70);
            this->tableLayoutPanelHotbar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelHotbar->Name = L"tableLayoutPanelHotbar";
            this->tableLayoutPanelHotbar->RowCount = 1;
            this->tableLayoutPanelHotbar->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelHotbar->Size = System::Drawing::Size(1834, 98);
            this->tableLayoutPanelHotbar->TabIndex = 9;
            // 
            // StatsButton
            // 
            this->StatsButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->StatsButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StatsButton->FlatAppearance->BorderSize = 0;
            this->StatsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StatsButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StatsButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->StatsButton->Location = System::Drawing::Point(1470, 3);
            this->StatsButton->Name = L"StatsButton";
            this->StatsButton->Size = System::Drawing::Size(361, 92);
            this->StatsButton->TabIndex = 4;
            this->StatsButton->Text = L"Stats";
            this->StatsButton->UseVisualStyleBackColor = true;
            this->StatsButton->Click += gcnew System::EventHandler(this, &MyForm::StatsButton_Click);
            // 
            // ClientButton
            // 
            this->ClientButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)));
            this->ClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ClientButton->FlatAppearance->BorderSize = 0;
            this->ClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ClientButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ClientButton->Location = System::Drawing::Point(6, 3);
            this->ClientButton->Name = L"ClientButton";
            this->ClientButton->Size = System::Drawing::Size(360, 92);
            this->ClientButton->TabIndex = 0;
            this->ClientButton->Text = L"Client";
            this->ClientButton->UseVisualStyleBackColor = false;
            this->ClientButton->Click += gcnew System::EventHandler(this, &MyForm::ClientButton_Click);
            // 
            // StocksButton
            // 
            this->StocksButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->StocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->StocksButton->FlatAppearance->BorderSize = 0;
            this->StocksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StocksButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StocksButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->StocksButton->Location = System::Drawing::Point(1104, 3);
            this->StocksButton->Name = L"StocksButton";
            this->StocksButton->Size = System::Drawing::Size(360, 92);
            this->StocksButton->TabIndex = 3;
            this->StocksButton->Text = L"Stocks";
            this->StocksButton->UseVisualStyleBackColor = true;
            this->StocksButton->Click += gcnew System::EventHandler(this, &MyForm::StocksButton_Click);
            // 
            // EmployesButton
            // 
            this->EmployesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->EmployesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->EmployesButton->FlatAppearance->BorderSize = 0;
            this->EmployesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->EmployesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->EmployesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->EmployesButton->Location = System::Drawing::Point(738, 3);
            this->EmployesButton->Name = L"EmployesButton";
            this->EmployesButton->Size = System::Drawing::Size(360, 92);
            this->EmployesButton->TabIndex = 2;
            this->EmployesButton->Text = L"Employes";
            this->EmployesButton->UseVisualStyleBackColor = true;
            this->EmployesButton->Click += gcnew System::EventHandler(this, &MyForm::EmployesButton_Click);
            // 
            // CommandesButton
            // 
            this->CommandesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
                static_cast<System::Int32>(static_cast<System::Byte>(70)));
            this->CommandesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->CommandesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->CommandesButton->FlatAppearance->BorderSize = 0;
            this->CommandesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->CommandesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CommandesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->CommandesButton->Location = System::Drawing::Point(372, 3);
            this->CommandesButton->Name = L"CommandesButton";
            this->CommandesButton->Size = System::Drawing::Size(360, 92);
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
            this->textBox5->Size = System::Drawing::Size(184, 31);
            this->textBox5->TabIndex = 4;
            // 
            // textBox4
            // 
            this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox4->Location = System::Drawing::Point(561, 3);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(180, 31);
            this->textBox4->TabIndex = 3;
            // 
            // textBox3
            // 
            this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox3->Location = System::Drawing::Point(375, 3);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(180, 31);
            this->textBox3->TabIndex = 2;
            // 
            // textBox2
            // 
            this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox2->Location = System::Drawing::Point(189, 3);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(180, 31);
            this->textBox2->TabIndex = 1;
            // 
            // textBox1
            // 
            this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox1->Location = System::Drawing::Point(3, 3);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(180, 31);
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
            this->panel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1834, 947);
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
            this->tabAffichage->Location = System::Drawing::Point(0, 168);
            this->tabAffichage->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabAffichage->Name = L"tabAffichage";
            this->tabAffichage->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->tabAffichage->SelectedIndex = 0;
            this->tabAffichage->Size = System::Drawing::Size(1834, 779);
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
            this->tabCommandes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabCommandes->Name = L"tabCommandes";
            this->tabCommandes->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabCommandes->Size = System::Drawing::Size(1826, 746);
            this->tabCommandes->TabIndex = 1;
            this->tabCommandes->Text = L"Commandes";
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel2->ColumnCount = 3;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->dataGridView2, 1, 1);
            this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel2->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 3;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(1818, 530);
            this->tableLayoutPanel2->TabIndex = 8;
            // 
            // dataGridView2
            // 
            this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView2->Location = System::Drawing::Point(103, 50);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->RowHeadersWidth = 51;
            this->dataGridView2->RowTemplate->Height = 24;
            this->dataGridView2->Size = System::Drawing::Size(1612, 447);
            this->dataGridView2->TabIndex = 5;
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(716, 283);
            this->checkBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(151, 30);
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
            this->tableLayoutPanelCommand->Location = System::Drawing::Point(4, 535);
            this->tableLayoutPanelCommand->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelCommand->Name = L"tableLayoutPanelCommand";
            this->tableLayoutPanelCommand->RowCount = 1;
            this->tableLayoutPanelCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelCommand->Size = System::Drawing::Size(1818, 206);
            this->tableLayoutPanelCommand->TabIndex = 7;
            // 
            // tableLayoutPanelDetailsCommand
            // 
            this->tableLayoutPanelDetailsCommand->ColumnCount = 5;
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                34)));
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
            this->tableLayoutPanelDetailsCommand->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanelDetailsCommand->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelDetailsCommand->Name = L"tableLayoutPanelDetailsCommand";
            this->tableLayoutPanelDetailsCommand->RowCount = 3;
            this->tableLayoutPanelDetailsCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailsCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailsCommand->Size = System::Drawing::Size(1446, 196);
            this->tableLayoutPanelDetailsCommand->TabIndex = 2;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label5->Location = System::Drawing::Point(754, 31);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(234, 82);
            this->label5->TabIndex = 16;
            this->label5->Text = L"Date d\'émission :";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label7->Location = System::Drawing::Point(4, 113);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(254, 83);
            this->label7->TabIndex = 10;
            this->label7->Text = L"Date de livraison :";
            // 
            // textBox9
            // 
            this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox9->Location = System::Drawing::Point(266, 36);
            this->textBox9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(446, 31);
            this->textBox9->TabIndex = 2;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label8->Location = System::Drawing::Point(4, 31);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(254, 82);
            this->label8->TabIndex = 6;
            this->label8->Text = L"Référence commande :";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // dateTimePickerDelivery
            // 
            this->dateTimePickerDelivery->CustomFormat = L"";
            this->dateTimePickerDelivery->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerDelivery->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerDelivery->Location = System::Drawing::Point(266, 118);
            this->dateTimePickerDelivery->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->dateTimePickerDelivery->Name = L"dateTimePickerDelivery";
            this->dateTimePickerDelivery->Size = System::Drawing::Size(446, 31);
            this->dateTimePickerDelivery->TabIndex = 17;
            // 
            // dateTimePickerEmission
            // 
            this->dateTimePickerEmission->CustomFormat = L"";
            this->dateTimePickerEmission->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerEmission->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerEmission->Location = System::Drawing::Point(996, 36);
            this->dateTimePickerEmission->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->dateTimePickerEmission->Name = L"dateTimePickerEmission";
            this->dateTimePickerEmission->Size = System::Drawing::Size(446, 31);
            this->dateTimePickerEmission->TabIndex = 18;
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label18->Location = System::Drawing::Point(754, 113);
            this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(234, 83);
            this->label18->TabIndex = 19;
            this->label18->Text = L"Adresse de livraison :";
            // 
            // textBox7
            // 
            this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox7->Location = System::Drawing::Point(996, 118);
            this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(446, 31);
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
            this->tableLayoutPanelModCommand->Location = System::Drawing::Point(1458, 5);
            this->tableLayoutPanelModCommand->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelModCommand->Name = L"tableLayoutPanelModCommand";
            this->tableLayoutPanelModCommand->RowCount = 3;
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33334F)));
            this->tableLayoutPanelModCommand->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModCommand->Size = System::Drawing::Size(356, 196);
            this->tableLayoutPanelModCommand->TabIndex = 0;
            // 
            // ModifyCommandButton
            // 
            this->ModifyCommandButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ModifyCommandButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ModifyCommandButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ModifyCommandButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->ModifyCommandButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ModifyCommandButton->Location = System::Drawing::Point(4, 70);
            this->ModifyCommandButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->ModifyCommandButton->Name = L"ModifyCommandButton";
            this->ModifyCommandButton->Size = System::Drawing::Size(348, 55);
            this->ModifyCommandButton->TabIndex = 5;
            this->ModifyCommandButton->Text = L"Modifier";
            this->ModifyCommandButton->UseVisualStyleBackColor = true;
            // 
            // AddCommandButton
            // 
            this->AddCommandButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->AddCommandButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->AddCommandButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->AddCommandButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->AddCommandButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->AddCommandButton->Location = System::Drawing::Point(4, 5);
            this->AddCommandButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->AddCommandButton->Name = L"AddCommandButton";
            this->AddCommandButton->Size = System::Drawing::Size(348, 55);
            this->AddCommandButton->TabIndex = 2;
            this->AddCommandButton->Text = L"Ajouter";
            this->AddCommandButton->UseVisualStyleBackColor = true;
            // 
            // DelCommandButton
            // 
            this->DelCommandButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->DelCommandButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DelCommandButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->DelCommandButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->DelCommandButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->DelCommandButton->Location = System::Drawing::Point(4, 135);
            this->DelCommandButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->DelCommandButton->Name = L"DelCommandButton";
            this->DelCommandButton->Size = System::Drawing::Size(348, 56);
            this->DelCommandButton->TabIndex = 4;
            this->DelCommandButton->Text = L"Supprimer";
            this->DelCommandButton->UseVisualStyleBackColor = true;
            // 
            // tabClient
            // 
            this->tabClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
                static_cast<System::Int32>(static_cast<System::Byte>(69)));
            this->tabClient->Controls->Add(this->tableLayoutPanel1);
            this->tabClient->Controls->Add(this->tableLayoutPanelClient);
            this->tabClient->Location = System::Drawing::Point(4, 29);
            this->tabClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabClient->Name = L"tabClient";
            this->tabClient->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabClient->Size = System::Drawing::Size(1826, 745);
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
                100)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel1->Controls->Add(this->dataGridView1, 1, 1);
            this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 3;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(1820, 533);
            this->tableLayoutPanel1->TabIndex = 6;
            this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint_1);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView1->Location = System::Drawing::Point(103, 50);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(1614, 450);
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
            this->tableLayoutPanelClient->Controls->Add(this->tableLayoutPanelModClient, 1, 0);
            this->tableLayoutPanelClient->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelClient->Location = System::Drawing::Point(3, 536);
            this->tableLayoutPanelClient->Name = L"tableLayoutPanelClient";
            this->tableLayoutPanelClient->RowCount = 1;
            this->tableLayoutPanelClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelClient->Size = System::Drawing::Size(1820, 206);
            this->tableLayoutPanelClient->TabIndex = 5;
            // 
            // tableLayoutPanelDetailClient
            // 
            this->tableLayoutPanelDetailClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelDetailClient->ColumnCount = 8;
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailClient->Controls->Add(this->label6, 3, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label3, 3, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBox25, 4, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBox23, 1, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label4, 0, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBox22, 1, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->dateTimePickerBirthDate, 4, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label20, 6, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label21, 6, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBox10, 7, 1);
            this->tableLayoutPanelDetailClient->Controls->Add(this->textBox19, 7, 2);
            this->tableLayoutPanelDetailClient->Controls->Add(this->label1, 0, 1);
            this->tableLayoutPanelDetailClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelDetailClient->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanelDetailClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelDetailClient->Name = L"tableLayoutPanelDetailClient";
            this->tableLayoutPanelDetailClient->RowCount = 3;
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailClient->Size = System::Drawing::Size(1448, 196);
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
            this->label6->Location = System::Drawing::Point(464, 113);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(215, 83);
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
            this->label3->Location = System::Drawing::Point(465, 31);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(213, 82);
            this->label3->TabIndex = 16;
            this->label3->Text = L"Prénom :";
            // 
            // textBox25
            // 
            this->textBox25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox25->Location = System::Drawing::Point(686, 36);
            this->textBox25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox25->Name = L"textBox25";
            this->textBox25->Size = System::Drawing::Size(241, 31);
            this->textBox25->TabIndex = 14;
            // 
            // textBox23
            // 
            this->textBox23->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox23->Location = System::Drawing::Point(185, 116);
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(243, 31);
            this->textBox23->TabIndex = 11;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label4->Location = System::Drawing::Point(3, 113);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(176, 83);
            this->label4->TabIndex = 10;
            this->label4->Text = L"Numéro client :";
            this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
            // 
            // textBox22
            // 
            this->textBox22->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox22->Location = System::Drawing::Point(186, 36);
            this->textBox22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(241, 31);
            this->textBox22->TabIndex = 2;
            // 
            // dateTimePickerBirthDate
            // 
            this->dateTimePickerBirthDate->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dateTimePickerBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerBirthDate->Location = System::Drawing::Point(685, 116);
            this->dateTimePickerBirthDate->Name = L"dateTimePickerBirthDate";
            this->dateTimePickerBirthDate->Size = System::Drawing::Size(243, 31);
            this->dateTimePickerBirthDate->TabIndex = 18;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label20->Location = System::Drawing::Point(965, 31);
            this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(228, 82);
            this->label20->TabIndex = 19;
            this->label20->Text = L"Adresse facturation :";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label21->Location = System::Drawing::Point(964, 113);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(230, 83);
            this->label21->TabIndex = 20;
            this->label21->Text = L"Adresse livraison :";
            // 
            // textBox10
            // 
            this->textBox10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox10->Location = System::Drawing::Point(1201, 36);
            this->textBox10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(243, 31);
            this->textBox10->TabIndex = 21;
            // 
            // textBox19
            // 
            this->textBox19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox19->Location = System::Drawing::Point(1200, 116);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(245, 31);
            this->textBox19->TabIndex = 22;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label1->Location = System::Drawing::Point(4, 31);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(174, 82);
            this->label1->TabIndex = 6;
            this->label1->Text = L"Nom :";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
            // 
            // tableLayoutPanelModClient
            // 
            this->tableLayoutPanelModClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelModClient->ColumnCount = 1;
            this->tableLayoutPanelModClient->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelModClient->Controls->Add(this->ModifyClientButton, 0, 1);
            this->tableLayoutPanelModClient->Controls->Add(this->AddClientButton, 0, 0);
            this->tableLayoutPanelModClient->Controls->Add(this->DelClientButton, 0, 2);
            this->tableLayoutPanelModClient->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelModClient->Location = System::Drawing::Point(1460, 5);
            this->tableLayoutPanelModClient->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelModClient->Name = L"tableLayoutPanelModClient";
            this->tableLayoutPanelModClient->RowCount = 3;
            this->tableLayoutPanelModClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33334F)));
            this->tableLayoutPanelModClient->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModClient->Size = System::Drawing::Size(356, 196);
            this->tableLayoutPanelModClient->TabIndex = 0;
            // 
            // ModifyClientButton
            // 
            this->ModifyClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ModifyClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ModifyClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ModifyClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->ModifyClientButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ModifyClientButton->Location = System::Drawing::Point(3, 68);
            this->ModifyClientButton->Name = L"ModifyClientButton";
            this->ModifyClientButton->Size = System::Drawing::Size(350, 59);
            this->ModifyClientButton->TabIndex = 5;
            this->ModifyClientButton->Text = L"Modifier";
            this->ModifyClientButton->UseVisualStyleBackColor = true;
            // 
            // AddClientButton
            // 
            this->AddClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->AddClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->AddClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->AddClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->AddClientButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->AddClientButton->Location = System::Drawing::Point(4, 5);
            this->AddClientButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->AddClientButton->Name = L"AddClientButton";
            this->AddClientButton->Size = System::Drawing::Size(348, 55);
            this->AddClientButton->TabIndex = 2;
            this->AddClientButton->Text = L"Ajouter";
            this->AddClientButton->UseVisualStyleBackColor = true;
            this->AddClientButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
            // 
            // DelClientButton
            // 
            this->DelClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->DelClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DelClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->DelClientButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->DelClientButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->DelClientButton->Location = System::Drawing::Point(3, 133);
            this->DelClientButton->Name = L"DelClientButton";
            this->DelClientButton->Size = System::Drawing::Size(350, 60);
            this->DelClientButton->TabIndex = 4;
            this->DelClientButton->Text = L"Supprimer";
            this->DelClientButton->UseVisualStyleBackColor = true;
            // 
            // tabEmployes
            // 
            this->tabEmployes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabEmployes->Controls->Add(this->tableLayoutPanel3);
            this->tabEmployes->Controls->Add(this->checkBox3);
            this->tabEmployes->Controls->Add(this->tableLayoutPanelEmployes);
            this->tabEmployes->Location = System::Drawing::Point(4, 29);
            this->tabEmployes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabEmployes->Name = L"tabEmployes";
            this->tabEmployes->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabEmployes->Size = System::Drawing::Size(1826, 745);
            this->tabEmployes->TabIndex = 2;
            this->tabEmployes->Text = L"Employes";
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel3->ColumnCount = 3;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->dataGridView3, 1, 1);
            this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 3;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(1820, 533);
            this->tableLayoutPanel3->TabIndex = 9;
            // 
            // dataGridView3
            // 
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView3->Location = System::Drawing::Point(103, 50);
            this->dataGridView3->Name = L"dataGridView3";
            this->dataGridView3->RowHeadersWidth = 51;
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->Size = System::Drawing::Size(1614, 450);
            this->dataGridView3->TabIndex = 5;
            // 
            // checkBox3
            // 
            this->checkBox3->AutoSize = true;
            this->checkBox3->Location = System::Drawing::Point(774, 256);
            this->checkBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->checkBox3->Name = L"checkBox3";
            this->checkBox3->Size = System::Drawing::Size(151, 30);
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
            this->tableLayoutPanelEmployes->Controls->Add(this->tableLayoutPanelDetailEmployes, 0, 0);
            this->tableLayoutPanelEmployes->Controls->Add(this->tableLayoutPanelModEmployes, 1, 0);
            this->tableLayoutPanelEmployes->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelEmployes->Location = System::Drawing::Point(3, 536);
            this->tableLayoutPanelEmployes->Name = L"tableLayoutPanelEmployes";
            this->tableLayoutPanelEmployes->RowCount = 1;
            this->tableLayoutPanelEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelEmployes->Size = System::Drawing::Size(1820, 206);
            this->tableLayoutPanelEmployes->TabIndex = 8;
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
                30)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanelDetailEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                30)));
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
            this->tableLayoutPanelDetailEmployes->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanelDetailEmployes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelDetailEmployes->Name = L"tableLayoutPanelDetailEmployes";
            this->tableLayoutPanelDetailEmployes->RowCount = 3;
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailEmployes->Size = System::Drawing::Size(1448, 196);
            this->tableLayoutPanelDetailEmployes->TabIndex = 2;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label2->Location = System::Drawing::Point(510, 31);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(124, 82);
            this->label2->TabIndex = 16;
            this->label2->Text = L"Prénom :";
            // 
            // textBox6
            // 
            this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox6->Location = System::Drawing::Point(642, 36);
            this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(251, 31);
            this->textBox6->TabIndex = 14;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label9->Location = System::Drawing::Point(3, 113);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(211, 83);
            this->label9->TabIndex = 10;
            this->label9->Text = L"Date d\'embauche :";
            // 
            // textBox11
            // 
            this->textBox11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox11->Location = System::Drawing::Point(221, 36);
            this->textBox11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(251, 31);
            this->textBox11->TabIndex = 2;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label10->Location = System::Drawing::Point(4, 31);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(209, 82);
            this->label10->TabIndex = 6;
            this->label10->Text = L"Nom :";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label14->Location = System::Drawing::Point(509, 113);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(126, 83);
            this->label14->TabIndex = 17;
            this->label14->Text = L"Supérieur :";
            // 
            // textBox15
            // 
            this->textBox15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox15->Location = System::Drawing::Point(642, 118);
            this->textBox15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(251, 31);
            this->textBox15->TabIndex = 18;
            // 
            // textBox8
            // 
            this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox8->Location = System::Drawing::Point(1190, 36);
            this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(254, 31);
            this->textBox8->TabIndex = 19;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label19->Location = System::Drawing::Point(931, 31);
            this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(251, 82);
            this->label19->TabIndex = 20;
            this->label19->Text = L"Adresse postale :";
            // 
            // dateTimePickerHiring
            // 
            this->dateTimePickerHiring->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePickerHiring->Location = System::Drawing::Point(220, 116);
            this->dateTimePickerHiring->Name = L"dateTimePickerHiring";
            this->dateTimePickerHiring->Size = System::Drawing::Size(162, 31);
            this->dateTimePickerHiring->TabIndex = 21;
            // 
            // tableLayoutPanelModEmployes
            // 
            this->tableLayoutPanelModEmployes->ColumnCount = 1;
            this->tableLayoutPanelModEmployes->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelModEmployes->Controls->Add(this->ModifyEmployesButton, 0, 1);
            this->tableLayoutPanelModEmployes->Controls->Add(this->AddEmployesButton, 0, 0);
            this->tableLayoutPanelModEmployes->Controls->Add(this->DelEmployesButton, 0, 2);
            this->tableLayoutPanelModEmployes->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelModEmployes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(61)));
            this->tableLayoutPanelModEmployes->Location = System::Drawing::Point(1460, 5);
            this->tableLayoutPanelModEmployes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelModEmployes->Name = L"tableLayoutPanelModEmployes";
            this->tableLayoutPanelModEmployes->RowCount = 3;
            this->tableLayoutPanelModEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33334F)));
            this->tableLayoutPanelModEmployes->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModEmployes->Size = System::Drawing::Size(356, 196);
            this->tableLayoutPanelModEmployes->TabIndex = 0;
            // 
            // ModifyEmployesButton
            // 
            this->ModifyEmployesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ModifyEmployesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ModifyEmployesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ModifyEmployesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->ModifyEmployesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ModifyEmployesButton->Location = System::Drawing::Point(3, 68);
            this->ModifyEmployesButton->Name = L"ModifyEmployesButton";
            this->ModifyEmployesButton->Size = System::Drawing::Size(350, 59);
            this->ModifyEmployesButton->TabIndex = 5;
            this->ModifyEmployesButton->Text = L"Modifier";
            this->ModifyEmployesButton->UseVisualStyleBackColor = true;
            // 
            // AddEmployesButton
            // 
            this->AddEmployesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->AddEmployesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->AddEmployesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->AddEmployesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->AddEmployesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->AddEmployesButton->Location = System::Drawing::Point(4, 5);
            this->AddEmployesButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->AddEmployesButton->Name = L"AddEmployesButton";
            this->AddEmployesButton->Size = System::Drawing::Size(348, 55);
            this->AddEmployesButton->TabIndex = 2;
            this->AddEmployesButton->Text = L"Ajouter";
            this->AddEmployesButton->UseVisualStyleBackColor = true;
            // 
            // DelEmployesButton
            // 
            this->DelEmployesButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->DelEmployesButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DelEmployesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->DelEmployesButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->DelEmployesButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->DelEmployesButton->Location = System::Drawing::Point(3, 133);
            this->DelEmployesButton->Name = L"DelEmployesButton";
            this->DelEmployesButton->Size = System::Drawing::Size(350, 60);
            this->DelEmployesButton->TabIndex = 4;
            this->DelEmployesButton->Text = L"Supprimer";
            this->DelEmployesButton->UseVisualStyleBackColor = true;
            // 
            // tabStocks
            // 
            this->tabStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabStocks->Controls->Add(this->tableLayoutPanel4);
            this->tabStocks->Controls->Add(this->checkBox4);
            this->tabStocks->Controls->Add(this->tableLayoutPanelStocks);
            this->tabStocks->Location = System::Drawing::Point(4, 29);
            this->tabStocks->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabStocks->Name = L"tabStocks";
            this->tabStocks->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabStocks->Size = System::Drawing::Size(1826, 745);
            this->tabStocks->TabIndex = 3;
            this->tabStocks->Text = L"Stocks";
            // 
            // tableLayoutPanel4
            // 
            this->tableLayoutPanel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanel4->ColumnCount = 3;
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                100)));
            this->tableLayoutPanel4->Controls->Add(this->dataGridView4, 1, 1);
            this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
            this->tableLayoutPanel4->RowCount = 3;
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
            this->tableLayoutPanel4->Size = System::Drawing::Size(1820, 533);
            this->tableLayoutPanel4->TabIndex = 9;
            // 
            // dataGridView4
            // 
            this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView4->Location = System::Drawing::Point(103, 50);
            this->dataGridView4->Name = L"dataGridView4";
            this->dataGridView4->RowHeadersWidth = 51;
            this->dataGridView4->RowTemplate->Height = 24;
            this->dataGridView4->Size = System::Drawing::Size(1614, 450);
            this->dataGridView4->TabIndex = 5;
            // 
            // checkBox4
            // 
            this->checkBox4->AutoSize = true;
            this->checkBox4->Location = System::Drawing::Point(752, 270);
            this->checkBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->checkBox4->Name = L"checkBox4";
            this->checkBox4->Size = System::Drawing::Size(151, 30);
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
            this->tableLayoutPanelStocks->Controls->Add(this->tableLayoutPanelDetailStocks, 0, 0);
            this->tableLayoutPanelStocks->Controls->Add(this->tableLayoutPanelModStocks, 1, 0);
            this->tableLayoutPanelStocks->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->tableLayoutPanelStocks->Location = System::Drawing::Point(3, 536);
            this->tableLayoutPanelStocks->Name = L"tableLayoutPanelStocks";
            this->tableLayoutPanelStocks->RowCount = 1;
            this->tableLayoutPanelStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelStocks->Size = System::Drawing::Size(1820, 206);
            this->tableLayoutPanelStocks->TabIndex = 8;
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
                40)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelDetailStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                40)));
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
            this->tableLayoutPanelDetailStocks->Location = System::Drawing::Point(4, 5);
            this->tableLayoutPanelDetailStocks->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelDetailStocks->Name = L"tableLayoutPanelDetailStocks";
            this->tableLayoutPanelDetailStocks->RowCount = 3;
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                31)));
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanelDetailStocks->Size = System::Drawing::Size(1448, 196);
            this->tableLayoutPanelDetailStocks->TabIndex = 2;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label11->Location = System::Drawing::Point(485, 31);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(327, 82);
            this->label11->TabIndex = 16;
            this->label11->Text = L"Désignation :";
            // 
            // textBox12
            // 
            this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox12->Location = System::Drawing::Point(820, 36);
            this->textBox12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(212, 31);
            this->textBox12->TabIndex = 14;
            // 
            // textBox13
            // 
            this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox13->Location = System::Drawing::Point(224, 116);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(214, 31);
            this->textBox13->TabIndex = 11;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label12->Location = System::Drawing::Point(3, 113);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(215, 83);
            this->label12->TabIndex = 10;
            this->label12->Text = L"Quantité :";
            // 
            // textBox14
            // 
            this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox14->Location = System::Drawing::Point(225, 36);
            this->textBox14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(212, 31);
            this->textBox14->TabIndex = 2;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label13->Location = System::Drawing::Point(4, 31);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(213, 82);
            this->label13->TabIndex = 6;
            this->label13->Text = L"Référence produit :";
            // 
            // textBox16
            // 
            this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox16->Location = System::Drawing::Point(1232, 37);
            this->textBox16->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(210, 31);
            this->textBox16->TabIndex = 17;
            // 
            // textBox17
            // 
            this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox17->Location = System::Drawing::Point(1230, 118);
            this->textBox17->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(214, 31);
            this->textBox17->TabIndex = 18;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label15->Location = System::Drawing::Point(1082, 31);
            this->label15->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(138, 82);
            this->label15->TabIndex = 19;
            this->label15->Text = L"Prix :";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F));
            this->label16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label16->Location = System::Drawing::Point(1080, 113);
            this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(142, 83);
            this->label16->TabIndex = 20;
            this->label16->Text = L"Taux de Tva :";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->label17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label17->Location = System::Drawing::Point(485, 113);
            this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(327, 83);
            this->label17->TabIndex = 21;
            this->label17->Text = L"Seuil de réaprovisionnement :";
            // 
            // textBox18
            // 
            this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
            this->textBox18->Location = System::Drawing::Point(820, 118);
            this->textBox18->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(212, 31);
            this->textBox18->TabIndex = 22;
            // 
            // tableLayoutPanelModStocks
            // 
            this->tableLayoutPanelModStocks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
            this->tableLayoutPanelModStocks->ColumnCount = 1;
            this->tableLayoutPanelModStocks->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanelModStocks->Controls->Add(this->ModifyStocksButton, 0, 1);
            this->tableLayoutPanelModStocks->Controls->Add(this->AddStocksButton, 0, 0);
            this->tableLayoutPanelModStocks->Controls->Add(this->DelStocksButton, 0, 2);
            this->tableLayoutPanelModStocks->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanelModStocks->Location = System::Drawing::Point(1460, 5);
            this->tableLayoutPanelModStocks->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanelModStocks->Name = L"tableLayoutPanelModStocks";
            this->tableLayoutPanelModStocks->RowCount = 3;
            this->tableLayoutPanelModStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33334F)));
            this->tableLayoutPanelModStocks->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
                33.33333F)));
            this->tableLayoutPanelModStocks->Size = System::Drawing::Size(356, 196);
            this->tableLayoutPanelModStocks->TabIndex = 0;
            // 
            // ModifyStocksButton
            // 
            this->ModifyStocksButton->BackColor = System::Drawing::Color::Transparent;
            this->ModifyStocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ModifyStocksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ModifyStocksButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->ModifyStocksButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ModifyStocksButton->Location = System::Drawing::Point(3, 68);
            this->ModifyStocksButton->Name = L"ModifyStocksButton";
            this->ModifyStocksButton->Size = System::Drawing::Size(350, 59);
            this->ModifyStocksButton->TabIndex = 5;
            this->ModifyStocksButton->Text = L"Modifier";
            this->ModifyStocksButton->UseVisualStyleBackColor = false;
            // 
            // AddStocksButton
            // 
            this->AddStocksButton->BackColor = System::Drawing::Color::Transparent;
            this->AddStocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->AddStocksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->AddStocksButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->AddStocksButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->AddStocksButton->Location = System::Drawing::Point(4, 5);
            this->AddStocksButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->AddStocksButton->Name = L"AddStocksButton";
            this->AddStocksButton->Size = System::Drawing::Size(348, 55);
            this->AddStocksButton->TabIndex = 2;
            this->AddStocksButton->Text = L"Ajouter";
            this->AddStocksButton->UseVisualStyleBackColor = false;
            // 
            // DelStocksButton
            // 
            this->DelStocksButton->BackColor = System::Drawing::Color::Transparent;
            this->DelStocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
            this->DelStocksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->DelStocksButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 7.9F));
            this->DelStocksButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->DelStocksButton->Location = System::Drawing::Point(3, 133);
            this->DelStocksButton->Name = L"DelStocksButton";
            this->DelStocksButton->Size = System::Drawing::Size(350, 60);
            this->DelStocksButton->TabIndex = 4;
            this->DelStocksButton->Text = L"Supprimer";
            this->DelStocksButton->UseVisualStyleBackColor = false;
            // 
            // tabStats
            // 
            this->tabStats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
                static_cast<System::Int32>(static_cast<System::Byte>(76)));
            this->tabStats->Controls->Add(this->checkBox5);
            this->tabStats->Controls->Add(this->tableLayoutPanel5);
            this->tabStats->Location = System::Drawing::Point(4, 29);
            this->tabStats->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tabStats->Name = L"tabStats";
            this->tabStats->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
            this->tabStats->Size = System::Drawing::Size(1826, 745);
            this->tabStats->TabIndex = 4;
            this->tabStats->Text = L"Stats";
            // 
            // checkBox5
            // 
            this->checkBox5->AutoSize = true;
            this->checkBox5->Location = System::Drawing::Point(574, 448);
            this->checkBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->checkBox5->Name = L"checkBox5";
            this->checkBox5->Size = System::Drawing::Size(151, 30);
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
                60)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                60)));
            this->tableLayoutPanel5->Controls->Add(this->dataGridView6, 1, 1);
            this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 3;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 62)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(1820, 739);
            this->tableLayoutPanel5->TabIndex = 9;
            // 
            // dataGridView6
            // 
            this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->dataGridView6->Location = System::Drawing::Point(64, 67);
            this->dataGridView6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->dataGridView6->Name = L"dataGridView6";
            this->dataGridView6->RowHeadersWidth = 51;
            this->dataGridView6->RowTemplate->Height = 24;
            this->dataGridView6->Size = System::Drawing::Size(1692, 626);
            this->dataGridView6->TabIndex = 5;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->ColumnCount = 7;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                20)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                40)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                22)));
            this->tableLayoutPanel6->Controls->Add(this->label22, 3, 0);
            this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel6->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(1834, 70);
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
            this->label22->Location = System::Drawing::Point(744, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(343, 70);
            this->label22->TabIndex = 1;
            this->label22->Text = L"Nom Société";
            this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1834, 947);
            this->Controls->Add(this->panel1);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->tableLayoutPanelClient->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->ResumeLayout(false);
            this->tableLayoutPanelDetailClient->PerformLayout();
            this->tableLayoutPanelModClient->ResumeLayout(false);
            this->tabEmployes->ResumeLayout(false);
            this->tabEmployes->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->tableLayoutPanelEmployes->ResumeLayout(false);
            this->tableLayoutPanelDetailEmployes->ResumeLayout(false);
            this->tableLayoutPanelDetailEmployes->PerformLayout();
            this->tableLayoutPanelModEmployes->ResumeLayout(false);
            this->tabStocks->ResumeLayout(false);
            this->tabStocks->PerformLayout();
            this->tableLayoutPanel4->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
            this->tableLayoutPanelStocks->ResumeLayout(false);
            this->tableLayoutPanelDetailStocks->ResumeLayout(false);
            this->tableLayoutPanelDetailStocks->PerformLayout();
            this->tableLayoutPanelModStocks->ResumeLayout(false);
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
        SqlServices^ DB = gcnew SqlServices();
        DB->ConnectDB();
        this->dataGridView1->DataSource = DB->ExecuteSQL("Select Client.Id_Client , Last_Client , First_Client , Birth_Date , Number_Adr , Street_Adr,Floor , City_Name, Post_Code FROM[projetPOO].[dbo].[Client] join[projetPOO].[dbo].[Live_InC] ON Live_InC.Id_Client = Client.Id_Client join[projetPOO].[dbo].[Address] ON Address.Id_Adr = Live_InC.Id_Adr join[projetPOO].[dbo].[residence_cities] ON residence_cities.Id_City = Address.Id_City");
	}
	private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
		Application::DoEvents();
		this->dataGridView1->Refresh();
		SqlServices^ DB = gcnew SqlServices();
		this->dataGridView1->DataSource = DB->ExecuteSQL("Select Client.Id_Client , Last_Client , First_Client , Birth_Date , Number_Adr , Street_Adr,Floor , City_Name, Post_Code FROM[projetPOO].[dbo].[Client] join[projetPOO].[dbo].[Live_InC] ON Live_InC.Id_Client = Client.Id_Client join[projetPOO].[dbo].[Address] ON Address.Id_Adr = Live_InC.Id_Adr join[projetPOO].[dbo].[residence_cities] ON residence_cities.Id_City = Address.Id_City");
        this->dataGridView3->DataSource = DB->ExecuteSQL("Select Personnel.Id_Personnel , LAST_Personnel , FIRST_Personnel , Hire_Date ,Id_Superior,  Number_Adr , Street_Adr,Floor , City_Name, Post_Code  FROM[projetPOO].[dbo].[Personnel] join[projetPOO].[dbo].[Live_InP] ON Live_InP.Id_Personnel = Personnel.Id_Personnel join[projetPOO].[dbo].[Address] ON Address.Id_Adr = Live_InP.Id_Adr join[projetPOO].[dbo].[residence_cities] ON residence_cities.Id_City = Address.Id_City");
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
};
}