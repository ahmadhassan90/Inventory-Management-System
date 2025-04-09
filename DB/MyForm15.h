#pragma once
#include<iostream>
#include<cstring>
using namespace std;
namespace DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// Summary for MyForm15
	/// </summary>
	public ref class MyForm15 : public System::Windows::Forms::Form
	{
	public:
		String^ str = "Data Source = (DESCRIPTION = " +

			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0 )(PORT = 1521))" +
			"(CONNECT_DATA = " +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");  User Id= system ; password = system;";
		OracleConnection^ orc = gcnew  OracleConnection(str);
		MyForm15(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm15()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(90, 66);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(669, 332);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm15::chart1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(340, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sales Report";
			// 
			// MyForm15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(892, 465);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm15";
			this->Text = L"MyForm15";
			this->Load += gcnew System::EventHandler(this, &MyForm15::MyForm15_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void MyForm15_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// Clear the chart
		chart1->Series->Clear();
		orc->Open();

		// Retrieve data from the sales table
		OracleCommand^ command = gcnew OracleCommand("SELECT EXTRACT(MONTH FROM saledate) AS month, SUM(total) AS total FROM sales GROUP BY EXTRACT(MONTH FROM saledate) HAVING SUM(total) > 0", orc);
		OracleDataReader^ reader = command->ExecuteReader();

		// Create a series for the chart
		Series^ series = gcnew Series("Sales");
		series->ChartType = SeriesChartType::Column;

		// Loop through the data and add points to the series
		while (reader->Read())
		{
			int month = Convert::ToInt32(reader->GetDecimal(reader->GetOrdinal("month")));
			double total = Convert::ToDouble(reader->GetDecimal(reader->GetOrdinal("total")));

			// Add the points to the series (switched X-axis and Y-axis)
			series->Points->AddXY(month, total);
		}

		// Add the series to the chart
		chart1->Series->Add(series);

		// Set the chart title and axis labels
		chart1->Titles->Clear();
		chart1->Titles->Add("Sales by Month and Total");

		chart1->ChartAreas[0]->AxisX->Title = "Month";
		chart1->ChartAreas[0]->AxisY->Title = "Total";

		// Close the reader and database connection
		reader->Close();
		orc->Close();
	
	}
	};
}
