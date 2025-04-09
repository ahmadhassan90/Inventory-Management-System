#pragma once
#include<iostream>
#include<cstring>
#include<list>
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
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ str = "Data Source = (DESCRIPTION = " +

			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0 )(PORT = 1521))" +
			"(CONNECT_DATA = " +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");  User Id= system ; password = system;";
		OracleConnection^ orc = gcnew  OracleConnection(str);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Rack_No;
	private: System::Windows::Forms::ColumnHeader^ Occupied_Space;
	private: System::Windows::Forms::ColumnHeader^ Available_Space;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ Product;
	private: System::Windows::Forms::ColumnHeader^ Qty;
	private: System::Windows::Forms::ColumnHeader^ Status;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->Rack_No = (gcnew System::Windows::Forms::ColumnHeader());
			this->Occupied_Space = (gcnew System::Windows::Forms::ColumnHeader());
			this->Available_Space = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->Product = (gcnew System::Windows::Forms::ColumnHeader());
			this->Qty = (gcnew System::Windows::Forms::ColumnHeader());
			this->Status = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(21, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Available Space per Rack";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Rack_No, this->Occupied_Space,
					this->Available_Space
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(-5, 50);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(456, 360);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm7::listView1_SelectedIndexChanged);
			// 
			// Rack_No
			// 
			this->Rack_No->Text = L" Rack No";
			this->Rack_No->Width = 116;
			// 
			// Occupied_Space
			// 
			this->Occupied_Space->Text = L"Occupied Space";
			this->Occupied_Space->Width = 149;
			// 
			// Available_Space
			// 
			this->Available_Space->Text = L"Yes/No";
			this->Available_Space->Width = 130;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Product, this->Qty,
					this->Status
			});
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(612, 65);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(456, 360);
			this->listView2->TabIndex = 3;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm7::listView2_SelectedIndexChanged);
			// 
			// Product
			// 
			this->Product->Text = L"Product";
			this->Product->Width = 120;
			// 
			// Qty
			// 
			this->Qty->Text = L"Qty";
			this->Qty->Width = 86;
			// 
			// Status
			// 
			this->Status->Text = L"Status";
			this->Status->Width = 111;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(621, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Inventory Level";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(12, 440);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(313, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"*Yes or No Mean You can place item or not";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1191, 611);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"MyForm7";
			this->Text = L"MyForm7";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void inventoryLevel()
		{
			orc->Open();

			listView2->Items->Clear();

			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM product", orc);
			OracleDataReader^ reader = command->ExecuteReader();

			// Iterate through the data reader and add items to the ListView
			while (reader->Read())
			{
				String^ productName = reader["name"]->ToString();
				int quantity = Convert::ToInt32(reader["quantity"]);

				ListViewItem^ item = gcnew ListViewItem(productName);
				item->SubItems->Add(quantity.ToString());

				if (quantity >= 10)
				{
					item->SubItems->Add("Sufficient");
				}
				else
				{
					item->SubItems->Add("Reorder Plz");
				}

				listView2->Items->Add(item);
			}

			reader->Close();
			orc->Close();
		}

		void PopulateListView()
		{
			orc->Open();

			// Create a list of rack numbers (assuming rack numbers 1 to 10)
			list<int> rackNumbers;
			for (int i = 1; i <= 10; i++)
			{
				rackNumbers.push_back(i);
			}
			

			// Clear existing items in the ListView
			listView1->Items->Clear();

			// Iterate through each rack number
			for each (int rackNo in rackNumbers)
			{
				// Get the occupied space for the current rack number
				OracleCommand^ command = gcnew OracleCommand("SELECT SUM(quantity) as occupiedspace FROM product WHERE rackno = " + rackNo, orc);
				OracleDataReader^ reader = command->ExecuteReader();

				int occupiedSpace = 0;

				// Check if there are any rows returned by the query
				if (reader->HasRows && reader->Read())
				{
					if (!reader->IsDBNull(reader->GetOrdinal("occupiedspace")))
					{
						occupiedSpace  = Convert::ToInt32(reader["occupiedspace"]);
					}
				}

				reader->Close();

				// Create a new ListViewItem and add sub-items
				ListViewItem^ item = gcnew ListViewItem(rackNo.ToString());
				item->SubItems->Add(occupiedSpace.ToString());

				// Check if occupied space is greater than 100
				if (occupiedSpace > 100)
				{
					item->SubItems->Add("No");
				}
				else
				{
					item->SubItems->Add("Yes");
				}

				// Add the ListViewItem to the ListView
				listView1->Items->Add(item);
			}

			orc->Close();
		}

#pragma endregion
	private: System::Void MyForm7_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		PopulateListView();
		inventoryLevel();
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
