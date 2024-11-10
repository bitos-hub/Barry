#include "BuscarModeloDispensador.h"
#include "AgregarDispensador.h"
System::Void Interfaz::BuscarModeloDispensador::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
    marcaSelec = "";
    modeloSelec = "";
    colorSelec = "";
    if (refForm->GetType() == AgregarDispensador::typeid)
        ((AgregarDispensador^)refForm)->AddMMC(marcaSelec, modeloSelec, colorSelec);
}
System::Void Interfaz::BuscarModeloDispensador::dgvMarcas_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    marcaSelec = Convert::ToString(dgvMarcas->Rows[dgvMarcas->SelectedCells[0]->RowIndex]->Cells[0]->Value);
}

System::Void Interfaz::BuscarModeloDispensador::btnAgregar_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (refForm->GetType() == AgregarDispensador::typeid)
        ((AgregarDispensador^)refForm)->AddMMC(marcaSelec,modeloSelec,colorSelec);
    this->Close();
}

System::Void Interfaz::BuscarModeloDispensador::dgvModelos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    modeloSelec = Convert::ToString(dgvModelos->Rows[dgvModelos->SelectedCells[0]->RowIndex]->Cells[0]->Value);
}

System::Void Interfaz::BuscarModeloDispensador::dgvColores_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
    colorSelec = Convert::ToString(dgvColores->Rows[dgvColores->SelectedCells[0]->RowIndex]->Cells[0]->Value);
}
