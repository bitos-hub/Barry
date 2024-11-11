#pragma once
#include "ComboBoxItem.h"
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
	/// Resumen de ReportForm
	/// </summary>
	public ref class ReportForm : public System::Windows::Forms::Form
	{
	public:
		int ReportType;
	public:
		ReportForm(int reportType)
		{
			ReportType = reportType;
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ dispensedFoodTimeschart;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbPets;




	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ txtGeneratedTime;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ dispensedWhaterTimeschart;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DateTimePicker^ dtpStartDate;
	private: System::Windows::Forms::DateTimePicker^ dtpEndDate;
	private: System::Windows::Forms::Button^ bntGenerarReporte;





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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReportForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dispensedFoodTimeschart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbPets = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->txtGeneratedTime = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dispensedWhaterTimeschart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dtpStartDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpEndDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->bntGenerarReporte = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dispensedFoodTimeschart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dispensedWhaterTimeschart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// dispensedFoodTimeschart
			// 
			chartArea1->Name = L"ChartArea1";
			this->dispensedFoodTimeschart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->dispensedFoodTimeschart->Legends->Add(legend1);
			this->dispensedFoodTimeschart->Location = System::Drawing::Point(287, 159);
			this->dispensedFoodTimeschart->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dispensedFoodTimeschart->Name = L"dispensedFoodTimeschart";
			this->dispensedFoodTimeschart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Veces Dispensado";
			this->dispensedFoodTimeschart->Series->Add(series1);
			this->dispensedFoodTimeschart->Size = System::Drawing::Size(452, 370);
			this->dispensedFoodTimeschart->TabIndex = 0;
			this->dispensedFoodTimeschart->Text = L"chart1";
			this->dispensedFoodTimeschart->UseWaitCursor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Gainsboro;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(272, 107);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(181, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Dispensación de comida";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(9, 7);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 88);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Barry Bites";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1280, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 96);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gainsboro;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 147);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 18);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Elige la mascota:";
			// 
			// cmbPets
			// 
			this->cmbPets->FormattingEnabled = true;
			this->cmbPets->Location = System::Drawing::Point(24, 167);
			this->cmbPets->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmbPets->Name = L"cmbPets";
			this->cmbPets->Size = System::Drawing::Size(98, 21);
			this->cmbPets->TabIndex = 19;
			this->cmbPets->SelectedIndexChanged += gcnew System::EventHandler(this, &ReportForm::cmbPets_SelectedIndexChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox3->Location = System::Drawing::Point(13, 99);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(246, 501);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// txtGeneratedTime
			// 
			this->txtGeneratedTime->Location = System::Drawing::Point(23, 127);
			this->txtGeneratedTime->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtGeneratedTime->Name = L"txtGeneratedTime";
			this->txtGeneratedTime->Size = System::Drawing::Size(134, 20);
			this->txtGeneratedTime->TabIndex = 26;
			this->txtGeneratedTime->TextChanged += gcnew System::EventHandler(this, &ReportForm::textBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gainsboro;
			this->label6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 107);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 18);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Dia generado:";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox4->Location = System::Drawing::Point(263, 99);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(537, 501);
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &ReportForm::pictureBox4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gainsboro;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(826, 107);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 24);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Dispensación de agua";
			// 
			// dispensedWhaterTimeschart
			// 
			chartArea2->Name = L"ChartArea1";
			this->dispensedWhaterTimeschart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->dispensedWhaterTimeschart->Legends->Add(legend2);
			this->dispensedWhaterTimeschart->Location = System::Drawing::Point(830, 159);
			this->dispensedWhaterTimeschart->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dispensedWhaterTimeschart->Name = L"dispensedWhaterTimeschart";
			this->dispensedWhaterTimeschart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Veces Dispensado agua";
			this->dispensedWhaterTimeschart->Series->Add(series2);
			this->dispensedWhaterTimeschart->Size = System::Drawing::Size(452, 370);
			this->dispensedWhaterTimeschart->TabIndex = 28;
			this->dispensedWhaterTimeschart->Text = L"chart1";
			this->dispensedWhaterTimeschart->UseWaitCursor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox5->Location = System::Drawing::Point(806, 99);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(537, 501);
			this->pictureBox5->TabIndex = 30;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &ReportForm::pictureBox5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gainsboro;
			this->label5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 188);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 18);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Seleccione las fechas a mostrar:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gainsboro;
			this->label7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(21, 206);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 18);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Inicio:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gainsboro;
			this->label8->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 245);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 18);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Fin:";
			// 
			// dtpStartDate
			// 
			this->dtpStartDate->Location = System::Drawing::Point(23, 225);
			this->dtpStartDate->Margin = System::Windows::Forms::Padding(2);
			this->dtpStartDate->Name = L"dtpStartDate";
			this->dtpStartDate->Size = System::Drawing::Size(126, 20);
			this->dtpStartDate->TabIndex = 36;
			// 
			// dtpEndDate
			// 
			this->dtpEndDate->Location = System::Drawing::Point(24, 263);
			this->dtpEndDate->Margin = System::Windows::Forms::Padding(2);
			this->dtpEndDate->Name = L"dtpEndDate";
			this->dtpEndDate->Size = System::Drawing::Size(126, 20);
			this->dtpEndDate->TabIndex = 37;
			// 
			// bntGenerarReporte
			// 
			this->bntGenerarReporte->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bntGenerarReporte->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bntGenerarReporte->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bntGenerarReporte->Location = System::Drawing::Point(24, 311);
			this->bntGenerarReporte->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->bntGenerarReporte->Name = L"bntGenerarReporte";
			this->bntGenerarReporte->Size = System::Drawing::Size(133, 26);
			this->bntGenerarReporte->TabIndex = 57;
			this->bntGenerarReporte->Text = L"Generar reporte";
			this->bntGenerarReporte->UseVisualStyleBackColor = false;
			this->bntGenerarReporte->Click += gcnew System::EventHandler(this, &ReportForm::bntGenerarReporte_Click);
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 609);
			this->Controls->Add(this->bntGenerarReporte);
			this->Controls->Add(this->dtpEndDate);
			this->Controls->Add(this->dtpStartDate);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dispensedWhaterTimeschart);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->txtGeneratedTime);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cmbPets);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dispensedFoodTimeschart);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ReportForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"ReportForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ReportForm::ReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dispensedFoodTimeschart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dispensedWhaterTimeschart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void FillPetsComboPets() {
				List<Pet^>^ petsList = Service::QueryAllPets();
				if (petsList != nullptr) {
					cmbPets->Items->Clear();
					for each (Pet ^ pet in petsList) {
						cmbPets->Items->Add(gcnew ComboBoxItem(pet->Id,
							pet->Name));
					}
				}
			}
	private: System::Void ReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		txtGeneratedTime->Text = Convert::ToString(DateTime::Now);
		bntGenerarReporte->Enabled = false;
		FillPetsComboPets();
		
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void cmbPets_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	bntGenerarReporte->Enabled = true;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bntGenerarReporte_Click(System::Object^ sender, System::EventArgs^ e) {
	dispensedFoodTimeschart->Series["Veces Dispensado"]->Points->Clear();
	dispensedWhaterTimeschart->Series["Veces Dispensado agua"]->Points->Clear();
	Pet^ pet = Service::QueryPetById(((ComboBoxItem^)(cmbPets->Items[cmbPets->SelectedIndex]))->Value);

	List<Dispensation^>^ dispensationList = Service::ConsultarDispensadasPorDispensador(pet->PetDispenser);
	if ((dtpEndDate->Value > dtpStartDate->Value)) {
		DateTime startDate = dtpStartDate->Value;
		DateTime endDate = dtpEndDate->Value;
		int i = 0;
		int j = 0;
		for (DateTime date = startDate; date <= endDate; date = date.AddDays(1)) {

			int timesDispensed = 0;
			int timesDispensedWather = 0;
			if (i < dispensationList->Count) {
				if (dispensationList[i]->Date == date.ToString("yyyy/MM/dd")) {
					timesDispensed = dispensationList[i]->TimesDispensedFood;
					timesDispensedWather = dispensationList[i]->TimesDispensedWater;
					i++;
				}
			}
			dispensedFoodTimeschart->Series["Veces Dispensado"]->Points->Add(timesDispensed);
			dispensedFoodTimeschart->Series["Veces Dispensado"]->Points[j]->AxisLabel = "" + date.ToString("yyyy/MM/dd");
			dispensedFoodTimeschart->Series["Veces Dispensado"]->Points[j]->Label = "" + timesDispensed;

			dispensedWhaterTimeschart->Series["Veces Dispensado agua"]->Points->Add(timesDispensedWather);
			dispensedWhaterTimeschart->Series["Veces Dispensado agua"]->Points[j]->AxisLabel = "" + date.ToString("yyyy/MM/dd");
			dispensedWhaterTimeschart->Series["Veces Dispensado agua"]->Points[j]->Label = "" + timesDispensedWather;

			j++;
		}
	}
	else {
		MessageBox::Show("Debe seleccionar un rango de fechas valido");
	}
	
}
};
}
