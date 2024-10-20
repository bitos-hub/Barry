#pragma once

namespace Interfaz {

	using namespace System;
	using namespace Barry;
	using namespace ServiceBarry;
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
		AgregarUsuarios()
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

	private: System::Windows::Forms::TextBox^ txtNombreUsuario;
	private: System::Windows::Forms::TextBox^ txtContrasena;

	protected:






	private: System::Windows::Forms::TextBox^ txtNumeroTelefono;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnCreateUser;
	private: System::Windows::Forms::ComboBox^ txtRol;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;









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
			this->txtNombreUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->txtNumeroTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnCreateUser = (gcnew System::Windows::Forms::Button());
			this->txtRol = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNombreUsuario
			// 
			this->txtNombreUsuario->BackColor = System::Drawing::SystemColors::HighlightText;
			this->txtNombreUsuario->Location = System::Drawing::Point(189, 183);
			this->txtNombreUsuario->Name = L"txtNombreUsuario";
			this->txtNombreUsuario->Size = System::Drawing::Size(213, 20);
			this->txtNombreUsuario->TabIndex = 1;
			this->txtNombreUsuario->TextChanged += gcnew System::EventHandler(this, &AgregarUsuarios::txtNombreUsuario_TextChanged);
			// 
			// txtContrasena
			// 
			this->txtContrasena->Location = System::Drawing::Point(189, 240);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->PasswordChar = '*';
			this->txtContrasena->Size = System::Drawing::Size(213, 20);
			this->txtContrasena->TabIndex = 3;
			this->txtContrasena->TextChanged += gcnew System::EventHandler(this, &AgregarUsuarios::txtContrasena_TextChanged);
			// 
			// txtNumeroTelefono
			// 
			this->txtNumeroTelefono->Location = System::Drawing::Point(189, 361);
			this->txtNumeroTelefono->Name = L"txtNumeroTelefono";
			this->txtNumeroTelefono->Size = System::Drawing::Size(213, 20);
			this->txtNumeroTelefono->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(186, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Número de teléfono";
			// 
			// btnCreateUser
			// 
			this->btnCreateUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCreateUser->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreateUser->Location = System::Drawing::Point(225, 397);
			this->btnCreateUser->Name = L"btnCreateUser";
			this->btnCreateUser->Size = System::Drawing::Size(136, 34);
			this->btnCreateUser->TabIndex = 8;
			this->btnCreateUser->Text = L"Crear";
			this->btnCreateUser->UseVisualStyleBackColor = false;
			this->btnCreateUser->Click += gcnew System::EventHandler(this, &AgregarUsuarios::button1_Click);
			// 
			// txtRol
			// 
			this->txtRol->FormattingEnabled = true;
			this->txtRol->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Administrador", L"Usuario interno", L"Usuario portal" });
			this->txtRol->Location = System::Drawing::Point(189, 298);
			this->txtRol->Name = L"txtRol";
			this->txtRol->Size = System::Drawing::Size(213, 21);
			this->txtRol->TabIndex = 9;
			this->txtRol->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarUsuarios::dspRol_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(186, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Rol";
			this->label5->Click += gcnew System::EventHandler(this, &AgregarUsuarios::label5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(186, 221);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Contraseña";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(186, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nombre de Usuario";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pictureBox1->Location = System::Drawing::Point(71, 124);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(446, 353);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 31);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Barry Bites";
			this->label3->Click += gcnew System::EventHandler(this, &AgregarUsuarios::label3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(548, 10);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(68, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// AgregarUsuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(624, 531);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtRol);
			this->Controls->Add(this->btnCreateUser);
			this->Controls->Add(this->txtNumeroTelefono);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtContrasena);
			this->Controls->Add(this->txtNombreUsuario);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AgregarUsuarios";
			this->Text = L"AgregarUsuarios";
			this->Load += gcnew System::EventHandler(this, &AgregarUsuarios::AgregarUsuarios_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre_usuario = txtNombreUsuario->Text;
		String^ contrasena = txtContrasena->Text;
		int numero_telefono = Convert::ToInt32(txtNumeroTelefono->Text);
		String^ rol = txtRol->Text;
		if (txtRol->Text == "Administrador") {
			Administrator^ admin = gcnew Administrator();
			admin->Name = nombre_usuario;
			admin->Password = contrasena;
			admin->PhoneNumber = numero_telefono;
			admin->Role = rol;
			Service::AddUsuario(admin);
		}
		else {
			if (txtRol->Text == "Usuario interno") {
				InternalUser^ iuser = gcnew InternalUser();
				iuser->Name = nombre_usuario;
				iuser->Password = contrasena;
				iuser->PhoneNumber = numero_telefono;
				iuser->Role = rol;
				Service::AddUsuario(iuser);
			}
			else {
				PortalUser^ puser = gcnew PortalUser();
				puser->Name = nombre_usuario;
				puser->Password = contrasena;
				puser->PhoneNumber = numero_telefono;
				puser->Role = rol;
				Service::AddUsuario(puser);
			}
		}

		try {
			MessageBox::Show(nombre_usuario + " " + contrasena + " " + numero_telefono + " " + rol, "Usuario creado con éxito");
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(""+ ex);
		}

	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtNombreUsuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtContrasena_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void dspRol_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AgregarUsuarios_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
