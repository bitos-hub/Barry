#include "PetForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void PetMain(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::PetForm form;
	Application::Run(% form);
}
