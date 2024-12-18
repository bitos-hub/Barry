#pragma once
#include "AgregarUsuarios.h"


namespace Interfaz {

	using namespace Barry;
	using namespace ServiceBarry;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	private:
		Form^ refMainForm;
	public:
		LoginForm(Form^ form)
		{
			refMainForm = form;
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnAcces;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::LinkLabel^ linkCreateAccount;



	private: System::Windows::Forms::Label^ label2;




	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnAcces = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkCreateAccount = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(203, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(445, 110);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Barry Bites";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(347, 110);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(168, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// txtUser
			// 
			this->txtUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUser->Location = System::Drawing::Point(317, 350);
			this->txtUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUser->Name = L"txtUser";
			this->txtUser->Size = System::Drawing::Size(213, 24);
			this->txtUser->TabIndex = 17;
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(317, 409);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(213, 24);
			this->txtPassword->TabIndex = 18;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// btnAcces
			// 
			this->btnAcces->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAcces->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAcces->Location = System::Drawing::Point(317, 465);
			this->btnAcces->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAcces->Name = L"btnAcces";
			this->btnAcces->Size = System::Drawing::Size(213, 41);
			this->btnAcces->TabIndex = 19;
			this->btnAcces->Text = L"Acceder";
			this->btnAcces->UseVisualStyleBackColor = false;
			this->btnAcces->Click += gcnew System::EventHandler(this, &LoginForm::btnAcces_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(315, 327);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 19);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Usuario";
			// 
			// linkCreateAccount
			// 
			this->linkCreateAccount->AutoSize = true;
			this->linkCreateAccount->Location = System::Drawing::Point(693, 490);
			this->linkCreateAccount->Name = L"linkCreateAccount";
			this->linkCreateAccount->Size = System::Drawing::Size(83, 16);
			this->linkCreateAccount->TabIndex = 22;
			this->linkCreateAccount->TabStop = true;
			this->linkCreateAccount->Text = L"Crear cuenta";
			this->linkCreateAccount->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkCreateAccount_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(315, 386);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 19);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Contrase�a";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 526);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkCreateAccount);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnAcces);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LoginForm::LoginForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void Hide() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Visible = false;
				}
				if (control->GetType() == PictureBox::typeid) {
					dynamic_cast<PictureBox^>(control)->Visible = false;
				}
				if (control->GetType() == Label::typeid) {
					dynamic_cast<Label^>(control)->Visible = false;
				}
				if (control->GetType() == Button::typeid) {
					dynamic_cast<Button^>(control)->Visible = false;
				}
				if (control->GetType() == LinkLabel::typeid) {
					dynamic_cast<LinkLabel^>(control)->Visible = false;
				}
			}
		}
		void Show() {
			for each (Control ^ control in this->Controls) {
				if (control->GetType() == TextBox::typeid) {
					dynamic_cast<TextBox^>(control)->Visible = true;
				}
				if (control->GetType() == PictureBox::typeid) {
					dynamic_cast<PictureBox^>(control)->Visible = true;
				}
				if (control->GetType() == Label::typeid) {
					dynamic_cast<Label^>(control)->Visible = true;
				}
				if (control->GetType() == Button::typeid) {
					dynamic_cast<Button^>(control)->Visible = true;
				}
				if (control->GetType() == LinkLabel::typeid) {
					dynamic_cast<LinkLabel^>(control)->Visible = true;
				}
			}
		}

		User^ VerifyUser(String^ UserName, String^ Password) {
			User^ result = nullptr;
			List<User^>^ usersList = Service::ConsultarTodosUsuarios();
			for (int i = 0; i < usersList->Count; i++) {
				User^ user = usersList[i];
				if (user->Name->Equals(UserName) && user->Password->Equals(Password))
					result = user;
			}
			return result;
			/*User^ usuario = Service::ConsultarUsuario(UserName);
			if (usuario == nullptr) {
				return false;
			}
			else {
				if (usuario->Password == Password) {
					return true;
				}
				else {
					return false;
				}
			}*/
		}
		void AccessAddUserForm() {
			AgregarUsuarios^ form = gcnew AgregarUsuarios();
			form->ShowDialog();
		}


	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Service::cargarUsuarios();
		if (Service::VerifyAdmin()) {
			linkCreateAccount->Hide();
		}

	}
	private: System::Void btnAcces_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void linkCreateAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
	private: System::Void LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
			   
};
}