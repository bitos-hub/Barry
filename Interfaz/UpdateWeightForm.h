#pragma once

namespace Interfaz {
	using namespace Barry;
	using namespace ServiceBarry;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de UpdateWeightForm
	/// </summary>
	public ref class UpdateWeightForm : public System::Windows::Forms::Form
	{
	private:
		Pet^ refPet;
	public:
		UpdateWeightForm(Pet^ pet)
		{
			refPet = pet;
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~UpdateWeightForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtPetName;
	private: System::Windows::Forms::TextBox^ txtWeight;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnUpdateWeight;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtPetName = (gcnew System::Windows::Forms::TextBox());
			this->txtWeight = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnUpdateWeight = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Location = System::Drawing::Point(-1, -1);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(820, 398);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// txtPetName
			// 
			this->txtPetName->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPetName->Location = System::Drawing::Point(207, 30);
			this->txtPetName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPetName->Name = L"txtPetName";
			this->txtPetName->Size = System::Drawing::Size(201, 22);
			this->txtPetName->TabIndex = 24;
			this->txtPetName->TextChanged += gcnew System::EventHandler(this, &UpdateWeightForm::txtPetName_TextChanged);
			// 
			// txtWeight
			// 
			this->txtWeight->Font = (gcnew System::Drawing::Font(L"MS PGothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtWeight->Location = System::Drawing::Point(207, 74);
			this->txtWeight->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(201, 22);
			this->txtWeight->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(55, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 29);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Nombre:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(55, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 29);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Nuevo Peso:";
			// 
			// btnUpdateWeight
			// 
			this->btnUpdateWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUpdateWeight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUpdateWeight->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnUpdateWeight->Location = System::Drawing::Point(143, 124);
			this->btnUpdateWeight->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateWeight->Name = L"btnUpdateWeight";
			this->btnUpdateWeight->Size = System::Drawing::Size(177, 32);
			this->btnUpdateWeight->TabIndex = 56;
			this->btnUpdateWeight->Text = L"Confirmar cambio";
			this->btnUpdateWeight->UseVisualStyleBackColor = false;
			this->btnUpdateWeight->Click += gcnew System::EventHandler(this, &UpdateWeightForm::btnUpdateWeight_Click);
			// 
			// UpdateWeightForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 178);
			this->Controls->Add(this->btnUpdateWeight);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtWeight);
			this->Controls->Add(this->txtPetName);
			this->Controls->Add(this->pictureBox2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"UpdateWeightForm";
			this->Text = L"Actualizar peso";
			this->Load += gcnew System::EventHandler(this, &UpdateWeightForm::UpdateWeightForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnUpdateWeight_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			refPet->Weight = Convert::ToDouble(txtWeight->Text);
			int update_confirmation = Service::SQLUpdatePet(refPet);
			int update_weight = Service::SQLAddWeight(refPet);
			MessageBox::Show("El peso de " + refPet->Name + " ha sido actualizado.");
			btnUpdateWeight->Enabled = false;
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se pudo alimentar correctamente debido a:\n" + ex);
		}
	}
private: System::Void txtPetName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void UpdateWeightForm_Load(System::Object^ sender, System::EventArgs^ e) {
	txtPetName->Text = refPet->Name;
	txtPetName->Enabled = false;
}
};
}
