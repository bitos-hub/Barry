#pragma once
#include "ComboBoxItem.h"
#include "BuscarModeloDispensador.h"
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
	/// Resumen de AgregarDispensador
	/// </summary>
	public ref class AgregarDispensador : public System::Windows::Forms::Form
	{
	public:
		AgregarDispensador(void)
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
		~AgregarDispensador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAgregar;
	protected:

	private: System::Windows::Forms::Button^ btnEliminar;
	protected:

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbIdDispensador;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCapacidad;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtMaterial;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtLargo;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtAncho;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtAlto;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtFuente;





	private: System::Windows::Forms::Button^ btnBuscar;






	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtColor;

	private: System::Windows::Forms::TextBox^ txtModelo;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtMarca;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbIdDispensador = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCapacidad = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtMaterial = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtLargo = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtAncho = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtAlto = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtFuente = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(104, 528);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(4);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(135, 34);
			this->btnAgregar->TabIndex = 0;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &AgregarDispensador::button1_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(287, 528);
			this->btnEliminar->Margin = System::Windows::Forms::Padding(4);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(135, 34);
			this->btnEliminar->TabIndex = 1;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &AgregarDispensador::btnEliminar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Agregar dispensador";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 62);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ID del dispensador";
			// 
			// cmbIdDispensador
			// 
			this->cmbIdDispensador->FormattingEnabled = true;
			this->cmbIdDispensador->Location = System::Drawing::Point(196, 58);
			this->cmbIdDispensador->Margin = System::Windows::Forms::Padding(4);
			this->cmbIdDispensador->Name = L"cmbIdDispensador";
			this->cmbIdDispensador->Size = System::Drawing::Size(176, 24);
			this->cmbIdDispensador->TabIndex = 7;
			this->cmbIdDispensador->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarDispensador::cmbIdDispensador_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(48, 476);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Fuente de alimentación";
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(264, 393);
			this->txtCapacidad->Margin = System::Windows::Forms::Padding(4);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->ReadOnly = true;
			this->txtCapacidad->Size = System::Drawing::Size(176, 22);
			this->txtCapacidad->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(48, 434);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Material";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 396);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Capacidad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 274);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(197, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Características del dispensador";
			// 
			// txtMaterial
			// 
			this->txtMaterial->Location = System::Drawing::Point(264, 431);
			this->txtMaterial->Margin = System::Windows::Forms::Padding(4);
			this->txtMaterial->Name = L"txtMaterial";
			this->txtMaterial->ReadOnly = true;
			this->txtMaterial->Size = System::Drawing::Size(176, 22);
			this->txtMaterial->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(48, 314);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(216, 16);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Dimensiones del dispensador (cm)";
			// 
			// txtLargo
			// 
			this->txtLargo->Location = System::Drawing::Point(101, 345);
			this->txtLargo->Margin = System::Windows::Forms::Padding(4);
			this->txtLargo->Name = L"txtLargo";
			this->txtLargo->ReadOnly = true;
			this->txtLargo->Size = System::Drawing::Size(87, 22);
			this->txtLargo->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(48, 348);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 16);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Largo";
			// 
			// txtAncho
			// 
			this->txtAncho->Location = System::Drawing::Point(287, 345);
			this->txtAncho->Margin = System::Windows::Forms::Padding(4);
			this->txtAncho->Name = L"txtAncho";
			this->txtAncho->ReadOnly = true;
			this->txtAncho->Size = System::Drawing::Size(87, 22);
			this->txtAncho->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(228, 348);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 16);
			this->label11->TabIndex = 34;
			this->label11->Text = L"Ancho";
			// 
			// txtAlto
			// 
			this->txtAlto->Location = System::Drawing::Point(469, 345);
			this->txtAlto->Margin = System::Windows::Forms::Padding(4);
			this->txtAlto->Name = L"txtAlto";
			this->txtAlto->ReadOnly = true;
			this->txtAlto->Size = System::Drawing::Size(87, 22);
			this->txtAlto->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(416, 348);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 16);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Altura";
			// 
			// txtFuente
			// 
			this->txtFuente->Location = System::Drawing::Point(264, 473);
			this->txtFuente->Margin = System::Windows::Forms::Padding(4);
			this->txtFuente->Name = L"txtFuente";
			this->txtFuente->ReadOnly = true;
			this->txtFuente->Size = System::Drawing::Size(176, 22);
			this->txtFuente->TabIndex = 43;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(447, 169);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(4);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(109, 28);
			this->btnBuscar->TabIndex = 44;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &AgregarDispensador::btnBuscar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox1->Location = System::Drawing::Point(100, 118);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(287, 129);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AgregarDispensador::pictureBox1_Click);
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(189, 210);
			this->txtColor->Margin = System::Windows::Forms::Padding(4);
			this->txtColor->Name = L"txtColor";
			this->txtColor->ReadOnly = true;
			this->txtColor->Size = System::Drawing::Size(176, 22);
			this->txtColor->TabIndex = 57;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(189, 169);
			this->txtModelo->Margin = System::Windows::Forms::Padding(4);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->ReadOnly = true;
			this->txtModelo->Size = System::Drawing::Size(176, 22);
			this->txtModelo->TabIndex = 56;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(119, 214);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 16);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Color";
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(189, 130);
			this->txtMarca->Margin = System::Windows::Forms::Padding(4);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->ReadOnly = true;
			this->txtMarca->Size = System::Drawing::Size(176, 22);
			this->txtMarca->TabIndex = 54;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(119, 172);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 16);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Modelo";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(119, 134);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 16);
			this->label13->TabIndex = 52;
			this->label13->Text = L"Marca";
			// 
			// AgregarDispensador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 612);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtMarca);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtFuente);
			this->Controls->Add(this->txtAlto);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtAncho);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtLargo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtMaterial);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtCapacidad);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbIdDispensador);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnAgregar);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AgregarDispensador";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro de dispensadores";
			this->Load += gcnew System::EventHandler(this, &AgregarDispensador::AgregarDispensador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			String^ marcaSelec;
			String^ modeloSelec;
			String^ colorSelec;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			marcaSelec = txtMarca->Text;
			modeloSelec = txtModelo->Text;
			colorSelec = txtColor->Text;
			DispensadorDisponible^ DispDisp = gcnew DispensadorDisponible();
			DispDisp = Service::EncontrarDispensador(marcaSelec, modeloSelec);
			DispDisp->Color = colorSelec;
			int id_disp=Service::AddDispensador(DispDisp);
			LimpiarCuadrosTexto();
			LlenarDispensadores();
			MessageBox::Show("El dispensador con ID: " + id_disp + " fue agregado correctamente.");
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   void LimpiarCuadrosTexto() {
			   for each (Control ^ control in this->Controls) {
				   if (control->GetType() == TextBox::typeid) { //encuentra los controles de tipo TextBox
					   dynamic_cast<TextBox^>(control)->Text = ""; //se borra su contenido asignandole una cadena vacía
				   }
				   if (control->GetType() == ComboBox::typeid) {
					   dynamic_cast<ComboBox^>(control)->Text = "";
				   }
			   }
		   }
		   private: Dispenser^ dispensadorSeleccionado;
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//int idSeleccionado = (int)cmbIdDispensador->SelectedValue;
		int IdDispensador = ((ComboBoxItem^)(cmbIdDispensador->Items[cmbIdDispensador->SelectedIndex]))->Value;
		dispensadorSeleccionado = Service::ConsultarDispensadorPorId(IdDispensador);
		try {
			Service::EliminarDispensador(dispensadorSeleccionado->Id);
			LimpiarCuadrosTexto();
			LlenarDispensadores();
			MessageBox::Show("El dispensador con ID: "+ dispensadorSeleccionado->Id +" fue eliminado correctamente.");
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
}
	   void LlenarDispensadores() {
		   List<Dispenser^>^ lista_dispensadores = Service::ConsultarTodosDispensadores();
		   if (lista_dispensadores != nullptr) {
			   cmbIdDispensador->Items->Clear();
			   for each (Dispenser ^ d in lista_dispensadores) {
				   cmbIdDispensador->Items->Add(gcnew ComboBoxItem(d->Id,
					   Convert::ToString(d->Id)));
			   }
		   }
	   }
	   
	   public:
		   void AddMMC(String^ marca, String^ modelo, String^ color) {
			   
			   if (modelo != nullptr && color != nullptr) {
				   
				   if (marca != "" && modelo != "" && color != "" && (marca != nullptr && modelo != nullptr && color != nullptr)) {
					   txtMarca->Text = marca;
					   txtModelo->Text = modelo;
					   txtColor->Text = color;
					   DispensadorDisponible^ d = Service::EncontrarDispensador(marca, modelo);
					   txtAlto->Text = Convert::ToString(d->Alto);
					   txtAncho->Text = Convert::ToString(d->Ancho);
					   txtLargo->Text = Convert::ToString(d->Largo);
					   txtCapacidad->Text = d->Capacidad;
					   txtFuente->Text = d->FuenteAlimentacion;
					   txtMaterial->Text = d->Material;
				   }
			   }
			   else {
				   MessageBox::Show("No se terminó de seleccionar un dispensador.");
			   }
		   }
private: System::Void cmbIdDispensador_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int IdDispensador = ((ComboBoxItem^)(cmbIdDispensador->Items[cmbIdDispensador->SelectedIndex]))->Value;
	dispensadorSeleccionado = Service::ConsultarDispensadorPorId(IdDispensador);
	txtMarca->Text = dispensadorSeleccionado->DispensadorAsignado->Marca;
	txtModelo->Text = dispensadorSeleccionado->DispensadorAsignado->Modelo;
	txtColor->Text = dispensadorSeleccionado->DispensadorAsignado->Color;
	txtAlto->Text = Convert::ToString(dispensadorSeleccionado->DispensadorAsignado->Alto);
	txtAncho->Text = Convert::ToString(dispensadorSeleccionado->DispensadorAsignado->Ancho);
	txtLargo->Text = Convert::ToString(dispensadorSeleccionado->DispensadorAsignado->Largo);
	txtCapacidad->Text = dispensadorSeleccionado->DispensadorAsignado->Capacidad;
	txtFuente->Text = dispensadorSeleccionado->DispensadorAsignado->FuenteAlimentacion;
	txtMaterial->Text = dispensadorSeleccionado->DispensadorAsignado->Material;
}
private: System::Void AgregarDispensador_Load(System::Object^ sender, System::EventArgs^ e) {
	LlenarDispensadores();
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	BuscarModeloDispensador^ buscar = gcnew BuscarModeloDispensador(this);
	buscar->ShowDialog();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
