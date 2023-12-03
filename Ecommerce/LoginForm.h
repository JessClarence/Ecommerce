#pragma once
#include "User.h"

namespace Ecommerce {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnLogin;

	private: System::Windows::Forms::CheckBox^ checkBoxShowPass;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->checkBoxShowPass = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->label1->Location = System::Drawing::Point(28, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Get Started";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(33, 139);
			this->txtUsername->Multiline = true;
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(216, 28);
			this->txtUsername->TabIndex = 2;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(231)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(33, 194);
			this->txtPassword->Multiline = true;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(216, 28);
			this->txtPassword->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::White;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnCancel->Location = System::Drawing::Point(33, 322);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(216, 35);
			this->btnCancel->TabIndex = 18;
			this->btnCancel->Text = L"CANCEL";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogin->FlatAppearance->BorderSize = 0;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->ForeColor = System::Drawing::Color::White;
			this->btnLogin->Location = System::Drawing::Point(33, 279);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(216, 35);
			this->btnLogin->TabIndex = 17;
			this->btnLogin->Text = L"LOGIN";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// checkBoxShowPass
			// 
			this->checkBoxShowPass->AutoSize = true;
			this->checkBoxShowPass->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBoxShowPass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBoxShowPass->Location = System::Drawing::Point(136, 231);
			this->checkBoxShowPass->Name = L"checkBoxShowPass";
			this->checkBoxShowPass->Size = System::Drawing::Size(119, 21);
			this->checkBoxShowPass->TabIndex = 16;
			this->checkBoxShowPass->Text = L"Show Password";
			this->checkBoxShowPass->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->label4->Location = System::Drawing::Point(94, 391);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 15);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Create Account";
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(70, 367);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 15);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Dont Have an Account\?";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(285, 544);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->checkBoxShowPass);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(164)), static_cast<System::Int32>(static_cast<System::Byte>(165)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: User^ user = nullptr;
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->txtUsername->Text;
		String^ password = this->txtPassword->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password", "Email or Password Empty", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connstring = "Data Source=DESKTOP-G6KJNEA\\SQLEXPRESS01;Initial Catalog=ecommercedb;Integrated Security=True;Connect Timeout=30;Encrypt=False;";

			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@password";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->password = reader->GetString(2);

				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}
	}
	public: bool switchToRegister = false;
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
};
}
