#pragma once
#include "ComboBoxItem.h"
namespace Interfaz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace Barry;
	using namespace ServiceBarry;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de WeightReportForm
	/// </summary>
	public ref class WeightReportForm : public System::Windows::Forms::Form
	{
	public:
		WeightReportForm(void)
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
		~WeightReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ weightEvolution;
	protected:

	private: System::Windows::Forms::PictureBox^ pbPet;
	protected:

	private: System::Windows::Forms::ComboBox^ cmbPets;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ foodEvolution;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ waterEvolution;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea10 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WeightReportForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea11 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea12 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->weightEvolution = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pbPet = (gcnew System::Windows::Forms::PictureBox());
			this->cmbPets = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->foodEvolution = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->waterEvolution = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weightEvolution))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->foodEvolution))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->waterEvolution))->BeginInit();
			this->SuspendLayout();
			// 
			// weightEvolution
			// 
			chartArea10->Name = L"ChartArea1";
			this->weightEvolution->ChartAreas->Add(chartArea10);
			legend10->Name = L"Legend1";
			this->weightEvolution->Legends->Add(legend10);
			this->weightEvolution->Location = System::Drawing::Point(143, 423);
			this->weightEvolution->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->weightEvolution->Name = L"weightEvolution";
			this->weightEvolution->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Legend = L"Legend1";
			series10->Name = L"Peso (kg)";
			this->weightEvolution->Series->Add(series10);
			this->weightEvolution->Size = System::Drawing::Size(595, 442);
			this->weightEvolution->TabIndex = 26;
			this->weightEvolution->Text = L"chart2";
			this->weightEvolution->Click += gcnew System::EventHandler(this, &WeightReportForm::chart2_Click);
			// 
			// pbPet
			// 
			this->pbPet->Location = System::Drawing::Point(443, 149);
			this->pbPet->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbPet->Name = L"pbPet";
			this->pbPet->Size = System::Drawing::Size(253, 212);
			this->pbPet->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPet->TabIndex = 25;
			this->pbPet->TabStop = false;
			this->pbPet->Click += gcnew System::EventHandler(this, &WeightReportForm::pictureBox2_Click);
			// 
			// cmbPets
			// 
			this->cmbPets->FormattingEnabled = true;
			this->cmbPets->Location = System::Drawing::Point(143, 270);
			this->cmbPets->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cmbPets->Name = L"cmbPets";
			this->cmbPets->Size = System::Drawing::Size(163, 24);
			this->cmbPets->TabIndex = 24;
			this->cmbPets->SelectedIndexChanged += gcnew System::EventHandler(this, &WeightReportForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi Cond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(135, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(236, 38);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Escoge la mascota:";
			this->label4->Click += gcnew System::EventHandler(this, &WeightReportForm::label4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(135, 379);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(507, 46);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Evolución del peso de la mascota";
			this->label2->Click += gcnew System::EventHandler(this, &WeightReportForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(445, 110);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Barry Bites";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1660, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 176);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// foodEvolution
			// 
			chartArea11->Name = L"ChartArea1";
			this->foodEvolution->ChartAreas->Add(chartArea11);
			legend11->Name = L"Legend1";
			this->foodEvolution->Legends->Add(legend11);
			this->foodEvolution->Location = System::Drawing::Point(940, 149);
			this->foodEvolution->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->foodEvolution->Name = L"foodEvolution";
			this->foodEvolution->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Legend = L"Legend1";
			series11->Name = L"Ración (g)";
			this->foodEvolution->Series->Add(series11);
			this->foodEvolution->Size = System::Drawing::Size(669, 322);
			this->foodEvolution->TabIndex = 29;
			this->foodEvolution->Text = L"chart1";
			this->foodEvolution->Click += gcnew System::EventHandler(this, &WeightReportForm::chart1_Click);
			// 
			// waterEvolution
			// 
			chartArea12->Name = L"ChartArea1";
			this->waterEvolution->ChartAreas->Add(chartArea12);
			legend12->Name = L"Legend1";
			this->waterEvolution->Legends->Add(legend12);
			this->waterEvolution->Location = System::Drawing::Point(940, 543);
			this->waterEvolution->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->waterEvolution->Name = L"waterEvolution";
			this->waterEvolution->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Legend = L"Legend1";
			series12->Name = L"Ración (mL)";
			this->waterEvolution->Series->Add(series12);
			this->waterEvolution->Size = System::Drawing::Size(669, 322);
			this->waterEvolution->TabIndex = 30;
			this->waterEvolution->Text = L"chart3";
			this->waterEvolution->Click += gcnew System::EventHandler(this, &WeightReportForm::chart3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(932, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(608, 46);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Evolución de las raciones de comida (g)";
			this->label1->Click += gcnew System::EventHandler(this, &WeightReportForm::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(932, 498);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(598, 46);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Evolución de las raciones de agua (mL)";
			this->label5->Click += gcnew System::EventHandler(this, &WeightReportForm::label5_Click);
			// 
			// WeightReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1827, 922);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->waterEvolution);
			this->Controls->Add(this->foodEvolution);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->weightEvolution);
			this->Controls->Add(this->pbPet);
			this->Controls->Add(this->cmbPets);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"WeightReportForm";
			this->Text = L"Reporte de peso";
			this->Load += gcnew System::EventHandler(this, &WeightReportForm::WeightReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->weightEvolution))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->foodEvolution))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->waterEvolution))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void FillPetsComboPets() {
				List<Pet^>^ petsList = Service::SQLQueryAllPets();
				if (petsList != nullptr) {
					cmbPets->Items->Clear();
					for each (Pet ^ pet in petsList) {
						cmbPets->Items->Add(gcnew ComboBoxItem(pet->Id,
							pet->Name));
					}
				}
			}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Pet^ pet = Service::SQLQueryWeightEvolutionByPetId(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);
		weightEvolution->Series["Peso (kg)"]->Points->Clear();
		waterEvolution->Series["Ración (mL)"]->Points->Clear();
		foodEvolution->Series["Ración (g)"]->Points->Clear();
		for (int i = 0; i < pet->WeightEvolution->Count; i++) {
			weightEvolution->Series["Peso (kg)"]->Points->Add(pet->WeightEvolution[i]);
			weightEvolution->Series["Peso (kg)"]->Points[i]->AxisLabel = "" + pet->WeightChanges[i];
			weightEvolution->Series["Peso (kg)"]->Points[i]->Label = "" + pet->WeightEvolution[i];
		}
		Pet^ pet1 = Service::SQLQueryWaterServingEvolutionByPetId(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);
		for (int i = 0; i < pet1->WaterEvolution->Count; i++) {
			waterEvolution->Series["Ración (mL)"]->Points->Add(pet1->WaterEvolution[i]);
			waterEvolution->Series["Ración (mL)"]->Points[i]->AxisLabel = "" + pet1->WaterChanges[i];
			waterEvolution->Series["Ración (mL)"]->Points[i]->Label = "" + pet1->WaterEvolution[i];
		}
		Pet^ pet2 = Service::SQLQueryFoodServingEvolutionByPetId(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);
		for (int i = 0; i < pet2->FoodEvolution->Count; i++) {
			foodEvolution->Series["Ración (g)"]->Points->Add(pet2->FoodEvolution[i]);
			foodEvolution->Series["Ración (g)"]->Points[i]->AxisLabel = "" + pet2->FoodChanges[i];
			foodEvolution->Series["Ración (g)"]->Points[i]->Label = "" + pet2->FoodEvolution[i];
		}
		if (pet->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(pet->Photo);
			pbPet->Image = Image::FromStream(ms);
		}
		else {
			pbPet->Image = nullptr;
			pbPet->Invalidate();
		}
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void WeightReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
	FillPetsComboPets();
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void chart3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
