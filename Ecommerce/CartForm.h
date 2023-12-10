#pragma once
#include "User.h"
#include "dbConnection.h"

namespace Ecommerce {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CartForm
	/// </summary>
	public ref class CartForm : public System::Windows::Forms::Form
	{
	private: String^ rightUser;
	public:
		CartForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			rightUser = user->username->ToString();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CartForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ btnPayment;
	private: System::Windows::Forms::Button^ btnBack;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewButtonColumn^ btnRemove;









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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnPayment = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnRemove = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(145)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(145)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 35;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->btnRemove
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::DimGray;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->GridColor = System::Drawing::Color::Silver;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(385, 348);
			this->dataGridView1->TabIndex = 24;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CartForm::dataGridView1_CellContentClick);
			// 
			// btnPayment
			// 
			this->btnPayment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnPayment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPayment->FlatAppearance->BorderSize = 0;
			this->btnPayment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPayment->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPayment->ForeColor = System::Drawing::Color::White;
			this->btnPayment->Location = System::Drawing::Point(81, 403);
			this->btnPayment->Name = L"btnPayment";
			this->btnPayment->Size = System::Drawing::Size(143, 43);
			this->btnPayment->TabIndex = 25;
			this->btnPayment->Text = L"PAYMENT";
			this->btnPayment->UseVisualStyleBackColor = false;
			this->btnPayment->Click += gcnew System::EventHandler(this, &CartForm::btnPayment_Click);
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::White;
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnBack->Location = System::Drawing::Point(230, 403);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(143, 43);
			this->btnBack->TabIndex = 26;
			this->btnBack->Text = L"CANCEL";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &CartForm::btnBack_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(78, 383);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 17);
			this->label1->TabIndex = 27;
			this->label1->Text = L"TOTAL: P1000";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column1->DataPropertyName = L"Id";
			this->Column1->HeaderText = L"TRANSACTION #";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 104;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->DataPropertyName = L"products";
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
			// btnRemove
			// 
			this->btnRemove->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->btnRemove->HeaderText = L"";
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Text = L"REMOVE";
			this->btnRemove->UseColumnTextForButtonValue = true;
			this->btnRemove->Width = 5;
			// 
			// CartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(385, 458);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnPayment);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CartForm";
			this->Load += gcnew System::EventHandler(this, &CartForm::CartForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void btnBack_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ id = dataGridView1->Rows[e->RowIndex]->Cells["Column1"]->Value->ToString();

		if (dataGridView1->Columns[e->ColumnIndex]->Name == "btnRemove") {

			System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(
				"Do you want to Delete?",
				"Confirmation",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question);

			if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
				Connection::Delete_Cart(id);
				

				Object^ dataSource = dataGridView1->DataSource;
				Connection::Reload_DataGrid_Cart(dataSource, rightUser);
				dataGridView1->DataSource = dataSource;

				Decimal something = Connection::TotalPrice(rightUser);
				label1->Text = "P" + something.ToString() + ".00";
			}
			else {
			}
		}
	
	}
	private: System::Void CartForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid_Cart(dataSource, rightUser);
		dataGridView1->DataSource = dataSource;

		Decimal something = Connection::TotalPrice(rightUser);
		label1->Text = "P" + something.ToString() + ".00";

	}
	private: System::Void btnPayment_Click(System::Object^ sender, System::EventArgs^ e) {
		Decimal something = Connection::TotalPrice(rightUser);

		System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(
			"total Cost:P"+something + "\nAre you sure you want to proceed with the payment?",
			"Payment Confirmation",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		// Check the user's response
		if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
			Connection::Purchase_Success(rightUser);
			label1->Text = "P0.00";
		}
		else {
		}

		Object^ dataSource = dataGridView1->DataSource;
		Connection::Reload_DataGrid_Cart(dataSource, rightUser);
		dataGridView1->DataSource = dataSource;

		
	}
};
}
