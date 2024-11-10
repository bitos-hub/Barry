#pragma once
#include "BuscarModeloDispensador.h"
namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaConfirmacion
	/// </summary>
	public ref class VentanaConfirmacion : public System::Windows::Forms::Form
	{
	private:
		Form^ refForm;
	public:
		VentanaConfirmacion(Form^ refForm)
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
		~VentanaConfirmacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnSi;
	private: System::Windows::Forms::Button^ btnNo;
	protected:



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSi = (gcnew System::Windows::Forms::Button());
			this->btnNo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¿Estás seguro del dispensador seleccionado\?";
			// 
			// btnSi
			// 
			this->btnSi->Location = System::Drawing::Point(55, 65);
			this->btnSi->Name = L"btnSi";
			this->btnSi->Size = System::Drawing::Size(59, 27);
			this->btnSi->TabIndex = 1;
			this->btnSi->Text = L"Sí";
			this->btnSi->UseVisualStyleBackColor = true;
			this->btnSi->Click += gcnew System::EventHandler(this, &VentanaConfirmacion::button1_Click);
			// 
			// btnNo
			// 
			this->btnNo->Location = System::Drawing::Point(146, 65);
			this->btnNo->Name = L"btnNo";
			this->btnNo->Size = System::Drawing::Size(59, 27);
			this->btnNo->TabIndex = 2;
			this->btnNo->Text = L"No";
			this->btnNo->UseVisualStyleBackColor = true;
			this->btnNo->Click += gcnew System::EventHandler(this, &VentanaConfirmacion::btnNo_Click);
			// 
			// VentanaConfirmacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(262, 117);
			this->Controls->Add(this->btnNo);
			this->Controls->Add(this->btnSi);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaConfirmacion";
			this->Text = L"VentanaConfirmacion";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnNo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
