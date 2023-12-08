#pragma once
#include "dbConnection.h"
#include "User.h"
#include "CartForm.h"
#include "LoginForm.h"

namespace Ecommerce {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	private: String^ rightUser;
	private: User^ user;
	public:
		ProductForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			//pnlbeef->Hide();
			//pnlPork->Hide();
			rightUser = user->username->ToString();
			label2->Text = "Hi " + rightUser + "!";
			this->user = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelTop;
	protected:






























	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::FlowLayoutPanel^ CategoryPanel;















	private: System::Windows::Forms::Button^ btnBeef;
	private: System::Windows::Forms::Button^ btnPork;
	private: System::Windows::Forms::Button^ btnChicken;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnlbeef;

	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^ btnPurchase;


	private: System::Windows::Forms::Button^ btnCart;






































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CategoryPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btnBeef = (gcnew System::Windows::Forms::Button());
			this->btnPork = (gcnew System::Windows::Forms::Button());
			this->btnChicken = (gcnew System::Windows::Forms::Button());
			this->btnCart = (gcnew System::Windows::Forms::Button());
			this->pnlbeef = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnPurchase = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panelTop->SuspendLayout();
			this->panel1->SuspendLayout();
			this->CategoryPanel->SuspendLayout();
			this->pnlbeef->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panelTop->Controls->Add(this->panel2);
			this->panelTop->Controls->Add(this->label8);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1100, 68);
			this->panelTop->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(26, 11);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(47, 43);
			this->panel2->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(79, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(334, 37);
			this->label8->TabIndex = 20;
			this->label8->Text = L"MEAT PRODUCT SYSTEM";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1050, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 37);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ProductForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 437);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1100, 63);
			this->panel1->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(9, 5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(49, 48);
			this->panel3->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(64, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 30);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Hello, Jess!";
			// 
			// CategoryPanel
			// 
			this->CategoryPanel->Controls->Add(this->btnBeef);
			this->CategoryPanel->Controls->Add(this->btnPork);
			this->CategoryPanel->Controls->Add(this->btnChicken);
			this->CategoryPanel->Controls->Add(this->btnCart);
			this->CategoryPanel->Location = System::Drawing::Point(6, 171);
			this->CategoryPanel->Name = L"CategoryPanel";
			this->CategoryPanel->Size = System::Drawing::Size(146, 197);
			this->CategoryPanel->TabIndex = 3;
			// 
			// btnBeef
			// 
			this->btnBeef->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnBeef->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBeef->FlatAppearance->BorderSize = 0;
			this->btnBeef->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBeef->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBeef->ForeColor = System::Drawing::Color::White;
			this->btnBeef->Location = System::Drawing::Point(3, 3);
			this->btnBeef->Name = L"btnBeef";
			this->btnBeef->Size = System::Drawing::Size(143, 43);
			this->btnBeef->TabIndex = 19;
			this->btnBeef->Text = L"BEEF";
			this->btnBeef->UseVisualStyleBackColor = false;
			this->btnBeef->Click += gcnew System::EventHandler(this, &ProductForm::btnBeef_Click);
			// 
			// btnPork
			// 
			this->btnPork->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnPork->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPork->FlatAppearance->BorderSize = 0;
			this->btnPork->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPork->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPork->ForeColor = System::Drawing::Color::White;
			this->btnPork->Location = System::Drawing::Point(3, 52);
			this->btnPork->Name = L"btnPork";
			this->btnPork->Size = System::Drawing::Size(143, 43);
			this->btnPork->TabIndex = 20;
			this->btnPork->Text = L"PORK";
			this->btnPork->UseVisualStyleBackColor = false;
			this->btnPork->Click += gcnew System::EventHandler(this, &ProductForm::btnPork_Click);
			// 
			// btnChicken
			// 
			this->btnChicken->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnChicken->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChicken->FlatAppearance->BorderSize = 0;
			this->btnChicken->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnChicken->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChicken->ForeColor = System::Drawing::Color::White;
			this->btnChicken->Location = System::Drawing::Point(3, 101);
			this->btnChicken->Name = L"btnChicken";
			this->btnChicken->Size = System::Drawing::Size(143, 43);
			this->btnChicken->TabIndex = 21;
			this->btnChicken->Text = L"CHICKEN";
			this->btnChicken->UseVisualStyleBackColor = false;
			this->btnChicken->Click += gcnew System::EventHandler(this, &ProductForm::btnChicken_Click);
			// 
			// btnCart
			// 
			this->btnCart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnCart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCart->FlatAppearance->BorderSize = 0;
			this->btnCart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCart->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCart->ForeColor = System::Drawing::Color::White;
			this->btnCart->Location = System::Drawing::Point(3, 150);
			this->btnCart->Name = L"btnCart";
			this->btnCart->Size = System::Drawing::Size(143, 43);
			this->btnCart->TabIndex = 22;
			this->btnCart->Text = L"MY CART";
			this->btnCart->UseVisualStyleBackColor = false;
			this->btnCart->Click += gcnew System::EventHandler(this, &ProductForm::btnCart_Click);
			// 
			// pnlbeef
			// 
			this->pnlbeef->Controls->Add(this->dataGridView1);
			this->pnlbeef->Location = System::Drawing::Point(158, 74);
			this->pnlbeef->Name = L"pnlbeef";
			this->pnlbeef->Size = System::Drawing::Size(930, 357);
			this->pnlbeef->TabIndex = 7;
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
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(145)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(145)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->ColumnHeadersHeight = 35;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->btnPurchase
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Silver;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(930, 357);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->DataPropertyName = L"Id";
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 42;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->DataPropertyName = L"meat";
			this->Column2->HeaderText = L"MEAT";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column3->DataPropertyName = L"price";
			this->Column3->HeaderText = L"PRICE";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 60;
			// 
			// btnPurchase
			// 
			this->btnPurchase->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->btnPurchase->HeaderText = L"ADD TO CART";
			this->btnPurchase->Name = L"btnPurchase";
			this->btnPurchase->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->btnPurchase->Text = L"PURCHASE";
			this->btnPurchase->UseColumnTextForButtonValue = true;
			this->btnPurchase->Width = 92;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->pnlbeef);
			this->Controls->Add(this->CategoryPanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelTop);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProductForm";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->CategoryPanel->ResumeLayout(false);
			this->pnlbeef->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel15_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(
			"Do you want to Close this Program?",
			"Confirmation",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
		else {
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dataGridView1->Columns[e->ColumnIndex]->Name == "btnPurchase") {

			String^ products = dataGridView1->Rows[e->RowIndex]->Cells["Column2"]->Value->ToString();
			String^ price = dataGridView1->Rows[e->RowIndex]->Cells["Column3"]->Value->ToString();


			Connection::Add_Carts(rightUser, System::Int32::Parse(price), products);
		}
	}
	private: System::Void btnBeef_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid_Type(dataSource, "beef");
		dataGridView1->DataSource = dataSource;
	}
	private: System::Void btnPork_Click(System::Object^ sender, System::EventArgs^ e) {

		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid_Type(dataSource, "pork");
		dataGridView1->DataSource = dataSource;
		
	}
	private: System::Void btnChicken_Click(System::Object^ sender, System::EventArgs^ e) {
		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid_Type(dataSource, "chicken");
		dataGridView1->DataSource = dataSource;
	}
	private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid_Type(dataSource, "beef");
		dataGridView1->DataSource = dataSource;
	}
	private: System::Void btnCart_Click(System::Object^ sender, System::EventArgs^ e) {
		CartForm^ cartForm = gcnew CartForm(user);
		cartForm->Show();
	}
};
}
