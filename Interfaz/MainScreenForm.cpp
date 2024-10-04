#include "MainScreenForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void MainScreen(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::MainScreenForm form;
	Application::Run(% form);
}
