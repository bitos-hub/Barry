#include "ModoDispensador.h"

System::Void Interfaz::ModoDispensador::btnHorario_Click(System::Object^ sender, System::EventArgs^ e)
{
	AgregarHorarios^ agregarHorarios = gcnew AgregarHorarios(dispensadorSeleccionado);
	agregarHorarios->ShowDialog();
	//if (refForm->GetType() == AgregarHorarios::typeid)
		//((AgregarHorarios^)refForm)->ObtenerDispensador(dispensadorSeleccionado);
}
