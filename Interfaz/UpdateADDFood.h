#pragma once

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
	/// Resumen de UpdateADDFood
	/// </summary>
	public ref class UpdateADDFood : public System::Windows::Forms::Form
	{
	public:
		static Food^ foodSent;
		UpdateADDFood(Food^ food)
		{
			foodSent = food;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~UpdateADDFood()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ FoodBrandtxt;
	protected:
	private: System::Windows::Forms::TextBox^ Statustxt;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ FoodAmountxt;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ FoodPricetxt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ FoodNametxt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAddUpdate;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->FoodBrandtxt = (gcnew System::Windows::Forms::TextBox());
			this->Statustxt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->FoodAmountxt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->FoodPricetxt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FoodNametxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddUpdate = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// FoodBrandtxt
			// 
			this->FoodBrandtxt->Location = System::Drawing::Point(64, 157);
			this->FoodBrandtxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FoodBrandtxt->Name = L"FoodBrandtxt";
			this->FoodBrandtxt->Size = System::Drawing::Size(316, 22);
			this->FoodBrandtxt->TabIndex = 42;
			// 
			// Statustxt
			// 
			this->Statustxt->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Statustxt->Location = System::Drawing::Point(60, 352);
			this->Statustxt->Margin = System::Windows::Forms::Padding(4);
			this->Statustxt->Name = L"Statustxt";
			this->Statustxt->Size = System::Drawing::Size(320, 22);
			this->Statustxt->TabIndex = 41;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(55, 322);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 22);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Estado";
			// 
			// FoodAmountxt
			// 
			this->FoodAmountxt->BackColor = System::Drawing::SystemColors::HighlightText;
			this->FoodAmountxt->Location = System::Drawing::Point(60, 287);
			this->FoodAmountxt->Margin = System::Windows::Forms::Padding(4);
			this->FoodAmountxt->Name = L"FoodAmountxt";
			this->FoodAmountxt->Size = System::Drawing::Size(320, 22);
			this->FoodAmountxt->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gainsboro;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(59, 257);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 22);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Cantidad [kg]";
			// 
			// FoodPricetxt
			// 
			this->FoodPricetxt->Location = System::Drawing::Point(60, 222);
			this->FoodPricetxt->Margin = System::Windows::Forms::Padding(4);
			this->FoodPricetxt->Name = L"FoodPricetxt";
			this->FoodPricetxt->Size = System::Drawing::Size(320, 22);
			this->FoodPricetxt->TabIndex = 37;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gainsboro;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 192);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 22);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Precio [$]";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 129);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 22);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Marca";
			// 
			// FoodNametxt
			// 
			this->FoodNametxt->BackColor = System::Drawing::SystemColors::HighlightText;
			this->FoodNametxt->Location = System::Drawing::Point(60, 93);
			this->FoodNametxt->Margin = System::Windows::Forms::Padding(4);
			this->FoodNametxt->Name = L"FoodNametxt";
			this->FoodNametxt->Size = System::Drawing::Size(320, 22);
			this->FoodNametxt->TabIndex = 34;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(54, 63);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 22);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Nombre";
			// 
			// btnAddUpdate
			// 
			this->btnAddUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAddUpdate->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddUpdate->Location = System::Drawing::Point(104, 395);
			this->btnAddUpdate->Name = L"btnAddUpdate";
			this->btnAddUpdate->Size = System::Drawing::Size(235, 36);
			this->btnAddUpdate->TabIndex = 43;
			this->btnAddUpdate->Text = L"button1";
			this->btnAddUpdate->UseVisualStyleBackColor = false;
			this->btnAddUpdate->Click += gcnew System::EventHandler(this, &UpdateADDFood::btnAddUpdate_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox1->Location = System::Drawing::Point(53, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(361, 439);
			this->pictureBox1->TabIndex = 44;
			this->pictureBox1->TabStop = false;
			// 
			// UpdateADDFood
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 508);
			this->Controls->Add(this->btnAddUpdate);
			this->Controls->Add(this->FoodBrandtxt);
			this->Controls->Add(this->Statustxt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->FoodAmountxt);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->FoodPricetxt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FoodNametxt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"UpdateADDFood";
			this->Text = L"UpdateADDFood";
			this->Load += gcnew System::EventHandler(this, &UpdateADDFood::UpdateADDFood_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		if (foodSent == nullptr) {
			try {

				//int id = Convert::ToInt32(FoodIdtxt->Text);
				Food^ food = gcnew Food();
				food->Name = FoodNametxt->Text;
				food->FoodBrand = FoodBrandtxt->Text;
				food->Status = Statustxt->Text;
				food->FoodPrice = Convert::ToDouble(FoodPricetxt->Text);
				food->FoodAmount = Convert::ToDouble(FoodAmountxt->Text);

				Service::AddFood(food);
				MessageBox::Show("Comida agregada con éxito");

			}
			catch (Exception^ ex) {
				MessageBox::Show("No se ha podido agregar la mascota por el siguiente motivo:\n" +
					ex->Message);
			}
			finally {
				this->Close();
			}

		}
		else {
			try {
				foodSent->Name = FoodNametxt->Text;
				foodSent->FoodBrand = FoodBrandtxt->Text;
				foodSent->Status = Statustxt->Text;
				foodSent->FoodPrice = Convert::ToDouble(FoodPricetxt->Text);
				foodSent->FoodAmount = Convert::ToDouble(FoodAmountxt->Text);

				Service::UpdateFood(foodSent);
				MessageBox::Show("Se ha modificado la comida " + foodSent->Name);
			}
			catch (Exception^ ex) {
				throw ex;
			}
			finally {
				this->Close();
			}

		}
	}
	private: System::Void UpdateADDFood_Load(System::Object^ sender, System::EventArgs^ e) {
		if (foodSent == nullptr) {
			btnAddUpdate->Text = "Añadir Comida";
			this->Text = "Añadir Comida";
		}
		else {
			btnAddUpdate->Text = "Modificar Comida";
			FillText(foodSent);
			this->Text = "Modificar Comida";
		}
	}
	public:
		void FillText(Food^ food) {
			foodSent = Service::QueryFoodbyId(food->Id);
			FoodNametxt->Text = foodSent->Name;
			FoodBrandtxt->Text = foodSent->FoodBrand;
			Statustxt->Text = foodSent->Status;
			FoodPricetxt->Text = Convert::ToString(foodSent->FoodPrice);
			FoodAmountxt->Text = Convert::ToString(foodSent->FoodAmount);

		}
	};
}

