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
	/// Resumen de BuscarModeloDispensador
	/// </summary>
	public ref class BuscarModeloDispensador : public System::Windows::Forms::Form
	{
	private:
		Form^ refForm;
	public:
		BuscarModeloDispensador(Form^ refForm)
		{
			this->refForm = refForm;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~BuscarModeloDispensador()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Button^ btnAgregar;











	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtMarca;

	private: System::Windows::Forms::Button^ btnBuscarMarca;
	private: System::Windows::Forms::DataGridView^ dgvMarcas;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtModelo;

	private: System::Windows::Forms::Button^ btnBuscarModelo;
	private: System::Windows::Forms::DataGridView^ dgvModelos;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtColor;

	private: System::Windows::Forms::Button^ btnBuscarColor;
	private: System::Windows::Forms::DataGridView^ dgvColores;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ btnCancelar;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;



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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarMarca = (gcnew System::Windows::Forms::Button());
			this->dgvMarcas = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarModelo = (gcnew System::Windows::Forms::Button());
			this->dgvModelos = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarColor = (gcnew System::Windows::Forms::Button());
			this->dgvColores = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMarcas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModelos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvColores))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(460, 399);
			this->btnAgregar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(135, 34);
			this->btnAgregar->TabIndex = 49;
			this->btnAgregar->Text = L"Aceptar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &BuscarModeloDispensador::btnAgregar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox1->Location = System::Drawing::Point(35, 43);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(339, 329);
			this->pictureBox1->TabIndex = 57;
			this->pictureBox1->TabStop = false;
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(148, 58);
			this->txtMarca->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(188, 22);
			this->txtMarca->TabIndex = 63;
			// 
			// btnBuscarMarca
			// 
			this->btnBuscarMarca->Location = System::Drawing::Point(188, 95);
			this->btnBuscarMarca->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBuscarMarca->Name = L"btnBuscarMarca";
			this->btnBuscarMarca->Size = System::Drawing::Size(101, 27);
			this->btnBuscarMarca->TabIndex = 62;
			this->btnBuscarMarca->Text = L"Buscar";
			this->btnBuscarMarca->UseVisualStyleBackColor = true;
			this->btnBuscarMarca->Click += gcnew System::EventHandler(this, &BuscarModeloDispensador::btnBuscarMarca_Click);
			// 
			// dgvMarcas
			// 
			this->dgvMarcas->AllowUserToAddRows = false;
			this->dgvMarcas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMarcas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dgvMarcas->Location = System::Drawing::Point(59, 140);
			this->dgvMarcas->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvMarcas->Name = L"dgvMarcas";
			this->dgvMarcas->RowHeadersVisible = false;
			this->dgvMarcas->RowHeadersWidth = 82;
			this->dgvMarcas->RowTemplate->Height = 33;
			this->dgvMarcas->Size = System::Drawing::Size(297, 209);
			this->dgvMarcas->TabIndex = 61;
			this->dgvMarcas->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarModeloDispensador::dgvMarcas_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Marcas";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 220;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 60;
			this->label1->Text = L"Marca";
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(505, 58);
			this->txtModelo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->Size = System::Drawing::Size(188, 22);
			this->txtModelo->TabIndex = 68;
			// 
			// btnBuscarModelo
			// 
			this->btnBuscarModelo->Location = System::Drawing::Point(547, 95);
			this->btnBuscarModelo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBuscarModelo->Name = L"btnBuscarModelo";
			this->btnBuscarModelo->Size = System::Drawing::Size(101, 27);
			this->btnBuscarModelo->TabIndex = 67;
			this->btnBuscarModelo->Text = L"Buscar";
			this->btnBuscarModelo->UseVisualStyleBackColor = true;
			this->btnBuscarModelo->Click += gcnew System::EventHandler(this, &BuscarModeloDispensador::btnBuscarModelo_Click);
			// 
			// dgvModelos
			// 
			this->dgvModelos->AllowUserToAddRows = false;
			this->dgvModelos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvModelos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->dgvModelos->Location = System::Drawing::Point(423, 140);
			this->dgvModelos->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvModelos->Name = L"dgvModelos";
			this->dgvModelos->RowHeadersVisible = false;
			this->dgvModelos->RowHeadersWidth = 82;
			this->dgvModelos->RowTemplate->Height = 33;
			this->dgvModelos->Size = System::Drawing::Size(297, 209);
			this->dgvModelos->TabIndex = 66;
			this->dgvModelos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarModeloDispensador::dgvModelos_CellClick);
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Modelos";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 220;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(419, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 16);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Modelo";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox2->Location = System::Drawing::Point(399, 43);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(339, 329);
			this->pictureBox2->TabIndex = 64;
			this->pictureBox2->TabStop = false;
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(876, 58);
			this->txtColor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtColor->Name = L"txtColor";
			this->txtColor->Size = System::Drawing::Size(188, 22);
			this->txtColor->TabIndex = 73;
			// 
			// btnBuscarColor
			// 
			this->btnBuscarColor->Location = System::Drawing::Point(916, 95);
			this->btnBuscarColor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBuscarColor->Name = L"btnBuscarColor";
			this->btnBuscarColor->Size = System::Drawing::Size(101, 27);
			this->btnBuscarColor->TabIndex = 72;
			this->btnBuscarColor->Text = L"Buscar";
			this->btnBuscarColor->UseVisualStyleBackColor = true;
			this->btnBuscarColor->Click += gcnew System::EventHandler(this, &BuscarModeloDispensador::btnBuscarColor_Click);
			// 
			// dgvColores
			// 
			this->dgvColores->AllowUserToAddRows = false;
			this->dgvColores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvColores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->dgvColores->Location = System::Drawing::Point(787, 140);
			this->dgvColores->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvColores->Name = L"dgvColores";
			this->dgvColores->RowHeadersVisible = false;
			this->dgvColores->RowHeadersWidth = 82;
			this->dgvColores->RowTemplate->Height = 33;
			this->dgvColores->Size = System::Drawing::Size(297, 209);
			this->dgvColores->TabIndex = 71;
			this->dgvColores->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarModeloDispensador::dgvColores_CellClick);
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Colores";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 220;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(801, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 16);
			this->label3->TabIndex = 70;
			this->label3->Text = L"Color";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox3->Location = System::Drawing::Point(763, 43);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(339, 329);
			this->pictureBox3->TabIndex = 69;
			this->pictureBox3->TabStop = false;
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(640, 399);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(135, 34);
			this->btnCancelar->TabIndex = 74;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &BuscarModeloDispensador::button4_Click);
			// 
			// BuscarModeloDispensador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1136, 455);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->btnBuscarColor);
			this->Controls->Add(this->dgvColores);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->btnBuscarModelo);
			this->Controls->Add(this->dgvModelos);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->txtMarca);
			this->Controls->Add(this->btnBuscarMarca);
			this->Controls->Add(this->dgvMarcas);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAgregar);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"BuscarModeloDispensador";
			this->Text = L"Busqueda de dispensadores";
			this->Load += gcnew System::EventHandler(this, &BuscarModeloDispensador::BuscarModeloDispensador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMarcas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvModelos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvColores))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		String^ marcaSelec;
		String^ modeloSelec;
		String^ colorSelec;
	private: System::Void BuscarModeloDispensador_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   public:
		   void AddMarcaGrid(String^ marca) {
			   dgvMarcas->Rows->Add(gcnew array<String^>{marca});
		   }
		   void AddModeloGrid(String^ modelo) {
			   dgvModelos->Rows->Add(gcnew array<String^>{modelo});
		   }
		   void AddColorGrid(String^ color) {
			   dgvColores->Rows->Add(gcnew array<String^>{color});
		   }
private: System::Void btnBuscarMarca_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvMarcas->Rows->Clear();
	if (txtMarca->Text->Trim()->Equals("")) {
		List<String^>^ lista_marcas = Service::ConsultarMarcas();
		for (int i = 0; i < lista_marcas->Count; i++)
			AddMarcaGrid(lista_marcas[i]);
	}
	else {
		List<String^>^ d_buscados = Service::ConsultarDispensadorMarca(txtMarca->Text);
		for (int i = 0; i < d_buscados->Count; i++)
			AddMarcaGrid(d_buscados[i]);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dgvMarcas_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dgvModelos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dgvColores_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void btnBuscarModelo_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvModelos->Rows->Clear();
	if (txtModelo->Text->Trim()->Equals("")) {
		List<String^>^ lista_modelos = Service::ConsultarModelos(marcaSelec);
		for (int i = 0; i < lista_modelos->Count; i++)
			AddModeloGrid(lista_modelos[i]);
	}
	else {
		List<String^>^ d_buscados = Service::ConsultarDispensadorModelo(txtModelo->Text,marcaSelec);
		for (int i = 0; i < d_buscados->Count; i++)
			AddModeloGrid(d_buscados[i]);
	}
}
private: System::Void btnBuscarColor_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvColores->Rows->Clear();
	if (txtColor->Text->Trim()->Equals("")) {
		List<String^>^ lista_colores = Service::ConsultarColores(marcaSelec);
		for (int i = 0; i < lista_colores->Count; i++)
			AddColorGrid(lista_colores[i]);
	}
	else {
		List<String^>^ d_buscados = Service::ConsultarDispensadorColor(txtColor->Text, marcaSelec);
		for (int i = 0; i < d_buscados->Count; i++)
			AddColorGrid(d_buscados[i]);
	}
}
};
}
