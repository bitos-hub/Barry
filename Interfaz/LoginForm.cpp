#include "LoginForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void LoginScreen(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::LoginForm form;
	Application::Run(% form);
}
