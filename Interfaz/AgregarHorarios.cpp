#include "AgregarHorarios.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void AgregarHorarios(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::AgregarHorarios form;
	Application::Run(% form);
}
