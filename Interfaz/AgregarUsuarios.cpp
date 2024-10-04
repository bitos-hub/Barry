#include "AgregarUsuarios.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::AgregarUsuarios form;
	Application::Run(% form);
}
