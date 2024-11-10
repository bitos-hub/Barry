#pragma once
#include "ComboBoxItem.h"
#include "ModifyUsers.h"

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
	/// Resumen de ViewUsersForm
	/// </summary>
	public ref class ViewUsersForm : public System::Windows::Forms::Form
	{
	public:
		ViewUsersForm(void)
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
		~ViewUsersForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataGridView^ dgvUserS;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ users;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::Button^ btnSearch;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPassword;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cmbRol;







	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;


	private: System::Windows::Forms::TextBox^ txtPhoneNumber;


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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dgvUserS = (gcnew System::Windows::Forms::DataGridView());
			this->users = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cmbRol = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserS))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Location = System::Drawing::Point(12, 25);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(315, 513);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// dgvUserS
			// 
			this->dgvUserS->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUserS->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->users });
			this->dgvUserS->Location = System::Drawing::Point(38, 146);
			this->dgvUserS->Name = L"dgvUserS";
			this->dgvUserS->RowHeadersWidth = 51;
			this->dgvUserS->RowTemplate->Height = 24;
			this->dgvUserS->Size = System::Drawing::Size(250, 361);
			this->dgvUserS->TabIndex = 22;
			this->dgvUserS->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewUsersForm::dgvUserS_CellClick);
			// 
			// users
			// 
			this->users->HeaderText = L"Nombre";
			this->users->MinimumWidth = 6;
			this->users->Name = L"users";
			this->users->Width = 125;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(38, 59);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(221, 22);
			this->txtUsername->TabIndex = 23;
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(72, 98);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(178, 32);
			this->btnSearch->TabIndex = 24;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ViewUsersForm::btnSearch_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 16);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Nombre de Usuario:";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(348, 108);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(214, 22);
			this->txtPassword->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(352, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(352, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(352, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Rol";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(352, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 16);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Numero de teléfono";
			// 
			// cmbRol
			// 
			this->cmbRol->FormattingEnabled = true;
			this->cmbRol->Location = System::Drawing::Point(348, 59);
			this->cmbRol->Name = L"cmbRol";
			this->cmbRol->Size = System::Drawing::Size(214, 24);
			this->cmbRol->TabIndex = 33;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(344, 210);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(133, 30);
			this->btnUpdate->TabIndex = 37;
			this->btnUpdate->Text = L"Modificar datos";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ViewUsersForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(344, 246);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(133, 30);
			this->btnDelete->TabIndex = 38;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(348, 159);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(214, 22);
			this->txtPhoneNumber->TabIndex = 31;
			// 
			// ViewUsersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(639, 570);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->cmbRol);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->dgvUserS);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"ViewUsersForm";
			this->Text = L"Usuarios";
			this->Load += gcnew System::EventHandler(this, &ViewUsersForm::ViewUsersForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUserS))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	User^ user;
public:
	void FillUsersGrid() {
		List<User^>^ usersList = Service::ConsultarTodosUsuarios();
		if (usersList != nullptr) {
			dgvUserS->Rows->Clear();
			for (int i = 0; i < usersList->Count; i++) {
				if (usersList[i]->Role != "Administrador") {
					dgvUserS->Rows->Add(gcnew array<String^> {usersList[i]->Name});
				}

			}
		}
	}
	void AddUserToGrid(User^ user) {
		dgvUserS->Rows->Clear();
		dgvUserS->Rows->Add(gcnew array<String^> {user->Name});
	}

	void FillUsersData(User^ user) {
		cmbRol->Text = user->Role;
		txtPassword->Text = user->Password;
		txtPhoneNumber->Text = Convert::ToString(user->PhoneNumber);

	}

private: System::Void ViewUsersForm_Load(System::Object^ sender, System::EventArgs^ e) {
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;

}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		
		if (txtUsername->Text->Trim()->Equals("")) {
			FillUsersGrid();

		}
		else {
			List<User^>^ usersFound = Service::QueryUserByName(txtUsername->Text->Trim());
			for (int i = 0; i < usersFound->Count; i++) {
				AddUserToGrid(usersFound[i]);
			}
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("No se pudo realizar la consulta debido a " + e);
	}
}
private: System::Void dgvUserS_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	user = Service::ConsultarUsuario(dgvUserS->Rows[dgvUserS->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	FillUsersData(user);
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}
	

private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user != nullptr) {
		ModifyUsers^ form = gcnew ModifyUsers(user, this);
		form->ShowDialog();	
		dgvUserS->Rows->Clear();

	}
	else {
		MessageBox::Show("Debe seleccionar un usuario.");
	}
	
}
};
}
