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
	/// Resumen de BuscarComida
	/// </summary>
	public ref class BuscarComida : public System::Windows::Forms::Form
	{
	private: Form^ refForm;
	public:
		BuscarComida(Form^ refForm)
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
		~BuscarComida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtComida;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnBuscarMarca;
	private: System::Windows::Forms::DataGridView^ dgvComida;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnAgregar;

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
			this->txtComida = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarMarca = (gcnew System::Windows::Forms::Button());
			this->dgvComida = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtComida
			// 
			this->txtComida->Location = System::Drawing::Point(109, 34);
			this->txtComida->Margin = System::Windows::Forms::Padding(2);
			this->txtComida->Name = L"txtComida";
			this->txtComida->Size = System::Drawing::Size(142, 20);
			this->txtComida->TabIndex = 68;
			// 
			// btnBuscarMarca
			// 
			this->btnBuscarMarca->Location = System::Drawing::Point(139, 64);
			this->btnBuscarMarca->Margin = System::Windows::Forms::Padding(2);
			this->btnBuscarMarca->Name = L"btnBuscarMarca";
			this->btnBuscarMarca->Size = System::Drawing::Size(76, 22);
			this->btnBuscarMarca->TabIndex = 67;
			this->btnBuscarMarca->Text = L"Buscar";
			this->btnBuscarMarca->UseVisualStyleBackColor = true;
			this->btnBuscarMarca->Click += gcnew System::EventHandler(this, &BuscarComida::btnBuscarMarca_Click);
			// 
			// dgvComida
			// 
			this->dgvComida->AllowUserToAddRows = false;
			this->dgvComida->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvComida->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dgvComida->Location = System::Drawing::Point(42, 101);
			this->dgvComida->Margin = System::Windows::Forms::Padding(2);
			this->dgvComida->Name = L"dgvComida";
			this->dgvComida->RowHeadersVisible = false;
			this->dgvComida->RowHeadersWidth = 82;
			this->dgvComida->RowTemplate->Height = 33;
			this->dgvComida->Size = System::Drawing::Size(223, 170);
			this->dgvComida->TabIndex = 66;
			this->dgvComida->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BuscarComida::dgvMarcas_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Comidas";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 220;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 65;
			this->label1->Text = L"Comida";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox1->Location = System::Drawing::Point(24, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(254, 267);
			this->pictureBox1->TabIndex = 64;
			this->pictureBox1->TabStop = false;
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(164, 299);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(101, 28);
			this->btnCancelar->TabIndex = 76;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &BuscarComida::btnCancelar_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(29, 299);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(101, 28);
			this->btnAgregar->TabIndex = 75;
			this->btnAgregar->Text = L"Aceptar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &BuscarComida::btnAgregar_Click);
			// 
			// BuscarComida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 339);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->txtComida);
			this->Controls->Add(this->btnBuscarMarca);
			this->Controls->Add(this->dgvComida);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"BuscarComida";
			this->Text = L"BuscarComida";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvComida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ comidaSelec;
		public:
			void AddComidaGrid(String^ comida) {
				dgvComida->Rows->Add(gcnew array<String^>{comida});
			}
	private: System::Void dgvMarcas_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void btnBuscarMarca_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvComida->Rows->Clear();
	if (txtComida->Text->Trim()->Equals("")) {
		List<Food^>^ lista_comidas = Service::QueryAllFoods();
		for (int i = 0; i < lista_comidas->Count; i++)
			AddComidaGrid(lista_comidas[i]->Name);
	}
	else {
		List<Food^>^ c_buscados = Service::ConsultarInventarioComida(txtComida->Text);
		for (int i = 0; i < c_buscados->Count; i++)
			AddComidaGrid(c_buscados[i]->Name);
	}
}
private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
