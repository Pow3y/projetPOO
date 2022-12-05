#pragma once
#include "Connection.h"

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;
	using namespace System::Globalization;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TabControl^ tabAffichage;
	protected:

	protected:








	private: System::Windows::Forms::TabPage^ tabCommandes;
	private: System::Windows::Forms::TabPage^ tabEmployes;
	private: System::Windows::Forms::TabPage^ tabStocks;
	private: System::Windows::Forms::TabPage^ tabStats;
		
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
	private: System::Windows::Forms::Button^ StatsButton;

	private: System::Windows::Forms::Button^ StocksButton;


	private: System::Windows::Forms::Button^ EmployesButton;

	private: System::Windows::Forms::Button^ CommandesButton;

	private: System::Windows::Forms::Button^ ClientButton;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridView^ dataGridView4;
private: System::Windows::Forms::TabPage^ tabClient;
private: System::Windows::Forms::DataGridView^ dataGridView1;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
private: System::Windows::Forms::Button^ SupprimerClientButton;
private: System::Windows::Forms::Button^ AjouterClientButton;
private: System::Windows::Forms::Button^ ModifierClientButton;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel15;





private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::CheckBox^ checkBox4;
private: System::Windows::Forms::CheckBox^ checkBox5;

private: System::Windows::Forms::TextBox^ textBox22;



private: System::Windows::Forms::Label^ label1;




private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label3;

private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;

private: System::Windows::Forms::Label^ label5;



private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox6;

private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
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
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker4;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabAffichage = (gcnew System::Windows::Forms::TabControl());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel15 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabCommandes = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->tabEmployes = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->StatsButton = (gcnew System::Windows::Forms::Button());
			this->StocksButton = (gcnew System::Windows::Forms::Button());
			this->EmployesButton = (gcnew System::Windows::Forms::Button());
			this->CommandesButton = (gcnew System::Windows::Forms::Button());
			this->ClientButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SupprimerClientButton = (gcnew System::Windows::Forms::Button());
			this->AjouterClientButton = (gcnew System::Windows::Forms::Button());
			this->ModifierClientButton = (gcnew System::Windows::Forms::Button());
			this->tabAffichage->SuspendLayout();
			this->tabClient->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel15->SuspendLayout();
			this->tableLayoutPanel14->SuspendLayout();
			this->tabCommandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tabEmployes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->tabStocks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel13->SuspendLayout();
			this->tabStats->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			this->SuspendLayout();
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
			this->tabAffichage->ItemSize = System::Drawing::Size(71, 25);
			this->tabAffichage->Location = System::Drawing::Point(0, 63);
			this->tabAffichage->Name = L"tabAffichage";
			this->tabAffichage->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabAffichage->SelectedIndex = 0;
			this->tabAffichage->Size = System::Drawing::Size(1223, 543);
			this->tabAffichage->TabIndex = 8;
			// 
			// tabClient
			// 
			this->tabClient->Controls->Add(this->dataGridView5);
			this->tabClient->Controls->Add(this->checkBox1);
			this->tabClient->Controls->Add(this->dataGridView1);
			this->tabClient->Controls->Add(this->tableLayoutPanel1);
			this->tabClient->Location = System::Drawing::Point(4, 29);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(1215, 510);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"Client";
			this->tabClient->UseVisualStyleBackColor = true;
			this->tabClient->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView5->Location = System::Drawing::Point(4, 4);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 82;
			this->dataGridView5->Size = System::Drawing::Size(2230, 897);
			this->dataGridView5->TabIndex = 7;
			this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView5_CellContentClick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(562, 262);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(98, 21);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1209, 356);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel15, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel14, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 359);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1209, 148);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// tableLayoutPanel15
			// 
			this->tableLayoutPanel15->ColumnCount = 8;
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel15->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel15->Controls->Add(this->label6, 3, 2);
			this->tableLayoutPanel15->Controls->Add(this->label3, 3, 1);
			this->tableLayoutPanel15->Controls->Add(this->textBox25, 4, 1);
			this->tableLayoutPanel15->Controls->Add(this->textBox23, 1, 2);
			this->tableLayoutPanel15->Controls->Add(this->label4, 0, 2);
			this->tableLayoutPanel15->Controls->Add(this->textBox22, 1, 1);
			this->tableLayoutPanel15->Controls->Add(this->label1, 0, 1);
			this->tableLayoutPanel15->Controls->Add(this->dateTimePicker1, 4, 2);
			this->tableLayoutPanel15->Controls->Add(this->label20, 6, 1);
			this->tableLayoutPanel15->Controls->Add(this->label21, 6, 2);
			this->tableLayoutPanel15->Controls->Add(this->textBox10, 7, 1);
			this->tableLayoutPanel15->Controls->Add(this->textBox19, 7, 2);
			this->tableLayoutPanel15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel15->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel15->Name = L"tableLayoutPanel15";
			this->tableLayoutPanel15->RowCount = 3;
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel15->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel15->Size = System::Drawing::Size(961, 142);
			this->tableLayoutPanel15->TabIndex = 2;
			this->tableLayoutPanel15->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel15_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(307, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 61);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Date de naissance :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(307, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 61);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Prénom :";
			// 
			// textBox25
			// 
			this->textBox25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox25->Location = System::Drawing::Point(447, 23);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(169, 22);
			this->textBox25->TabIndex = 14;
			// 
			// textBox23
			// 
			this->textBox23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox23->Location = System::Drawing::Point(112, 84);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(169, 22);
			this->textBox23->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(3, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 61);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Numéro client :";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox22
			// 
			this->textBox22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox22->Location = System::Drawing::Point(112, 23);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(169, 22);
			this->textBox22->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 61);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Nom :";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dateTimePicker1->Location = System::Drawing::Point(447, 84);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(169, 22);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label20->Location = System::Drawing::Point(642, 20);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(139, 61);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Adresse facturation :";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label21->Location = System::Drawing::Point(642, 81);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(139, 61);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Adresse livraison :";
			// 
			// textBox10
			// 
			this->textBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox10->Location = System::Drawing::Point(787, 23);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(171, 22);
			this->textBox10->TabIndex = 21;
			// 
			// textBox19
			// 
			this->textBox19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox19->Location = System::Drawing::Point(787, 84);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(171, 22);
			this->textBox19->TabIndex = 22;
			// 
			// tableLayoutPanel14
			// 
			this->tableLayoutPanel14->ColumnCount = 1;
			this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel14->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel14->Controls->Add(this->button2, 0, 0);
			this->tableLayoutPanel14->Controls->Add(this->button3, 0, 2);
			this->tableLayoutPanel14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel14->Location = System::Drawing::Point(970, 3);
			this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
			this->tableLayoutPanel14->RowCount = 3;
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel14->Size = System::Drawing::Size(236, 142);
			this->tableLayoutPanel14->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(3, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(230, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(3, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(230, 42);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// tabCommandes
			// 
			this->tabCommandes->Controls->Add(this->dataGridView2);
			this->tabCommandes->Controls->Add(this->tableLayoutPanel3);
			this->tabCommandes->Controls->Add(this->checkBox2);
			this->tabCommandes->Location = System::Drawing::Point(4, 29);
			this->tabCommandes->Name = L"tabCommandes";
			this->tabCommandes->Padding = System::Windows::Forms::Padding(3);
			this->tabCommandes->Size = System::Drawing::Size(1215, 510);
			this->tabCommandes->TabIndex = 1;
			this->tabCommandes->Text = L"Commandes";
			this->tabCommandes->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1209, 349);
			this->dataGridView2->TabIndex = 5;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel11, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 352);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1209, 155);
			this->tableLayoutPanel3->TabIndex = 7;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 5;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				23)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->label5, 3, 1);
			this->tableLayoutPanel4->Controls->Add(this->label7, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->textBox9, 1, 1);
			this->tableLayoutPanel4->Controls->Add(this->label8, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->dateTimePicker2, 1, 2);
			this->tableLayoutPanel4->Controls->Add(this->dateTimePicker3, 4, 1);
			this->tableLayoutPanel4->Controls->Add(this->label18, 3, 2);
			this->tableLayoutPanel4->Controls->Add(this->textBox7, 4, 2);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 3;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(961, 149);
			this->tableLayoutPanel4->TabIndex = 2;
			this->tableLayoutPanel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel4_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(500, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 64);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Date d\'émission :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(3, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 65);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Date de livraison :";
			// 
			// textBox9
			// 
			this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox9->Location = System::Drawing::Point(164, 23);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(307, 22);
			this->textBox9->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(3, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 64);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Référence commande :";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CustomFormat = L"dd-mm-yyyy";
			this->dateTimePicker2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(164, 87);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(307, 22);
			this->dateTimePicker2->TabIndex = 17;
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CustomFormat = L"dd-mm-yyyy";
			this->dateTimePicker3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(650, 23);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(308, 22);
			this->dateTimePicker3->TabIndex = 18;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label18->Location = System::Drawing::Point(500, 84);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(144, 65);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Adresse de livraison :";
			// 
			// textBox7
			// 
			this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox7->Location = System::Drawing::Point(650, 87);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(308, 22);
			this->textBox7->TabIndex = 20;
			// 
			// tableLayoutPanel11
			// 
			this->tableLayoutPanel11->ColumnCount = 1;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel11->Controls->Add(this->button4, 0, 1);
			this->tableLayoutPanel11->Controls->Add(this->button5, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->button6, 0, 2);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(970, 3);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 3;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(236, 149);
			this->tableLayoutPanel11->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(3, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(230, 43);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(230, 43);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Ajouter";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(3, 101);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(230, 45);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Supprimer";
			this->button6->UseVisualStyleBackColor = true;
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
			// tabEmployes
			// 
			this->tabEmployes->Controls->Add(this->dataGridView3);
			this->tabEmployes->Controls->Add(this->tableLayoutPanel5);
			this->tabEmployes->Controls->Add(this->checkBox3);
			this->tabEmployes->Location = System::Drawing::Point(4, 29);
			this->tabEmployes->Name = L"tabEmployes";
			this->tabEmployes->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployes->Size = System::Drawing::Size(1215, 510);
			this->tabEmployes->TabIndex = 2;
			this->tabEmployes->Text = L"Employes";
			this->tabEmployes->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->Location = System::Drawing::Point(3, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1209, 404);
			this->dataGridView3->TabIndex = 5;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel12, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 407);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1209, 100);
			this->tableLayoutPanel5->TabIndex = 8;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 8;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel6->Controls->Add(this->label2, 3, 1);
			this->tableLayoutPanel6->Controls->Add(this->textBox6, 4, 1);
			this->tableLayoutPanel6->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->textBox11, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->label10, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label14, 3, 2);
			this->tableLayoutPanel6->Controls->Add(this->textBox15, 4, 2);
			this->tableLayoutPanel6->Controls->Add(this->textBox8, 7, 1);
			this->tableLayoutPanel6->Controls->Add(this->label19, 6, 1);
			this->tableLayoutPanel6->Controls->Add(this->dateTimePicker4, 1, 2);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(961, 94);
			this->tableLayoutPanel6->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(332, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 37);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Prénom :";
			// 
			// textBox6
			// 
			this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox6->Location = System::Drawing::Point(416, 23);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(170, 22);
			this->textBox6->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(3, 57);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 37);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Date d\'embauche :";
			// 
			// textBox11
			// 
			this->textBox11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox11->Location = System::Drawing::Point(136, 23);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(170, 22);
			this->textBox11->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(3, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 37);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Nom :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Location = System::Drawing::Point(332, 57);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 37);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Supérieur :";
			// 
			// textBox15
			// 
			this->textBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox15->Location = System::Drawing::Point(417, 61);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(168, 22);
			this->textBox15->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox8->Location = System::Drawing::Point(788, 23);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(170, 22);
			this->textBox8->TabIndex = 19;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label19->Location = System::Drawing::Point(612, 20);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(170, 37);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Adresse postale :";
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(136, 60);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(170, 22);
			this->dateTimePicker4->TabIndex = 21;
			// 
			// tableLayoutPanel12
			// 
			this->tableLayoutPanel12->ColumnCount = 1;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel12->Controls->Add(this->button7, 0, 1);
			this->tableLayoutPanel12->Controls->Add(this->button8, 0, 0);
			this->tableLayoutPanel12->Controls->Add(this->button9, 0, 2);
			this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel12->Location = System::Drawing::Point(970, 3);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 3;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(236, 94);
			this->tableLayoutPanel12->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Location = System::Drawing::Point(3, 34);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(230, 25);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Modifier";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Location = System::Drawing::Point(3, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(230, 25);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Ajouter";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->Location = System::Drawing::Point(3, 65);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(230, 26);
			this->button9->TabIndex = 4;
			this->button9->Text = L"Supprimer";
			this->button9->UseVisualStyleBackColor = true;
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
			// tabStocks
			// 
			this->tabStocks->Controls->Add(this->dataGridView4);
			this->tabStocks->Controls->Add(this->tableLayoutPanel7);
			this->tabStocks->Controls->Add(this->checkBox4);
			this->tabStocks->Location = System::Drawing::Point(4, 29);
			this->tabStocks->Name = L"tabStocks";
			this->tabStocks->Padding = System::Windows::Forms::Padding(3);
			this->tabStocks->Size = System::Drawing::Size(1215, 510);
			this->tabStocks->TabIndex = 3;
			this->tabStocks->Text = L"Stocks";
			this->tabStocks->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView4->Location = System::Drawing::Point(3, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(1209, 404);
			this->dataGridView4->TabIndex = 5;
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel8, 0, 0);
			this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel13, 1, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 407);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(1209, 100);
			this->tableLayoutPanel7->TabIndex = 8;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 8;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				27)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				27)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel8->Controls->Add(this->label11, 3, 1);
			this->tableLayoutPanel8->Controls->Add(this->textBox12, 4, 1);
			this->tableLayoutPanel8->Controls->Add(this->textBox13, 1, 2);
			this->tableLayoutPanel8->Controls->Add(this->label12, 0, 2);
			this->tableLayoutPanel8->Controls->Add(this->textBox14, 1, 1);
			this->tableLayoutPanel8->Controls->Add(this->label13, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->textBox16, 7, 1);
			this->tableLayoutPanel8->Controls->Add(this->textBox17, 7, 2);
			this->tableLayoutPanel8->Controls->Add(this->label15, 6, 1);
			this->tableLayoutPanel8->Controls->Add(this->label16, 6, 2);
			this->tableLayoutPanel8->Controls->Add(this->label17, 3, 2);
			this->tableLayoutPanel8->Controls->Add(this->textBox18, 4, 2);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 3;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(961, 94);
			this->tableLayoutPanel8->TabIndex = 2;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Location = System::Drawing::Point(320, 20);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(198, 37);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Désignation :";
			// 
			// textBox12
			// 
			this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox12->Location = System::Drawing::Point(524, 23);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(148, 22);
			this->textBox12->TabIndex = 14;
			// 
			// textBox13
			// 
			this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox13->Location = System::Drawing::Point(139, 60);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(148, 22);
			this->textBox13->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(3, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(130, 37);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Quantité :";
			// 
			// textBox14
			// 
			this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox14->Location = System::Drawing::Point(139, 23);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(148, 22);
			this->textBox14->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Location = System::Drawing::Point(3, 20);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 37);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Référence produit :";
			// 
			// textBox16
			// 
			this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox16->Location = System::Drawing::Point(809, 24);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(148, 22);
			this->textBox16->TabIndex = 17;
			// 
			// textBox17
			// 
			this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox17->Location = System::Drawing::Point(809, 61);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(148, 22);
			this->textBox17->TabIndex = 18;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Location = System::Drawing::Point(706, 20);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 37);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Prix :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Location = System::Drawing::Point(706, 57);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(95, 37);
			this->label16->TabIndex = 20;
			this->label16->Text = L"Taux de Tva :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Location = System::Drawing::Point(321, 57);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(196, 37);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Seuil de réaprovisionnement :";
			// 
			// textBox18
			// 
			this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox18->Location = System::Drawing::Point(525, 61);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(146, 22);
			this->textBox18->TabIndex = 22;
			// 
			// tableLayoutPanel13
			// 
			this->tableLayoutPanel13->ColumnCount = 1;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel13->Controls->Add(this->button10, 0, 1);
			this->tableLayoutPanel13->Controls->Add(this->button11, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->button12, 0, 2);
			this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel13->Location = System::Drawing::Point(970, 3);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 3;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(236, 94);
			this->tableLayoutPanel13->TabIndex = 0;
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->Location = System::Drawing::Point(3, 34);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(230, 25);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Modifier";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->Location = System::Drawing::Point(3, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(230, 25);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Ajouter";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->Location = System::Drawing::Point(3, 65);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(230, 26);
			this->button12->TabIndex = 4;
			this->button12->Text = L"Supprimer";
			this->button12->UseVisualStyleBackColor = true;
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
			// tabStats
			// 
			this->tabStats->Controls->Add(this->checkBox5);
			this->tabStats->Location = System::Drawing::Point(4, 29);
			this->tabStats->Name = L"tabStats";
			this->tabStats->Padding = System::Windows::Forms::Padding(3);
			this->tabStats->Size = System::Drawing::Size(1215, 510);
			this->tabStats->TabIndex = 4;
			this->tabStats->Text = L"Stats";
			this->tabStats->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(477, 186);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(98, 21);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"checkBox5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel10
			// 
			this->tableLayoutPanel10->ColumnCount = 5;
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel10->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel10->Controls->Add(this->StatsButton, 4, 0);
			this->tableLayoutPanel10->Controls->Add(this->StocksButton, 3, 0);
			this->tableLayoutPanel10->Controls->Add(this->EmployesButton, 2, 0);
			this->tableLayoutPanel10->Controls->Add(this->CommandesButton, 1, 0);
			this->tableLayoutPanel10->Controls->Add(this->ClientButton, 0, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tableLayoutPanel10->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(1223, 63);
			this->tableLayoutPanel10->TabIndex = 9;
			// 
			// StatsButton
			// 
			this->StatsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StatsButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StatsButton->FlatAppearance->BorderSize = 0;
			this->StatsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StatsButton->Location = System::Drawing::Point(979, 3);
			this->StatsButton->Name = L"StatsButton";
			this->StatsButton->Size = System::Drawing::Size(241, 57);
			this->StatsButton->TabIndex = 4;
			this->StatsButton->Text = L"Stats";
			this->StatsButton->UseVisualStyleBackColor = true;
			this->StatsButton->Click += gcnew System::EventHandler(this, &MyForm::StatsButton_Click);
			// 
			// StocksButton
			// 
			this->StocksButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StocksButton->FlatAppearance->BorderSize = 0;
			this->StocksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StocksButton->Location = System::Drawing::Point(735, 3);
			this->StocksButton->Name = L"StocksButton";
			this->StocksButton->Size = System::Drawing::Size(238, 57);
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
			this->EmployesButton->Location = System::Drawing::Point(491, 3);
			this->EmployesButton->Name = L"EmployesButton";
			this->EmployesButton->Size = System::Drawing::Size(238, 57);
			this->EmployesButton->TabIndex = 2;
			this->EmployesButton->Text = L"Employes";
			this->EmployesButton->UseVisualStyleBackColor = true;
			this->EmployesButton->Click += gcnew System::EventHandler(this, &MyForm::EmployesButton_Click);
			// 
			// CommandesButton
			// 
			this->CommandesButton->BackColor = System::Drawing::Color::Transparent;
			this->CommandesButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CommandesButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CommandesButton->FlatAppearance->BorderSize = 0;
			this->CommandesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CommandesButton->Location = System::Drawing::Point(247, 3);
			this->CommandesButton->Name = L"CommandesButton";
			this->CommandesButton->Size = System::Drawing::Size(238, 57);
			this->CommandesButton->TabIndex = 1;
			this->CommandesButton->Text = L"Commandes";
			this->CommandesButton->UseVisualStyleBackColor = false;
			this->CommandesButton->Click += gcnew System::EventHandler(this, &MyForm::CommandesButton_Click);
			// 
			// ClientButton
			// 
			this->ClientButton->BackColor = System::Drawing::SystemColors::Control;
			this->ClientButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientButton->FlatAppearance->BorderSize = 0;
			this->ClientButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ClientButton->Location = System::Drawing::Point(3, 3);
			this->ClientButton->Name = L"ClientButton";
			this->ClientButton->Size = System::Drawing::Size(238, 57);
			this->ClientButton->TabIndex = 0;
			this->ClientButton->Text = L"Client";
			this->ClientButton->UseVisualStyleBackColor = false;
			this->ClientButton->Click += gcnew System::EventHandler(this, &MyForm::ClientButton_Click);
			// 
			// tableLayoutPanel9
			// 
			this->tableLayoutPanel9->ColumnCount = 5;
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel9->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(934, 94);
			this->tableLayoutPanel9->TabIndex = 1;
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
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(943, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(230, 94);
			this->tableLayoutPanel2->TabIndex = 0;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1223, 606);
			this->Controls->Add(this->tabAffichage);
			this->Controls->Add(this->tableLayoutPanel10);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabAffichage->ResumeLayout(false);
			this->tabClient->ResumeLayout(false);
			this->tabClient->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel15->ResumeLayout(false);
			this->tableLayoutPanel15->PerformLayout();
			this->tableLayoutPanel14->ResumeLayout(false);
			this->tabCommandes->ResumeLayout(false);
			this->tabCommandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tabEmployes->ResumeLayout(false);
			this->tabEmployes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tabStocks->ResumeLayout(false);
			this->tabStocks->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel13->ResumeLayout(false);
			this->tabStats->ResumeLayout(false);
			this->tabStats->PerformLayout();
			this->tableLayoutPanel10->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tabAffichage->SizeMode = TabSizeMode::Fixed;
		this->tabAffichage->ItemSize = System::Drawing::Size(0, 1);
		this->tabAffichage->Appearance = TabAppearance::Buttons;
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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
		//ghftgftdretr
		this->tabAffichage->SelectedTab = tabEmployes;
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
};
}