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
		AgregarHorarios(void)
		{
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ agreg;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_horario;
	private: System::Windows::Forms::Button^ btn_agregar;

	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::DataGridView^ dgv_horarios;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Horario;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbMascotas;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtIdDispensador;









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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->agreg = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_horario = (gcnew System::Windows::Forms::TextBox());
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->dgv_horarios = (gcnew System::Windows::Forms::DataGridView());
			this->Horario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbMascotas = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtIdDispensador = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_horarios))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(405, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(93, 128);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(22, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// agreg
			// 
			this->agreg->AutoSize = true;
			this->agreg->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agreg->Location = System::Drawing::Point(76, 38);
			this->agreg->Name = L"agreg";
			this->agreg->Size = System::Drawing::Size(200, 33);
			this->agreg->TabIndex = 19;
			this->agreg->Text = L"Dispensador";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 21);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Horario de porción (HHmm)";
			// 
			// txt_horario
			// 
			this->txt_horario->Location = System::Drawing::Point(44, 243);
			this->txt_horario->Name = L"txt_horario";
			this->txt_horario->Size = System::Drawing::Size(273, 20);
			this->txt_horario->TabIndex = 22;
			// 
			// btn_agregar
			// 
			this->btn_agregar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_agregar->Location = System::Drawing::Point(363, 312);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(135, 35);
			this->btn_agregar->TabIndex = 23;
			this->btn_agregar->Text = L"Agregar";
			this->btn_agregar->UseVisualStyleBackColor = false;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &AgregarHorarios::btn_agregar_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_eliminar->Location = System::Drawing::Point(363, 373);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(135, 35);
			this->btn_eliminar->TabIndex = 25;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &AgregarHorarios::btn_eliminar_Click);
			// 
			// dgv_horarios
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgv_horarios->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgv_horarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_horarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Horario });
			this->dgv_horarios->Location = System::Drawing::Point(44, 280);
			this->dgv_horarios->Name = L"dgv_horarios";
			this->dgv_horarios->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgv_horarios->Size = System::Drawing::Size(297, 167);
			this->dgv_horarios->TabIndex = 26;
			this->dgv_horarios->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AgregarHorarios::dgv_horarios_CellContentClick);
			// 
			// Horario
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Horario->DefaultCellStyle = dataGridViewCellStyle2;
			this->Horario->HeaderText = L"Horarios";
			this->Horario->Name = L"Horario";
			this->Horario->Width = 253;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(40, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 21);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Mascota";
			// 
			// cmbMascotas
			// 
			this->cmbMascotas->FormattingEnabled = true;
			this->cmbMascotas->Location = System::Drawing::Point(43, 119);
			this->cmbMascotas->Name = L"cmbMascotas";
			this->cmbMascotas->Size = System::Drawing::Size(272, 21);
			this->cmbMascotas->TabIndex = 28;
			this->cmbMascotas->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarHorarios::cmbMascotas_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(39, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 21);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Id";
			// 
			// txtIdDispensador
			// 
			this->txtIdDispensador->Location = System::Drawing::Point(44, 176);
			this->txtIdDispensador->Name = L"txtIdDispensador";
			this->txtIdDispensador->Size = System::Drawing::Size(97, 20);
			this->txtIdDispensador->TabIndex = 30;
			// 
			// AgregarHorarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 500);
			this->Controls->Add(this->txtIdDispensador);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbMascotas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dgv_horarios);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->btn_agregar);
			this->Controls->Add(this->txt_horario);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->agreg);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AgregarHorarios";
			this->Text = L"AgregarHorarios";
			this->Load += gcnew System::EventHandler(this, &AgregarHorarios::AgregarHorarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_horarios))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e) {
		int IdMascota = ((ComboBoxItem^)(cmbMascotas->Items[cmbMascotas->SelectedIndex]))->Value;
		mascotaSeleccionada = Service::QueryPetById(IdMascota);
		if (mascotaSeleccionada == nullptr) {
			MessageBox::Show("Por favor seleccione una mascota.");
			return;
		}
		try {
			int idDispensador = Convert::ToInt32(txtIdDispensador->Text);
			int horario = Convert::ToInt32(txt_horario->Text);
			Service::AddDispensadorPorMascota(mascotaSeleccionada,idDispensador,horario);
			MostrarHorarios();
			LimpiarCuadrosTexto();
			MessageBox::Show("Dispensador agregado exitosamente.");
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
			List<int>^ lista_horarios = Service::ConsultarTodosHorariosPorMascota(mascotaSeleccionada);
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
				if (control->GetType() == ComboBox::typeid) {
					dynamic_cast<ComboBox^>(control)->Text = "";
				}
			}
		}
	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgv_horarios->SelectedRows->Count > 0) {
			int horario = Convert::ToInt32(dgv_horarios->SelectedRows[0]->Cells[0]->Value);
			try {
				Service::EliminarHorarioDeMascota(mascotaSeleccionada,horario);
				MostrarHorarios();
				LimpiarCuadrosTexto();
				MessageBox::Show("Horario eliminado exitosamente.");
			}
			catch (System::InvalidOperationException^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
	}
	private: System::Void AgregarHorarios_Load(System::Object^ sender, System::EventArgs^ e) {
		FillPets();
		if (cmbMascotas->SelectedIndex>=0) {
			MostrarHorarios();
		}
	}
		  void FillPets() {
			   List<Pet^>^ lista_mascotas = Service::QueryAllPets();
			   if (lista_mascotas != nullptr) {
				   cmbMascotas->Items->Clear();
				   for each (Pet ^ pet in lista_mascotas) {
					   cmbMascotas->Items->Add(gcnew ComboBoxItem(pet->Id,
						   pet->Name));
				   }
			   }
		   }
	private: System::Void dgv_horarios_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
		   private: Pet^ mascotaSeleccionada;

private: System::Void cmbMascotas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int IdMascota = ((ComboBoxItem^)(cmbMascotas->Items[cmbMascotas->SelectedIndex]))->Value;
	mascotaSeleccionada = Service::QueryPetById(IdMascota);
	MostrarHorarios();
}
};
}
