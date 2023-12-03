#include "pch.h"
#include "LoginForm.h"
#include "RegistrationForm.h"
#include "ProductForm.h"
using namespace System;
using namespace System::Windows::Forms;



void main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	User^ user = nullptr;

	while (true) {
		Ecommerce::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			Ecommerce::RegistrationForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}
			else {
				user = registerForm.user;
				break;
			}
		}
		else {
			user = loginForm.user;
			break;
		}
	}

	if (user != nullptr) {
		Ecommerce::ProductForm productForm;
		Application::Run(% productForm);
	}
	else {
		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}

	/*Application::Run(gcnew Ecommerce::RegistrationForm());*/


}





//[STAThread]
//int main()
//{
//  Application::EnableVisualStyles();
//  Application::SetCompatibleTextRenderingDefault(false);
//  //Application::Run(gcnew CppCLRWinFormsProject::Form1());
//  return 0;
//}