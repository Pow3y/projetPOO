#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
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
	private: System::Windows::Forms::TabControl^ tabDisplay;
	private: System::Windows::Forms::TabPage^ tabClient;
	private: System::Windows::Forms::TabPage^ tabEmployes;
	private: System::Windows::Forms::TabPage^ tabStocks;
	private: System::Windows::Forms::TabPage^ tabCommandes;
	private: System::Windows::Forms::TabPage^ tabStats;
	protected:

	protected:

	protected:

	protected:
















	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ ModifierButton;

	private: System::Windows::Forms::Button^ AjouterButton;
	private: System::Windows::Forms::Button^ SupprimerButton;


















	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ClientButton;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel13;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Button^ StatsButton;

	private: System::Windows::Forms::Button^ CommandesButton;

	private: System::Windows::Forms::Button^ StocksButton;


	private: System::Windows::Forms::Button^ EmployesButton;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;















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
			<<<<<< < HEAD
				this->tabDisplay = (gcnew System::Windows::Forms::TabControl());
			this->tabClient = (gcnew System::Windows::Forms::TabPage());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			====== =
				this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ModifierButton = (gcnew System::Windows::Forms::Button());
			this->AjouterButton = (gcnew System::Windows::Forms::Button());
			this->SupprimerButton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			<<<<<< < HEAD
				this->tabEmployes = (gcnew System::Windows::Forms::TabPage());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			====== =
				this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			<<<<<< < HEAD
				this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->tabStocks = (gcnew System::Windows::Forms::TabPage());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			====== =
				this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			<<<<<< < HEAD
				this->tableLayoutPanel12 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->tabCommandes = (gcnew System::Windows::Forms::TabPage());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			====== =
				this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			<<<<<< < HEAD
				this->tableLayoutPanel13 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->tabStats = (gcnew System::Windows::Forms::TabPage());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->tableLayoutPanel10 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->StatsButton = (gcnew System::Windows::Forms::Button());
			this->CommandesButton = (gcnew System::Windows::Forms::Button());
			this->StocksButton = (gcnew System::Windows::Forms::Button());
			this->EmployesButton = (gcnew System::Windows::Forms::Button());
			this->ClientButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabDisplay->SuspendLayout();
			this->tabClient->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tabEmployes->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel11->SuspendLayout();
			this->tabStocks->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel12->SuspendLayout();
			this->tabCommandes->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel13->SuspendLayout();
			this->tabStats->SuspendLayout();
			this->tableLayoutPanel10->SuspendLayout();
			====== =
				this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel9->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tableLayoutPanel7->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->SuspendLayout();
			// 
			// tabDisplay
			// 
			this->tabDisplay->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabDisplay->Controls->Add(this->tabClient);
			this->tabDisplay->Controls->Add(this->tabEmployes);
			this->tabDisplay->Controls->Add(this->tabStocks);
			this->tabDisplay->Controls->Add(this->tabCommandes);
			this->tabDisplay->Controls->Add(this->tabStats);
			this->tabDisplay->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			<<<<<< < HEAD
				this->tabDisplay->ItemSize = System::Drawing::Size(71, 25);
			this->tabDisplay->Location = System::Drawing::Point(0, 100);
			this->tabDisplay->Name = L"tabDisplay";
			this->tabDisplay->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabDisplay->SelectedIndex = 0;
			this->tabDisplay->Size = System::Drawing::Size(1190, 482);
			this->tabDisplay->TabIndex = 8;
			====== =
				this->tabControl1->ItemSize = System::Drawing::Size(71, 25);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1785, 909);
			this->tabControl1->TabIndex = 8;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// tabClient
				// 
				<<<<<< < HEAD
				this->tabClient->Controls->Add(this->checkBox1);
			this->tabClient->Controls->Add(this->tableLayoutPanel1);
			this->tabClient->Location = System::Drawing::Point(4, 29);
			this->tabClient->Name = L"tabClient";
			this->tabClient->Padding = System::Windows::Forms::Padding(3);
			this->tabClient->Size = System::Drawing::Size(1182, 449);
			this->tabClient->TabIndex = 0;
			this->tabClient->Text = L"tabClient";
			this->tabClient->UseVisualStyleBackColor = true;
			this->tabClient->Click += gcnew System::EventHandler(this, &MyForm::tabClient_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(394, 159);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(98, 21);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			====== =
				this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage1->Size = System::Drawing::Size(1777, 876);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// tableLayoutPanel1
				// 
				this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel9, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			<<<<<< < HEAD
				this->tableLayoutPanel1->Location = System::Drawing::Point(3, 346);
			====== =
				this->tableLayoutPanel1->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1769, 156);
			this->tableLayoutPanel1->TabIndex = 2;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->ModifierButton, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->AjouterButton, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->SupprimerButton, 0, 2);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(1419, 5);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(346, 146);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// ModifierButton
			// 
			<<<<<< < HEAD
				this->ModifierButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ModifierButton->Location = System::Drawing::Point(3, 34);
			this->ModifierButton->Name = L"ModifierButton";
			this->ModifierButton->Size = System::Drawing::Size(224, 25);
			this->ModifierButton->TabIndex = 5;
			this->ModifierButton->Text = L"Modifier";
			this->ModifierButton->UseVisualStyleBackColor = true;
			====== =
				this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(4, 53);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(338, 38);
			this->button2->TabIndex = 5;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// AjouterButton
				// 
				<<<<<< < HEAD
				this->AjouterButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->AjouterButton->Location = System::Drawing::Point(3, 3);
			this->AjouterButton->Name = L"AjouterButton";
			this->AjouterButton->Size = System::Drawing::Size(224, 25);
			this->AjouterButton->TabIndex = 2;
			this->AjouterButton->Text = L"Ajouter";
			this->AjouterButton->UseVisualStyleBackColor = true;
			====== =
				this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(4, 5);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(338, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// SupprimerButton
				// 
				<<<<<< < HEAD
				this->SupprimerButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SupprimerButton->Location = System::Drawing::Point(3, 65);
			this->SupprimerButton->Name = L"SupprimerButton";
			this->SupprimerButton->Size = System::Drawing::Size(224, 26);
			this->SupprimerButton->TabIndex = 4;
			this->SupprimerButton->Text = L"Supprimer";
			this->SupprimerButton->UseVisualStyleBackColor = true;
			====== =
				this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(4, 101);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(338, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
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
			this->tableLayoutPanel9->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutPanel9->Controls->Add(this->textBox2, 1, 0);
			this->tableLayoutPanel9->Controls->Add(this->textBox3, 2, 0);
			this->tableLayoutPanel9->Controls->Add(this->textBox4, 3, 0);
			this->tableLayoutPanel9->Controls->Add(this->textBox5, 4, 0);
			this->tableLayoutPanel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel9->Location = System::Drawing::Point(4, 5);
			this->tableLayoutPanel9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel9->Name = L"tableLayoutPanel9";
			this->tableLayoutPanel9->RowCount = 1;
			this->tableLayoutPanel9->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel9->Size = System::Drawing::Size(1407, 146);
			this->tableLayoutPanel9->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(4, 5);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 31);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(285, 5);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(273, 31);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Location = System::Drawing::Point(566, 5);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(273, 31);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox4->Location = System::Drawing::Point(847, 5);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(273, 31);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox5->Location = System::Drawing::Point(1128, 5);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(275, 31);
			this->textBox5->TabIndex = 4;
			// 
			<<<<<< < HEAD
				// tabEmployes
				// 
				this->tabEmployes->Controls->Add(this->checkBox2);
			this->tabEmployes->Controls->Add(this->tableLayoutPanel3);
			this->tabEmployes->Location = System::Drawing::Point(4, 29);
			this->tabEmployes->Name = L"tabEmployes";
			this->tabEmployes->Padding = System::Windows::Forms::Padding(3);
			this->tabEmployes->Size = System::Drawing::Size(1182, 449);
			this->tabEmployes->TabIndex = 1;
			this->tabEmployes->Text = L"tabEmployes";
			this->tabEmployes->UseVisualStyleBackColor = true;
			this->tabEmployes->Click += gcnew System::EventHandler(this, &MyForm::tabEmployes_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(423, 151);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(98, 21);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			====== =
				// tabPage2
				// 
				this->tabPage2->Controls->Add(this->tableLayoutPanel3);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage2->Size = System::Drawing::Size(1777, 876);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// tableLayoutPanel3
				// 
				this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 1, 0);
			<<<<<< < HEAD
				this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel11, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 346);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1176, 100);
			this->tableLayoutPanel3->TabIndex = 3;
			====== =
				this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel3->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1769, 156);
			this->tableLayoutPanel3->TabIndex = 2;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// tableLayoutPanel4
				// 
				this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel4->Controls->Add(this->button4, 0, 1);
			this->tableLayoutPanel4->Controls->Add(this->button5, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button6, 0, 2);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->tableLayoutPanel4->Location = System::Drawing::Point(943, 3);
			====== =
				this->tableLayoutPanel4->Location = System::Drawing::Point(1419, 5);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 3;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			<<<<<< < HEAD
				this->tableLayoutPanel4->Size = System::Drawing::Size(230, 94);
			====== =
				this->tableLayoutPanel4->Size = System::Drawing::Size(346, 146);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel4->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button4->Location = System::Drawing::Point(3, 34);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(224, 25);
			====== =
				this->button4->Location = System::Drawing::Point(4, 53);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(338, 38);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button5->Location = System::Drawing::Point(3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(224, 25);
			====== =
				this->button5->Location = System::Drawing::Point(4, 5);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(338, 38);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button5->TabIndex = 2;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button6->Location = System::Drawing::Point(3, 65);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(224, 26);
			====== =
				this->button6->Location = System::Drawing::Point(4, 101);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(338, 40);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button6->TabIndex = 4;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			<<<<<< < HEAD
				// tableLayoutPanel11
				// 
				this->tableLayoutPanel11->ColumnCount = 5;
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel11->Controls->Add(this->textBox6, 0, 0);
			this->tableLayoutPanel11->Controls->Add(this->textBox7, 1, 0);
			this->tableLayoutPanel11->Controls->Add(this->textBox8, 2, 0);
			this->tableLayoutPanel11->Controls->Add(this->textBox9, 3, 0);
			this->tableLayoutPanel11->Controls->Add(this->textBox10, 4, 0);
			this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel11->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
			this->tableLayoutPanel11->RowCount = 1;
			this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel11->Size = System::Drawing::Size(934, 94);
			this->tableLayoutPanel11->TabIndex = 1;
			// 
			// textBox6
			// 
			this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox6->Location = System::Drawing::Point(3, 3);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(180, 22);
			this->textBox6->TabIndex = 0;
			// 
			// textBox7
			// 
			this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox7->Location = System::Drawing::Point(189, 3);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 22);
			this->textBox7->TabIndex = 1;
			// 
			// textBox8
			// 
			this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox8->Location = System::Drawing::Point(375, 3);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(180, 22);
			this->textBox8->TabIndex = 2;
			// 
			// textBox9
			// 
			this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox9->Location = System::Drawing::Point(561, 3);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(180, 22);
			this->textBox9->TabIndex = 3;
			// 
			// textBox10
			// 
			this->textBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox10->Location = System::Drawing::Point(747, 3);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(184, 22);
			this->textBox10->TabIndex = 4;
			// 
			// tabStocks
			// 
			this->tabStocks->Controls->Add(this->checkBox3);
			this->tabStocks->Controls->Add(this->tableLayoutPanel5);
			this->tabStocks->Location = System::Drawing::Point(4, 29);
			this->tabStocks->Name = L"tabStocks";
			this->tabStocks->Padding = System::Windows::Forms::Padding(3);
			this->tabStocks->Size = System::Drawing::Size(1182, 449);
			this->tabStocks->TabIndex = 2;
			this->tabStocks->Text = L"tabStocks";
			this->tabStocks->UseVisualStyleBackColor = true;
			this->tabStocks->Click += gcnew System::EventHandler(this, &MyForm::tabStocks_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(413, 141);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(98, 21);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			====== =
				// tabPage3
				// 
				this->tabPage3->Controls->Add(this->tableLayoutPanel5);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage3->Size = System::Drawing::Size(1777, 876);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// tableLayoutPanel5
				// 
				this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 1, 0);
			<<<<<< < HEAD
				this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel12, 0, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 346);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1176, 100);
			this->tableLayoutPanel5->TabIndex = 3;
			====== =
				this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel5->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1769, 156);
			this->tableLayoutPanel5->TabIndex = 2;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// tableLayoutPanel6
				// 
				this->tableLayoutPanel6->ColumnCount = 1;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel6->Controls->Add(this->button7, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->button8, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->button9, 0, 2);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->tableLayoutPanel6->Location = System::Drawing::Point(943, 3);
			====== =
				this->tableLayoutPanel6->Location = System::Drawing::Point(1419, 5);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			<<<<<< < HEAD
				this->tableLayoutPanel6->Size = System::Drawing::Size(230, 94);
			====== =
				this->tableLayoutPanel6->Size = System::Drawing::Size(346, 146);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel6->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button7->Location = System::Drawing::Point(3, 34);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(224, 25);
			====== =
				this->button7->Location = System::Drawing::Point(4, 53);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(338, 38);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button7->TabIndex = 5;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button8->Location = System::Drawing::Point(3, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(224, 25);
			====== =
				this->button8->Location = System::Drawing::Point(4, 5);
			this->button8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(338, 38);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button8->TabIndex = 2;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button9->Location = System::Drawing::Point(3, 65);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(224, 26);
			====== =
				this->button9->Location = System::Drawing::Point(4, 101);
			this->button9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(338, 40);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button9->TabIndex = 4;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			<<<<<< < HEAD
				// tableLayoutPanel12
				// 
				this->tableLayoutPanel12->ColumnCount = 5;
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel12->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel12->Controls->Add(this->textBox11, 0, 0);
			this->tableLayoutPanel12->Controls->Add(this->textBox12, 1, 0);
			this->tableLayoutPanel12->Controls->Add(this->textBox13, 2, 0);
			this->tableLayoutPanel12->Controls->Add(this->textBox14, 3, 0);
			this->tableLayoutPanel12->Controls->Add(this->textBox15, 4, 0);
			this->tableLayoutPanel12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel12->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel12->Name = L"tableLayoutPanel12";
			this->tableLayoutPanel12->RowCount = 1;
			this->tableLayoutPanel12->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel12->Size = System::Drawing::Size(934, 94);
			this->tableLayoutPanel12->TabIndex = 1;
			// 
			// textBox11
			// 
			this->textBox11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox11->Location = System::Drawing::Point(3, 3);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(180, 22);
			this->textBox11->TabIndex = 0;
			// 
			// textBox12
			// 
			this->textBox12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox12->Location = System::Drawing::Point(189, 3);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(180, 22);
			this->textBox12->TabIndex = 1;
			// 
			// textBox13
			// 
			this->textBox13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox13->Location = System::Drawing::Point(375, 3);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(180, 22);
			this->textBox13->TabIndex = 2;
			// 
			// textBox14
			// 
			this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox14->Location = System::Drawing::Point(561, 3);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(180, 22);
			this->textBox14->TabIndex = 3;
			// 
			// textBox15
			// 
			this->textBox15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox15->Location = System::Drawing::Point(747, 3);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(184, 22);
			this->textBox15->TabIndex = 4;
			// 
			// tabCommandes
			// 
			this->tabCommandes->Controls->Add(this->checkBox4);
			this->tabCommandes->Controls->Add(this->tableLayoutPanel7);
			this->tabCommandes->Location = System::Drawing::Point(4, 29);
			this->tabCommandes->Name = L"tabCommandes";
			this->tabCommandes->Padding = System::Windows::Forms::Padding(3);
			this->tabCommandes->Size = System::Drawing::Size(1182, 449);
			this->tabCommandes->TabIndex = 3;
			this->tabCommandes->Text = L"tabCommandes";
			this->tabCommandes->UseVisualStyleBackColor = true;
			this->tabCommandes->Click += gcnew System::EventHandler(this, &MyForm::tabCommandes_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(486, 141);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(98, 21);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			====== =
				// tabPage4
				// 
				this->tabPage4->Controls->Add(this->tableLayoutPanel7);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage4->Size = System::Drawing::Size(1777, 876);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// tableLayoutPanel7
				// 
				this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel8, 1, 0);
			<<<<<< < HEAD
				this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel13, 0, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel7->Location = System::Drawing::Point(3, 346);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(1176, 100);
			this->tableLayoutPanel7->TabIndex = 3;
			====== =
				this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel7->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(1769, 156);
			this->tableLayoutPanel7->TabIndex = 2;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// tableLayoutPanel8
				// 
				this->tableLayoutPanel8->ColumnCount = 1;
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel8->Controls->Add(this->button10, 0, 1);
			this->tableLayoutPanel8->Controls->Add(this->button11, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->button12, 0, 2);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->tableLayoutPanel8->Location = System::Drawing::Point(943, 3);
			====== =
				this->tableLayoutPanel8->Location = System::Drawing::Point(1419, 5);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 3;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			<<<<<< < HEAD
				this->tableLayoutPanel8->Size = System::Drawing::Size(230, 94);
			====== =
				this->tableLayoutPanel8->Size = System::Drawing::Size(346, 146);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel8->TabIndex = 0;
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button10->Location = System::Drawing::Point(3, 34);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(224, 25);
			====== =
				this->button10->Location = System::Drawing::Point(4, 53);
			this->button10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(338, 38);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button10->TabIndex = 5;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button11->Location = System::Drawing::Point(3, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(224, 25);
			====== =
				this->button11->Location = System::Drawing::Point(4, 5);
			this->button11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(338, 38);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button11->TabIndex = 2;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			<<<<<< < HEAD
				this->button12->Location = System::Drawing::Point(3, 65);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(224, 26);
			====== =
				this->button12->Location = System::Drawing::Point(4, 101);
			this->button12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(338, 40);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->button12->TabIndex = 4;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			<<<<<< < HEAD
				// tableLayoutPanel13
				// 
				this->tableLayoutPanel13->ColumnCount = 5;
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel13->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel13->Controls->Add(this->textBox16, 0, 0);
			this->tableLayoutPanel13->Controls->Add(this->textBox17, 1, 0);
			this->tableLayoutPanel13->Controls->Add(this->textBox18, 2, 0);
			this->tableLayoutPanel13->Controls->Add(this->textBox19, 3, 0);
			this->tableLayoutPanel13->Controls->Add(this->textBox20, 4, 0);
			this->tableLayoutPanel13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel13->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel13->Name = L"tableLayoutPanel13";
			this->tableLayoutPanel13->RowCount = 1;
			this->tableLayoutPanel13->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel13->Size = System::Drawing::Size(934, 94);
			this->tableLayoutPanel13->TabIndex = 1;
			// 
			// textBox16
			// 
			this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox16->Location = System::Drawing::Point(3, 3);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(180, 22);
			this->textBox16->TabIndex = 0;
			// 
			// textBox17
			// 
			this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox17->Location = System::Drawing::Point(189, 3);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(180, 22);
			this->textBox17->TabIndex = 1;
			// 
			// textBox18
			// 
			this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox18->Location = System::Drawing::Point(375, 3);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(180, 22);
			this->textBox18->TabIndex = 2;
			// 
			// textBox19
			// 
			this->textBox19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox19->Location = System::Drawing::Point(561, 3);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(180, 22);
			this->textBox19->TabIndex = 3;
			// 
			// textBox20
			// 
			this->textBox20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox20->Location = System::Drawing::Point(747, 3);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(184, 22);
			this->textBox20->TabIndex = 4;
			// 
			// tabStats
			// 
			this->tabStats->Controls->Add(this->checkBox5);
			this->tabStats->Location = System::Drawing::Point(4, 29);
			this->tabStats->Name = L"tabStats";
			this->tabStats->Padding = System::Windows::Forms::Padding(3);
			this->tabStats->Size = System::Drawing::Size(1182, 449);
			this->tabStats->TabIndex = 4;
			this->tabStats->Text = L"tabStats";
			this->tabStats->UseVisualStyleBackColor = true;
			this->tabStats->Click += gcnew System::EventHandler(this, &MyForm::tabStats_Click);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(522, 172);
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
			this->tableLayoutPanel10->Controls->Add(this->CommandesButton, 3, 0);
			this->tableLayoutPanel10->Controls->Add(this->StocksButton, 2, 0);
			this->tableLayoutPanel10->Controls->Add(this->EmployesButton, 1, 0);
			this->tableLayoutPanel10->Controls->Add(this->ClientButton, 0, 0);
			this->tableLayoutPanel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel10->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel10->Name = L"tableLayoutPanel10";
			this->tableLayoutPanel10->RowCount = 1;
			this->tableLayoutPanel10->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel10->Size = System::Drawing::Size(1190, 100);
			this->tableLayoutPanel10->TabIndex = 9;
			// 
			// StatsButton
			// 
			this->StatsButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StatsButton->Location = System::Drawing::Point(955, 3);
			this->StatsButton->Name = L"StatsButton";
			this->StatsButton->Size = System::Drawing::Size(232, 94);
			this->StatsButton->TabIndex = 4;
			this->StatsButton->TabStop = false;
			this->StatsButton->Text = L"Stats";
			this->StatsButton->UseVisualStyleBackColor = true;
			this->StatsButton->Click += gcnew System::EventHandler(this, &MyForm::StatsButton_Click);
			// 
			// CommandesButton
			// 
			this->CommandesButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CommandesButton->Location = System::Drawing::Point(717, 3);
			this->CommandesButton->Name = L"CommandesButton";
			this->CommandesButton->Size = System::Drawing::Size(232, 94);
			this->CommandesButton->TabIndex = 3;
			this->CommandesButton->Text = L"Commandes";
			this->CommandesButton->UseVisualStyleBackColor = true;
			this->CommandesButton->Click += gcnew System::EventHandler(this, &MyForm::CommandesButton_Click);
			// 
			// StocksButton
			// 
			this->StocksButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->StocksButton->Location = System::Drawing::Point(479, 3);
			this->StocksButton->Name = L"StocksButton";
			this->StocksButton->Size = System::Drawing::Size(232, 94);
			this->StocksButton->TabIndex = 2;
			this->StocksButton->Text = L"Stocks";
			this->StocksButton->UseVisualStyleBackColor = true;
			this->StocksButton->Click += gcnew System::EventHandler(this, &MyForm::StocksButton_Click);
			// 
			// EmployesButton
			// 
			this->EmployesButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->EmployesButton->Location = System::Drawing::Point(241, 3);
			this->EmployesButton->Name = L"EmployesButton";
			this->EmployesButton->Size = System::Drawing::Size(232, 94);
			this->EmployesButton->TabIndex = 1;
			this->EmployesButton->Text = L"Employes";
			this->EmployesButton->UseVisualStyleBackColor = true;
			this->EmployesButton->Click += gcnew System::EventHandler(this, &MyForm::EmployesButton_Click);
			// 
			// ClientButton
			// 
			this->ClientButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ClientButton->Location = System::Drawing::Point(3, 3);
			this->ClientButton->Name = L"ClientButton";
			this->ClientButton->Size = System::Drawing::Size(232, 94);
			this->ClientButton->TabIndex = 0;
			this->ClientButton->Text = L"Client";
			this->ClientButton->UseVisualStyleBackColor = true;
			this->ClientButton->Click += gcnew System::EventHandler(this, &MyForm::ClientButton_Click);
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1190, 482);
			this->panel1->TabIndex = 10;
			====== =
				// tabPage5
				// 
				this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabPage5->Size = System::Drawing::Size(1777, 876);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			<<<<<< < HEAD
				this->ClientSize = System::Drawing::Size(1190, 582);
			this->Controls->Add(this->tabDisplay);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tableLayoutPanel10);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabDisplay->ResumeLayout(false);
			this->tabClient->ResumeLayout(false);
			this->tabClient->PerformLayout();
			====== =
				this->ClientSize = System::Drawing::Size(1785, 909);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			<<<<<< < HEAD
				this->tabEmployes->ResumeLayout(false);
			this->tabEmployes->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel11->ResumeLayout(false);
			this->tableLayoutPanel11->PerformLayout();
			this->tabStocks->ResumeLayout(false);
			this->tabStocks->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel12->ResumeLayout(false);
			this->tableLayoutPanel12->PerformLayout();
			this->tabCommandes->ResumeLayout(false);
			this->tabCommandes->PerformLayout();
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel13->ResumeLayout(false);
			this->tableLayoutPanel13->PerformLayout();
			this->tabStats->ResumeLayout(false);
			this->tabStats->PerformLayout();
			this->tableLayoutPanel10->ResumeLayout(false);
			====== =
				this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
			>>>>>> > 202f0dd887df0b97fdcaf2a3c7ac3dddb4363ef7
				this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void TabRemover() {
		this->tabDisplay->SizeMode = TabSizeMode::Fixed;
		this->tabDisplay->ItemSize = System::Drawing::Size(0, 1);
		this->tabDisplay->Appearance = TabAppearance::Buttons;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->tabDisplay->SizeMode = TabSizeMode::Fixed;
		this->tabDisplay->ItemSize = System::Drawing::Size(0, 1);
		this->tabDisplay->Appearance = TabAppearance::Buttons;
	}
	private: System::Void tabClient_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabEmployes_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabStats_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabStocks_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void ClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabDisplay->SelectedTab = tabClient;
	}
	private: System::Void EmployesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabDisplay->SelectedTab = tabEmployes;
	}
	private: System::Void StocksButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabDisplay->SelectedTab = tabStocks;
	}
	private: System::Void CommandesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabDisplay->SelectedTab = tabCommandes;
	}
	private: System::Void StatsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tabDisplay->SelectedTab = tabStats;
	}
	};
}

