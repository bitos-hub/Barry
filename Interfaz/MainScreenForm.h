#pragma once
#include "AddFood.h"
#include "AgregarUsuarios.h"
#include "LoginForm.h"
#include "PetForm.h"
#include "DispenserConfiguration.h"
#include "AgregarDispensador.h"
#include "UpdateWeightForm.h"
#include "ViewUsersForm.h"
#include "ModoDispensador.h"
#include "WeightReportForm.h"
#include "ReportForm.h"
#include "Caracteristicas.h"
#include "ExpensesReportForm.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesi�nToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirComidaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesionToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;















	private: System::Windows::Forms::ToolStripMenuItem^ a�adirMascotaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ semanalToolStripMenuItem;











	private: System::Windows::Forms::ComboBox^ cmbPets;



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pbPet;

	private: System::Windows::Forms::TextBox^ txtPetName;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtEspecie;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtWeight;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtStatus;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtPortion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtLastTimeFed;

	private: System::Windows::Forms::Button^ btnFeed;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtAssignedDispenser;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtFoodAvaibleContainer;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbtnBowlFullYes;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::TextBox^ txtAvaibleFoodPlate;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RadioButton^ rbtnBowlFullNo;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtAssignedPet;
	private: System::Windows::Forms::Label^ label15;

private: System::Windows::Forms::ToolStripMenuItem^ a�adirDispensadorToolStripMenuItem;
private: System::Windows::Forms::ComboBox^ cmbSchedules;

	private: System::Windows::Forms::TextBox^ txtFeedingSchedule;
private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;



	
	
	
private: System::Windows::Forms::TextBox^ txtLastWater;

private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ txtWater;

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ btnHydrate;
private: System::Windows::Forms::Button^ btnUpdateWeight;
private: System::Windows::Forms::ToolStripMenuItem^ recargarToolStripMenuItem;
private: System::Windows::Forms::ComboBox^ cmbDispenser;
private: System::Windows::Forms::ToolStripMenuItem^ pesosYRacionesToolStripMenuItem;
private: System::Windows::Forms::Button^ btnVerCaracteristicas;
private: System::Windows::Forms::ToolStripMenuItem^ econom�aToolStripMenuItem;




















































	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainScreenForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirMascotaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirDispensadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programarComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarReporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->semanalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pesosYRacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->econom�aToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recargarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesi�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesionToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbPets = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPet = (gcnew System::Windows::Forms::PictureBox());
			this->txtPetName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtEspecie = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtWeight = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtPortion = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtLastTimeFed = (gcnew System::Windows::Forms::TextBox());
			this->btnFeed = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtAssignedDispenser = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtFoodAvaibleContainer = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnBowlFullNo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnBowlFullYes = (gcnew System::Windows::Forms::RadioButton());
			this->txtAvaibleFoodPlate = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtAssignedPet = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->cmbSchedules = (gcnew System::Windows::Forms::ComboBox());
			this->txtFeedingSchedule = (gcnew System::Windows::Forms::TextBox());
			this->txtLastWater = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtWater = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->btnHydrate = (gcnew System::Windows::Forms::Button());
			this->btnUpdateWeight = (gcnew System::Windows::Forms::Button());
			this->cmbDispenser = (gcnew System::Windows::Forms::ComboBox());
			this->btnVerCaracteristicas = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPet))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->addToolStripMenuItem,
					this->usuariosToolStripMenuItem, this->programarComidaToolStripMenuItem, this->generarReporteToolStripMenuItem, this->recargarToolStripMenuItem,
					this->cerrarSesi�nToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(927, 38);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->a�adirUsuarioToolStripMenuItem,
					this->a�adirComidaToolStripMenuItem, this->a�adirMascotaToolStripMenuItem, this->a�adirDispensadorToolStripMenuItem
			});
			this->addToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->addToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addToolStripMenuItem.Image")));
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(102, 34);
			this->addToolStripMenuItem->Text = L"A�adir";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::a�adirToolStripMenuItem_Click);
			// 
			// a�adirUsuarioToolStripMenuItem
			// 
			this->a�adirUsuarioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirUsuarioToolStripMenuItem.Image")));
			this->a�adirUsuarioToolStripMenuItem->Name = L"a�adirUsuarioToolStripMenuItem";
			this->a�adirUsuarioToolStripMenuItem->Size = System::Drawing::Size(256, 34);
			this->a�adirUsuarioToolStripMenuItem->Text = L"A�adir Usuario";
			this->a�adirUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::a�adirUsuarioToolStripMenuItem_Click);
			// 
			// a�adirComidaToolStripMenuItem
			// 
			this->a�adirComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirComidaToolStripMenuItem.Image")));
			this->a�adirComidaToolStripMenuItem->Name = L"a�adirComidaToolStripMenuItem";
			this->a�adirComidaToolStripMenuItem->Size = System::Drawing::Size(256, 34);
			this->a�adirComidaToolStripMenuItem->Text = L"A�adir Comida";
			this->a�adirComidaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::a�adirComidaToolStripMenuItem_Click);
			// 
			// a�adirMascotaToolStripMenuItem
			// 
			this->a�adirMascotaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirMascotaToolStripMenuItem.Image")));
			this->a�adirMascotaToolStripMenuItem->Name = L"a�adirMascotaToolStripMenuItem";
			this->a�adirMascotaToolStripMenuItem->Size = System::Drawing::Size(256, 34);
			this->a�adirMascotaToolStripMenuItem->Text = L"A�adir Mascota";
			this->a�adirMascotaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::a�adirMascotaToolStripMenuItem_Click);
			// 
			// a�adirDispensadorToolStripMenuItem
			// 
			this->a�adirDispensadorToolStripMenuItem->Name = L"a�adirDispensadorToolStripMenuItem";
			this->a�adirDispensadorToolStripMenuItem->Size = System::Drawing::Size(256, 34);
			this->a�adirDispensadorToolStripMenuItem->Text = L"A�adir Dispensador";
			this->a�adirDispensadorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::a�adirDispensadorToolStripMenuItem_Click_1);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(101, 34);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::usuariosToolStripMenuItem_Click);
			// 
			// programarComidaToolStripMenuItem
			// 
			this->programarComidaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->programarComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"programarComidaToolStripMenuItem.Image")));
			this->programarComidaToolStripMenuItem->Name = L"programarComidaToolStripMenuItem";
			this->programarComidaToolStripMenuItem->Size = System::Drawing::Size(281, 34);
			this->programarComidaToolStripMenuItem->Text = L"Configuraci�n Dispensador";
			this->programarComidaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::programarComidaToolStripMenuItem_Click);
			// 
			// generarReporteToolStripMenuItem
			// 
			this->generarReporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->semanalToolStripMenuItem,
					this->pesosYRacionesToolStripMenuItem, this->econom�aToolStripMenuItem
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
			this->semanalToolStripMenuItem->Size = System::Drawing::Size(230, 34);
			this->semanalToolStripMenuItem->Text = L"Dispensaci�n";
			this->semanalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::semanalToolStripMenuItem_Click);
			// 
			// pesosYRacionesToolStripMenuItem
			// 
			this->pesosYRacionesToolStripMenuItem->Name = L"pesosYRacionesToolStripMenuItem";
			this->pesosYRacionesToolStripMenuItem->Size = System::Drawing::Size(230, 34);
			this->pesosYRacionesToolStripMenuItem->Text = L"Pesos y raciones";
			this->pesosYRacionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::pesosYRacionesToolStripMenuItem_Click);
			// 
			// econom�aToolStripMenuItem
			// 
			this->econom�aToolStripMenuItem->Name = L"econom�aToolStripMenuItem";
			this->econom�aToolStripMenuItem->Size = System::Drawing::Size(230, 34);
			this->econom�aToolStripMenuItem->Text = L"Econom�a";
			this->econom�aToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::econom�aToolStripMenuItem_Click);
			// 
			// recargarToolStripMenuItem
			// 
			this->recargarToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->recargarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"recargarToolStripMenuItem.Image")));
			this->recargarToolStripMenuItem->Name = L"recargarToolStripMenuItem";
			this->recargarToolStripMenuItem->Size = System::Drawing::Size(126, 34);
			this->recargarToolStripMenuItem->Text = L"Recargar";
			this->recargarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::recargarToolStripMenuItem_Click);
			// 
			// cerrarSesi�nToolStripMenuItem
			// 
			this->cerrarSesi�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cerrarSesionToolStripMenuItem1,
					this->salirToolStripMenuItem
			});
			this->cerrarSesi�nToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cerrarSesi�nToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesi�nToolStripMenuItem.Image")));
			this->cerrarSesi�nToolStripMenuItem->Name = L"cerrarSesi�nToolStripMenuItem";
			this->cerrarSesi�nToolStripMenuItem->Size = System::Drawing::Size(85, 34);
			this->cerrarSesi�nToolStripMenuItem->Text = L"Salir";
			this->cerrarSesi�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::cerrarSesi�nToolStripMenuItem_Click);
			// 
			// cerrarSesionToolStripMenuItem1
			// 
			this->cerrarSesionToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesionToolStripMenuItem1.Image")));
			this->cerrarSesionToolStripMenuItem1->Name = L"cerrarSesionToolStripMenuItem1";
			this->cerrarSesionToolStripMenuItem1->Size = System::Drawing::Size(205, 34);
			this->cerrarSesionToolStripMenuItem1->Text = L"Cerrar Sesi�n";
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
			this->pictureBox1->Location = System::Drawing::Point(798, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(113, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 154);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 36);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Mascotas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 407);
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
			this->label3->Location = System::Drawing::Point(9, 48);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 88);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Barry Bites";
			// 
			// cmbPets
			// 
			this->cmbPets->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmbPets->FormattingEnabled = true;
			this->cmbPets->Location = System::Drawing::Point(148, 160);
			this->cmbPets->Margin = System::Windows::Forms::Padding(2);
			this->cmbPets->Name = L"cmbPets";
			this->cmbPets->Size = System::Drawing::Size(154, 21);
			this->cmbPets->TabIndex = 18;
			this->cmbPets->SelectedIndexChanged += gcnew System::EventHandler(this, &MainScreenForm::cmbPets_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Location = System::Drawing::Point(23, 140);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(713, 238);
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(23, 392);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(713, 271);
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// pbPet
			// 
			this->pbPet->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPet->Location = System::Drawing::Point(588, 154);
			this->pbPet->Margin = System::Windows::Forms::Padding(2);
			this->pbPet->Name = L"pbPet";
			this->pbPet->Size = System::Drawing::Size(116, 122);
			this->pbPet->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPet->TabIndex = 22;
			this->pbPet->TabStop = false;
			// 
			// txtPetName
			// 
			this->txtPetName->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPetName->Location = System::Drawing::Point(38, 224);
			this->txtPetName->Margin = System::Windows::Forms::Padding(2);
			this->txtPetName->Name = L"txtPetName";
			this->txtPetName->ReadOnly = true;
			this->txtPetName->Size = System::Drawing::Size(152, 19);
			this->txtPetName->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 198);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 24);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 306);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 24);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Especie";
			// 
			// txtEspecie
			// 
			this->txtEspecie->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEspecie->Location = System::Drawing::Point(38, 332);
			this->txtEspecie->Margin = System::Windows::Forms::Padding(2);
			this->txtEspecie->Name = L"txtEspecie";
			this->txtEspecie->ReadOnly = true;
			this->txtEspecie->Size = System::Drawing::Size(152, 19);
			this->txtEspecie->TabIndex = 26;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gainsboro;
			this->label6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(44, 254);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 24);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Peso (kg)";
			// 
			// txtWeight
			// 
			this->txtWeight->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtWeight->Location = System::Drawing::Point(38, 280);
			this->txtWeight->Margin = System::Windows::Forms::Padding(2);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->ReadOnly = true;
			this->txtWeight->Size = System::Drawing::Size(152, 19);
			this->txtWeight->TabIndex = 28;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gainsboro;
			this->label7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(404, 307);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 24);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Estado";
			this->label7->Click += gcnew System::EventHandler(this, &MainScreenForm::label7_Click);
			// 
			// txtStatus
			// 
			this->txtStatus->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtStatus->Location = System::Drawing::Point(400, 332);
			this->txtStatus->Margin = System::Windows::Forms::Padding(2);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->ReadOnly = true;
			this->txtStatus->Size = System::Drawing::Size(160, 19);
			this->txtStatus->TabIndex = 30;
			this->txtStatus->TextChanged += gcnew System::EventHandler(this, &MainScreenForm::txtStatus_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gainsboro;
			this->label8->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(216, 254);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 24);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Porci�n (g)";
			// 
			// txtPortion
			// 
			this->txtPortion->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPortion->Location = System::Drawing::Point(211, 280);
			this->txtPortion->Margin = System::Windows::Forms::Padding(2);
			this->txtPortion->Name = L"txtPortion";
			this->txtPortion->ReadOnly = true;
			this->txtPortion->Size = System::Drawing::Size(152, 19);
			this->txtPortion->TabIndex = 32;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gainsboro;
			this->label9->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(405, 203);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(163, 24);
			this->label9->TabIndex = 35;
			this->label9->Text = L"Ultima vez alimentado";
			// 
			// txtLastTimeFed
			// 
			this->txtLastTimeFed->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastTimeFed->Location = System::Drawing::Point(400, 224);
			this->txtLastTimeFed->Margin = System::Windows::Forms::Padding(2);
			this->txtLastTimeFed->Name = L"txtLastTimeFed";
			this->txtLastTimeFed->ReadOnly = true;
			this->txtLastTimeFed->Size = System::Drawing::Size(160, 19);
			this->txtLastTimeFed->TabIndex = 36;
			this->txtLastTimeFed->TextChanged += gcnew System::EventHandler(this, &MainScreenForm::textBox1_TextChanged);
			// 
			// btnFeed
			// 
			this->btnFeed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnFeed->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnFeed->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFeed->Location = System::Drawing::Point(595, 280);
			this->btnFeed->Margin = System::Windows::Forms::Padding(2);
			this->btnFeed->Name = L"btnFeed";
			this->btnFeed->Size = System::Drawing::Size(100, 26);
			this->btnFeed->TabIndex = 37;
			this->btnFeed->Text = L"Alimentar";
			this->btnFeed->UseVisualStyleBackColor = false;
			this->btnFeed->Click += gcnew System::EventHandler(this, &MainScreenForm::btnFeed_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gainsboro;
			this->label10->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(212, 198);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(165, 24);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Dispensador Asignado";
			// 
			// txtAssignedDispenser
			// 
			this->txtAssignedDispenser->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAssignedDispenser->Location = System::Drawing::Point(211, 224);
			this->txtAssignedDispenser->Margin = System::Windows::Forms::Padding(2);
			this->txtAssignedDispenser->Name = L"txtAssignedDispenser";
			this->txtAssignedDispenser->ReadOnly = true;
			this->txtAssignedDispenser->Size = System::Drawing::Size(176, 19);
			this->txtAssignedDispenser->TabIndex = 38;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gainsboro;
			this->label11->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(24, 24);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(164, 24);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Comida Disponible (g)";
			// 
			// txtFoodAvaibleContainer
			// 
			this->txtFoodAvaibleContainer->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFoodAvaibleContainer->Location = System::Drawing::Point(23, 56);
			this->txtFoodAvaibleContainer->Margin = System::Windows::Forms::Padding(2);
			this->txtFoodAvaibleContainer->Name = L"txtFoodAvaibleContainer";
			this->txtFoodAvaibleContainer->ReadOnly = true;
			this->txtFoodAvaibleContainer->Size = System::Drawing::Size(152, 19);
			this->txtFoodAvaibleContainer->TabIndex = 40;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtFoodAvaibleContainer);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(336, 554);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox1->Size = System::Drawing::Size(262, 93);
			this->groupBox1->TabIndex = 44;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Contenedor";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbtnBowlFullNo);
			this->groupBox2->Controls->Add(this->rbtnBowlFullYes);
			this->groupBox2->Controls->Add(this->txtAvaibleFoodPlate);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(38, 487);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(285, 161);
			this->groupBox2->TabIndex = 45;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Plato";
			// 
			// rbtnBowlFullNo
			// 
			this->rbtnBowlFullNo->AutoSize = true;
			this->rbtnBowlFullNo->Location = System::Drawing::Point(100, 119);
			this->rbtnBowlFullNo->Margin = System::Windows::Forms::Padding(2);
			this->rbtnBowlFullNo->Name = L"rbtnBowlFullNo";
			this->rbtnBowlFullNo->Size = System::Drawing::Size(48, 28);
			this->rbtnBowlFullNo->TabIndex = 44;
			this->rbtnBowlFullNo->TabStop = true;
			this->rbtnBowlFullNo->Text = L"No";
			this->rbtnBowlFullNo->UseVisualStyleBackColor = true;
			// 
			// rbtnBowlFullYes
			// 
			this->rbtnBowlFullYes->AutoSize = true;
			this->rbtnBowlFullYes->Location = System::Drawing::Point(32, 119);
			this->rbtnBowlFullYes->Margin = System::Windows::Forms::Padding(2);
			this->rbtnBowlFullYes->Name = L"rbtnBowlFullYes";
			this->rbtnBowlFullYes->Size = System::Drawing::Size(42, 28);
			this->rbtnBowlFullYes->TabIndex = 43;
			this->rbtnBowlFullYes->TabStop = true;
			this->rbtnBowlFullYes->Text = L"S�";
			this->rbtnBowlFullYes->UseVisualStyleBackColor = true;
			// 
			// txtAvaibleFoodPlate
			// 
			this->txtAvaibleFoodPlate->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAvaibleFoodPlate->Location = System::Drawing::Point(28, 56);
			this->txtAvaibleFoodPlate->Margin = System::Windows::Forms::Padding(2);
			this->txtAvaibleFoodPlate->Name = L"txtAvaibleFoodPlate";
			this->txtAvaibleFoodPlate->ReadOnly = true;
			this->txtAvaibleFoodPlate->Size = System::Drawing::Size(152, 19);
			this->txtAvaibleFoodPlate->TabIndex = 40;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Gainsboro;
			this->label13->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(27, 84);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 24);
			this->label13->TabIndex = 42;
			this->label13->Text = L"�Est� lleno\?";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gainsboro;
			this->label12->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(28, 30);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(164, 24);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Comida Disponible (g)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Gainsboro;
			this->label14->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(332, 420);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 24);
			this->label14->TabIndex = 47;
			this->label14->Text = L"Macota Asignada";
			// 
			// txtAssignedPet
			// 
			this->txtAssignedPet->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAssignedPet->Location = System::Drawing::Point(336, 448);
			this->txtAssignedPet->Margin = System::Windows::Forms::Padding(2);
			this->txtAssignedPet->Name = L"txtAssignedPet";
			this->txtAssignedPet->ReadOnly = true;
			this->txtAssignedPet->Size = System::Drawing::Size(152, 19);
			this->txtAssignedPet->TabIndex = 46;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Gainsboro;
			this->label15->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(332, 481);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(177, 24);
			this->label15->TabIndex = 49;
			this->label15->Text = L"Horario de alimentaci�n";
			// 
			// cmbSchedules
			// 
			this->cmbSchedules->FormattingEnabled = true;
			this->cmbSchedules->Location = System::Drawing::Point(334, 507);
			this->cmbSchedules->Margin = System::Windows::Forms::Padding(2);
			this->cmbSchedules->Name = L"cmbSchedules";
			this->cmbSchedules->Size = System::Drawing::Size(154, 21);
			this->cmbSchedules->TabIndex = 50;
			// 
			// txtFeedingSchedule
			// 
			this->txtFeedingSchedule->Location = System::Drawing::Point(0, 0);
			this->txtFeedingSchedule->Name = L"txtFeedingSchedule";
			this->txtFeedingSchedule->Size = System::Drawing::Size(100, 20);
			this->txtFeedingSchedule->TabIndex = 0;
			// 
			// txtLastWater
			// 
			this->txtLastWater->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastWater->Location = System::Drawing::Point(400, 280);
			this->txtLastWater->Margin = System::Windows::Forms::Padding(2);
			this->txtLastWater->Name = L"txtLastWater";
			this->txtLastWater->ReadOnly = true;
			this->txtLastWater->Size = System::Drawing::Size(160, 19);
			this->txtLastWater->TabIndex = 51;
			this->txtLastWater->TextChanged += gcnew System::EventHandler(this, &MainScreenForm::txtLastWater_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Gainsboro;
			this->label16->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(405, 258);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(152, 24);
			this->label16->TabIndex = 50;
			this->label16->Text = L"Ultima vez hidratado";
			this->label16->Click += gcnew System::EventHandler(this, &MainScreenForm::label16_Click);
			// 
			// txtWater
			// 
			this->txtWater->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtWater->Location = System::Drawing::Point(211, 332);
			this->txtWater->Margin = System::Windows::Forms::Padding(2);
			this->txtWater->Name = L"txtWater";
			this->txtWater->ReadOnly = true;
			this->txtWater->Size = System::Drawing::Size(121, 19);
			this->txtWater->TabIndex = 53;
			this->txtWater->TextChanged += gcnew System::EventHandler(this, &MainScreenForm::textBox4_TextChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Gainsboro;
			this->label17->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(216, 309);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 24);
			this->label17->TabIndex = 52;
			this->label17->Text = L"Agua (mL)";
			this->label17->Click += gcnew System::EventHandler(this, &MainScreenForm::label17_Click);
			// 
			// btnHydrate
			// 
			this->btnHydrate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnHydrate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHydrate->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHydrate->Location = System::Drawing::Point(595, 313);
			this->btnHydrate->Margin = System::Windows::Forms::Padding(2);
			this->btnHydrate->Name = L"btnHydrate";
			this->btnHydrate->Size = System::Drawing::Size(100, 26);
			this->btnHydrate->TabIndex = 54;
			this->btnHydrate->Text = L"Hidratar";
			this->btnHydrate->UseVisualStyleBackColor = false;
			this->btnHydrate->Click += gcnew System::EventHandler(this, &MainScreenForm::btnHydrate_Click);
			// 
			// btnUpdateWeight
			// 
			this->btnUpdateWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUpdateWeight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUpdateWeight->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnUpdateWeight->Location = System::Drawing::Point(595, 345);
			this->btnUpdateWeight->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdateWeight->Name = L"btnUpdateWeight";
			this->btnUpdateWeight->Size = System::Drawing::Size(100, 26);
			this->btnUpdateWeight->TabIndex = 55;
			this->btnUpdateWeight->Text = L"Cambiar peso";
			this->btnUpdateWeight->UseVisualStyleBackColor = false;
			this->btnUpdateWeight->Click += gcnew System::EventHandler(this, &MainScreenForm::btnUpdateWeight_Click);
			// 
			// cmbDispenser
			// 
			this->cmbDispenser->FormattingEnabled = true;
			this->cmbDispenser->Location = System::Drawing::Point(40, 448);
			this->cmbDispenser->Name = L"cmbDispenser";
			this->cmbDispenser->Size = System::Drawing::Size(163, 21);
			this->cmbDispenser->TabIndex = 56;
			this->cmbDispenser->SelectedIndexChanged += gcnew System::EventHandler(this, &MainScreenForm::cmbDispenser_SelectedIndexChanged);
			// 
			// btnVerCaracteristicas
			// 
			this->btnVerCaracteristicas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnVerCaracteristicas->Location = System::Drawing::Point(606, 407);
			this->btnVerCaracteristicas->Margin = System::Windows::Forms::Padding(2);
			this->btnVerCaracteristicas->Name = L"btnVerCaracteristicas";
			this->btnVerCaracteristicas->Size = System::Drawing::Size(87, 37);
			this->btnVerCaracteristicas->TabIndex = 57;
			this->btnVerCaracteristicas->Text = L"Ver caracter�sticas";
			this->btnVerCaracteristicas->UseVisualStyleBackColor = false;
			this->btnVerCaracteristicas->Click += gcnew System::EventHandler(this, &MainScreenForm::btnVerCaracteristicas_Click);
			// 
			// MainScreenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 681);
			this->Controls->Add(this->btnVerCaracteristicas);
			this->Controls->Add(this->cmbDispenser);
			this->Controls->Add(this->btnUpdateWeight);
			this->Controls->Add(this->btnHydrate);
			this->Controls->Add(this->txtWater);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->txtLastWater);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->cmbSchedules);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtAssignedPet);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtAssignedDispenser);
			this->Controls->Add(this->btnFeed);
			this->Controls->Add(this->txtLastTimeFed);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtPortion);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtWeight);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtEspecie);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPetName);
			this->Controls->Add(this->pbPet);
			this->Controls->Add(this->cmbPets);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainScreenForm";
			this->Text = L"MainScreenForm";
			this->Load += gcnew System::EventHandler(this, &MainScreenForm::MainScreenForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPet))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void FillPetsComboPets() {
			List<Pet^>^ petsList = Service::QueryAllPets();
			if (petsList != nullptr) {
				cmbPets->Items->Clear();
				for each (Pet ^ pet in petsList) {
					cmbPets->Items->Add(gcnew ComboBoxItem(pet->Id,
						pet->Name));
				}
			}
		}
		void FillDispenserComboBox() {
			List<Dispenser^>^ dispenserList = Service::ConsultarTodosDispensadores();
			if (dispenserList != nullptr) {
				cmbDispenser->Items->Clear();
				for each (Dispenser ^ d in dispenserList) {
					cmbDispenser->Items->Add(gcnew ComboBoxItem(d->Id,
						"Dispensador " + d->Id));
				}
			}
		}
		void FillSchedulesComboBox(Dispenser^ d) {
			List<int>^ schedulesList = d->FeedingSchedule;
			cmbSchedules->Items->Clear();
			for each (int  d in schedulesList) {
				cmbSchedules->Items->Add("" + d);
			}

		}

		void ClearPetControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == PictureBox::typeid) {
					dynamic_cast<PictureBox^>(control)->Image = nullptr;
					dynamic_cast<PictureBox^>(control)->Invalidate();
				}
				if (control->GetType() == ComboBox::typeid) {
					dynamic_cast<ComboBox^>(control)->Text = "";
				}
			}
		}


	private: System::Void hisoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void a�adirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void cerrarSesi�nToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void semanalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ReportForm^ form = gcnew ReportForm(1);
		form->ShowDialog();
		
	}



	private: System::Void MainScreenForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm(this);
		loginForm->ShowDialog();
		FillPetsComboPets();
		FillDispenserComboBox();
		btnFeed->Enabled = false;
		btnHydrate->Enabled = false;
		btnUpdateWeight->Enabled = false;
	}
	public:
		void EnableAdminOptions() {
			addToolStripMenuItem->Enabled = true;
			programarComidaToolStripMenuItem->Enabled = true;
			generarReporteToolStripMenuItem->Enabled = true;
			usuariosToolStripMenuItem->Enabled = true;
		}

		void EnableInternalUserOptions() {
			addToolStripMenuItem->Enabled = false;
			programarComidaToolStripMenuItem->Enabled = true;
			generarReporteToolStripMenuItem->Enabled = true;
			usuariosToolStripMenuItem->Enabled = false;
		}

		void EnablePortalUserOptions() {
			addToolStripMenuItem->Enabled = false;
			programarComidaToolStripMenuItem->Enabled = false;
			generarReporteToolStripMenuItem->Enabled = true;
			usuariosToolStripMenuItem->Enabled = false;
		}

	private: System::Void pbPetPhoto_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void a�adirUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//ClearPetControls();
		AgregarUsuarios^ UserForm = gcnew AgregarUsuarios();
		UserForm->ShowDialog();
	}

	private: System::Void a�adirComidaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//ClearPetControls();
		AddFood^ FoodForm = gcnew AddFood();
		FoodForm->ShowDialog();

	}
	private: System::Void a�adirMascotaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//ClearPetControls();
		PetForm^ petForm = gcnew PetForm();
		petForm->ShowDialog();

	}
	private: System::Void programarComidaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//ClearPetControls();
		//AgregarHorarios^ agreg = gcnew AgregarHorarios();
		ModoDispensador^ modo = gcnew ModoDispensador(this);
		modo->ShowDialog();

	}

	private: System::Void a�adirDispensadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}/*
	private: System::Void recargarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}*/
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



	private: System::Void cmbPets_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Pet^ pet = Service::QueryPetById(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);
		txtPetName->Text = pet->Name;
		txtEspecie->Text = pet->Specie;
		txtWeight->Text = Convert::ToString(pet->Weight);
		txtPortion->Text = Convert::ToString(pet->FoodServing);
		txtWater->Text = Convert::ToString(pet->WaterServing);
		txtLastWater->Text = pet->LastTimeHidrated;
		txtLastTimeFed->Text = pet->LastTimeFeD;
		txtStatus->Text = pet->Status;
		if (pet->PetDispenser==nullptr || pet->PetDispenser->Id == 0) {
			txtAssignedDispenser->Text = "No hay dispensador asignado.";
		}
		else {
			txtAssignedDispenser->Text = "Dispensador " + Convert::ToString(pet->PetDispenser->Id);
		}

		if (pet->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(pet->Photo);
			pbPet->Image = Image::FromStream(ms);
		}
		else {
			pbPet->Image = nullptr;
			pbPet->Invalidate();
		}
		btnFeed->Enabled = true;
		btnHydrate->Enabled = true;
		btnUpdateWeight->Enabled = true;
	}

	private: System::Void btnFeed_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Pet^ pet = Service::QueryPetById(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);
			int id = pet->Id;
			if (pet->PetDispenser != nullptr) {
				String^ result = Service::DispenseFoodUART(id);
				MessageBox::Show(result);
				String^ LastTimeFed = ((DateTime^)DateTime::Now)->ToString("yyyy/MM/dd HH:mm:ss");
				pet->LastTimeFeD = LastTimeFed;
				Service::UpdatePet(pet);
				txtLastTimeFed->Text = LastTimeFed;
			}

			else {
				MessageBox::Show("No se pudo alimentar correctamente debido que tiene un dispensador asignado.");
			}
			
			//Food^ foodDispensed = Service::ConsultarComidaDispensador(pet);
			//Food^ foodDispensed = Service::QueryFoodbyId(pet->PetDispenser->ComidaAsignada->Id);
			//foodDispensed->FoodAmount = foodDispensed->FoodAmount - pet->FoodServing / 1000;
			//Service::UpdateFood(foodDispensed);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se pudo alimentar correctamente debido a:\n" + ex);
		}
	}
	private: System::Void a�adirDispensadorToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		AgregarDispensador^ form = gcnew AgregarDispensador();
		//ClearPetControls();
		form->ShowDialog();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtStatus_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnHydrate_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Pet^ pet = Service::QueryPetById(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);
		int id = pet->Id;
		if (pet->PetDispenser != nullptr) {

			String^ result = Service::DispenseWater(id);
			MessageBox::Show(result);
			String^ LastTimeHidrated = ((DateTime^)DateTime::Now)->ToString("yyyy/MM/dd HH:mm:ss");
			pet->LastTimeHidrated = LastTimeHidrated;
			Service::UpdatePet(pet);
			txtLastWater->Text = LastTimeHidrated;
		}
		else {
			MessageBox::Show("No se pudo hidratar correctamente debido que tiene un dispensador asignado.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se pudo hidratar correctamente debido a:\n" + ex);
	}
}
private: System::Void btnUpdateWeight_Click(System::Object^ sender, System::EventArgs^ e) {
	Pet^ pet = Service::QueryPetById(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);
	UpdateWeightForm^ weightForm = gcnew UpdateWeightForm(pet);
	weightForm->ShowDialog();
}
private: System::Void txtLastWater_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void recargarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FillPetsComboPets();
	FillDispenserComboBox();
	//ClearPetControls();
}
	   Dispenser^ dispenserSelect;
private: System::Void cmbDispenser_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	try {

		dispenserSelect = Service::ConsultarDispensadorPorId(((ComboBoxItem^)(cmbDispenser->Items[cmbDispenser->SelectedIndex]))->Value);
		Pet^ pet = Service::ConsultarMascotaAsignadaADispensador(dispenserSelect->Id);
		if (pet != nullptr) {
			txtAssignedPet->Text = pet->Name;
		}
		else {
			txtAssignedPet->Text = "No hay mascota asignada.";
		}
		FillSchedulesComboBox(dispenserSelect);
	}
	catch (Exception^ e) {

	}
}
private: System::Void usuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewUsersForm^ form = gcnew ViewUsersForm();
	form->ShowDialog();
}
private: System::Void pesosYRacionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	WeightReportForm^ form = gcnew WeightReportForm();
	form->ShowDialog();
}
private: System::Void btnVerCaracteristicas_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void econom�aToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ExpensesReportForm^ form = gcnew ExpensesReportForm();
	form->ShowDialog();
}
};
		   //combo box Dispensadores



}