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
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ pnlbeef;

	private: System::Windows::Forms::Panel^ pnlchicken;

	private: System::Windows::Forms::Panel^ pnlpork;
	private: System::Windows::Forms::Panel^ panel4;









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
	private: void AddProductToUI(Product^ product, String^ images) {
		
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductForm::typeid));
		// 
		// panel4
		// 
		Panel^ panel4 = gcnew Panel();
		panel4->Name = String::Format("PnlProduct{0}", product->id); // id
		panel4->BackColor = System::Drawing::Color::White;
		panel4->Size = System::Drawing::Size(184, 189);
		panel4->Margin = System::Windows::Forms::Padding(10);

		// 
		// panel5
		// 
		Panel^ panel5 = gcnew Panel();
		panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(images)));
		panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		panel5->Location = System::Drawing::Point(3, 3);
		panel5->Name = String::Format("panel5{0}", product->id);
		panel5->Size = System::Drawing::Size(178, 99);
		panel5->TabIndex = 1;
		// 
		// lblPrice
		// 
		Label^ lblPrice = gcnew Label();
		lblPrice->AutoSize = true;
		lblPrice->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lblPrice->Location = System::Drawing::Point(3, 130);
		lblPrice->Name = String::Format("lblPrice{0}", product->id);
		lblPrice->Size = System::Drawing::Size(28, 21);
		lblPrice->TabIndex = 1;
		lblPrice->Text = String::Format("P{0}.00", product->price); // price
		// 
		// btnPayment
		// 
		Button^ btnPayment = gcnew Button();
		btnPayment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
			static_cast<System::Int32>(static_cast<System::Byte>(145)));
		btnPayment->Cursor = System::Windows::Forms::Cursors::Hand;
		btnPayment->FlatAppearance->BorderSize = 0;
		btnPayment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btnPayment->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		btnPayment->ForeColor = System::Drawing::Color::White;
		btnPayment->Location = System::Drawing::Point(37, 154);
		btnPayment->Name = String::Format("btnPayment{0}", product->id);
		btnPayment->Size = System::Drawing::Size(114, 28);
		btnPayment->TabIndex = 23;
		btnPayment->Text = L"ADD TO CART";
		btnPayment->UseVisualStyleBackColor = false;
		btnPayment->Click += gcnew System::EventHandler(this, &ProductForm::AddToCart_Click);
		// 
		// lblMeat
		// 
		Label^ lblMeat = gcnew Label();
		lblMeat->AutoSize = true;
		lblMeat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lblMeat->Location = System::Drawing::Point(3, 101);
		lblMeat->Name = String::Format("lblMeat{0}", product->id);// id
		lblMeat->Size = System::Drawing::Size(57, 25);
		lblMeat->TabIndex = 0;
		lblMeat->Text = product->meat;


		panel4->Controls->Add(lblPrice);
		panel4->Controls->Add(panel5);
		panel4->Controls->Add(btnPayment);
		panel4->Controls->Add(lblMeat);

		this->flowLayoutPanel1->Controls->Add(panel4);
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
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pnlbeef = (gcnew System::Windows::Forms::Panel());
			this->pnlchicken = (gcnew System::Windows::Forms::Panel());
			this->pnlpork = (gcnew System::Windows::Forms::Panel());
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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelTop->SuspendLayout();
			this->panel1->SuspendLayout();
			this->CategoryPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panelTop->Controls->Add(this->panel4);
			this->panelTop->Controls->Add(this->pnlbeef);
			this->panelTop->Controls->Add(this->button2);
			this->panelTop->Controls->Add(this->pnlchicken);
			this->panelTop->Controls->Add(this->pnlpork);
			this->panelTop->Controls->Add(this->panel2);
			this->panelTop->Controls->Add(this->label8);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1100, 68);
			this->panelTop->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(568, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(472, 65);
			this->panel4->TabIndex = 24;
			// 
			// pnlbeef
			// 
			this->pnlbeef->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlbeef.BackgroundImage")));
			this->pnlbeef->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlbeef->Location = System::Drawing::Point(723, 2);
			this->pnlbeef->Name = L"pnlbeef";
			this->pnlbeef->Size = System::Drawing::Size(91, 63);
			this->pnlbeef->TabIndex = 23;
			// 
			// pnlchicken
			// 
			this->pnlchicken->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlchicken.BackgroundImage")));
			this->pnlchicken->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlchicken->Location = System::Drawing::Point(820, 2);
			this->pnlchicken->Name = L"pnlchicken";
			this->pnlchicken->Size = System::Drawing::Size(91, 63);
			this->pnlchicken->TabIndex = 22;
			// 
			// pnlpork
			// 
			this->pnlpork->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlpork.BackgroundImage")));
			this->pnlpork->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlpork->Location = System::Drawing::Point(917, 2);
			this->pnlpork->Name = L"pnlpork";
			this->pnlpork->Size = System::Drawing::Size(91, 63);
			this->pnlpork->TabIndex = 21;
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
			this->button2->Location = System::Drawing::Point(1050, 12);
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
			this->label2->Size = System::Drawing::Size(106, 30);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Hello, Fe!";
			this->label2->Click += gcnew System::EventHandler(this, &ProductForm::label2_Click);
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(172, 74);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(916, 357);
			this->flowLayoutPanel1->TabIndex = 4;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ProductForm::flowLayoutPanel1_Paint);
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 500);
			this->Controls->Add(this->flowLayoutPanel1);
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
		
	}
	private: System::Void btnBeef_Click(System::Object^ sender, System::EventArgs^ e) {
		this->flowLayoutPanel1->Controls->Clear();
		List<Product^>^ products = Connection::Reload_DataGrid_Cart("beef");

		for each (Product ^ product in products) {
			AddProductToUI(product, "pnlbeef.BackgroundImage");
		}
	}
	private: System::Void btnPork_Click(System::Object^ sender, System::EventArgs^ e) {
		this->flowLayoutPanel1->Controls->Clear();
		List<Product^>^ products = Connection::Reload_DataGrid_Cart("pork");

		for each (Product ^ product in products) {
			AddProductToUI(product, "pnlpork.BackgroundImage");
		}
	}
	private: System::Void btnChicken_Click(System::Object^ sender, System::EventArgs^ e) {
		this->flowLayoutPanel1->Controls->Clear();
		List<Product^>^ products = Connection::Reload_DataGrid_Cart("chicken");

		for each (Product ^ product in products) {
			AddProductToUI(product, "pnlchicken.BackgroundImage");
		}
	}
	private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->flowLayoutPanel1->Controls->Clear();
		List<Product^>^ products = Connection::Reload_DataGrid_Cart("beef");

		for each (Product ^ product in products) {
			AddProductToUI(product, "pnlbeef.BackgroundImage");
		}
	}
	private: System::Void btnCart_Click(System::Object^ sender, System::EventArgs^ e) {
		CartForm^ cartForm = gcnew CartForm(user);
		cartForm->Show();
	}
	private: System::Void lblPrice_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void AddToCart_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = dynamic_cast<Button^>(sender);
		String^ buttonNamePrefix = "BtnPayment";
		int startIndex = buttonNamePrefix->Length;
		if (clickedButton != nullptr) {
			int productIdString = Convert::ToInt32(clickedButton->Name->Substring(startIndex));
			Product^ product = Connection::GetProductById(productIdString);

			if (product != nullptr) {

				Connection::Add_Carts(rightUser, product->price, product->meat);


			}
		}
	}
	
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
