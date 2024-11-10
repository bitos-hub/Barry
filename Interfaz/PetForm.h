#pragma once

namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Barry;
	using namespace ServiceBarry;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de PetForm
	/// </summary>
	public ref class PetForm : public System::Windows::Forms::Form
	{
	public:
		PetForm(void)
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
		~PetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtPetName;
	private: System::Windows::Forms::TextBox^ txtPetWater;

	private: System::Windows::Forms::TextBox^ txtSpecie;
	private: System::Windows::Forms::TextBox^ txtWeight;
	private: System::Windows::Forms::TextBox^ txtFood;
	private: System::Windows::Forms::TextBox^ txtStatus;








	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dgvPets;






	private: System::Windows::Forms::MenuStrip^ menuStrip1;






	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesionToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem1;


	private: System::Windows::Forms::Button^ btnPetPhoto;
	private: System::Windows::Forms::PictureBox^ pbPetPhoto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Specie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodServing;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WaterServing;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;







































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PetForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPetName = (gcnew System::Windows::Forms::TextBox());
			this->txtPetWater = (gcnew System::Windows::Forms::TextBox());
			this->txtSpecie = (gcnew System::Windows::Forms::TextBox());
			this->txtWeight = (gcnew System::Windows::Forms::TextBox());
			this->txtFood = (gcnew System::Windows::Forms::TextBox());
			this->txtStatus = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dgvPets = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnPetPhoto = (gcnew System::Windows::Forms::Button());
			this->pbPetPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->PetId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PetName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Specie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FoodServing = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WaterServing = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPets))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPetPhoto))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(152, 471);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Agua (mL)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(148, 319);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Peso (kg)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(148, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Especie";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(151, 545);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 27);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Estado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(151, 396);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Porci�n (g)";
			this->label6->Click += gcnew System::EventHandler(this, &PetForm::label6_Click);
			// 
			// txtPetName
			// 
			this->txtPetName->Location = System::Drawing::Point(153, 194);
			this->txtPetName->Name = L"txtPetName";
			this->txtPetName->Size = System::Drawing::Size(193, 20);
			this->txtPetName->TabIndex = 6;
			// 
			// txtPetWater
			// 
			this->txtPetWater->Location = System::Drawing::Point(156, 501);
			this->txtPetWater->Name = L"txtPetWater";
			this->txtPetWater->Size = System::Drawing::Size(193, 20);
			this->txtPetWater->TabIndex = 7;
			// 
			// txtSpecie
			// 
			this->txtSpecie->Location = System::Drawing::Point(152, 273);
			this->txtSpecie->Name = L"txtSpecie";
			this->txtSpecie->Size = System::Drawing::Size(193, 20);
			this->txtSpecie->TabIndex = 8;
			// 
			// txtWeight
			// 
			this->txtWeight->Location = System::Drawing::Point(153, 349);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(193, 20);
			this->txtWeight->TabIndex = 9;
			// 
			// txtFood
			// 
			this->txtFood->Location = System::Drawing::Point(156, 426);
			this->txtFood->Name = L"txtFood";
			this->txtFood->Size = System::Drawing::Size(193, 20);
			this->txtFood->TabIndex = 10;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(156, 575);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(193, 20);
			this->txtStatus->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(426, 557);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(193, 38);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &PetForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(671, 557);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(193, 38);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &PetForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(910, 557);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(193, 38);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &PetForm::btnDelete_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(480, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(398, 91);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Mascotas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1195, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(168, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// dgvPets
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPets->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvPets->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->PetId, this->PetName,
					this->Specie, this->Weight, this->FoodServing, this->WaterServing, this->Status
			});
			this->dgvPets->Location = System::Drawing::Point(368, 172);
			this->dgvPets->Name = L"dgvPets";
			this->dgvPets->RowHeadersWidth = 51;
			this->dgvPets->Size = System::Drawing::Size(763, 349);
			this->dgvPets->TabIndex = 17;
			this->dgvPets->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PetForm::dgvPets_CellClick);
			this->dgvPets->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PetForm::dgvPets_CellContentClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1370, 38);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cerrarSesionToolStripMenuItem,
					this->salirToolStripMenuItem1
			});
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(85, 34);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// cerrarSesionToolStripMenuItem
			// 
			this->cerrarSesionToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesionToolStripMenuItem.Image")));
			this->cerrarSesionToolStripMenuItem->Name = L"cerrarSesionToolStripMenuItem";
			this->cerrarSesionToolStripMenuItem->Size = System::Drawing::Size(209, 34);
			this->cerrarSesionToolStripMenuItem->Text = L"Cerrar Sesi�n";
			this->cerrarSesionToolStripMenuItem->Click += gcnew System::EventHandler(this, &PetForm::cerrarSesionToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem1
			// 
			this->salirToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem1.Image")));
			this->salirToolStripMenuItem1->Name = L"salirToolStripMenuItem1";
			this->salirToolStripMenuItem1->Size = System::Drawing::Size(209, 34);
			this->salirToolStripMenuItem1->Text = L"Salir";
			this->salirToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PetForm::salirToolStripMenuItem1_Click);
			// 
			// btnPetPhoto
			// 
			this->btnPetPhoto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPetPhoto->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPetPhoto->Location = System::Drawing::Point(1156, 483);
			this->btnPetPhoto->Name = L"btnPetPhoto";
			this->btnPetPhoto->Size = System::Drawing::Size(193, 38);
			this->btnPetPhoto->TabIndex = 19;
			this->btnPetPhoto->Text = L"Foto";
			this->btnPetPhoto->UseVisualStyleBackColor = false;
			this->btnPetPhoto->Click += gcnew System::EventHandler(this, &PetForm::btnPetPhoto_Click);
			// 
			// pbPetPhoto
			// 
			this->pbPetPhoto->Location = System::Drawing::Point(1146, 259);
			this->pbPetPhoto->Name = L"pbPetPhoto";
			this->pbPetPhoto->Size = System::Drawing::Size(212, 206);
			this->pbPetPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPetPhoto->TabIndex = 20;
			this->pbPetPhoto->TabStop = false;
			// 
			// PetId
			// 
			this->PetId->HeaderText = L"Id";
			this->PetId->MinimumWidth = 6;
			this->PetId->Name = L"PetId";
			this->PetId->Width = 120;
			// 
			// PetName
			// 
			this->PetName->HeaderText = L"Nombre";
			this->PetName->MinimumWidth = 6;
			this->PetName->Name = L"PetName";
			this->PetName->Width = 120;
			// 
			// Specie
			// 
			this->Specie->HeaderText = L"Especie";
			this->Specie->MinimumWidth = 6;
			this->Specie->Name = L"Specie";
			this->Specie->Width = 120;
			// 
			// Weight
			// 
			this->Weight->HeaderText = L"Peso [kg]";
			this->Weight->MinimumWidth = 6;
			this->Weight->Name = L"Weight";
			this->Weight->Width = 150;
			// 
			// FoodServing
			// 
			this->FoodServing->HeaderText = L"Porci�n [kg]";
			this->FoodServing->MinimumWidth = 6;
			this->FoodServing->Name = L"FoodServing";
			this->FoodServing->Width = 170;
			// 
			// WaterServing
			// 
			this->WaterServing->HeaderText = L"Agua [mL]";
			this->WaterServing->Name = L"WaterServing";
			this->WaterServing->Width = 120;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Estado";
			this->Status->MinimumWidth = 6;
			this->Status->Name = L"Status";
			this->Status->Width = 120;
			// 
			// PetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 609);
			this->Controls->Add(this->pbPetPhoto);
			this->Controls->Add(this->btnPetPhoto);
			this->Controls->Add(this->dgvPets);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtStatus);
			this->Controls->Add(this->txtFood);
			this->Controls->Add(this->txtWeight);
			this->Controls->Add(this->txtSpecie);
			this->Controls->Add(this->txtPetWater);
			this->Controls->Add(this->txtPetName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PetForm";
			this->Text = L"PetForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &PetForm::PetForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPets))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPetPhoto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Pet^ pet = gcnew Pet();
			pet->Name = txtPetName->Text;
			pet->Weight = Convert::ToDouble(txtWeight->Text);
			pet->WeightEvolution->Add(pet->Weight);
			pet->WeightChanges->Add(DateTime::Now);
			pet->WaterServing = Convert::ToDouble(txtPetWater->Text);
			pet->WaterEvolution->Add(pet->WaterServing);
			pet->WaterChanges->Add(DateTime::Now);
			pet->Specie = txtSpecie->Text;
			pet->Status = txtStatus->Text;
			pet->FoodServing = Convert::ToDouble(txtFood->Text);
			pet->FoodEvolution->Add(pet->FoodServing);
			pet->FoodChanges->Add(DateTime::Now);
			int id = Service::AddPet(pet);

			if (pbPetPhoto != nullptr && pbPetPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPetPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				pet->Photo = ms->ToArray();
			}

			ShowPets();
			ClearControls();
			MessageBox::Show("Se ha agregado la mascota " + pet->Id + " - " + pet->Name);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar la mascota por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	public:
		void ShowPets() {
			List<Pet^>^ petsList = Service::QueryAllPets();
			if (petsList != nullptr) {
				dgvPets->Rows->Clear();
				for (int i = 0; i < petsList->Count; i++) {
					dgvPets->Rows->Add(gcnew array<String^> {"" + petsList[i]->Id,
						petsList[i]->Name,
						petsList[i]->Specie,
						"" + petsList[i]->Weight,
						"" + petsList[i]->FoodServing,
						"" + petsList[i]->WaterServing,
						petsList[i]->Status, });
				}
			}
		}
		void ClearControls() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
				if (control->GetType() == PictureBox::typeid) {
					dynamic_cast<PictureBox^>(control)->Image = nullptr;
					dynamic_cast<PictureBox^>(control)->Invalidate();
				}
			}
		}

	private: System::Void dgvPets_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {


			int Id = Convert::ToInt32(dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			Pet^ pet = Service::QueryPetById(Id);
			txtPetName->Text = pet->Name;
			txtWeight->Text = "" + pet->Weight;
			txtSpecie->Text = pet->Specie;
			txtStatus->Text = pet->Status;
			txtFood->Text = "" + pet->FoodServing;
			txtPetWater->Text = "" + pet->WaterServing;
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
			MessageBox::Show("Debe seleccionar una casilla v�lida");
		}
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ petId = dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		if (petId->Equals("")) {
			MessageBox::Show("Debe seleccionar una mascota");
			return;
		}
		try {
			int id = Convert::ToInt32(dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			String^ name = txtPetName->Text;
			double weight = Convert::ToDouble(txtWeight->Text);
			String^ specie = txtSpecie->Text;
			String^ status = txtStatus->Text;
			double foodServing = Convert::ToDouble(txtFood->Text);
			double waterServing = Convert::ToDouble(txtPetWater->Text);
			Pet^ pet = gcnew Pet(id, name, weight, specie, status, foodServing,waterServing);
			if (pbPetPhoto != nullptr && pbPetPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPetPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				pet->Photo = ms->ToArray();
			}
			Service::UpdatePet(pet);
			ShowPets();
			MessageBox::Show("Se ha modificado la mascota " + petId + "-" + name);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar la mascota por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ petId = dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString();
		if (petId->Equals("")) {
			MessageBox::Show("Debe seleccionar una mascota");
			return;
		}
		try {
			Service::DeletePet(Convert::ToInt32(petId));
			pbPetPhoto->Image = nullptr;
			pbPetPhoto->Invalidate();
			ShowPets();
			ClearControls();
			MessageBox::Show("Se ha eliminado la mascota con Id = " + petId + " de manera exitosa.");
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar la mascota por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void salirToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void PetForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowPets();
	}
	private: System::Void btnPetPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbPetPhoto->Image = gcnew Bitmap(ofd->FileName);
		}
	}
	private: System::Void cerrarSesionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		Application::Restart();
	}
	private: System::Void dgvPets_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
