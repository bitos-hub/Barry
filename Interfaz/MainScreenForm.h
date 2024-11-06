#pragma once
#include "AddFood.h"
#include "AgregarHorarios.h"
#include "AgregarUsuarios.h"
#include "LoginForm.h"
#include "PetForm.h"
#include "DispenserConfiguration.h"
#include "AgregarDispensador.h"
namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ServiceBarry;
	using namespace Barry;

	/// <summary>
	/// Resumen de MainScreenForm
	/// </summary>
	public ref class MainScreenForm : public System::Windows::Forms::Form
	{
	public:
		MainScreenForm(void)
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
		~MainScreenForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ programarComidaToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ generarReporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ añadirUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ añadirComidaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesionToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dgvPets;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DispenserId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DispenserStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodQuantityDispenser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AssignedPet;
	private: System::Windows::Forms::ToolStripMenuItem^ añadirDispensadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ añadirMascotaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ semanalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mensualToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pbPetPhoto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Species;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::ToolStripMenuItem^ recargarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ configurarArduinoToolStripMenuItem;




































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainScreenForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->añadirUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->añadirComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->añadirDispensadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->añadirMascotaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programarComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarReporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->semanalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mensualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recargarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->configurarArduinoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->DispenserId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DispenserStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FoodQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FoodQuantityDispenser = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AssignedPet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPets = (gcnew System::Windows::Forms::DataGridView());
			this->PetId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Species = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PetName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PetStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pbPetPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPets))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPetPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->addToolStripMenuItem,
					this->programarComidaToolStripMenuItem, this->generarReporteToolStripMenuItem, this->recargarToolStripMenuItem, this->configurarArduinoToolStripMenuItem,
					this->cerrarSesiónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1028, 38);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->añadirUsuarioToolStripMenuItem,
					this->añadirComidaToolStripMenuItem, this->añadirDispensadorToolStripMenuItem, this->añadirMascotaToolStripMenuItem
			});
			this->addToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addToolStripMenuItem.Image")));
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(102, 34);
			this->addToolStripMenuItem->Text = L"Añadir";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::añadirToolStripMenuItem_Click);
			// 
			// añadirUsuarioToolStripMenuItem
			// 
			this->añadirUsuarioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"añadirUsuarioToolStripMenuItem.Image")));
			this->añadirUsuarioToolStripMenuItem->Name = L"añadirUsuarioToolStripMenuItem";
			this->añadirUsuarioToolStripMenuItem->Size = System::Drawing::Size(223, 34);
			this->añadirUsuarioToolStripMenuItem->Text = L"Añadir Usuario";
			this->añadirUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::añadirUsuarioToolStripMenuItem_Click);
			// 
			// añadirComidaToolStripMenuItem
			// 
			this->añadirComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"añadirComidaToolStripMenuItem.Image")));
			this->añadirComidaToolStripMenuItem->Name = L"añadirComidaToolStripMenuItem";
			this->añadirComidaToolStripMenuItem->Size = System::Drawing::Size(223, 34);
			this->añadirComidaToolStripMenuItem->Text = L"Añadir Comida";
			this->añadirComidaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::añadirComidaToolStripMenuItem_Click);
			// 
			// añadirDispensadorToolStripMenuItem
			// 
			this->añadirDispensadorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"añadirDispensadorToolStripMenuItem.Image")));
			this->añadirDispensadorToolStripMenuItem->Name = L"añadirDispensadorToolStripMenuItem";
			this->añadirDispensadorToolStripMenuItem->Size = System::Drawing::Size(223, 34);
			this->añadirDispensadorToolStripMenuItem->Text = L"Dispensador";
			this->añadirDispensadorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::añadirDispensadorToolStripMenuItem_Click);
			// 
			// añadirMascotaToolStripMenuItem
			// 
			this->añadirMascotaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"añadirMascotaToolStripMenuItem.Image")));
			this->añadirMascotaToolStripMenuItem->Name = L"añadirMascotaToolStripMenuItem";
			this->añadirMascotaToolStripMenuItem->Size = System::Drawing::Size(223, 34);
			this->añadirMascotaToolStripMenuItem->Text = L"Añadir Mascota";
			this->añadirMascotaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::añadirMascotaToolStripMenuItem_Click);
			// 
			// programarComidaToolStripMenuItem
			// 
			this->programarComidaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->programarComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"programarComidaToolStripMenuItem.Image")));
			this->programarComidaToolStripMenuItem->Name = L"programarComidaToolStripMenuItem";
			this->programarComidaToolStripMenuItem->Size = System::Drawing::Size(252, 34);
			this->programarComidaToolStripMenuItem->Text = L"Programar Dispensador";
			this->programarComidaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::programarComidaToolStripMenuItem_Click);
			// 
			// generarReporteToolStripMenuItem
			// 
			this->generarReporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->semanalToolStripMenuItem,
					this->mensualToolStripMenuItem
			});
			this->generarReporteToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->generarReporteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"generarReporteToolStripMenuItem.Image")));
			this->generarReporteToolStripMenuItem->Name = L"generarReporteToolStripMenuItem";
			this->generarReporteToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->generarReporteToolStripMenuItem->Text = L"Generar Reporte";
			// 
			// semanalToolStripMenuItem
			// 
			this->semanalToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"semanalToolStripMenuItem.Image")));
			this->semanalToolStripMenuItem->Name = L"semanalToolStripMenuItem";
			this->semanalToolStripMenuItem->Size = System::Drawing::Size(164, 34);
			this->semanalToolStripMenuItem->Text = L"Semanal";
			this->semanalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::semanalToolStripMenuItem_Click);
			// 
			// mensualToolStripMenuItem
			// 
			this->mensualToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mensualToolStripMenuItem.Image")));
			this->mensualToolStripMenuItem->Name = L"mensualToolStripMenuItem";
			this->mensualToolStripMenuItem->Size = System::Drawing::Size(164, 34);
			this->mensualToolStripMenuItem->Text = L"Mensual";
			// 
			// recargarToolStripMenuItem
			// 
			this->recargarToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recargarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"recargarToolStripMenuItem.Image")));
			this->recargarToolStripMenuItem->Name = L"recargarToolStripMenuItem";
			this->recargarToolStripMenuItem->Size = System::Drawing::Size(132, 34);
			this->recargarToolStripMenuItem->Text = L"Actualizar";
			this->recargarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::recargarToolStripMenuItem_Click);
			// 
			// configurarArduinoToolStripMenuItem
			// 
			this->configurarArduinoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->configurarArduinoToolStripMenuItem->Name = L"configurarArduinoToolStripMenuItem";
			this->configurarArduinoToolStripMenuItem->Size = System::Drawing::Size(190, 34);
			this->configurarArduinoToolStripMenuItem->Text = L"Configurar Arduino";
			this->configurarArduinoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::configurarArduinoToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cerrarSesionToolStripMenuItem1,
					this->salirToolStripMenuItem
			});
			this->cerrarSesiónToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cerrarSesiónToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesiónToolStripMenuItem.Image")));
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(85, 34);
			this->cerrarSesiónToolStripMenuItem->Text = L"Salir";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::cerrarSesiónToolStripMenuItem_Click);
			// 
			// cerrarSesionToolStripMenuItem1
			// 
			this->cerrarSesionToolStripMenuItem1->Name = L"cerrarSesionToolStripMenuItem1";
			this->cerrarSesionToolStripMenuItem1->Size = System::Drawing::Size(205, 34);
			this->cerrarSesionToolStripMenuItem1->Text = L"Cerrar Sesión";
			this->cerrarSesionToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainScreenForm::cerrarSesionToolStripMenuItem1_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(205, 34);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::salirToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1348, 37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(126, 161);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 154);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 36);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Mascotas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 470);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 36);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Dispensadores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 37);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 88);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Barry Bites";
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DispenserId,
					this->DispenserStatus, this->FoodQuantity, this->FoodQuantityDispenser, this->AssignedPet
			});
			this->dataGridView2->Location = System::Drawing::Point(23, 525);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1276, 260);
			this->dataGridView2->TabIndex = 15;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainScreenForm::dataGridView2_CellContentClick);
			// 
			// DispenserId
			// 
			this->DispenserId->HeaderText = L"Id";
			this->DispenserId->MinimumWidth = 6;
			this->DispenserId->Name = L"DispenserId";
			this->DispenserId->Width = 125;
			// 
			// DispenserStatus
			// 
			this->DispenserStatus->HeaderText = L"Estado";
			this->DispenserStatus->MinimumWidth = 6;
			this->DispenserStatus->Name = L"DispenserStatus";
			this->DispenserStatus->Width = 400;
			// 
			// FoodQuantity
			// 
			this->FoodQuantity->HeaderText = L"Comida en el plato";
			this->FoodQuantity->MinimumWidth = 6;
			this->FoodQuantity->Name = L"FoodQuantity";
			this->FoodQuantity->Width = 400;
			// 
			// FoodQuantityDispenser
			// 
			this->FoodQuantityDispenser->HeaderText = L"Comida en el dispensador";
			this->FoodQuantityDispenser->MinimumWidth = 6;
			this->FoodQuantityDispenser->Name = L"FoodQuantityDispenser";
			this->FoodQuantityDispenser->Width = 400;
			// 
			// AssignedPet
			// 
			this->AssignedPet->HeaderText = L"Mascota Asignada";
			this->AssignedPet->MinimumWidth = 6;
			this->AssignedPet->Name = L"AssignedPet";
			this->AssignedPet->Width = 400;
			// 
			// dgvPets
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPets->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dgvPets->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->PetId, this->Species,
					this->PetName, this->Weight, this->PetStatus, this->Column1, this->Column2
			});
			this->dgvPets->DefaultCellStyle = dataGridViewCellStyle1;
			this->dgvPets->GridColor = System::Drawing::SystemColors::ButtonShadow;
			this->dgvPets->Location = System::Drawing::Point(23, 193);
			this->dgvPets->Margin = System::Windows::Forms::Padding(2);
			this->dgvPets->Name = L"dgvPets";
			this->dgvPets->RowHeadersWidth = 51;
			this->dgvPets->Size = System::Drawing::Size(1276, 260);
			this->dgvPets->TabIndex = 16;
			this->dgvPets->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainScreenForm::dgvPets_CellClick);
			this->dgvPets->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainScreenForm::dataGridView1_CellContentClick);
			// 
			// PetId
			// 
			this->PetId->Frozen = true;
			this->PetId->HeaderText = L"Id";
			this->PetId->MinimumWidth = 6;
			this->PetId->Name = L"PetId";
			this->PetId->Width = 125;
			// 
			// Species
			// 
			this->Species->Frozen = true;
			this->Species->HeaderText = L"Especie";
			this->Species->MinimumWidth = 6;
			this->Species->Name = L"Species";
			this->Species->Width = 400;
			// 
			// PetName
			// 
			this->PetName->Frozen = true;
			this->PetName->HeaderText = L"Nombre Mascota";
			this->PetName->MinimumWidth = 6;
			this->PetName->Name = L"PetName";
			this->PetName->Width = 400;
			// 
			// Weight
			// 
			this->Weight->Frozen = true;
			this->Weight->HeaderText = L"Peso";
			this->Weight->MinimumWidth = 6;
			this->Weight->Name = L"Weight";
			this->Weight->Width = 400;
			// 
			// PetStatus
			// 
			this->PetStatus->Frozen = true;
			this->PetStatus->HeaderText = L"Estado";
			this->PetStatus->MinimumWidth = 6;
			this->PetStatus->Name = L"PetStatus";
			this->PetStatus->Width = 400;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// pbPetPhoto
			// 
			this->pbPetPhoto->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pbPetPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPetPhoto->Location = System::Drawing::Point(1316, 324);
			this->pbPetPhoto->Margin = System::Windows::Forms::Padding(2);
			this->pbPetPhoto->Name = L"pbPetPhoto";
			this->pbPetPhoto->Size = System::Drawing::Size(128, 130);
			this->pbPetPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPetPhoto->TabIndex = 17;
			this->pbPetPhoto->TabStop = false;
			this->pbPetPhoto->Click += gcnew System::EventHandler(this, &MainScreenForm::pbPetPhoto_Click);
			// 
			// MainScreenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 609);
			this->Controls->Add(this->pbPetPhoto);
			this->Controls->Add(this->dgvPets);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainScreenForm";
			this->Text = L"MainScreenForm";
			this->Load += gcnew System::EventHandler(this, &MainScreenForm::MainScreenForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPets))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPetPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void ShowPets() {
				List<Pet^>^ petsList = Service::QueryAllPets();
				if (petsList != nullptr) {
					dgvPets->Rows->Clear();
					for (int i = 0; i < petsList->Count; i++) {
							dgvPets->Rows->Add(gcnew array<String^> {"" + petsList[i]->Id,
								petsList[i]->Specie,
								petsList[i]->Name,
								"" + petsList[i]->Weight,
								petsList[i]->Status});
					}
				}
			}



	private: System::Void hisoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void añadirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void semanalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}



	private: System::Void MainScreenForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm(this);
		loginForm->ShowDialog();
		ShowPets();
	}
	public:
	void EnableAdminOptions() {
		addToolStripMenuItem->Visible = true;
		programarComidaToolStripMenuItem->Visible = true;
		generarReporteToolStripMenuItem->Visible = true;
	}

	void EnableInternalUserOptions() {
		addToolStripMenuItem->Visible = false;
		programarComidaToolStripMenuItem->Visible = true;
		generarReporteToolStripMenuItem->Visible = true;
	}

	void EnablePortalUserOptions() {
		addToolStripMenuItem->Visible = false;
		programarComidaToolStripMenuItem->Visible = false;
		generarReporteToolStripMenuItem->Visible = true;
	}

private: System::Void pbPetPhoto_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dgvPets_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//a
	if (dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {


		int Id = Convert::ToInt32(dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Pet^ pet = Service::QueryPetById(Id);
		if (pet->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(pet->Photo);
			pbPetPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbPetPhoto->Image = nullptr;
			pbPetPhoto->Invalidate();
		}
	}
	else {
		MessageBox::Show("Debe seleccionar una casilla válida");
	}
}
private: System::Void añadirUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarUsuarios^ UserForm = gcnew AgregarUsuarios();
	UserForm->ShowDialog();
}
	   
private: System::Void añadirComidaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddFood^ FoodForm = gcnew AddFood();
	FoodForm->ShowDialog();
	
}
private: System::Void añadirMascotaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PetForm^ petForm = gcnew PetForm();
	petForm->ShowDialog();
	
}
private: System::Void programarComidaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarHorarios^ ScheduleForm = gcnew AgregarHorarios();
	ScheduleForm->ShowDialog();
	
}

private: System::Void añadirDispensadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarDispensador^ agregarDispensador = gcnew AgregarDispensador();
	agregarDispensador->ShowDialog();
}
private: System::Void recargarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ShowPets();
}
private: System::Void cerrarSesionToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	Application::Restart();	
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void configurarArduinoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	DispenserConfiguration^ form = gcnew DispenserConfiguration();
	form->ShowDialog();
}
};
}
