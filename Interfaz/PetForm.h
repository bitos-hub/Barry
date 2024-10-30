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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::TextBox^ txtPetId;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;

































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PetForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPetName = (gcnew System::Windows::Forms::TextBox());
			this->txtPetId = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Location = System::Drawing::Point(201, 183);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(197, 297);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 35);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(197, 485);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 35);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Peso (kg)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(197, 391);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 35);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Especie";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(201, 671);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 35);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Estado";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(201, 580);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(162, 35);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Porción (g)";
			this->label6->Click += gcnew System::EventHandler(this, &PetForm::label6_Click);
			// 
			// txtPetName
			// 
			this->txtPetName->Location = System::Drawing::Point(204, 239);
			this->txtPetName->Margin = System::Windows::Forms::Padding(4);
			this->txtPetName->Name = L"txtPetName";
			this->txtPetName->Size = System::Drawing::Size(256, 22);
			this->txtPetName->TabIndex = 6;
			// 
			// txtPetId
			// 
			this->txtPetId->Location = System::Drawing::Point(203, 334);
			this->txtPetId->Margin = System::Windows::Forms::Padding(4);
			this->txtPetId->Name = L"txtPetId";
			this->txtPetId->Size = System::Drawing::Size(256, 22);
			this->txtPetId->TabIndex = 7;
			// 
			// txtSpecie
			// 
			this->txtSpecie->Location = System::Drawing::Point(203, 428);
			this->txtSpecie->Margin = System::Windows::Forms::Padding(4);
			this->txtSpecie->Name = L"txtSpecie";
			this->txtSpecie->Size = System::Drawing::Size(256, 22);
			this->txtSpecie->TabIndex = 8;
			// 
			// txtWeight
			// 
			this->txtWeight->Location = System::Drawing::Point(204, 522);
			this->txtWeight->Margin = System::Windows::Forms::Padding(4);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(256, 22);
			this->txtWeight->TabIndex = 9;
			// 
			// txtFood
			// 
			this->txtFood->Location = System::Drawing::Point(208, 617);
			this->txtFood->Margin = System::Windows::Forms::Padding(4);
			this->txtFood->Name = L"txtFood";
			this->txtFood->Size = System::Drawing::Size(256, 22);
			this->txtFood->TabIndex = 10;
			// 
			// txtStatus
			// 
			this->txtStatus->Location = System::Drawing::Point(208, 708);
			this->txtStatus->Margin = System::Windows::Forms::Padding(4);
			this->txtStatus->Name = L"txtStatus";
			this->txtStatus->Size = System::Drawing::Size(256, 22);
			this->txtStatus->TabIndex = 11;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(568, 686);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(257, 47);
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
			this->btnUpdate->Location = System::Drawing::Point(895, 686);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(257, 47);
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
			this->btnDelete->Location = System::Drawing::Point(1213, 686);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(257, 47);
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
			this->label7->Location = System::Drawing::Point(640, 52);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(499, 114);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Mascotas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1593, 52);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(224, 244);
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
			this->dgvPets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->PetId, this->PetName,
					this->Specie, this->Weight, this->FoodServing, this->Status
			});
			this->dgvPets->Location = System::Drawing::Point(491, 212);
			this->dgvPets->Margin = System::Windows::Forms::Padding(4);
			this->dgvPets->Name = L"dgvPets";
			this->dgvPets->RowHeadersWidth = 51;
			this->dgvPets->Size = System::Drawing::Size(1017, 430);
			this->dgvPets->TabIndex = 17;
			this->dgvPets->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PetForm::dgvPets_CellClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1827, 46);
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
			this->salirToolStripMenuItem->Size = System::Drawing::Size(102, 42);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// cerrarSesionToolStripMenuItem
			// 
			this->cerrarSesionToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesionToolStripMenuItem.Image")));
			this->cerrarSesionToolStripMenuItem->Name = L"cerrarSesionToolStripMenuItem";
			this->cerrarSesionToolStripMenuItem->Size = System::Drawing::Size(256, 42);
			this->cerrarSesionToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesionToolStripMenuItem->Click += gcnew System::EventHandler(this, &PetForm::cerrarSesionToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem1
			// 
			this->salirToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem1.Image")));
			this->salirToolStripMenuItem1->Name = L"salirToolStripMenuItem1";
			this->salirToolStripMenuItem1->Size = System::Drawing::Size(256, 42);
			this->salirToolStripMenuItem1->Text = L"Salir";
			this->salirToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PetForm::salirToolStripMenuItem1_Click);
			// 
			// btnPetPhoto
			// 
			this->btnPetPhoto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnPetPhoto->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPetPhoto->Location = System::Drawing::Point(1541, 594);
			this->btnPetPhoto->Margin = System::Windows::Forms::Padding(4);
			this->btnPetPhoto->Name = L"btnPetPhoto";
			this->btnPetPhoto->Size = System::Drawing::Size(257, 47);
			this->btnPetPhoto->TabIndex = 19;
			this->btnPetPhoto->Text = L"Foto";
			this->btnPetPhoto->UseVisualStyleBackColor = false;
			this->btnPetPhoto->Click += gcnew System::EventHandler(this, &PetForm::btnPetPhoto_Click);
			// 
			// pbPetPhoto
			// 
			this->pbPetPhoto->Location = System::Drawing::Point(1528, 319);
			this->pbPetPhoto->Margin = System::Windows::Forms::Padding(4);
			this->pbPetPhoto->Name = L"pbPetPhoto";
			this->pbPetPhoto->Size = System::Drawing::Size(283, 254);
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
			this->Weight->Width = 200;
			// 
			// FoodServing
			// 
			this->FoodServing->HeaderText = L"Porción [kg]";
			this->FoodServing->MinimumWidth = 6;
			this->FoodServing->Name = L"FoodServing";
			this->FoodServing->Width = 220;
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
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1827, 922);
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
			this->Controls->Add(this->txtPetId);
			this->Controls->Add(this->txtPetName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
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
		int id = Convert::ToInt32(txtPetId->Text);
		String^ name = txtPetName->Text;
		double weight = Convert::ToDouble(txtWeight->Text);
		String^ specie = txtSpecie->Text;
		String^ status = txtStatus->Text;
		double foodServing = Convert::ToDouble(txtFood->Text);
		Pet^ pet = gcnew Pet(id,name, weight, specie, status, foodServing);
		if (pbPetPhoto != nullptr && pbPetPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbPetPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			pet->Photo = ms->ToArray();
		}
		Service::AddPet(pet);
		ShowPets();
		ClearControls();
		MessageBox::Show("Se ha agregado la mascota " + id + " - " + name);
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
						petsList[i]->Status,});
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
		txtPetId->Text = "" + pet->Id;
		txtPetName->Text = pet->Name;
		txtWeight->Text = "" + pet->Weight;
		txtSpecie->Text = pet->Specie;
		txtStatus->Text = pet->Status;
		txtFood->Text = "" + pet->FoodServing;
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
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ petId = txtPetId->Text->Trim();
	if (petId->Equals("")) {
		MessageBox::Show("Debe seleccionar una mascota");
		return;
	}
	try {
		int id = Convert::ToInt32(txtPetId->Text);
		String^ name = txtPetName->Text;
		double weight = Convert::ToDouble(txtWeight->Text);
		String^ specie = txtSpecie->Text;
		String^ status = txtStatus->Text;
		double foodServing = Convert::ToDouble(txtFood->Text);
		Pet^ pet = gcnew Pet(id, name, weight, specie, status, foodServing);
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
	String^ petId = txtPetId->Text->Trim();
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
};
}
