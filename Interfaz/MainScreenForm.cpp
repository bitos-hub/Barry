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

System::Void Interfaz::MainScreenForm::btnVerCaracteristicas_Click(System::Object^ sender, System::EventArgs^ e)
{
	Caracteristicas^ caracteristicas = gcnew Caracteristicas(dispenserSelect);
	if (dispenserSelect==nullptr) {
		MessageBox::Show("Para ver las características debe seleccionar un dispensador.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else
	caracteristicas->ShowDialog();
}
