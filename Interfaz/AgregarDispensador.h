#pragma once

namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Barry;
	using namespace ServiceBarry;

	/// <summary>
	/// Resumen de AgregarDispensador
	/// </summary>
	public ref class AgregarDispensador : public System::Windows::Forms::Form
	{
	public:
		AgregarDispensador(void)
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
		~AgregarDispensador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAgregar;
	protected:

	private: System::Windows::Forms::Button^ btnEliminar;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtId;

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
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(23, 102);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(101, 33);
			this->btnAgregar->TabIndex = 0;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &AgregarDispensador::button1_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(160, 102);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(101, 33);
			this->btnEliminar->TabIndex = 1;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &AgregarDispensador::btnEliminar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Agregar dispensador";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(88, 49);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(134, 20);
			this->txtId->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"(Ingrese el ID del dispensador)";
			// 
			// AgregarDispensador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 161);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnAgregar);
			this->Name = L"AgregarDispensador";
			this->Text = L"AgregarDispensador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtId->Text);
		try {
			Service::AddDispensador(id);
			LimpiarCuadrosTexto();
			MessageBox::Show("El dispensador con ID: " + id + " fue agregado correctamente.");
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   void LimpiarCuadrosTexto() {
			   for each (Control ^ control in this->Controls) {
				   if (control->GetType() == TextBox::typeid) { //encuentra los controles de tipo TextBox
					   dynamic_cast<TextBox^>(control)->Text = ""; //se borra su contenido asignandole una cadena vacía
				   }
				   if (control->GetType() == ComboBox::typeid) {
					   dynamic_cast<ComboBox^>(control)->Text = "";
				   }
			   }
		   }
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtId->Text);
		try {
			Service::EliminarDispensador(id);
			LimpiarCuadrosTexto();
			MessageBox::Show("El dispensador con ID: "+id+" fue eliminado correctamente.");
		}
		catch (System::Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
}
};
}
