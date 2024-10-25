#pragma once

namespace Interfaz {

	using namespace ServiceBarry;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DispenserConfiguration
	/// </summary>
	public ref class DispenserConfiguration : public System::Windows::Forms::Form
	{
	public:
		DispenserConfiguration(void)
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
		~DispenserConfiguration()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txId;
	private: System::Windows::Forms::Button^ btnConfigurate;
	private: System::Windows::Forms::Button^ btnDispenseFood;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txId = (gcnew System::Windows::Forms::TextBox());
			this->btnConfigurate = (gcnew System::Windows::Forms::Button());
			this->btnDispenseFood = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese el ID de la mascota";
			// 
			// txId
			// 
			this->txId->Location = System::Drawing::Point(34, 59);
			this->txId->Name = L"txId";
			this->txId->Size = System::Drawing::Size(205, 22);
			this->txId->TabIndex = 3;
			this->txId->TextChanged += gcnew System::EventHandler(this, &DispenserConfiguration::textBox1_TextChanged);
			// 
			// btnConfigurate
			// 
			this->btnConfigurate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfigurate->Location = System::Drawing::Point(34, 112);
			this->btnConfigurate->Name = L"btnConfigurate";
			this->btnConfigurate->Size = System::Drawing::Size(157, 36);
			this->btnConfigurate->TabIndex = 4;
			this->btnConfigurate->Text = L"Configurar Arduino";
			this->btnConfigurate->UseVisualStyleBackColor = true;
			this->btnConfigurate->Click += gcnew System::EventHandler(this, &DispenserConfiguration::btnConfigurate_Click);
			// 
			// btnDispenseFood
			// 
			this->btnDispenseFood->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDispenseFood->Location = System::Drawing::Point(206, 112);
			this->btnDispenseFood->Name = L"btnDispenseFood";
			this->btnDispenseFood->Size = System::Drawing::Size(157, 36);
			this->btnDispenseFood->TabIndex = 5;
			this->btnDispenseFood->Text = L"Dispensar Comida";
			this->btnDispenseFood->UseVisualStyleBackColor = true;
			this->btnDispenseFood->Click += gcnew System::EventHandler(this, &DispenserConfiguration::btnDispenseFood_Click);
			// 
			// DispenserConfiguration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(417, 166);
			this->Controls->Add(this->btnDispenseFood);
			this->Controls->Add(this->btnConfigurate);
			this->Controls->Add(this->txId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"DispenserConfiguration";
			this->Text = L"Configuración de dispensador";
			this->Load += gcnew System::EventHandler(this, &DispenserConfiguration::DispenserConfiguration_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnConfigurate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int id = Convert::ToInt32(txId->Text);
			String^ result = Service::SendDispenserInfoUART(id);
			MessageBox::Show("Se realizó la configuración con exito:\n" + result);
			btnDispenseFood->Enabled = true;
			txId->Enabled = false;


		}
		catch (Exception^ ex) {
			MessageBox::Show("No se pudo realizar la configuración correctamente debido a:\n" + ex);
		}
	}
private: System::Void btnDispenseFood_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		int id = Convert::ToInt32(txId->Text);
		String^ result = Service::DispenseFoodUART(id);
		MessageBox::Show(result);
		txId->Enabled = true;
		btnDispenseFood->Enabled = false;

	}
	catch (Exception^ ex) {
		MessageBox::Show("No se pudo realizar la configuración correctamente debido a:\n" + ex);
	}
}
private: System::Void DispenserConfiguration_Load(System::Object^ sender, System::EventArgs^ e) {
	btnDispenseFood->Enabled = false;
}
};
}
