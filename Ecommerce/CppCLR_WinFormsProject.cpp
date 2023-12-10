#include "pch.h"
#include "LoginForm.h"
#include "RegistrationForm.h"
#include "ProductForm.h"
#include "MainForm.h"
#include "CartForm.h"
using namespace System;
using namespace System::Windows::Forms;



enum class UserRole { Admin, User, None };
UserRole userRole = UserRole::None;

void main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    while (true) {
        User^ user = nullptr;
        User^ user2 = nullptr;
        Ecommerce::LoginForm loginForm;
        Ecommerce::RegistrationForm registerForm;

        loginForm.ShowDialog();

        if (loginForm.switchToRegister) {
            registerForm.ShowDialog();
            if (registerForm.switchToLogin) {
                continue; // Go back to login form
            }
            else {
                user = registerForm.user;
                user2 = registerForm.user;
                // break; // Do not break here
            }
        }
        else {
            user = loginForm.user;
            user2 = loginForm.user;
            // break; // Do not break here
        }

        if (user == nullptr) {
            break; // Exit the loop and application if no user is logged in
        }

        Ecommerce::ProductForm product(user2);
        if (user->username == "admin" && user->password == "admin") {
            userRole = UserRole::Admin;
        }
        else {
            userRole = UserRole::User;
        }

        if (userRole == UserRole::Admin) {
            Ecommerce::MainForm mainForm;
            Application::Run(% mainForm);
            if (mainForm.logoutRequested) {
                continue; // Go back to the login form
            }
        }
        else {
            Application::Run(% product);
            if (product.logoutRequested) {
                continue; // Go back to the login form
            }
        }

        // If we reach this point without logging out, exit the loop and the application
        break;
    }
}






//[STAThread]
//int main()
//{
//  Application::EnableVisualStyles();
//  Application::SetCompatibleTextRenderingDefault(false);
//  //Application::Run(gcnew CppCLRWinFormsProject::Form1());
//  return 0;
//}