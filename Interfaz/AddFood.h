#pragma once

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
	/// Resumen de AddFood
	/// </summary>
	public ref class AddFood : public System::Windows::Forms::Form
	{
	public:
		AddFood(void)
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
		~AddFood()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ FoodPricetxt;

	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ FoodNametxt;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ FoodAmountxt;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ AddFoodbtn;
	private: System::Windows::Forms::DataGridView^ foodGrid;





	private: System::Windows::Forms::Button^ UpdateFoodbtn;
	private: System::Windows::Forms::Button^ DeleteFoodbtn;
	private: System::Windows::Forms::TextBox^ Statustxt;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ o;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodNamebx;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brandbx;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodPricbx;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FoodAmount;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::TextBox^ FoodBrandtxt;
	private: System::Windows::Forms::TextBox^ FoodIdtxt;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;






	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesionToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem1;












	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddFood::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->FoodPricetxt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FoodNametxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FoodAmountxt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->AddFoodbtn = (gcnew System::Windows::Forms::Button());
			this->foodGrid = (gcnew System::Windows::Forms::DataGridView());
			this->o = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FoodNamebx = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brandbx = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FoodPricbx = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FoodAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UpdateFoodbtn = (gcnew System::Windows::Forms::Button());
			this->DeleteFoodbtn = (gcnew System::Windows::Forms::Button());
			this->Statustxt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->FoodBrandtxt = (gcnew System::Windows::Forms::TextBox());
			this->FoodIdtxt = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->foodGrid))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// FoodPricetxt
			// 
			this->FoodPricetxt->Location = System::Drawing::Point(161, 506);
			this->FoodPricetxt->Margin = System::Windows::Forms::Padding(4);
			this->FoodPricetxt->Name = L"FoodPricetxt";
			this->FoodPricetxt->Size = System::Drawing::Size(343, 22);
			this->FoodPricetxt->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(155, 467);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 35);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Precio [$]";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(155, 402);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 35);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Marca";
			// 
			// FoodNametxt
			// 
			this->FoodNametxt->BackColor = System::Drawing::SystemColors::HighlightText;
			this->FoodNametxt->Location = System::Drawing::Point(161, 376);
			this->FoodNametxt->Margin = System::Windows::Forms::Padding(4);
			this->FoodNametxt->Name = L"FoodNametxt";
			this->FoodNametxt->Size = System::Drawing::Size(343, 22);
			this->FoodNametxt->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 337);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 35);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Nombre";
			// 
			// FoodAmountxt
			// 
			this->FoodAmountxt->BackColor = System::Drawing::SystemColors::HighlightText;
			this->FoodAmountxt->Location = System::Drawing::Point(161, 571);
			this->FoodAmountxt->Margin = System::Windows::Forms::Padding(4);
			this->FoodAmountxt->Name = L"FoodAmountxt";
			this->FoodAmountxt->Size = System::Drawing::Size(343, 22);
			this->FoodAmountxt->TabIndex = 20;
			this->FoodAmountxt->TextChanged += gcnew System::EventHandler(this, &AddFood::FoodAmountxt_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(155, 532);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(197, 35);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Cantidad [kg]";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(289, 143);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1108, 114);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Inventario de comida";
			this->label4->Click += gcnew System::EventHandler(this, &AddFood::label4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(193, 164);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(82, 71);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &AddFood::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox3->Location = System::Drawing::Point(136, 109);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1623, 817);
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			// 
			// AddFoodbtn
			// 
			this->AddFoodbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->AddFoodbtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddFoodbtn->Location = System::Drawing::Point(161, 685);
			this->AddFoodbtn->Name = L"AddFoodbtn";
			this->AddFoodbtn->Size = System::Drawing::Size(343, 55);
			this->AddFoodbtn->TabIndex = 24;
			this->AddFoodbtn->Text = L"Añadir";
			this->AddFoodbtn->UseVisualStyleBackColor = false;
			this->AddFoodbtn->Click += gcnew System::EventHandler(this, &AddFood::AddFoodbtn_Click);
			// 
			// foodGrid
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Gadugi", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->foodGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->foodGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->foodGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->o, this->FoodNamebx,
					this->Brandbx, this->FoodPricbx, this->FoodAmount, this->Column1
			});
			this->foodGrid->Location = System::Drawing::Point(532, 277);
			this->foodGrid->Name = L"foodGrid";
			this->foodGrid->RowHeadersWidth = 51;
			this->foodGrid->RowTemplate->Height = 24;
			this->foodGrid->Size = System::Drawing::Size(1199, 592);
			this->foodGrid->TabIndex = 25;
			this->foodGrid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddFood::foodGrid_CellClick);
			// 
			// o
			// 
			this->o->HeaderText = L"Id";
			this->o->MinimumWidth = 6;
			this->o->Name = L"o";
			this->o->Width = 125;
			// 
			// FoodNamebx
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->FoodNamebx->DefaultCellStyle = dataGridViewCellStyle2;
			this->FoodNamebx->DividerWidth = 2;
			this->FoodNamebx->FillWeight = 150;
			this->FoodNamebx->HeaderText = L"Nombre";
			this->FoodNamebx->MinimumWidth = 6;
			this->FoodNamebx->Name = L"FoodNamebx";
			this->FoodNamebx->Width = 200;
			// 
			// Brandbx
			// 
			this->Brandbx->DividerWidth = 2;
			this->Brandbx->FillWeight = 150;
			this->Brandbx->HeaderText = L"Marca";
			this->Brandbx->MinimumWidth = 6;
			this->Brandbx->Name = L"Brandbx";
			this->Brandbx->Width = 200;
			// 
			// FoodPricbx
			// 
			this->FoodPricbx->DividerWidth = 2;
			this->FoodPricbx->FillWeight = 150;
			this->FoodPricbx->HeaderText = L"Precio";
			this->FoodPricbx->MinimumWidth = 6;
			this->FoodPricbx->Name = L"FoodPricbx";
			this->FoodPricbx->Width = 200;
			// 
			// FoodAmount
			// 
			this->FoodAmount->DividerWidth = 2;
			this->FoodAmount->FillWeight = 150;
			this->FoodAmount->HeaderText = L"Cantidad [kg]";
			this->FoodAmount->MinimumWidth = 6;
			this->FoodAmount->Name = L"FoodAmount";
			this->FoodAmount->Width = 200;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Estado";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// UpdateFoodbtn
			// 
			this->UpdateFoodbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->UpdateFoodbtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateFoodbtn->Location = System::Drawing::Point(161, 761);
			this->UpdateFoodbtn->Name = L"UpdateFoodbtn";
			this->UpdateFoodbtn->Size = System::Drawing::Size(343, 55);
			this->UpdateFoodbtn->TabIndex = 26;
			this->UpdateFoodbtn->Text = L"Actualizar";
			this->UpdateFoodbtn->UseVisualStyleBackColor = false;
			this->UpdateFoodbtn->Click += gcnew System::EventHandler(this, &AddFood::UpdateFoodbtn_Click);
			// 
			// DeleteFoodbtn
			// 
			this->DeleteFoodbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->DeleteFoodbtn->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteFoodbtn->Location = System::Drawing::Point(161, 834);
			this->DeleteFoodbtn->Name = L"DeleteFoodbtn";
			this->DeleteFoodbtn->Size = System::Drawing::Size(343, 55);
			this->DeleteFoodbtn->TabIndex = 27;
			this->DeleteFoodbtn->Text = L"Eliminar";
			this->DeleteFoodbtn->UseVisualStyleBackColor = false;
			this->DeleteFoodbtn->Click += gcnew System::EventHandler(this, &AddFood::DeleteFoodbtn_Click);
			// 
			// Statustxt
			// 
			this->Statustxt->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Statustxt->Location = System::Drawing::Point(161, 636);
			this->Statustxt->Margin = System::Windows::Forms::Padding(4);
			this->Statustxt->Name = L"Statustxt";
			this->Statustxt->Size = System::Drawing::Size(343, 22);
			this->Statustxt->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(155, 597);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 35);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Estado";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(155, 272);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 35);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Id";
			// 
			// FoodBrandtxt
			// 
			this->FoodBrandtxt->Location = System::Drawing::Point(165, 440);
			this->FoodBrandtxt->Name = L"FoodBrandtxt";
			this->FoodBrandtxt->Size = System::Drawing::Size(338, 22);
			this->FoodBrandtxt->TabIndex = 32;
			// 
			// FoodIdtxt
			// 
			this->FoodIdtxt->Location = System::Drawing::Point(165, 310);
			this->FoodIdtxt->Name = L"FoodIdtxt";
			this->FoodIdtxt->Size = System::Drawing::Size(339, 22);
			this->FoodIdtxt->TabIndex = 33;
			this->FoodIdtxt->TextChanged += gcnew System::EventHandler(this, &AddFood::FoodIdtxt_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1924, 46);
			this->menuStrip1->TabIndex = 34;
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
			this->cerrarSesionToolStripMenuItem->Click += gcnew System::EventHandler(this, &AddFood::cerrarSesionToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem1
			// 
			this->salirToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem1.Image")));
			this->salirToolStripMenuItem1->Name = L"salirToolStripMenuItem1";
			this->salirToolStripMenuItem1->Size = System::Drawing::Size(256, 42);
			this->salirToolStripMenuItem1->Text = L"Salir";
			this->salirToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AddFood::salirToolStripMenuItem1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1797, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(168, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// AddFood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->FoodIdtxt);
			this->Controls->Add(this->FoodBrandtxt);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Statustxt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->DeleteFoodbtn);
			this->Controls->Add(this->UpdateFoodbtn);
			this->Controls->Add(this->foodGrid);
			this->Controls->Add(this->AddFoodbtn);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->FoodAmountxt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->FoodPricetxt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FoodNametxt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AddFood";
			this->Text = L"AddFood";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AddFood::AddFood_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->foodGrid))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddFoodbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			//int id = Convert::ToInt32(FoodIdtxt->Text);
			Food^ food = gcnew Food();
			food->Name = FoodNametxt->Text;
			food->FoodBrand = FoodBrandtxt->Text;
			food->Status = Statustxt->Text;
			food->FoodPrice = Convert::ToDouble(FoodPricetxt->Text);
			food->FoodAmount = Convert::ToDouble(FoodAmountxt->Text);

			Service::AddFood(food);
			ShowFoods();
			Clear();
			MessageBox::Show("Comida agregada con éxito");
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar la mascota por el siguiente motivo:\n" +
				ex->Message);
		}

	}
	private: System::Void UpdateFoodbtn_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ Id = FoodIdtxt->Text->Trim();
		if (Id->Equals("")) {
			MessageBox::Show("Debe seleccionar una comida");
			return;
		}
		try {
			int id = Convert::ToInt32(Id);
			String^ foodName = FoodNametxt->Text;
			String^ brand = FoodBrandtxt->Text;
			String^ status = Statustxt->Text;
			double foodPrice = Convert::ToDouble(FoodPricetxt->Text);
			double foodAmount = Convert::ToDouble(FoodAmountxt->Text);


			Food^ food = gcnew Food(id, brand, foodPrice, foodName, status, foodAmount);
			Service::UpdateFood(food);
			ShowFoods();
			Clear();
			MessageBox::Show("Se ha modificado la comida " + foodName);
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido modificar la comida por el siguiente motivo:\n" +
				ex->Message);
		}

	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FoodAmountxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public:
		void ShowFoods() {
			List<Food^>^ foodList = Service::QueryAllFoods();
			if (foodList != nullptr) {
				foodGrid->Rows->Clear();
				for (int i = 0; i < foodList->Count; i++) {
					foodGrid->Rows->Add(gcnew array<String^> {"" + foodList[i]->Id,
						foodList[i]->Name,
						foodList[i]->FoodBrand,
						"" + foodList[i]->FoodPrice,
						"" + foodList[i]->FoodAmount,
						foodList[i]->Status});
				}
			}
		}
		void Clear() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Text = "";
				}
			}
		}
	private: System::Void DeleteFoodbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Id = FoodIdtxt->Text->Trim();
		if (Id->Equals("")) {
			MessageBox::Show("Debe seleccionar una comida");
			return;
		}
		try {
			Service::DeleteFood(Convert::ToInt32(Id));
			ShowFoods();
			Clear();
			MessageBox::Show("Se ha eliminado la comida ");
		}
		catch (Exception^ ex) {
			MessageBox::Show("No ha sido posible eliminar la comida por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void foodGrid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (foodGrid->Rows[foodGrid->SelectedCells[0]->RowIndex]->Cells[0]->Value != nullptr) {


			int Id = Convert::ToInt32(foodGrid->Rows[foodGrid->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			Food^ food = Service::QueryFoodbyId(Id);
			FoodIdtxt->Text = "" + Id;
			FoodNametxt->Text = food->Name;
			FoodBrandtxt->Text = food->FoodBrand;
			Statustxt->Text = food->Status;
			FoodPricetxt->Text = "" + food->FoodPrice;
			FoodAmountxt->Text = "" + food->FoodAmount;
		}
		else {
			MessageBox::Show("Debe seleccionar una casilla válida.");
		}
	}
	private: System::Void añadirMascotasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void FoodIdtxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddFood_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowFoods();
	}
	private: System::Void cerrarSesionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		Application::Restart();
	}
	};
}