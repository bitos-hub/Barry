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
	/// Resumen de Caracteristicas
	/// </summary>
	public ref class Caracteristicas : public System::Windows::Forms::Form
	{
		Dispenser^ dispensadorSeleccionado;
	public:
		Caracteristicas(Dispenser^ dispensadorSeleccionado)
		{
			this->dispensadorSeleccionado = dispensadorSeleccionado;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Caracteristicas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtColor;
	protected:
	private: System::Windows::Forms::TextBox^ txtModelo;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtMarca;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtFuente;
	private: System::Windows::Forms::TextBox^ txtAlto;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtAncho;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtLargo;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtMaterial;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtCapacidad;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtID;

	private: System::Windows::Forms::Label^ label2;

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
			this->txtColor = (gcnew System::Windows::Forms::TextBox());
			this->txtModelo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtFuente = (gcnew System::Windows::Forms::TextBox());
			this->txtAlto = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtAncho = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtLargo = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtMaterial = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtCapacidad = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtColor
			// 
			this->txtColor->Location = System::Drawing::Point(209, 155);
			this->txtColor->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtColor->Name = L"txtColor";
			this->txtColor->ReadOnly = true;
			this->txtColor->Size = System::Drawing::Size(176, 22);
			this->txtColor->TabIndex = 79;
			// 
			// txtModelo
			// 
			this->txtModelo->Location = System::Drawing::Point(209, 113);
			this->txtModelo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtModelo->Name = L"txtModelo";
			this->txtModelo->ReadOnly = true;
			this->txtModelo->Size = System::Drawing::Size(176, 22);
			this->txtModelo->TabIndex = 78;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(139, 159);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 16);
			this->label7->TabIndex = 77;
			this->label7->Text = L"Color";
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(209, 75);
			this->txtMarca->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->ReadOnly = true;
			this->txtMarca->Size = System::Drawing::Size(176, 22);
			this->txtMarca->TabIndex = 76;
			this->txtMarca->TextChanged += gcnew System::EventHandler(this, &Caracteristicas::txtMarca_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(139, 117);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 16);
			this->label8->TabIndex = 75;
			this->label8->Text = L"Modelo";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(139, 79);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(45, 16);
			this->label13->TabIndex = 74;
			this->label13->Text = L"Marca";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox1->Location = System::Drawing::Point(120, 63);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(287, 129);
			this->pictureBox1->TabIndex = 73;
			this->pictureBox1->TabStop = false;
			// 
			// txtFuente
			// 
			this->txtFuente->Location = System::Drawing::Point(245, 372);
			this->txtFuente->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtFuente->Name = L"txtFuente";
			this->txtFuente->ReadOnly = true;
			this->txtFuente->Size = System::Drawing::Size(176, 22);
			this->txtFuente->TabIndex = 71;
			// 
			// txtAlto
			// 
			this->txtAlto->Location = System::Drawing::Point(431, 244);
			this->txtAlto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtAlto->Name = L"txtAlto";
			this->txtAlto->ReadOnly = true;
			this->txtAlto->Size = System::Drawing::Size(87, 22);
			this->txtAlto->TabIndex = 70;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(377, 247);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 16);
			this->label12->TabIndex = 69;
			this->label12->Text = L"Altura";
			// 
			// txtAncho
			// 
			this->txtAncho->Location = System::Drawing::Point(257, 244);
			this->txtAncho->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtAncho->Name = L"txtAncho";
			this->txtAncho->ReadOnly = true;
			this->txtAncho->Size = System::Drawing::Size(87, 22);
			this->txtAncho->TabIndex = 68;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(199, 247);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 16);
			this->label11->TabIndex = 67;
			this->label11->Text = L"Ancho";
			// 
			// txtLargo
			// 
			this->txtLargo->Location = System::Drawing::Point(83, 244);
			this->txtLargo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtLargo->Name = L"txtLargo";
			this->txtLargo->ReadOnly = true;
			this->txtLargo->Size = System::Drawing::Size(87, 22);
			this->txtLargo->TabIndex = 66;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 247);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 16);
			this->label10->TabIndex = 65;
			this->label10->Text = L"Largo";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 213);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(216, 16);
			this->label9->TabIndex = 64;
			this->label9->Text = L"Dimensiones del dispensador (cm)";
			// 
			// txtMaterial
			// 
			this->txtMaterial->Location = System::Drawing::Point(245, 330);
			this->txtMaterial->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtMaterial->Name = L"txtMaterial";
			this->txtMaterial->ReadOnly = true;
			this->txtMaterial->Size = System::Drawing::Size(176, 22);
			this->txtMaterial->TabIndex = 63;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 375);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 16);
			this->label6->TabIndex = 62;
			this->label6->Text = L"Fuente de alimentación";
			// 
			// txtCapacidad
			// 
			this->txtCapacidad->Location = System::Drawing::Point(245, 292);
			this->txtCapacidad->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCapacidad->Name = L"txtCapacidad";
			this->txtCapacidad->ReadOnly = true;
			this->txtCapacidad->Size = System::Drawing::Size(176, 22);
			this->txtCapacidad->TabIndex = 61;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 334);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 60;
			this->label5->Text = L"Material";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 295);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 16);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Capacidad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 22);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(197, 16);
			this->label3->TabIndex = 58;
			this->label3->Text = L"Características del dispensador";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox2->Location = System::Drawing::Point(412, 11);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(123, 37);
			this->pictureBox2->TabIndex = 82;
			this->pictureBox2->TabStop = false;
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(452, 18);
			this->txtID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtID->Name = L"txtID";
			this->txtID->ReadOnly = true;
			this->txtID->Size = System::Drawing::Size(73, 22);
			this->txtID->TabIndex = 84;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(420, 22);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 16);
			this->label2->TabIndex = 83;
			this->label2->Text = L"ID";
			// 
			// Caracteristicas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 415);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->txtColor);
			this->Controls->Add(this->txtModelo);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtMarca);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtFuente);
			this->Controls->Add(this->txtAlto);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtAncho);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtLargo);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtMaterial);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtCapacidad);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Caracteristicas";
			this->Text = L"Caracteristicas de dispensador";
			this->Load += gcnew System::EventHandler(this, &Caracteristicas::Caracteristicas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		






	private: System::Void txtMarca_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Caracteristicas_Load(System::Object^ sender, System::EventArgs^ e) {
	txtMarca->Text = dispensadorSeleccionado->DispensadorAsignado->Marca;
	txtModelo->Text = dispensadorSeleccionado->DispensadorAsignado->Modelo;
	txtColor->Text = dispensadorSeleccionado->DispensadorAsignado->Color;
	txtAlto->Text = Convert::ToString(dispensadorSeleccionado->DispensadorAsignado->Alto);
	txtAncho->Text = Convert::ToString(dispensadorSeleccionado->DispensadorAsignado->Ancho);
	txtLargo->Text = Convert::ToString(dispensadorSeleccionado->DispensadorAsignado->Largo);
	txtCapacidad->Text = dispensadorSeleccionado->DispensadorAsignado->Capacidad;
	txtFuente->Text = dispensadorSeleccionado->DispensadorAsignado->FuenteAlimentacion;
	txtMaterial->Text = dispensadorSeleccionado->DispensadorAsignado->Material;
	txtID->Text = Convert::ToString(dispensadorSeleccionado->Id);

}
};
}
