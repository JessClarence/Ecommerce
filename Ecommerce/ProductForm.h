#pragma once

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
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelTop;
	protected:


	private: System::Windows::Forms::Panel^ panelLeft;

	private: System::Windows::Forms::Button^ btnIceCreamPints;
	private: System::Windows::Forms::Panel^ pnlOnBtnICP;
	private: System::Windows::Forms::Panel^ pnlOnBtnCarts;

	private: System::Windows::Forms::Button^ btnCarts;
	private: System::Windows::Forms::Panel^ pnlOnBtnContUs;


	private: System::Windows::Forms::Button^ btnContactUs;
	private: System::Windows::Forms::Panel^ pnlOnBtnSeasFlav;


	private: System::Windows::Forms::Button^ btnSeasonFlav;
	private: System::Windows::Forms::Panel^ pnlOnBtnICCake;


	private: System::Windows::Forms::Button^ btnIceCreamCake;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnPutoB;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnCrema;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;















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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panelLeft = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnlOnBtnCarts = (gcnew System::Windows::Forms::Panel());
			this->btnCarts = (gcnew System::Windows::Forms::Button());
			this->pnlOnBtnContUs = (gcnew System::Windows::Forms::Panel());
			this->btnContactUs = (gcnew System::Windows::Forms::Button());
			this->pnlOnBtnSeasFlav = (gcnew System::Windows::Forms::Panel());
			this->btnSeasonFlav = (gcnew System::Windows::Forms::Button());
			this->pnlOnBtnICCake = (gcnew System::Windows::Forms::Panel());
			this->btnIceCreamCake = (gcnew System::Windows::Forms::Button());
			this->pnlOnBtnICP = (gcnew System::Windows::Forms::Panel());
			this->btnIceCreamPints = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnPutoB = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnCrema = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panelTop->SuspendLayout();
			this->panelLeft->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel13->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panelTop->Controls->Add(this->button8);
			this->panelTop->Controls->Add(this->button7);
			this->panelTop->Controls->Add(this->button6);
			this->panelTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTop->Location = System::Drawing::Point(205, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1095, 40);
			this->panelTop->TabIndex = 1;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->button6->Location = System::Drawing::Point(1064, 9);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(22, 21);
			this->button6->TabIndex = 0;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &ProductForm::button6_Click);
			// 
			// panelLeft
			// 
			this->panelLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panelLeft->Controls->Add(this->label4);
			this->panelLeft->Controls->Add(this->label3);
			this->panelLeft->Controls->Add(this->pnlOnBtnCarts);
			this->panelLeft->Controls->Add(this->btnCarts);
			this->panelLeft->Controls->Add(this->pnlOnBtnContUs);
			this->panelLeft->Controls->Add(this->btnContactUs);
			this->panelLeft->Controls->Add(this->pnlOnBtnSeasFlav);
			this->panelLeft->Controls->Add(this->btnSeasonFlav);
			this->panelLeft->Controls->Add(this->pnlOnBtnICCake);
			this->panelLeft->Controls->Add(this->btnIceCreamCake);
			this->panelLeft->Controls->Add(this->pnlOnBtnICP);
			this->panelLeft->Controls->Add(this->btnIceCreamPints);
			this->panelLeft->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelLeft->Location = System::Drawing::Point(0, 0);
			this->panelLeft->Name = L"panelLeft";
			this->panelLeft->Size = System::Drawing::Size(205, 700);
			this->panelLeft->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(42, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 21);
			this->label4->TabIndex = 12;
			this->label4->Text = L"CHOICES";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cooper Black", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(37, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"FROSTED";
			// 
			// pnlOnBtnCarts
			// 
			this->pnlOnBtnCarts->BackColor = System::Drawing::Color::White;
			this->pnlOnBtnCarts->Location = System::Drawing::Point(1, 279);
			this->pnlOnBtnCarts->Name = L"pnlOnBtnCarts";
			this->pnlOnBtnCarts->Size = System::Drawing::Size(12, 41);
			this->pnlOnBtnCarts->TabIndex = 9;
			// 
			// btnCarts
			// 
			this->btnCarts->FlatAppearance->BorderSize = 0;
			this->btnCarts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCarts->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCarts->ForeColor = System::Drawing::Color::White;
			this->btnCarts->Location = System::Drawing::Point(12, 279);
			this->btnCarts->Name = L"btnCarts";
			this->btnCarts->Size = System::Drawing::Size(190, 41);
			this->btnCarts->TabIndex = 10;
			this->btnCarts->Text = L"My Carts";
			this->btnCarts->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCarts->UseVisualStyleBackColor = true;
			// 
			// pnlOnBtnContUs
			// 
			this->pnlOnBtnContUs->BackColor = System::Drawing::Color::White;
			this->pnlOnBtnContUs->Location = System::Drawing::Point(1, 232);
			this->pnlOnBtnContUs->Name = L"pnlOnBtnContUs";
			this->pnlOnBtnContUs->Size = System::Drawing::Size(12, 41);
			this->pnlOnBtnContUs->TabIndex = 7;
			// 
			// btnContactUs
			// 
			this->btnContactUs->FlatAppearance->BorderSize = 0;
			this->btnContactUs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnContactUs->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContactUs->ForeColor = System::Drawing::Color::White;
			this->btnContactUs->Location = System::Drawing::Point(12, 232);
			this->btnContactUs->Name = L"btnContactUs";
			this->btnContactUs->Size = System::Drawing::Size(190, 41);
			this->btnContactUs->TabIndex = 8;
			this->btnContactUs->Text = L"Contact Us";
			this->btnContactUs->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnContactUs->UseVisualStyleBackColor = true;
			// 
			// pnlOnBtnSeasFlav
			// 
			this->pnlOnBtnSeasFlav->BackColor = System::Drawing::Color::White;
			this->pnlOnBtnSeasFlav->Location = System::Drawing::Point(1, 138);
			this->pnlOnBtnSeasFlav->Name = L"pnlOnBtnSeasFlav";
			this->pnlOnBtnSeasFlav->Size = System::Drawing::Size(12, 41);
			this->pnlOnBtnSeasFlav->TabIndex = 5;
			// 
			// btnSeasonFlav
			// 
			this->btnSeasonFlav->FlatAppearance->BorderSize = 0;
			this->btnSeasonFlav->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSeasonFlav->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeasonFlav->ForeColor = System::Drawing::Color::White;
			this->btnSeasonFlav->Location = System::Drawing::Point(12, 138);
			this->btnSeasonFlav->Name = L"btnSeasonFlav";
			this->btnSeasonFlav->Size = System::Drawing::Size(190, 41);
			this->btnSeasonFlav->TabIndex = 6;
			this->btnSeasonFlav->Text = L"Seasonal Flavors";
			this->btnSeasonFlav->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSeasonFlav->UseVisualStyleBackColor = true;
			// 
			// pnlOnBtnICCake
			// 
			this->pnlOnBtnICCake->BackColor = System::Drawing::Color::White;
			this->pnlOnBtnICCake->Location = System::Drawing::Point(1, 185);
			this->pnlOnBtnICCake->Name = L"pnlOnBtnICCake";
			this->pnlOnBtnICCake->Size = System::Drawing::Size(12, 41);
			this->pnlOnBtnICCake->TabIndex = 3;
			// 
			// btnIceCreamCake
			// 
			this->btnIceCreamCake->FlatAppearance->BorderSize = 0;
			this->btnIceCreamCake->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIceCreamCake->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIceCreamCake->ForeColor = System::Drawing::Color::White;
			this->btnIceCreamCake->Location = System::Drawing::Point(12, 185);
			this->btnIceCreamCake->Name = L"btnIceCreamCake";
			this->btnIceCreamCake->Size = System::Drawing::Size(190, 41);
			this->btnIceCreamCake->TabIndex = 4;
			this->btnIceCreamCake->Text = L"Ice Cream Cakes";
			this->btnIceCreamCake->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnIceCreamCake->UseVisualStyleBackColor = true;
			// 
			// pnlOnBtnICP
			// 
			this->pnlOnBtnICP->BackColor = System::Drawing::Color::White;
			this->pnlOnBtnICP->Location = System::Drawing::Point(1, 91);
			this->pnlOnBtnICP->Name = L"pnlOnBtnICP";
			this->pnlOnBtnICP->Size = System::Drawing::Size(12, 41);
			this->pnlOnBtnICP->TabIndex = 2;
			// 
			// btnIceCreamPints
			// 
			this->btnIceCreamPints->FlatAppearance->BorderSize = 0;
			this->btnIceCreamPints->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnIceCreamPints->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIceCreamPints->ForeColor = System::Drawing::Color::White;
			this->btnIceCreamPints->Location = System::Drawing::Point(12, 91);
			this->btnIceCreamPints->Name = L"btnIceCreamPints";
			this->btnIceCreamPints->Size = System::Drawing::Size(190, 41);
			this->btnIceCreamPints->TabIndex = 2;
			this->btnIceCreamPints->Text = L"Ice Cream Pints";
			this->btnIceCreamPints->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnIceCreamPints->UseVisualStyleBackColor = true;
			this->btnIceCreamPints->Click += gcnew System::EventHandler(this, &ProductForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(20, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(183, 152);
			this->panel2->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->btnPutoB);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel3->Location = System::Drawing::Point(240, 75);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(231, 245);
			this->panel3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(87, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"P450.00";
			// 
			// btnPutoB
			// 
			this->btnPutoB->Location = System::Drawing::Point(44, 206);
			this->btnPutoB->Name = L"btnPutoB";
			this->btnPutoB->Size = System::Drawing::Size(139, 32);
			this->btnPutoB->TabIndex = 5;
			this->btnPutoB->Text = L"ADD TO CART";
			this->btnPutoB->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(36, 158);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PUTO BUMBONG";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(20, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(183, 152);
			this->panel1->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(36, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"CREMA DE FRUTA";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->btnCrema);
			this->panel4->Controls->Add(this->panel1);
			this->panel4->Controls->Add(this->label5);
			this->panel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel4->Location = System::Drawing::Point(505, 75);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(231, 245);
			this->panel4->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(87, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 17);
			this->label6->TabIndex = 6;
			this->label6->Text = L"P450.00";
			// 
			// btnCrema
			// 
			this->btnCrema->Location = System::Drawing::Point(44, 206);
			this->btnCrema->Name = L"btnCrema";
			this->btnCrema->Size = System::Drawing::Size(139, 32);
			this->btnCrema->TabIndex = 5;
			this->btnCrema->Text = L"ADD TO CART";
			this->btnCrema->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 32);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ADD TO CART";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->label8);
			this->panel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel5->Location = System::Drawing::Point(770, 75);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(231, 245);
			this->panel5->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(87, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"P450.00";
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Location = System::Drawing::Point(20, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(183, 152);
			this->panel6->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(74, 156);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 25);
			this->label8->TabIndex = 4;
			this->label8->Text = L"PALITAW";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"ADD TO CART";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->button2);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->label10);
			this->panel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel7->Location = System::Drawing::Point(1042, 75);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(231, 245);
			this->panel7->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(87, 183);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 17);
			this->label9->TabIndex = 6;
			this->label9->Text = L"P450.00";
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Location = System::Drawing::Point(20, 3);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(183, 152);
			this->panel8->TabIndex = 2;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(18, 158);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(187, 25);
			this->label10->TabIndex = 4;
			this->label10->Text = L"PASTILLAS DE LECHE";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 206);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"ADD TO CART";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label11);
			this->panel9->Controls->Add(this->button3);
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Controls->Add(this->label12);
			this->panel9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel9->Location = System::Drawing::Point(240, 349);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(231, 245);
			this->panel9->TabIndex = 7;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(87, 183);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 17);
			this->label11->TabIndex = 6;
			this->label11->Text = L"P495.00";
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel10->Location = System::Drawing::Point(20, 3);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(183, 152);
			this->panel10->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(24, 158);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(176, 25);
			this->label12->TabIndex = 4;
			this->label12->Text = L"HAZELNUT COOKIE";
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->label13);
			this->panel11->Controls->Add(this->button4);
			this->panel11->Controls->Add(this->panel12);
			this->panel11->Controls->Add(this->label14);
			this->panel11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel11->Location = System::Drawing::Point(505, 349);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(231, 245);
			this->panel11->TabIndex = 8;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(87, 183);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 17);
			this->label13->TabIndex = 6;
			this->label13->Text = L"P510.00";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(44, 206);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 32);
			this->button4->TabIndex = 5;
			this->button4->Text = L"ADD TO CART";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel12->Location = System::Drawing::Point(20, 3);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(183, 152);
			this->panel12->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(24, 158);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(178, 25);
			this->label14->TabIndex = 4;
			this->label14->Text = L"LANZONES SORBET";
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->label15);
			this->panel13->Controls->Add(this->button5);
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->label16);
			this->panel13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel13->Location = System::Drawing::Point(770, 353);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(231, 245);
			this->panel13->TabIndex = 9;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(87, 183);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 17);
			this->label15->TabIndex = 6;
			this->label15->Text = L"P550.00";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(44, 206);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(139, 32);
			this->button5->TabIndex = 5;
			this->button5->Text = L"ADD TO CART";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// panel14
			// 
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel14->Location = System::Drawing::Point(20, 3);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(183, 152);
			this->panel14->TabIndex = 2;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(70, 156);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(90, 25);
			this->label16->TabIndex = 4;
			this->label16->Text = L"BAKLAVA";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Lime;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->button7->Location = System::Drawing::Point(1034, 9);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(22, 21);
			this->button7->TabIndex = 1;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Blue;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->button8->Location = System::Drawing::Point(1004, 9);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(22, 21);
			this->button8->TabIndex = 2;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 700);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panelTop);
			this->Controls->Add(this->panelLeft);
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ProductForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProductForm";
			this->panelTop->ResumeLayout(false);
			this->panelLeft->ResumeLayout(false);
			this->panelLeft->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
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
};
}
