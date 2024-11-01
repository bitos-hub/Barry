#include "ReportForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Report(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Interfaz::ReportForm form;
	Application::Run(% form);
}

