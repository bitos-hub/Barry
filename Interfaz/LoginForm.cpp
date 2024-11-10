#include "LoginForm.h"
#include "MainScreenForm.h"

System::Void Interfaz::LoginForm::btnAcces_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ UserName = txtUser->Text;
	String^ Password = txtPassword->Text;
	User^ usuario = VerifyUser(UserName, Password);
	if (usuario != nullptr) {
		if (usuario->GetType() == Administrator::typeid)
			((MainScreenForm^)refMainForm)->EnableAdminOptions();
		if (usuario->GetType() == InternalUser::typeid)
			((MainScreenForm^)refMainForm)->EnableInternalUserOptions();
		if (usuario->GetType() == PortalUser::typeid)
			((MainScreenForm^)refMainForm)->EnablePortalUserOptions();
		this->Close();
	}
	else {
		MessageBox::Show("Contraseña o usuario incorrectos");
	}


}

System::Void Interfaz::LoginForm::linkCreateAccount_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
	AccessAddUserForm();
}
System::Void Interfaz::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	String^ UserName = txtUser->Text;
	String^ Password = txtPassword->Text;
	User^ usuario = VerifyUser(UserName, Password);
	if (usuario == nullptr) {
		Application::Exit();
	
	}
}


