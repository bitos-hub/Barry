#pragma once

namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AgregarUsuarios
	/// </summary>
	public ref class AgregarUsuarios : public System::Windows::Forms::Form
	{
	public:
		AgregarUsuarios(void)
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
		~AgregarUsuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNombreUsuario;
	private: System::Windows::Forms::TextBox^ txtContrasena;

	protected:


	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNumeroTelefono;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnAgregarUsuario;
	private: System::Windows::Forms::ComboBox^ dspRol;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AgregarUsuarios::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNombreUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarUsuario = (gcnew System::Windows::Forms::Button());
			this->dspRol = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(406, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre de usuario";
			// 
			// txtNombreUsuario
			// 
			this->txtNombreUsuario->BackColor = System::Drawing::SystemColors::HighlightText;
			this->txtNombreUsuario->Location = System::Drawing::Point(658, 173);
			this->txtNombreUsuario->Name = L"txtNombreUsuario";
			this->txtNombreUsuario->Size = System::Drawing::Size(213, 20);
			this->txtNombreUsuario->TabIndex = 1;
			this->txtNombreUsuario->TextChanged += gcnew System::EventHandler(this, &AgregarUsuarios::txtNombreUsuario_TextChanged);
			// 
			// txtContrasena
			// 
			this->txtContrasena->Location = System::Drawing::Point(658, 229);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->Size = System::Drawing::Size(213, 20);
			this->txtContrasena->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(488, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(575, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 27);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Rol";
			// 
			// txtNumeroTelefono
			// 
			this->txtNumeroTelefono->Location = System::Drawing::Point(658, 352);
			this->txtNumeroTelefono->Name = L"txtNumeroTelefono";
			this->txtNumeroTelefono->Size = System::Drawing::Size(213, 20);
			this->txtNumeroTelefono->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(398, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 27);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Número de teléfono";
			// 
			// btnAgregarUsuario
			// 
			this->btnAgregarUsuario->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 15.75F, System::Drawing::FontStyle::Bold));
			this->btnAgregarUsuario->Location = System::Drawing::Point(550, 436);
			this->btnAgregarUsuario->Name = L"btnAgregarUsuario";
			this->btnAgregarUsuario->Size = System::Drawing::Size(170, 75);
			this->btnAgregarUsuario->TabIndex = 8;
			this->btnAgregarUsuario->Text = L"Agregar usuario";
			this->btnAgregarUsuario->UseVisualStyleBackColor = true;
			this->btnAgregarUsuario->Click += gcnew System::EventHandler(this, &AgregarUsuarios::button1_Click);
			// 
			// dspRol
			// 
			this->dspRol->FormattingEnabled = true;
			this->dspRol->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Administrador" });
			this->dspRol->Location = System::Drawing::Point(658, 289);
			this->dspRol->Name = L"dspRol";
			this->dspRol->Size = System::Drawing::Size(213, 21);
			this->dspRol->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1195, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 204);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AgregarUsuarios::pictureBox1_Click);
			// 
			// AgregarUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dspRol);
			this->Controls->Add(this->btnAgregarUsuario);
			this->Controls->Add(this->txtNumeroTelefono);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtContrasena);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNombreUsuario);
			this->Controls->Add(this->label1);
			this->Name = L"AgregarUsuarios";
			this->Text = L"AgregarUsuarios";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre_usuario = txtNombreUsuario->Text;
		String^ contrasena = txtContrasena->Text;
		int numero_telefono = Convert::ToInt32(txtNumeroTelefono->Text);
		String^ rol = dspRol->Text;
		MessageBox::Show(nombre_usuario + " " + contrasena + " " + numero_telefono + " " + rol,"Usuario creado con éxito");
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtNombreUsuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
