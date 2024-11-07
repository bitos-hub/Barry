#include "AgregarDispensador.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void AgregarDispensador(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::AgregarDispensador form;
	Application::Run(% form);
}
