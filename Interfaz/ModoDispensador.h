#pragma once
#include "ComboBoxItem.h"
#include "BuscarComida.h"
#include "AgregarHorarios.h"

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
	/// Resumen de ModoDispensador
	/// </summary>
	public ref class ModoDispensador : public System::Windows::Forms::Form
	{
	private: Form^ refForm;
	public:
		ModoDispensador(Form^ refForm)
		{
			this->refForm = refForm;
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ModoDispensador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnEliminarAsignacion;
	protected:
	private: System::Windows::Forms::Button^ btnAsignar;
	private: System::Windows::Forms::ComboBox^ cmbIdDispensadores;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbMascotas;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ agreg;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ txtComida;

	private: System::Windows::Forms::Button^ btnHorario;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbModos;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ txtAgua;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtPorcion;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::Button^ btnAceptar;













	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModoDispensador::typeid));
			this->btnEliminarAsignacion = (gcnew System::Windows::Forms::Button());
			this->btnAsignar = (gcnew System::Windows::Forms::Button());
			this->cmbIdDispensadores = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbMascotas = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->agreg = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtComida = (gcnew System::Windows::Forms::TextBox());
			this->btnHorario = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbModos = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->txtAgua = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPorcion = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btnEliminarAsignacion
			// 
			this->btnEliminarAsignacion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnEliminarAsignacion->Location = System::Drawing::Point(499, 209);
			this->btnEliminarAsignacion->Margin = System::Windows::Forms::Padding(4);
			this->btnEliminarAsignacion->Name = L"btnEliminarAsignacion";
			this->btnEliminarAsignacion->Size = System::Drawing::Size(180, 43);
			this->btnEliminarAsignacion->TabIndex = 42;
			this->btnEliminarAsignacion->Text = L"Eliminar asignaci�n";
			this->btnEliminarAsignacion->UseVisualStyleBackColor = false;
			this->btnEliminarAsignacion->Click += gcnew System::EventHandler(this, &ModoDispensador::btnEliminarAsignacion_Click);
			// 
			// btnAsignar
			// 
			this->btnAsignar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAsignar->Location = System::Drawing::Point(311, 209);
			this->btnAsignar->Margin = System::Windows::Forms::Padding(4);
			this->btnAsignar->Name = L"btnAsignar";
			this->btnAsignar->Size = System::Drawing::Size(180, 43);
			this->btnAsignar->TabIndex = 41;
			this->btnAsignar->Text = L"Asignar dispensador";
			this->btnAsignar->UseVisualStyleBackColor = false;
			this->btnAsignar->Click += gcnew System::EventHandler(this, &ModoDispensador::btnAsignar_Click);
			// 
			// cmbIdDispensadores
			// 
			this->cmbIdDispensadores->FormattingEnabled = true;
			this->cmbIdDispensadores->Location = System::Drawing::Point(71, 219);
			this->cmbIdDispensadores->Margin = System::Windows::Forms::Padding(4);
			this->cmbIdDispensadores->Name = L"cmbIdDispensadores";
			this->cmbIdDispensadores->Size = System::Drawing::Size(143, 24);
			this->cmbIdDispensadores->TabIndex = 40;
			this->cmbIdDispensadores->SelectedIndexChanged += gcnew System::EventHandler(this, &ModoDispensador::cmbIdDispensadores_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(65, 190);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 26);
			this->label3->TabIndex = 39;
			this->label3->Text = L"ID del dispensador";
			// 
			// cmbMascotas
			// 
			this->cmbMascotas->FormattingEnabled = true;
			this->cmbMascotas->Location = System::Drawing::Point(71, 150);
			this->cmbMascotas->Margin = System::Windows::Forms::Padding(4);
			this->cmbMascotas->Name = L"cmbMascotas";
			this->cmbMascotas->Size = System::Drawing::Size(361, 24);
			this->cmbMascotas->TabIndex = 38;
			this->cmbMascotas->SelectedIndexChanged += gcnew System::EventHandler(this, &ModoDispensador::cmbMascotas_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(67, 114);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 26);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Mascota";
			// 
			// agreg
			// 
			this->agreg->AutoSize = true;
			this->agreg->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agreg->Location = System::Drawing::Point(115, 50);
			this->agreg->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->agreg->Name = L"agreg";
			this->agreg->Size = System::Drawing::Size(251, 43);
			this->agreg->TabIndex = 36;
			this->agreg->Text = L"Dispensador";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(43, 36);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 62);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 35;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(553, 18);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(124, 158);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 293);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Comida";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(177, 287);
			this->btnBuscar->Margin = System::Windows::Forms::Padding(4);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(125, 28);
			this->btnBuscar->TabIndex = 45;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &ModoDispensador::btnBuscar_Click);
			// 
			// txtComida
			// 
			this->txtComida->Location = System::Drawing::Point(71, 330);
			this->txtComida->Margin = System::Windows::Forms::Padding(4);
			this->txtComida->Name = L"txtComida";
			this->txtComida->Size = System::Drawing::Size(231, 22);
			this->txtComida->TabIndex = 46;
			// 
			// btnHorario
			// 
			this->btnHorario->Location = System::Drawing::Point(516, 402);
			this->btnHorario->Margin = System::Windows::Forms::Padding(4);
			this->btnHorario->Name = L"btnHorario";
			this->btnHorario->Size = System::Drawing::Size(161, 38);
			this->btnHorario->TabIndex = 47;
			this->btnHorario->Text = L"Configure los horarios";
			this->btnHorario->UseVisualStyleBackColor = true;
			this->btnHorario->Visible = false;
			this->btnHorario->Click += gcnew System::EventHandler(this, &ModoDispensador::btnHorario_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(68, 414);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 16);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Modo de alimentaci�n";
			// 
			// cmbModos
			// 
			this->cmbModos->FormattingEnabled = true;
			this->cmbModos->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Horarios", L"Detector de movimiento" });
			this->cmbModos->Location = System::Drawing::Point(248, 410);
			this->cmbModos->Margin = System::Windows::Forms::Padding(4);
			this->cmbModos->Name = L"cmbModos";
			this->cmbModos->Size = System::Drawing::Size(196, 24);
			this->cmbModos->TabIndex = 53;
			this->cmbModos->SelectedIndexChanged += gcnew System::EventHandler(this, &ModoDispensador::cmbModos_SelectedIndexChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBox3->Location = System::Drawing::Point(380, 271);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(271, 112);
			this->pictureBox3->TabIndex = 58;
			this->pictureBox3->TabStop = false;
			// 
			// txtAgua
			// 
			this->txtAgua->Location = System::Drawing::Point(479, 313);
			this->txtAgua->Margin = System::Windows::Forms::Padding(4);
			this->txtAgua->Name = L"txtAgua";
			this->txtAgua->Size = System::Drawing::Size(149, 22);
			this->txtAgua->TabIndex = 62;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(393, 316);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 16);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Agua (mL)";
			this->label6->Click += gcnew System::EventHandler(this, &ModoDispensador::label6_Click);
			// 
			// txtPorcion
			// 
			this->txtPorcion->Location = System::Drawing::Point(479, 281);
			this->txtPorcion->Margin = System::Windows::Forms::Padding(4);
			this->txtPorcion->Name = L"txtPorcion";
			this->txtPorcion->Size = System::Drawing::Size(149, 22);
			this->txtPorcion->TabIndex = 60;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(393, 284);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 16);
			this->label5->TabIndex = 59;
			this->label5->Text = L"Porci�n (g)";
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnEditar->Location = System::Drawing::Point(404, 345);
			this->btnEditar->Margin = System::Windows::Forms::Padding(4);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(104, 28);
			this->btnEditar->TabIndex = 63;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &ModoDispensador::btnEditar_Click);
			// 
			// btnAceptar
			// 
			this->btnAceptar->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnAceptar->Location = System::Drawing::Point(525, 345);
			this->btnAceptar->Margin = System::Windows::Forms::Padding(4);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(104, 28);
			this->btnAceptar->TabIndex = 64;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = false;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &ModoDispensador::btnAceptar_Click);
			// 
			// ModoDispensador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 468);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->txtAgua);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtPorcion);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->cmbModos);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnHorario);
			this->Controls->Add(this->txtComida);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEliminarAsignacion);
			this->Controls->Add(this->btnAsignar);
			this->Controls->Add(this->cmbIdDispensadores);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbMascotas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->agreg);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ModoDispensador";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Configurar dispensador";
			this->Load += gcnew System::EventHandler(this, &ModoDispensador::ModoDispensador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Dispenser^ dispensadorSeleccionado;
		public: Pet^ mascotaSeleccionada;
	private: System::Void btnAsignar_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (dispensadorSeleccionado == nullptr) {
				throw gcnew System::Exception("Debe seleccionar un dispensador.");
			}
			if (mascotaSeleccionada == nullptr) {
				throw gcnew System::Exception("Debe seleccionar una mascota.");
			}
			Service::AddDispensadorPorMascota(mascotaSeleccionada, dispensadorSeleccionado);
			MessageBox::Show("Se ha asignado el dispensador " + dispensadorSeleccionado->Id + " a " + mascotaSeleccionada->Name);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}

private: System::Void cmbMascotas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int IdMascota = ((ComboBoxItem^)(cmbMascotas->Items[cmbMascotas->SelectedIndex]))->Value;
	mascotaSeleccionada = Service::SQLQueryPetById(IdMascota);
	if (mascotaSeleccionada != nullptr) {
		txtPorcion->Text = Convert::ToString(mascotaSeleccionada->FoodServing);
		txtPorcion->ReadOnly = true;
		txtAgua->Text = Convert::ToString(mascotaSeleccionada->WaterServing);
		txtAgua->ReadOnly = true;
		
	}
}
private: System::Void cmbIdDispensadores_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int IdDispensador = ((ComboBoxItem^)(cmbIdDispensadores->Items[cmbIdDispensadores->SelectedIndex]))->Value;
	dispensadorSeleccionado = Service::ConsultarDispensadorPorId(IdDispensador);
	if (dispensadorSeleccionado==nullptr) {
		dispensadorSeleccionado = gcnew Dispenser();
	}
	
}
	   void LlenarDispensadores() {
		   List<Dispenser^>^ lista_dispensadores = Service::ConsultarTodosDispensadores();
		   if (lista_dispensadores != nullptr) {
			   cmbIdDispensadores->Items->Clear();
			   for each (Dispenser ^ d in lista_dispensadores) {
				   cmbIdDispensadores->Items->Add(gcnew ComboBoxItem(d->Id,
					   Convert::ToString(d->Id)));
			   }
		   }
	   }
	   void FillPets() {
		   List<Pet^>^ lista_mascotas = Service::SQLQueryAllPets();
		   if (lista_mascotas != nullptr) {
			   cmbMascotas->Items->Clear();
			   for each (Pet ^ pet in lista_mascotas) {
				   cmbMascotas->Items->Add(gcnew ComboBoxItem(pet->Id,
					   pet->Name));
			   }
		   }
	   }

	   void LimpiarCuadrosTexto() { //vac�a los cuadros de texto
		   for each (Control ^ control in this->Controls) {
			   if (control->GetType() == TextBox::typeid) { //encuentra los controles de tipo TextBox
				   dynamic_cast<TextBox^>(control)->Text = ""; //se borra su contenido asignandole una cadena vac�a
			   }
		   }
	   }
private: System::Void btnEliminarAsignacion_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (dispensadorSeleccionado == nullptr) {
			throw gcnew System::Exception("Debe seleccionar un dispensador.");
		}
		if (mascotaSeleccionada == nullptr) {
			throw gcnew System::Exception("Debe seleccionar una mascota.");
		}
		Service::EliminarDispensadorPorMascota(mascotaSeleccionada, dispensadorSeleccionado);
		if (dispensadorSeleccionado->Id != 0) {
			MessageBox::Show("Se quitado la asignaci�n del dispensador " + dispensadorSeleccionado->Id + " a " + mascotaSeleccionada->Name);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	BuscarComida^ buscar = gcnew BuscarComida(this);
	buscar->ShowDialog();
}
private: System::Void btnHorario_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ModoDispensador_Load(System::Object^ sender, System::EventArgs^ e) {
	
	LlenarDispensadores();
	FillPets();
}
	   public:
	   void AddComida(Food^ comida) {
		   if (comida==nullptr) {
			   comida = gcnew Food();
		   }
		   txtComida->Text = comida->Name;
		   Service::AsignarComidaDispensador(dispensadorSeleccionado,comida);
	   }

private: System::Void cmbModos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ modoSeleccionado = (String^)cmbModos->SelectedItem;
	if (dispensadorSeleccionado!=nullptr) {
		Service::AsignarModoDipensador(dispensadorSeleccionado, modoSeleccionado);
		if (modoSeleccionado == "Horarios") {
			btnHorario->Visible = true;
		}
		else btnHorario->Visible = false;
	}
	else {
		MessageBox::Show("Debe seleccionar un dispensador");
	}
}
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult resultado = MessageBox::Show("�Deseas editar las porciones?",
		"Confirmaci�n",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question);
	if (resultado == System::Windows::Forms::DialogResult::Yes) {
		txtPorcion->ReadOnly = false;
		txtAgua->ReadOnly = false;
		
		
	}
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtPorcion->ReadOnly == false && txtAgua->ReadOnly == false) {
		if (txtPorcion->Text == "" || txtAgua->Text == "") {
			MessageBox::Show("Debe ingresar una cantidad v�lida.");
		}
		else {
			double porcion, agua;
			bool esPorcionValida = Double::TryParse(txtPorcion->Text, porcion);
			bool esAguaValida = Double::TryParse(txtAgua->Text, agua);
			if (!esPorcionValida || !esAguaValida) {
				MessageBox::Show("Ingrese solo n�meros en los campos de porci�n y agua.");
			}
			else {
				try {
					Service::ModificarPorcionAgua(mascotaSeleccionada, porcion, agua);
					txtPorcion->ReadOnly = true;
					txtAgua->ReadOnly = true;
				}
				catch (System::Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
		}
	}
}
};
}
