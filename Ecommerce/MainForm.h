#pragma once
#include "dbConnection.h"

namespace Ecommerce {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: void Reload() {
		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid(dataSource, "products");
		dataGridView1->DataSource = dataSource;
	}
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel2->Hide();
			panel3->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;











	private: System::Windows::Forms::Panel^ panel2;





	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::Panel^ panel1;





	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;













	private: System::Windows::Forms::ComboBox^ txtType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^ btnEdit;
	private: System::Windows::Forms::DataGridViewButtonColumn^ btnDelete;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtMeat;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ txtPriceUpdate;
	private: System::Windows::Forms::TextBox^ txtMeatUpdate;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::ComboBox^ txtTypeUpdate;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtIdUpdate;

	private: System::Windows::Forms::Label^ label10;
























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtMeat = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtType = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEdit = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->btnDelete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtIdUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtPriceUpdate = (gcnew System::Windows::Forms::TextBox());
			this->txtMeatUpdate = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->txtTypeUpdate = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->txtPrice);
			this->panel2->Controls->Add(this->txtMeat);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->btnAdd);
			this->panel2->Controls->Add(this->txtType);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(190, 114);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(347, 256);
			this->panel2->TabIndex = 2;
			// 
			// txtPrice
			// 
			this->txtPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrice->Location = System::Drawing::Point(91, 96);
			this->txtPrice->Multiline = true;
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(216, 28);
			this->txtPrice->TabIndex = 23;
			// 
			// txtMeat
			// 
			this->txtMeat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtMeat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtMeat->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMeat->Location = System::Drawing::Point(91, 62);
			this->txtMeat->Multiline = true;
			this->txtMeat->Name = L"txtMeat";
			this->txtMeat->Size = System::Drawing::Size(216, 28);
			this->txtMeat->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label5->Location = System::Drawing::Point(39, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"MEAT";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label2->Location = System::Drawing::Point(43, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 17);
			this->label2->TabIndex = 20;
			this->label2->Text = L"TYPE";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->label6->Location = System::Drawing::Point(34, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 27);
			this->label6->TabIndex = 19;
			this->label6->Text = L"CREATE";
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(211, 163);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(96, 42);
			this->btnAdd->TabIndex = 18;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MainForm::btnAdd_Click_1);
			// 
			// txtType
			// 
			this->txtType->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->txtType->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F));
			this->txtType->FormattingEnabled = true;
			this->txtType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"beef", L"chicken", L"pork" });
			this->txtType->Location = System::Drawing::Point(91, 130);
			this->txtType->Name = L"txtType";
			this->txtType->Size = System::Drawing::Size(147, 27);
			this->txtType->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(325, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(18, 18);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label4->Location = System::Drawing::Point(39, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"PRICE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ADMIN PRODUCTS";
			// 
			// btnCreate
			// 
			this->btnCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCreate->FlatAppearance->BorderSize = 0;
			this->btnCreate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->btnCreate->ForeColor = System::Drawing::Color::White;
			this->btnCreate->Location = System::Drawing::Point(604, 16);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(98, 34);
			this->btnCreate->TabIndex = 2;
			this->btnCreate->Text = L"NEW";
			this->btnCreate->UseVisualStyleBackColor = false;
			this->btnCreate->Click += gcnew System::EventHandler(this, &MainForm::btnCreate_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gray;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->btnCreate);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(750, 63);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(729, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(18, 18);
			this->button2->TabIndex = 6;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::Gray;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeight = 35;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column6, this->Column3, this->btnEdit, this->btnDelete
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Silver;
			this->dataGridView1->Location = System::Drawing::Point(0, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(750, 387);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->DataPropertyName = L"Id";
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 43;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->DataPropertyName = L"meat";
			this->Column2->HeaderText = L"MEAT";
			this->Column2->Name = L"Column2";
			// 
			// Column6
			// 
			this->Column6->DataPropertyName = L"type";
			this->Column6->HeaderText = L"TYPE";
			this->Column6->Name = L"Column6";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->DataPropertyName = L"price";
			this->Column3->HeaderText = L"PRICE";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 67;
			// 
			// btnEdit
			// 
			this->btnEdit->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->btnEdit->HeaderText = L"EDIT";
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->btnEdit->Text = L"EDIT";
			this->btnEdit->UseColumnTextForButtonValue = true;
			this->btnEdit->Width = 58;
			// 
			// btnDelete
			// 
			this->btnDelete->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->btnDelete->HeaderText = L"DELETE";
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->btnDelete->Text = L"DELETE";
			this->btnDelete->UseColumnTextForButtonValue = true;
			this->btnDelete->Width = 78;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->txtIdUpdate);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->txtPriceUpdate);
			this->panel3->Controls->Add(this->txtMeatUpdate);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->btnUpdate);
			this->panel3->Controls->Add(this->txtTypeUpdate);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Location = System::Drawing::Point(190, 114);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(347, 256);
			this->panel3->TabIndex = 24;
			// 
			// txtIdUpdate
			// 
			this->txtIdUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtIdUpdate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtIdUpdate->Enabled = false;
			this->txtIdUpdate->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtIdUpdate->Location = System::Drawing::Point(90, 55);
			this->txtIdUpdate->Multiline = true;
			this->txtIdUpdate->Name = L"txtIdUpdate";
			this->txtIdUpdate->Size = System::Drawing::Size(77, 28);
			this->txtIdUpdate->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label10->Location = System::Drawing::Point(41, 55);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 17);
			this->label10->TabIndex = 24;
			this->label10->Text = L"ID";
			// 
			// txtPriceUpdate
			// 
			this->txtPriceUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtPriceUpdate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPriceUpdate->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPriceUpdate->Location = System::Drawing::Point(91, 124);
			this->txtPriceUpdate->Multiline = true;
			this->txtPriceUpdate->Name = L"txtPriceUpdate";
			this->txtPriceUpdate->Size = System::Drawing::Size(216, 28);
			this->txtPriceUpdate->TabIndex = 23;
			// 
			// txtMeatUpdate
			// 
			this->txtMeatUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtMeatUpdate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtMeatUpdate->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMeatUpdate->Location = System::Drawing::Point(91, 90);
			this->txtMeatUpdate->Multiline = true;
			this->txtMeatUpdate->Name = L"txtMeatUpdate";
			this->txtMeatUpdate->Size = System::Drawing::Size(216, 28);
			this->txtMeatUpdate->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label3->Location = System::Drawing::Point(39, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 17);
			this->label3->TabIndex = 21;
			this->label3->Text = L"MEAT";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label7->Location = System::Drawing::Point(39, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"TYPE";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->label8->Location = System::Drawing::Point(34, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 27);
			this->label8->TabIndex = 19;
			this->label8->Text = L"UPDATE";
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::White;
			this->btnUpdate->Location = System::Drawing::Point(211, 191);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(96, 42);
			this->btnUpdate->TabIndex = 18;
			this->btnUpdate->Text = L"UPDATE";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MainForm::btnUpdate_Click);
			// 
			// txtTypeUpdate
			// 
			this->txtTypeUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtTypeUpdate->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->txtTypeUpdate->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F));
			this->txtTypeUpdate->FormattingEnabled = true;
			this->txtTypeUpdate->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"beef", L"chicken", L"pork" });
			this->txtTypeUpdate->Location = System::Drawing::Point(91, 158);
			this->txtTypeUpdate->Name = L"txtTypeUpdate";
			this->txtTypeUpdate->Size = System::Drawing::Size(147, 27);
			this->txtTypeUpdate->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(325, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(18, 18);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->label9->Location = System::Drawing::Point(39, 124);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 17);
			this->label9->TabIndex = 4;
			this->label9->Text = L"PRICE";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 450);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Show();
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Reload();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ id = dataGridView1->Rows[e->RowIndex]->Cells["Column1"]->Value->ToString();
		String^ meat = dataGridView1->Rows[e->RowIndex]->Cells["Column2"]->Value->ToString();
		String^ price = dataGridView1->Rows[e->RowIndex]->Cells["Column3"]->Value->ToString();
		String^ type = dataGridView1->Rows[e->RowIndex]->Cells["Column6"]->Value->ToString();
		
		
		if (dataGridView1->Columns[e->ColumnIndex]->Name == "btnEdit") {
			txtIdUpdate->Text = id;
			txtMeatUpdate->Text = meat;
			txtPriceUpdate->Text = price;
			txtTypeUpdate->Text = type;

			panel3->Show();
		}


		if (dataGridView1->Columns[e->ColumnIndex]->Name == "btnDelete") {

			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(
				"Do you want to Delete?",
				"Payment Confirmation",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);

			if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
				Connection::Delete(id);
				Reload();
			}
			else {
			}
		}


	}
	private: System::Void btnAdd_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ meat = txtMeat->Text;
		String^ type = txtType->Text;
		int price;

		try {
			price = System::Int32::Parse(txtPrice->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Invalid input: Please enter a valid integer",
				"Input Error", MessageBoxButtons::OK);
		}

		if (meat->Length == 0 || type->Length == 0
			|| price == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		Connection::Create(meat, type, price);
		txtMeat->Text = "";
		txtType->Text = "";
		txtPrice->Text = "";
		Reload();
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		String^ meat = txtMeatUpdate->Text;
		int price;
		String^ type = txtTypeUpdate->Text;

		try {
			id = System::Int32::Parse(txtIdUpdate->Text);
			price = System::Int32::Parse(txtPriceUpdate->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Invalid input: Please enter a valid integer",
				"Input Error", MessageBoxButtons::OK);
		}

		if (meat->Length == 0 || type->Length == 0
			|| price == 0 || id < 1) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		Connection::Update(id, meat, type, price);
		Reload();
		panel3->Hide();



	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
	}
};
}
