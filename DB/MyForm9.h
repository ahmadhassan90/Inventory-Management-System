#pragma once
#include<iostream>
#include<cstring>
using namespace std;
#include"MyForm10.h"
namespace DB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Oracle::DataAccess::Client;
	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		String^ str = "Data Source = (DESCRIPTION = " +

			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0 )(PORT = 1521))" +
			"(CONNECT_DATA = " +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");  User Id= system ; password = system;";
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	public:
		OracleConnection^ orc = gcnew  OracleConnection(str);
		MyForm9(void)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Product;
	private: System::Windows::Forms::ColumnHeader^ Price;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::ColumnHeader^ Pro;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ Row_Sum;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Product = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->Pro = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Row_Sum = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(403, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Customer ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Products List";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->Product, this->Price });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 48);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(368, 293);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm9::listView1_SelectedIndexChanged);
			// 
			// Product
			// 
			this->Product->Text = L"Product Name";
			this->Product->Width = 166;
			// 
			// Price
			// 
			this->Price->Text = L"Price";
			this->Price->Width = 183;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(403, 186);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(641, 550);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 75);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Pro, this->columnHeader2,
					this->Row_Sum
			});
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(21, 370);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(596, 241);
			this->listView2->TabIndex = 6;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm9::listView2_SelectedIndexChanged);
			// 
			// Pro
			// 
			this->Pro->Text = L"Product Name";
			this->Pro->Width = 166;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Quantity";
			this->columnHeader2->Width = 183;
			// 
			// Row_Sum
			// 
			this->Row_Sum->Text = L"Row Total";
			this->Row_Sum->Width = 145;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 344);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Order List";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(641, 423);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 26);
			this->textBox2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(632, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Total";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(641, 467);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 47);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(403, 133);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 26);
			this->textBox3->TabIndex = 10;
			this->textBox3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(408, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Quantity";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(803, 48);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(624, 494);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1439, 637);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm9";
			this->Text = L"MyForm9";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void PopulateListView()
		{
			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT name, price FROM product WHERE quantity > 0", orc);
			OracleDataReader^ reader = command->ExecuteReader();

			// Clear existing items in the ListView
			listView1->Items->Clear();

			// Check if there are any rows returned by the query
			if (reader->HasRows)
			{
				// Iterate through the data reader and add items to the ListView
				while (reader->Read())
				{
					// Create a new ListViewItem and add sub-items
					ListViewItem^ item = gcnew ListViewItem(reader["name"]->ToString());
					item->SubItems->Add(reader["price"]->ToString());

					// Add the ListViewItem to the ListView
					listView1->Items->Add(item);
				}
			}
			else
			{
				MessageBox::Show("No products found with quantity greater than 0.", "Empty Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			reader->Close();
			orc->Close();
		}
		void totalsum()
		{
			double totalSum = 0.0;

			// Iterate through each item in ListView2
			for each (ListViewItem ^ item in listView2->Items)
			{
				double rowPrice = Convert::ToDouble(item->SubItems[2]->Text);
				totalSum += rowPrice;
			}

			// Set the total sum in textbox2
			textBox2->Text = totalSum.ToString();
		}

		static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;

			if (string->Length == 0 || string->Length < 0)
			{
				MessageBox::Show("No field can be empty");

			}

			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);


			return returnString;
		}
#pragma endregion
	private: System::Void MyForm9_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		PopulateListView();
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	//listView2->Items->Clear();

	// Check if an item is selected in ListView1
	if (listView1->SelectedItems->Count > 0)
	{
		ListViewItem^ selectedItem = listView1->SelectedItems[0];
		String^ productName = selectedItem->SubItems[0]->Text;
		double price = Convert::ToDouble(selectedItem->SubItems[1]->Text);
		int quantity = Convert::ToInt32(textBox3->Text);

		// Connect to the Oracle database and execute a query to fetch the available quantity
		int availableQuantity = 0;
		
			// Assuming you have a database connection object called "connection"
			// and the column for quantity in the "product" table is named "quantity"
			// Execute the SQL query to fetch the available quantity
			String^ query = "SELECT quantity FROM product WHERE name = '" + productName + "'";
			OracleCommand^ cmd = gcnew OracleCommand(query, orc);
			orc->Open();
			availableQuantity = Convert::ToInt32(cmd->ExecuteScalar());
		
			// Close the database connection
			orc->Close();
		

		// Check if the entered quantity is less than or equal to the available quantity
		if (quantity > 0 && quantity <= availableQuantity)
		{
			double rowTotal = price * quantity;

			// Create a new ListViewItem and add sub-items
			ListViewItem^ item = gcnew ListViewItem(productName);
			item->SubItems->Add(quantity.ToString());
			item->SubItems->Add(rowTotal.ToString());

			// Add the ListViewItem to ListView2
			listView2->Items->Add(item);
		}
		else
		{
			MessageBox::Show("Not able to add because we have less quantity");
		}
		
	}

	totalsum();
}
	  
private: System::Void listView2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (listView2->SelectedItems->Count > 0)
	{
		ListViewItem^ selectedItem = listView2->SelectedItems[0];
		listView2->Items->Remove(selectedItem);
	}
	totalsum();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	orc->Open();
	OracleCommand^ cmd = gcnew OracleCommand("INSERT INTO sales  VALUES (order_s.nextval, '" +
		textBox1->Text + "', TO_DATE('" + dateTimePicker1->Value.ToString("yyyy-MM-dd") + "', 'YYYY-MM-DD'), '" + textBox2->Text + "')", orc);
	cmd->ExecuteNonQuery();
	orc->Close();
	orc->Open();

	// Get the next value from the order_s sequence
	OracleCommand^ sequenceCmd = gcnew OracleCommand("SELECT order_s.currval FROM dual", orc);
	int orderId = Convert::ToInt32(sequenceCmd->ExecuteScalar());

	// Iterate over each item in listView2
	for each (ListViewItem ^ item in listView2->Items)
	{
		// Get the product name and quantity from the current item
		String^ productName = item->SubItems[0]->Text;
		int quantity = Convert::ToInt32(item->SubItems[1]->Text);

		// Insert the row into the sales_detail table with the order_s sequence and the product name and quantity
		OracleCommand^ cmd = gcnew OracleCommand("INSERT INTO sales_detail  VALUES (" +
			orderId + ", '" + productName + "', " + quantity + ")", orc);
		cmd->ExecuteNonQuery();
	}

	orc->Close();
		// Create a new instance of RichTextBox
		RichTextBox ^receiptBox = gcnew RichTextBox;

		// Add the receipt header
		receiptBox->AppendText("Receipt\n");
		receiptBox->AppendText("Customer ID: " + textBox1->Text + "\n\n");

		// Iterate through the rows in listView2
		for each(ListViewItem ^ item in listView2->Items)
		{
			// Add the product details to the receipt
			receiptBox->AppendText("Product: " + item->SubItems[0]->Text + "\n");
			receiptBox->AppendText("Quantity: " + item->SubItems[1]->Text + "\n");
			receiptBox->AppendText("Row Total: " + item->SubItems[2]->Text + "\n\n");
		}

		// Add the total to the receipt
		receiptBox->AppendText("Total: " + textBox2->Text + "\n\n");

		// Add the thank you message
		receiptBox->AppendText("Thank you for your purchase!");

		// Display the receipt in the RichTextBox control
		// Assuming you have a RichTextBox control named richTextBox1
		richTextBox1->Text = receiptBox->Text;

}
};
}

