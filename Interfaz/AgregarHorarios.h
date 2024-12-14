#pragma once

#include "ComboBoxItem.h"

namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Barry;
	using namespace ServiceBarry;

	/// <summary>
	/// Resumen de AgregarHorarios
	/// </summary>
	public ref class AgregarHorarios : public System::Windows::Forms::Form
	{
	public:
		Form^ refForm;
		Dispenser^ dispensadorSeleccionado;
		   //AgregarHorarios(){}
		AgregarHorarios(Dispenser^ dispensadorSeleccionado)
		{
			this->dispensadorSeleccionado = dispensadorSeleccionado;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AgregarHorarios()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_horario;
	private: System::Windows::Forms::Button^ btn_agregar;

	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::DataGridView^ dgv_horarios;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Horario;

















	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarHorarios::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_horario = (gcnew System::Windows::Forms::TextBox());
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->dgv_horarios = (gcnew System::Windows::Forms::DataGridView());
			this->Horario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_horarios))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(16, 27);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 62);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 26);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Horario de porción (HHmm)";
			// 
			// txt_horario
			// 
			this->txt_horario->Location = System::Drawing::Point(99, 64);
			this->txt_horario->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_horario->Name = L"txt_horario";
			this->txt_horario->Size = System::Drawing::Size(363, 22);
			this->txt_horario->TabIndex = 22;
			// 
			// btn_agregar
			// 
			this->btn_agregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_agregar->Location = System::Drawing::Point(541, 151);
			this->btn_agregar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(180, 43);
			this->btn_agregar->TabIndex = 23;
			this->btn_agregar->Text = L"Agregar";
			this->btn_agregar->UseVisualStyleBackColor = false;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &AgregarHorarios::btn_agregar_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_eliminar->Location = System::Drawing::Point(541, 226);
			this->btn_eliminar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(180, 43);
			this->btn_eliminar->TabIndex = 25;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &AgregarHorarios::btn_eliminar_Click);
			// 
			// dgv_horarios
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_horarios->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgv_horarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_horarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Horario });
			this->dgv_horarios->Location = System::Drawing::Point(99, 124);
			this->dgv_horarios->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgv_horarios->Name = L"dgv_horarios";
			this->dgv_horarios->RowHeadersWidth = 51;
			this->dgv_horarios->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgv_horarios->Size = System::Drawing::Size(396, 206);
			this->dgv_horarios->TabIndex = 26;
			// 
			// Horario
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Horario->DefaultCellStyle = dataGridViewCellStyle4;
			this->Horario->HeaderText = L"Horarios";
			this->Horario->MinimumWidth = 6;
			this->Horario->Name = L"Horario";
			this->Horario->Width = 253;
			// 
			// AgregarHorarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 361);
			this->Controls->Add(this->dgv_horarios);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->btn_agregar);
			this->Controls->Add(this->txt_horario);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"AgregarHorarios";
			this->Text = L"Configurar horarios";
			this->Load += gcnew System::EventHandler(this, &AgregarHorarios::AgregarHorarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_horarios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//public: Dispenser^ dispensadorSeleccionado;
			  private: Pet^ mascotaSeleccionada;
		public:
		void ObtenerDispensador(Dispenser^ disp) {
			dispensadorSeleccionado = disp;
		}
	private: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (dispensadorSeleccionado == nullptr) {
				throw gcnew System::Exception("Debe seleccionar un dispensador.");
			}
			else {
				int IdDispensador = dispensadorSeleccionado->Id;
				dispensadorSeleccionado = Service::ConsultarDispensadorPorId(IdDispensador);
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		try {
			int horario = Convert::ToInt32(txt_horario->Text);
			try {
				try {
					if (dispensadorSeleccionado != nullptr) {
					Service::AddHorarioDispensador(dispensadorSeleccionado, horario);
					MostrarHorarios();
					MessageBox::Show("Horario agregado exitosamente.");
					LimpiarCuadrosTexto();
					}
				}
				catch (System::Exception^ ex) {
					MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (System::Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (System::InvalidOperationException^ ex) {
			MessageBox::Show(ex->Message);
		}
		catch (FormatException^) {
			// Capturar el error si el formato del horario no es válido
			MessageBox::Show("Ingrese un horario válido.");
		}
	}
	public:
		void MostrarHorarios() {
			List<int>^ lista_horarios = Service::ConsultarTodosHorariosPorDispensador(dispensadorSeleccionado); //revisar
			/*if (mascotaSeleccionada->PetDispenser != nullptr) {
				((ComboBoxItem^)(cmbMascotas->Items[cmbIdDispensadores->SelectedIndex]))->Value = mascotaSeleccionada->PetDispenser->Id;
			}*/
			if (lista_horarios != nullptr) {
				dgv_horarios->Rows->Clear();
				for each (int horario in lista_horarios) {
					dgv_horarios->Rows->Add(horario.ToString());
				}
			}
		}

		void LimpiarCuadrosTexto() { //vacía los cuadros de texto
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) { //encuentra los controles de tipo TextBox
					dynamic_cast<TextBox^>(control)->Text = ""; //se borra su contenido asignandole una cadena vacía
				}
			}
		}
	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgv_horarios->SelectedRows->Count > 0) {
			int horario = Convert::ToInt32(dgv_horarios->SelectedRows[0]->Cells[0]->Value);
			try {
				
				Service::EliminarHorarioDispensador(dispensadorSeleccionado,horario);
				MostrarHorarios();
				LimpiarCuadrosTexto();
				MessageBox::Show("Horario eliminado exitosamente.");
			}
			catch (System::Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
		   
	private: System::Void AgregarHorarios_Load(System::Object^ sender, System::EventArgs^ e) {
		
			MostrarHorarios();
	}
		   

	   


};
}
