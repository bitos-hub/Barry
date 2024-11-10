#include "BuscarComida.h"
#include "ModoDispensador.h"

System::Void Interfaz::BuscarComida::dgvMarcas_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	comidaSelec = Convert::ToString(dgvComida->Rows[dgvComida->SelectedCells[0]->RowIndex]->Cells[0]->Value);
}

System::Void Interfaz::BuscarComida::btnAgregar_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (refForm->GetType() == ModoDispensador::typeid)
		((ModoDispensador^)refForm)->AddComida(Service::QueryFoodbyName(comidaSelec));
	this->Close();
}

System::Void Interfaz::BuscarComida::btnCancelar_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
