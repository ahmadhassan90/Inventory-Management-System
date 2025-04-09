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
	/// <summary>
	/// Summary for MyForm10
	/// </summary>
	public ref class MyForm10 : public System::Windows::Forms::Form
	{
	public:
		String^ str = "Data Source = (DESCRIPTION = " +

			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0 )(PORT = 1521))" +
			"(CONNECT_DATA = " +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");  User Id= system ; password = system;";
	public: System::Windows::Forms::Button^ button1;
	public:
	public: System::Windows::Forms::Button^ button2;
		   OracleConnection^ orc = gcnew  OracleConnection(str);
	public:
		MyForm10(void)
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
		~MyForm10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ SALES_ID;
	private: System::Windows::Forms::ColumnHeader^ Customer_ID;
	private: System::Windows::Forms::ColumnHeader^ DATE;
	private: System::Windows::Forms::ColumnHeader^ TOTAL;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->SALES_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->Customer_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->DATE = (gcnew System::Windows::Forms::ColumnHeader());
			this->TOTAL = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(434, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sales Record";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->SALES_ID, this->Customer_ID,
					this->DATE, this->TOTAL
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(205, 90);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(750, 422);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// SALES_ID
			// 
			this->SALES_ID->Text = L"SALES ID";
			this->SALES_ID->Width = 198;
			// 
			// Customer_ID
			// 
			this->Customer_ID->Text = L"CUSTOMER ID";
			this->Customer_ID->Width = 165;
			// 
			// DATE
			// 
			this->DATE->Text = L"DATE";
			this->DATE->Width = 126;
			// 
			// TOTAL
			// 
			this->TOTAL->Text = L"TOTAL";
			this->TOTAL->Width = 265;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(188, 571);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"CURRENT MONTH SALES";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm10::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(916, 571);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 49);
			this->button2->TabIndex = 3;
			this->button2->Text = L"TOTAL SALES";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm10::button2_Click);
			// 
			// MyForm10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1137, 661);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm10";
			this->Text = L"MyForm10";
			this->Load += gcnew System::EventHandler(this, &MyForm10::MyForm10_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		

#pragma endregion
		public:
		void PopulateListView2()
		{
			// Clear existing items in the ListView
			listView1->Items->Clear();

			// Get the current month and year
			int currentMonth = DateTime::Now.Month;
			int currentYear = DateTime::Now.Year;

			orc->Open();

			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM sales WHERE EXTRACT(MONTH FROM SALEDATE) = :month AND EXTRACT(YEAR FROM SALEDATE) = :year", orc);
			command->Parameters->Add(":month", OracleDbType::Decimal)->Value = currentMonth;
			command->Parameters->Add(":year", OracleDbType::Decimal)->Value = currentYear;

			OracleDataReader^ reader = command->ExecuteReader();

			// Check if there are any rows returned by the query
			if (reader->HasRows)
			{
				// Iterate through the data reader and add items to the ListView
				while (reader->Read())
				{
					// Create a new ListViewItem and add sub-items
					ListViewItem^ item = gcnew ListViewItem(reader["ID"]->ToString());
					item->SubItems->Add(reader["CID"]->ToString());
					item->SubItems->Add(reader["SALEDATE"]->ToString());
					item->SubItems->Add(reader["TOTAL"]->ToString());

					// Add the ListViewItem to the ListView
					listView1->Items->Add(item);
				}
			}
			else
			{
				MessageBox::Show("No data found.", "Empty Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			reader->Close();
			orc->Close();
		}

		void PopulateListView()
		{
			// Clear existing items in the ListView
			listView1->Items->Clear();

			orc->Open();

			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM sales", orc);
			OracleDataReader^ reader = command->ExecuteReader();

			// Check if there are any rows returned by the query
			if (reader->HasRows)
			{
				// Iterate through the data reader and add items to the ListView
				while (reader->Read())
				{
					// Create a new ListViewItem and add sub-items
					ListViewItem^ item = gcnew ListViewItem(reader["ID"]->ToString());
					item->SubItems->Add(reader["CID"]->ToString());
					item->SubItems->Add(reader["SALEDATE"]->ToString());
					item->SubItems->Add(reader["TOTAL"]->ToString());

					// Add the ListViewItem to the ListView
					listView1->Items->Add(item);
				}
			}
			else
			{
				MessageBox::Show("No data found.", "Empty Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			reader->Close();
			orc->Close();
		}
	private: System::Void MyForm10_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		PopulateListView();
	}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
    {
	PopulateListView();
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
    {
		PopulateListView2();
    }
};
}
