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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PetName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Specie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodServing;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Status;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirComidaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ a�adirDispensadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programarComidaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generarReporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesi�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem1;
































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PetForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->PetId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PetName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Specie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FoodServing = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->a�adirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->a�adirDispensadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programarComidaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarReporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesi�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPets))->BeginInit();
			this->menuStrip1->SuspendLayout();
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
			this->label2->Location = System::Drawing::Point(148, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Id";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(148, 394);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Peso";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(148, 318);
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
			this->label6->Location = System::Drawing::Point(151, 471);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Porci�n";
			this->label6->Click += gcnew System::EventHandler(this, &PetForm::label6_Click);
			// 
			// txtPetName
			// 
			this->txtPetName->Location = System::Drawing::Point(153, 194);
			this->txtPetName->Name = L"txtPetName";
			this->txtPetName->Size = System::Drawing::Size(193, 20);
			this->txtPetName->TabIndex = 6;
			// 
			// txtPetId
			// 
			this->txtPetId->Location = System::Drawing::Point(152, 271);
			this->txtPetId->Name = L"txtPetId";
			this->txtPetId->Size = System::Drawing::Size(193, 20);
			this->txtPetId->TabIndex = 7;
			// 
			// txtSpecie
			// 
			this->txtSpecie->Location = System::Drawing::Point(152, 348);
			this->txtSpecie->Name = L"txtSpecie";
			this->txtSpecie->Size = System::Drawing::Size(193, 20);
			this->txtSpecie->TabIndex = 8;
			// 
			// txtWeight
			// 
			this->txtWeight->Location = System::Drawing::Point(153, 424);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(193, 20);
			this->txtWeight->TabIndex = 9;
			// 
			// txtFood
			// 
			this->txtFood->Location = System::Drawing::Point(156, 501);
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
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvPets->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvPets->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPets->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->PetId, this->PetName,
					this->Specie, this->Weight, this->FoodServing, this->Status
			});
			this->dgvPets->Location = System::Drawing::Point(385, 177);
			this->dgvPets->Name = L"dgvPets";
			this->dgvPets->Size = System::Drawing::Size(763, 349);
			this->dgvPets->TabIndex = 17;
			this->dgvPets->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PetForm::dgvPets_CellClick);
			// 
			// PetId
			// 
			this->PetId->HeaderText = L"Id";
			this->PetId->Name = L"PetId";
			this->PetId->Width = 120;
			// 
			// PetName
			// 
			this->PetName->HeaderText = L"Nombre";
			this->PetName->Name = L"PetName";
			this->PetName->Width = 120;
			// 
			// Specie
			// 
			this->Specie->HeaderText = L"Especie";
			this->Specie->Name = L"Specie";
			this->Specie->Width = 120;
			// 
			// Weight
			// 
			this->Weight->HeaderText = L"Peso";
			this->Weight->Name = L"Weight";
			this->Weight->Width = 120;
			// 
			// FoodServing
			// 
			this->FoodServing->HeaderText = L"Porci�n";
			this->FoodServing->Name = L"FoodServing";
			this->FoodServing->Width = 120;
			// 
			// Status
			// 
			this->Status->HeaderText = L"Estado";
			this->Status->Name = L"Status";
			this->Status->Width = 120;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->a�adirToolStripMenuItem,
					this->programarComidaToolStripMenuItem, this->generarReporteToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1370, 38);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// a�adirToolStripMenuItem
			// 
			this->a�adirToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->a�adirUsuarioToolStripMenuItem,
					this->a�adirComidaToolStripMenuItem, this->a�adirDispensadorToolStripMenuItem
			});
			this->a�adirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirToolStripMenuItem.Image")));
			this->a�adirToolStripMenuItem->Name = L"a�adirToolStripMenuItem";
			this->a�adirToolStripMenuItem->Size = System::Drawing::Size(102, 34);
			this->a�adirToolStripMenuItem->Text = L"A�adir ";
			// 
			// a�adirUsuarioToolStripMenuItem
			// 
			this->a�adirUsuarioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirUsuarioToolStripMenuItem.Image")));
			this->a�adirUsuarioToolStripMenuItem->Name = L"a�adirUsuarioToolStripMenuItem";
			this->a�adirUsuarioToolStripMenuItem->Size = System::Drawing::Size(256, 34);
			this->a�adirUsuarioToolStripMenuItem->Text = L"A�adir Usuario";
			// 
			// a�adirComidaToolStripMenuItem
			// 
			this->a�adirComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirComidaToolStripMenuItem.Image")));
			this->a�adirComidaToolStripMenuItem->Name = L"a�adirComidaToolStripMenuItem";
			this->a�adirComidaToolStripMenuItem->Size = System::Drawing::Size(256, 34);
			this->a�adirComidaToolStripMenuItem->Text = L"A�adir Comida";
			// 
			// a�adirDispensadorToolStripMenuItem
			// 
			this->a�adirDispensadorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"a�adirDispensadorToolStripMenuItem.Image")));
			this->a�adirDispensadorToolStripMenuItem->Name = L"a�adirDispensadorToolStripMenuItem";
			this->a�adirDispensadorToolStripMenuItem->Size = System::Drawing::Size(256, 34);
			this->a�adirDispensadorToolStripMenuItem->Text = L"A�adir Dispensador";
			// 
			// programarComidaToolStripMenuItem
			// 
			this->programarComidaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"programarComidaToolStripMenuItem.Image")));
			this->programarComidaToolStripMenuItem->Name = L"programarComidaToolStripMenuItem";
			this->programarComidaToolStripMenuItem->Size = System::Drawing::Size(207, 34);
			this->programarComidaToolStripMenuItem->Text = L"Programar Comida";
			// 
			// generarReporteToolStripMenuItem
			// 
			this->generarReporteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"generarReporteToolStripMenuItem.Image")));
			this->generarReporteToolStripMenuItem->Name = L"generarReporteToolStripMenuItem";
			this->generarReporteToolStripMenuItem->Size = System::Drawing::Size(188, 34);
			this->generarReporteToolStripMenuItem->Text = L"Generar Reporte";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->cerrarSesi�nToolStripMenuItem,
					this->salirToolStripMenuItem1
			});
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(81, 34);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// cerrarSesi�nToolStripMenuItem
			// 
			this->cerrarSesi�nToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesi�nToolStripMenuItem.Image")));
			this->cerrarSesi�nToolStripMenuItem->Name = L"cerrarSesi�nToolStripMenuItem";
			this->cerrarSesi�nToolStripMenuItem->Size = System::Drawing::Size(205, 34);
			this->cerrarSesi�nToolStripMenuItem->Text = L"Cerrar Sesi�n";
			// 
			// salirToolStripMenuItem1
			// 
			this->salirToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem1.Image")));
			this->salirToolStripMenuItem1->Name = L"salirToolStripMenuItem1";
			this->salirToolStripMenuItem1->Size = System::Drawing::Size(205, 34);
			this->salirToolStripMenuItem1->Text = L"Salir";
			this->salirToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PetForm::salirToolStripMenuItem1_Click);
			// 
			// PetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
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
			this->Name = L"PetForm";
			this->Text = L"PetForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPets))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
		
		Service::AddPet(pet);
		ShowPets();
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
			}
		}

private: System::Void dgvPets_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int Id = Convert::ToInt32(dgvPets->Rows[dgvPets->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Pet^ pet = Service::QueryPetById(Id);
	txtPetId->Text = "" + pet->Id;
	txtPetName->Text = pet->Name;
	txtWeight->Text = "" + pet->Weight;
	txtSpecie->Text = pet->Specie;
	txtStatus->Text = pet->Status;
	txtFood->Text = "" + pet->FoodServing;
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
};
}
