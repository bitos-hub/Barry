#pragma once

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
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programarComidaToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ generarReporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesi�nToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirComidaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesi�nToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dgvPets;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Species;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DispenserId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DispenserStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodQuantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodQuantityDispenser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AssignedPet;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirDispensadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirMascotaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ semanalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mensualToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pbPetPhoto;




































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainScreenForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->a�adirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirDispensadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirMascotaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programarComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarReporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->semanalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mensualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesi�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesi�nToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->a�adirToolStripMenuItem,
					this->programarComidaToolStripMenuItem, this->generarReporteToolStripMenuItem, this->cerrarSesi�nToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 46);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// a�adirToolStripMenuItem
			// 
			this->a�adirToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->a�adirUsuarioToolStripMenuItem,
					this->a�adirComidaToolStripMenuItem, this->a�adirDispensadorToolStripMenuItem, this->a�adirMascotaToolStripMenuItem
			});
			this->a�adirToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->a�adirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirToolStripMenuItem.Image")));
			this->a�adirToolStripMenuItem->Name = L"a�adirToolStripMenuItem";
			this->a�adirToolStripMenuItem->Size = System::Drawing::Size(123, 42);
			this->a�adirToolStripMenuItem->Text = L"A�adir";
			this->a�adirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::a�adirToolStripMenuItem_Click);
			// 
			// a�adirUsuarioToolStripMenuItem
			// 
			this->a�adirUsuarioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirUsuarioToolStripMenuItem.Image")));
			this->a�adirUsuarioToolStripMenuItem->Name = L"a�adirUsuarioToolStripMenuItem";
			this->a�adirUsuarioToolStripMenuItem->Size = System::Drawing::Size(325, 42);
			this->a�adirUsuarioToolStripMenuItem->Text = L"A�adir Usuario";
			// 
			// a�adirComidaToolStripMenuItem
			// 
			this->a�adirComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirComidaToolStripMenuItem.Image")));
			this->a�adirComidaToolStripMenuItem->Name = L"a�adirComidaToolStripMenuItem";
			this->a�adirComidaToolStripMenuItem->Size = System::Drawing::Size(325, 42);
			this->a�adirComidaToolStripMenuItem->Text = L"A�adir Comida";
			// 
			// a�adirDispensadorToolStripMenuItem
			// 
			this->a�adirDispensadorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirDispensadorToolStripMenuItem.Image")));
			this->a�adirDispensadorToolStripMenuItem->Name = L"a�adirDispensadorToolStripMenuItem";
			this->a�adirDispensadorToolStripMenuItem->Size = System::Drawing::Size(325, 42);
			this->a�adirDispensadorToolStripMenuItem->Text = L"A�adir Dispensador";
			// 
			// a�adirMascotaToolStripMenuItem
			// 
			this->a�adirMascotaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirMascotaToolStripMenuItem.Image")));
			this->a�adirMascotaToolStripMenuItem->Name = L"a�adirMascotaToolStripMenuItem";
			this->a�adirMascotaToolStripMenuItem->Size = System::Drawing::Size(325, 42);
			this->a�adirMascotaToolStripMenuItem->Text = L"A�adir Mascota";
			// 
			// programarComidaToolStripMenuItem
			// 
			this->programarComidaToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->programarComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"programarComidaToolStripMenuItem.Image")));
			this->programarComidaToolStripMenuItem->Name = L"programarComidaToolStripMenuItem";
			this->programarComidaToolStripMenuItem->Size = System::Drawing::Size(258, 42);
			this->programarComidaToolStripMenuItem->Text = L"Programar Comida";
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
			this->generarReporteToolStripMenuItem->Size = System::Drawing::Size(230, 42);
			this->generarReporteToolStripMenuItem->Text = L"Generar Reporte";
			// 
			// semanalToolStripMenuItem
			// 
			this->semanalToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"semanalToolStripMenuItem.Image")));
			this->semanalToolStripMenuItem->Name = L"semanalToolStripMenuItem";
			this->semanalToolStripMenuItem->Size = System::Drawing::Size(206, 42);
			this->semanalToolStripMenuItem->Text = L"Semanal";
			this->semanalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::semanalToolStripMenuItem_Click);
			// 
			// mensualToolStripMenuItem
			// 
			this->mensualToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mensualToolStripMenuItem.Image")));
			this->mensualToolStripMenuItem->Name = L"mensualToolStripMenuItem";
			this->mensualToolStripMenuItem->Size = System::Drawing::Size(206, 42);
			this->mensualToolStripMenuItem->Text = L"Mensual";
			// 
			// cerrarSesi�nToolStripMenuItem
			// 
			this->cerrarSesi�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cerrarSesi�nToolStripMenuItem1,
					this->salirToolStripMenuItem
			});
			this->cerrarSesi�nToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cerrarSesi�nToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesi�nToolStripMenuItem.Image")));
			this->cerrarSesi�nToolStripMenuItem->Name = L"cerrarSesi�nToolStripMenuItem";
			this->cerrarSesi�nToolStripMenuItem->Size = System::Drawing::Size(102, 42);
			this->cerrarSesi�nToolStripMenuItem->Text = L"Salir";
			this->cerrarSesi�nToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainScreenForm::cerrarSesi�nToolStripMenuItem_Click);
			// 
			// cerrarSesi�nToolStripMenuItem1
			// 
			this->cerrarSesi�nToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesi�nToolStripMenuItem1.Image")));
			this->cerrarSesi�nToolStripMenuItem1->Name = L"cerrarSesi�nToolStripMenuItem1";
			this->cerrarSesi�nToolStripMenuItem1->Size = System::Drawing::Size(256, 42);
			this->cerrarSesi�nToolStripMenuItem1->Text = L"Cerrar Sesi�n";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(256, 42);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1797, 46);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(168, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 45);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Mascotas";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 579);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(224, 45);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Dispensadores";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(445, 110);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Barry Bites";
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DispenserId,
					this->DispenserStatus, this->FoodQuantity, this->FoodQuantityDispenser, this->AssignedPet
			});
			this->dataGridView2->Location = System::Drawing::Point(31, 646);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(1701, 320);
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
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPets->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvPets->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->PetId, this->Species,
					this->PetName, this->Weight, this->PetStatus
			});
			this->dgvPets->Location = System::Drawing::Point(31, 238);
			this->dgvPets->Name = L"dgvPets";
			this->dgvPets->RowHeadersWidth = 51;
			this->dgvPets->Size = System::Drawing::Size(1701, 320);
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
			// pbPetPhoto
			// 
			this->pbPetPhoto->Location = System::Drawing::Point(1743, 308);
			this->pbPetPhoto->Name = L"pbPetPhoto";
			this->pbPetPhoto->Size = System::Drawing::Size(169, 159);
			this->pbPetPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPetPhoto->TabIndex = 17;
			this->pbPetPhoto->TabStop = false;
			this->pbPetPhoto->Click += gcnew System::EventHandler(this, &MainScreenForm::pbPetPhoto_Click);
			// 
			// MainScreenForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1000);
			this->Controls->Add(this->pbPetPhoto);
			this->Controls->Add(this->dgvPets);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->MainMenuStrip = this->menuStrip1;
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


			void ClearControls() {
				for each (Control ^ control in this->Controls) {
					if (control->GetType() == TextBox::typeid) {
						dynamic_cast<TextBox^>(control)->Text = "";
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
}



private: System::Void MainScreenForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowPets();
}
private: System::Void pbPetPhoto_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void dgvPets_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//a
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
};
}
