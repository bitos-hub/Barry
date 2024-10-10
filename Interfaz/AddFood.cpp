#include "AddFood.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void FoodMain(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::AddFood form;
	Application::Run(% form);
}


