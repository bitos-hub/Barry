#include "ModifyUsers.h"
#include "ViewUsersForm.h"

System::Void Interfaz::ModifyUsers::ModifyUsers_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    ((ViewUsersForm^)refForm)->FillUsersData(refUser);

}
