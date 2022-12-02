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

	protected:






	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;



	private: System::Windows::Forms::TabPage^ tabPage5;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;














	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel9 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.9F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->ItemSize = System::Drawing::Size(71, 25);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1785, 909);
			this->tabControl1->TabIndex = 8;
			// 
			// tabPage1
			// 
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
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
			this->tableLayoutPanel2->Controls->Add(this->button2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button3, 0, 2);
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
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(4, 53);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(338, 38);
			this->button2->TabIndex = 5;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Location = System::Drawing::Point(4, 5);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(338, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(4, 101);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(338, 40);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
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
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel4, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel3->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1769, 156);
			this->tableLayoutPanel3->TabIndex = 2;
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
			this->tableLayoutPanel4->Location = System::Drawing::Point(1419, 5);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 3;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(346, 146);
			this->tableLayoutPanel4->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(4, 53);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(338, 38);
			this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(4, 5);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(338, 38);
			this->button5->TabIndex = 2;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(4, 101);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(338, 40);
			this->button6->TabIndex = 4;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
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
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 1, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel5->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1769, 156);
			this->tableLayoutPanel5->TabIndex = 2;
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
			this->tableLayoutPanel6->Location = System::Drawing::Point(1419, 5);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(346, 146);
			this->tableLayoutPanel6->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Location = System::Drawing::Point(4, 53);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(338, 38);
			this->button7->TabIndex = 5;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Location = System::Drawing::Point(4, 5);
			this->button8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(338, 38);
			this->button8->TabIndex = 2;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->Location = System::Drawing::Point(4, 101);
			this->button9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(338, 40);
			this->button9->TabIndex = 4;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
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
			// 
			// tableLayoutPanel7
			// 
			this->tableLayoutPanel7->ColumnCount = 2;
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80)));
			this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel8, 1, 0);
			this->tableLayoutPanel7->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tableLayoutPanel7->Location = System::Drawing::Point(4, 715);
			this->tableLayoutPanel7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
			this->tableLayoutPanel7->RowCount = 1;
			this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel7->Size = System::Drawing::Size(1769, 156);
			this->tableLayoutPanel7->TabIndex = 2;
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
			this->tableLayoutPanel8->Location = System::Drawing::Point(1419, 5);
			this->tableLayoutPanel8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 3;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33334F)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(346, 146);
			this->tableLayoutPanel8->TabIndex = 0;
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->Location = System::Drawing::Point(4, 53);
			this->button10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(338, 38);
			this->button10->TabIndex = 5;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->Location = System::Drawing::Point(4, 5);
			this->button11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(338, 38);
			this->button11->TabIndex = 2;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->Location = System::Drawing::Point(4, 101);
			this->button12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(338, 40);
			this->button12->TabIndex = 4;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
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
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1785, 909);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel9->ResumeLayout(false);
			this->tableLayoutPanel9->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tableLayoutPanel7->ResumeLayout(false);
			this->tableLayoutPanel8->ResumeLayout(false);
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
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
