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
			this->btnAgregar->Location = System::Drawing::Point(78, 429);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(101, 28);
			this->btnAgregar->TabIndex = 0;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &AgregarDispensador::button1_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(215, 429);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(101, 28);
			this->btnEliminar->TabIndex = 1;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &AgregarDispensador::btnEliminar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Agregar dispensador";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ID del dispensador";
			// 
			// cmbIdDispensador
			// 
			this->cmbIdDispensador->FormattingEnabled = true;
			this->cmbIdDispensador->Location = System::Drawing::Point(147, 47);
			this->cmbIdDispensador->Name = L"cmbIdDispensador";
			this->cmbIdDispensador->Size = System::Drawing::Size(133, 21);
			this->cmbIdDispensador->TabIndex = 7;
			this->cmbIdDispensador->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarDispensador::cmbIdDispensador_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 387);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Fuente de alimentación";
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(198, 319);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->Size = System::Drawing::Size(133, 20);
			this->txtCapacidad->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 353);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Material";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 322);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Capacidad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Características del dispensador";
			// 
			// txtMaterial
			// 
			this->txtMaterial->Location = System::Drawing::Point(198, 350);
			this->txtMaterial->Name = L"txtMaterial";
			this->txtMaterial->Size = System::Drawing::Size(133, 20);
			this->txtMaterial->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 255);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(167, 13);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Dimensiones del dispensador (cm)";
			// 
			// txtLargo
			// 
			this->txtLargo->Location = System::Drawing::Point(76, 280);
			this->txtLargo->Name = L"txtLargo";
			this->txtLargo->Size = System::Drawing::Size(66, 20);
			this->txtLargo->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(36, 283);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Largo";
			// 
			// txtAncho
			// 
			this->txtAncho->Location = System::Drawing::Point(215, 280);
			this->txtAncho->Name = L"txtAncho";
			this->txtAncho->Size = System::Drawing::Size(66, 20);
			this->txtAncho->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(171, 283);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 34;
			this->label11->Text = L"Ancho";
			// 
			// txtAlto
			// 
			this->txtAlto->Location = System::Drawing::Point(352, 280);
			this->txtAlto->Name = L"txtAlto";
			this->txtAlto->Size = System::Drawing::Size(66, 20);
			this->txtAlto->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(312, 283);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 13);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Altura";
			// 
			// txtFuente
			// 
			this->txtFuente->Location = System::Drawing::Point(198, 384);
			this->txtFuente->Name = L"txtFuente";
			this->txtFuente->Size = System::Drawing::Size(133, 20);
			this->txtFuente->TabIndex = 43;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(335, 137);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(82, 23);
			this->btnBuscar->TabIndex = 44;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &AgregarDispensador::btnBuscar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox1->Location = System::Drawing::Point(75, 96);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(215, 105);
			this->pictureBox1->TabIndex = 51;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AgregarDispensador::pictureBox1_Click);
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(142, 171);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(133, 20);
			this->txtColor->TabIndex = 57;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(142, 137);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(133, 20);
			this->txtModelo->TabIndex = 56;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(89, 174);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Color";
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(142, 106);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(133, 20);
			this->txtMarca->TabIndex = 54;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(89, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Modelo";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(89, 109);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 13);
			this->label13->TabIndex = 52;
			this->label13->Text = L"Marca";
			// 
			// AgregarDispensador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 497);
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
			this->Name = L"AgregarDispensador";
			this->Text = L"AgregarDispensador";
			this->Load += gcnew System::EventHandler(this, &AgregarDispensador::AgregarDispensador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static int id = 0;
		public:
			String^ marcaSelec;
			String^ modeloSelec;
			String^ colorSelec;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		id++;
		try {
			marcaSelec = txtMarca->Text;
			modeloSelec = txtModelo->Text;
			colorSelec = txtColor->Text;
			DispensadorDisponible^ DispDisp = gcnew DispensadorDisponible();
			DispDisp = Service::EncontrarDispensador(marcaSelec, modeloSelec);
			DispDisp->Color = colorSelec;
			Service::AddDispensador(id,DispDisp);
			LimpiarCuadrosTexto();
			int x = LlenarDispensadores();
			MessageBox::Show("El dispensador con ID: " + id + " fue agregado correctamente.");
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
			int x = LlenarDispensadores();
			MessageBox::Show("El dispensador con ID: "+ dispensadorSeleccionado->Id +" fue eliminado correctamente.");
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
}
	   int LlenarDispensadores() {
		   List<Dispenser^>^ lista_dispensadores = Service::ConsultarTodosDispensadores();
		   int mayor = 0;
		   if (lista_dispensadores != nullptr) {
			   cmbIdDispensador->Items->Clear();
			   for each (Dispenser ^ d in lista_dispensadores) {
				   cmbIdDispensador->Items->Add(gcnew ComboBoxItem(d->Id,
					   Convert::ToString(d->Id)));
				   if (d->Id > mayor) {
					   mayor = d->Id;
				   }
			   }
		   }
		   return mayor;
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
	id = LlenarDispensadores();
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
