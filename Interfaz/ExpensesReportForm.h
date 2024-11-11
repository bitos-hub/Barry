#pragma once

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
	/// Resumen de ExpensesReportForm
	/// </summary>
	public ref class ExpensesReportForm : public System::Windows::Forms::Form
	{
	public:
		ExpensesReportForm(void)
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
		~ExpensesReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piePrices;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ LeftFoodchart;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpensesReportForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->piePrices = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->LeftFoodchart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piePrices))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftFoodchart))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 9);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(354, 88);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Barry Bites";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1245, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(113, 143);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(257, 199);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 36);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Costos de comidas";
			this->label2->Click += gcnew System::EventHandler(this, &ExpensesReportForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(809, 199);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(364, 36);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Cantidad restante de comidas";
			// 
			// piePrices
			// 
			chartArea1->Name = L"ChartArea1";
			this->piePrices->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->piePrices->Legends->Add(legend1);
			this->piePrices->Location = System::Drawing::Point(133, 238);
			this->piePrices->Name = L"piePrices";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Precios ($)";
			this->piePrices->Series->Add(series1);
			this->piePrices->Size = System::Drawing::Size(469, 377);
			this->piePrices->TabIndex = 33;
			this->piePrices->Text = L"chart1";
			this->piePrices->Click += gcnew System::EventHandler(this, &ExpensesReportForm::chart1_Click);
			// 
			// LeftFoodchart
			// 
			chartArea2->Name = L"ChartArea1";
			this->LeftFoodchart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->LeftFoodchart->Legends->Add(legend2);
			this->LeftFoodchart->Location = System::Drawing::Point(736, 238);
			this->LeftFoodchart->Name = L"LeftFoodchart";
			this->LeftFoodchart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Cantidad restante (kg)";
			this->LeftFoodchart->Series->Add(series2);
			this->LeftFoodchart->Size = System::Drawing::Size(512, 377);
			this->LeftFoodchart->TabIndex = 34;
			this->LeftFoodchart->Text = L"chart2";
			// 
			// ExpensesReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->LeftFoodchart);
			this->Controls->Add(this->piePrices);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Name = L"ExpensesReportForm";
			this->Text = L"ExpensesReportForm";
			this->Load += gcnew System::EventHandler(this, &ExpensesReportForm::ExpensesReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piePrices))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftFoodchart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ExpensesReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
	List<Food^>^ foodsList = Service::QueryAllFoods();
	for (int i = 0; i < foodsList->Count; i++) {
		LeftFoodchart->Series["Cantidad restante (kg)"]->Points->Add(foodsList[i]->FoodAmount);
		LeftFoodchart->Series["Cantidad restante (kg)"]->Points[i]->AxisLabel = foodsList[i]->Name;
		LeftFoodchart->Series["Cantidad restante (kg)"]->Points[i]->Label = ""+foodsList[i]->FoodAmount;
	}
	
	for (int i = 0; i < foodsList->Count; i++) {
		piePrices->Series["Precios ($)"]->Points->Add(foodsList[i]->FoodPrice);
		piePrices->Series["Precios ($)"]->Points[i]->LegendText = foodsList[i]->Name;
		piePrices->Series["Precios ($)"]->Points[i]->Label = "$" + foodsList[i]->FoodPrice;
	}
}
};
}
