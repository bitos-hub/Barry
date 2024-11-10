#pragma once
#include "ComboBoxItem.h"

namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ServiceBarry;
	using namespace Barry;

	/// <summary>
	/// Resumen de ModifyUsers
	/// </summary>
	public ref class ModifyUsers : public System::Windows::Forms::Form
	{
		public: 
			 static User^ refUser;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public:
		static Form^ refForm;
	public:
		ModifyUsers(User^ user, Form^ form)
		{
			refUser = user;
			refForm = form;
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModifyUsers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ txtNewName;
	private: System::Windows::Forms::ComboBox^ cmbNewRol;

	private: System::Windows::Forms::TextBox^ txtNewPhoneNumber;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnUpdate;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->txtNewName = (gcnew System::Windows::Forms::TextBox());
			this->cmbNewRol = (gcnew System::Windows::Forms::ComboBox());
			this->txtNewPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->Location = System::Drawing::Point(37, 255);
			this->txtNewPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->Size = System::Drawing::Size(224, 27);
			this->txtNewPassword->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// txtNewName
			// 
			this->txtNewName->Location = System::Drawing::Point(37, 117);
			this->txtNewName->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtNewName->Name = L"txtNewName";
			this->txtNewName->Size = System::Drawing::Size(224, 27);
			this->txtNewName->TabIndex = 2;
			// 
			// cmbNewRol
			// 
			this->cmbNewRol->FormattingEnabled = true;
			this->cmbNewRol->Location = System::Drawing::Point(37, 175);
			this->cmbNewRol->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->cmbNewRol->Name = L"cmbNewRol";
			this->cmbNewRol->Size = System::Drawing::Size(224, 29);
			this->cmbNewRol->TabIndex = 3;
			// 
			// txtNewPhoneNumber
			// 
			this->txtNewPhoneNumber->Location = System::Drawing::Point(37, 324);
			this->txtNewPhoneNumber->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtNewPhoneNumber->Name = L"txtNewPhoneNumber";
			this->txtNewPhoneNumber->Size = System::Drawing::Size(224, 27);
			this->txtNewPhoneNumber->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(34, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 21);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(34, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 21);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Rol";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gainsboro;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(34, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 21);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Número de teléfono";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Contraseña Nueva";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Ingrese los nuevos datos";
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(58, 371);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(180, 46);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ModifyUsers::btnUpdate_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Location = System::Drawing::Point(13, 70);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(285, 388);
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// ModifyUsers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(341, 512);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNewPhoneNumber);
			this->Controls->Add(this->cmbNewRol);
			this->Controls->Add(this->txtNewName);
			this->Controls->Add(this->txtNewPassword);
			this->Controls->Add(this->pictureBox2);
			this->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ModifyUsers";
			this->Text = L"Modificar Usuario";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ModifyUsers::ModifyUsers_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ModifyUsers::ModifyUsers_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			refUser->Name = txtNewName->Text;
			refUser->Role = ((ComboBoxItem^)(cmbNewRol->Items[cmbNewRol->SelectedIndex]))->Name;
			refUser->Password = txtNewPassword->Text;
			refUser->PhoneNumber = Convert::ToInt32(txtNewPhoneNumber->Text);
			Service::ActualizarUsuario(refUser);
         	this->Close();
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se pudo modificar al usuario debido a " + ex);
		}
	}
private: System::Void ModifyUsers_Load(System::Object^ sender, System::EventArgs^ e) {
	FillComboBox();
}
	   public:
		   void FillComboBox() {
			   cmbNewRol->Items->Clear();
			   array<String^>^ UserRoles = { "Usuario Interno", "Usuario Portal" };
			   int i = 0;

			   while (i < UserRoles->Length) {
				   cmbNewRol->Items->Add(gcnew ComboBoxItem(UserRoles[i]));
				   i++;
			   }

		   }
private: System::Void ModifyUsers_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
}
