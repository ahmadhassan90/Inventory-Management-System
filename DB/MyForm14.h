#pragma once
#include<iostream>
#include<cstring>
#include<list>
#include <unordered_map>
#include"MyForm15.h"
using namespace std;
namespace DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;;
	/// <summary>
	/// Summary for MyForm14
	/// </summary>
	public ref class MyForm14 : public System::Windows::Forms::Form
	{
	public:
		
		String^ str = "Data Source = (DESCRIPTION = " +

			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0 )(PORT = 1521))" +
			"(CONNECT_DATA = " +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");  User Id= system ; password = system;";
	private: System::Windows::Forms::ColumnHeader^ Month;
	public:
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	public:
		   OracleConnection^ orc = gcnew  OracleConnection(str);
		MyForm14(void)
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
		~MyForm14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ Expense;
	private: System::Windows::Forms::ColumnHeader^ Total;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Expense = (gcnew System::Windows::Forms::ColumnHeader());
			this->Total = (gcnew System::Windows::Forms::ColumnHeader());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->Month = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1183, 322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sales Report";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm14::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(119, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 64);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Expenses";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(696, 53);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 64);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Profit";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->Expense, this->Total });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(119, 139);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(419, 361);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Expense
			// 
			this->Expense->Text = L"MONTH";
			this->Expense->Width = 169;
			// 
			// Total
			// 
			this->Total->Text = L"Total";
			this->Total->Width = 244;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(110, 521);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 64);
			this->button4->TabIndex = 4;
			this->button4->Text = L"CURRENT MONTH";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm14::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(412, 522);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 64);
			this->button5->TabIndex = 5;
			this->button5->Text = L"OVERALL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm14::button5_Click);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->Month, this->columnHeader2 });
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(696, 139);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(419, 361);
			this->listView2->TabIndex = 8;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm14::listView2_SelectedIndexChanged);
			// 
			// Month
			// 
			this->Month->Text = L"Month";
			this->Month->Width = 170;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Profit/Loss";
			this->columnHeader2->Width = 219;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(925, 522);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(126, 64);
			this->button6->TabIndex = 10;
			this->button6->Text = L"OVERALL";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm14::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(687, 521);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(126, 64);
			this->button7->TabIndex = 9;
			this->button7->Text = L"CURRENT MONTH";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm14::button7_Click);
			// 
			// MyForm14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1348, 672);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm14";
			this->Text = L"MyForm14";
			this->Load += gcnew System::EventHandler(this, &MyForm14::MyForm14_Load);
			this->ResumeLayout(false);

		}
		void populatelistview()
		{
			listView1->Items->Clear();


			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT DISTINCT EXTRACT(MONTH FROM bdate) AS month FROM bill", orc);
			OracleDataReader^ reader = command->ExecuteReader();

			while (reader->Read())
			{
				Decimal monthDecimal = reader->GetDecimal(reader->GetOrdinal("month"));
				int month = Decimal::ToInt32(monthDecimal);
				// Call the SQL query to calculate total expenses for the month

				OracleCommand^ totalExpensesCommand = gcnew OracleCommand("SELECT SUM(ebill + rbill) FROM bill WHERE EXTRACT(MONTH FROM bdate) = :month", orc);
				totalExpensesCommand->Parameters->Add(":month", OracleDbType::Decimal)->Value = month;
				Object^ result = totalExpensesCommand->ExecuteScalar();

				double totalExpenses = result != DBNull::Value ? Convert::ToDouble(result) : 0.0;

				// Add the salary from the emp table for the month

				OracleCommand^ salaryCommand = gcnew OracleCommand("SELECT SUM(sal) FROM emp", orc);
				Object^ salaryResult = salaryCommand->ExecuteScalar();
				double salary = salaryResult != DBNull::Value ? Convert::ToDouble(salaryResult) : 0.0;

				// Add the total from the invoice table for the month

				OracleCommand^ invoiceCommand = gcnew OracleCommand("SELECT SUM(total) FROM invoice WHERE EXTRACT(MONTH FROM idate) = :month", orc);
				invoiceCommand->Parameters->Add(":month", OracleDbType::Decimal)->Value = month;
				Object^ invoiceResult = invoiceCommand->ExecuteScalar();
				double invoiceTotal = invoiceResult != DBNull::Value ? Convert::ToDouble(invoiceResult) : 0.0;

				// Calculate the total expenses by summing the salary, invoice total, and bill total
				totalExpenses = salary + invoiceTotal + totalExpenses;

				// Create a new ListViewItem and add the month and total expenses as sub-items
				ListViewItem^ item = gcnew ListViewItem(month.ToString());
				item->SubItems->Add(totalExpenses.ToString());

				// Add the ListViewItem to listView1
				listView1->Items->Add(item);
			}

			reader->Close();

			// Close the connection
			orc->Close();


		}
		void RepopulateListView1()
		{
			// Clear existing items in listView1
			listView1->Items->Clear();
			orc->Open();
			// Get the current month
			int currentMonth = DateTime::Now.Month;

			// Call the SQL query to calculate total expenses for the current month
			OracleCommand^ totalExpensesCommand = gcnew OracleCommand("SELECT SUM(ebill + rbill) FROM bill WHERE EXTRACT(MONTH FROM bdate) = :month", orc);
			totalExpensesCommand->Parameters->Add(":month", OracleDbType::Decimal)->Value = currentMonth;
			Object^ result = totalExpensesCommand->ExecuteScalar();

			double totalExpenses = result != DBNull::Value ? Convert::ToDouble(result) : 0.0;

			// Add the salary from the emp table for the current month
			OracleCommand^ salaryCommand = gcnew OracleCommand("SELECT SUM(sal) FROM emp", orc);
			Object^ salaryResult = salaryCommand->ExecuteScalar();
			double salary = salaryResult != DBNull::Value ? Convert::ToDouble(salaryResult) : 0.0;

			// Add the total from the invoice table for the current month
			OracleCommand^ invoiceCommand = gcnew OracleCommand("SELECT SUM(total) FROM invoice WHERE EXTRACT(MONTH FROM idate) = :month", orc);
			invoiceCommand->Parameters->Add(":month", OracleDbType::Decimal)->Value = currentMonth;
			Object^ invoiceResult = invoiceCommand->ExecuteScalar();
			double invoiceTotal = invoiceResult != DBNull::Value ? Convert::ToDouble(invoiceResult) : 0.0;

			// Calculate the total expenses by summing the salary, invoice total, and bill total
			totalExpenses = salary + invoiceTotal + totalExpenses;

			// Create a new ListViewItem and add the current month and total expenses as sub-items
			ListViewItem^ item = gcnew ListViewItem(currentMonth.ToString());
			item->SubItems->Add(totalExpenses.ToString());

			// Add the ListViewItem to listView1
			listView1->Items->Add(item);
			orc->Close();
		}
		void repopulateListView2()
		{
			// Clear listView2
			listView2->Items->Clear();
			orc->Open();
			// Create a dictionary to store the expenses for each month
			std::unordered_map<int, double> expensesDict;
			// Iterate over the items in listView1 and populate the dictionary
			for each (ListViewItem ^ item in listView1->Items)
			{
				int month = Convert::ToInt32(item->SubItems[0]->Text);
				double expense = Convert::ToDouble(item->SubItems[1]->Text);
				expensesDict[month] = expense;
			}

			// Get the current month
			int currentMonth = DateTime::Now.Month;

			// Retrieve sales data for the current month from the database
			OracleCommand^ salesCommand = gcnew OracleCommand("SELECT DISTINCT EXTRACT(MONTH FROM saledate) AS month, SUM(total) AS total FROM sales WHERE EXTRACT(MONTH FROM saledate) = :month GROUP BY EXTRACT(MONTH FROM saledate)", orc);
			salesCommand->Parameters->Add(":month", OracleDbType::Decimal)->Value = currentMonth;
			OracleDataReader^ salesReader = salesCommand->ExecuteReader();

			// Iterate over the sales data and calculate the net sales for the current month
			while (salesReader->Read())
			{
				// Get the sales total from the database
				double salesTotal = Convert::ToDouble(salesReader->GetDecimal(salesReader->GetOrdinal("total")));

				// Retrieve the expenses for the current month from the dictionary
				double expensesTotal = 0.0;
				if (expensesDict.find(currentMonth) != expensesDict.end())
				{
					expensesTotal = expensesDict[currentMonth];
				}

				// Calculate the net sales for the current month
				double netSales = salesTotal - expensesTotal;

				// Create a new ListViewItem and add the month and net sales as sub-items
				ListViewItem^ item = gcnew ListViewItem(currentMonth.ToString());
				item->SubItems->Add(netSales.ToString());

				// Add the ListViewItem to listView2
				listView2->Items->Add(item);
			}

			// Close the reader and database connection
			salesReader->Close();
			orc->Close();
		}

		void populateListView2()
		{
			// Clear listView2
			listView2->Items->Clear();
			orc->Open();
			// Create a dictionary to store the expenses for each month
			std::unordered_map<int, double> expensesDict;
			// Iterate over the items in listView1 and populate the dictionary
			for each (ListViewItem ^ item in listView1->Items)
			{
				int month = Convert::ToInt32(item->SubItems[0]->Text);
				double expense = Convert::ToDouble(item->SubItems[1]->Text);
				expensesDict[month] = expense;
			}

			// Retrieve sales data from the database
			OracleCommand^ salesCommand = gcnew OracleCommand("SELECT DISTINCT EXTRACT(MONTH FROM saledate) AS month, SUM(total) AS total FROM sales GROUP BY EXTRACT(MONTH FROM saledate)", orc);
			OracleDataReader^ salesReader = salesCommand->ExecuteReader();

			// Iterate over the sales data and calculate the net sales for each month
			while (salesReader->Read())
			{
				// Get the month and sales total from the database
				int month = Convert::ToInt32(salesReader->GetDecimal(salesReader->GetOrdinal("month")));
				double salesTotal = Convert::ToDouble(salesReader->GetDecimal(salesReader->GetOrdinal("total")));

				// Retrieve the expenses for the month from the dictionary
				double expensesTotal = 0.0;
				if (expensesDict.find(month) != expensesDict.end())
				{
					expensesTotal = expensesDict[month];
				}

				// Calculate the net sales for the month
				double netSales = salesTotal - expensesTotal;

				// Create a new ListViewItem and add the month, sales total, expenses total, and net sales as sub-items
				ListViewItem^ item = gcnew ListViewItem(month.ToString());
				item->SubItems->Add(netSales.ToString());

				// Add the ListViewItem to listView2
				listView2->Items->Add(item);
			}

			// Close the reader and database connection
			salesReader->Close();
			orc->Close();
		}

		

#pragma endregion
	private: System::Void listView2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RepopulateListView1();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{

	populatelistview();
}
private: System::Void MyForm14_Load(System::Object^ sender, System::EventArgs^ e) 
{
	populatelistview();
	populateListView2();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	populateListView2();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	repopulateListView2();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	MyForm15^ obj = gcnew MyForm15();
	obj->ShowDialog();
	this->Show();
}
};
}
