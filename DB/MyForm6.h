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
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		String^ str = "Data Source = (DESCRIPTION = " +

			"(ADDRESS = (PROTOCOL = TCP)(HOST = 0.0.0.0 )(PORT = 1521))" +
			"(CONNECT_DATA = " +
			"(SERVER = DEDICATED)" +
			"(SERVICE_NAME = XE)" +
			")" +
			");  User Id= system ; password = system;";
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ NAME;
	private: System::Windows::Forms::ColumnHeader^ Quantity;
	private: System::Windows::Forms::ColumnHeader^ Cost;
	private: System::Windows::Forms::ColumnHeader^ Price;
	private: System::Windows::Forms::ColumnHeader^ Rackno;
	private: System::Windows::Forms::ColumnHeader^ Barcode;
	private: System::Windows::Forms::ColumnHeader^ Category;
	private: System::Windows::Forms::Label^ label1;
	public:
		OracleConnection^ orc = gcnew  OracleConnection(str);
		MyForm6(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			listView1->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &MyForm6::listView1_ItemSelectionChanged);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->NAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->Quantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cost = (gcnew System::Windows::Forms::ColumnHeader());
			this->Price = (gcnew System::Windows::Forms::ColumnHeader());
			this->Rackno = (gcnew System::Windows::Forms::ColumnHeader());
			this->Barcode = (gcnew System::Windows::Forms::ColumnHeader());
			this->Category = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 448);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Category";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(251, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 45);
			this->button2->TabIndex = 22;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm6::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(130, 501);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 45);
			this->button3->TabIndex = 21;
			this->button3->Text = L"EDIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm6::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(9, 501);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 45);
			this->button1->TabIndex = 20;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 26);
			this->textBox1->TabIndex = 23;
			this->textBox1->Text = L"PROD ID";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 26);
			this->textBox2->TabIndex = 24;
			this->textBox2->Text = L"PROD NAME";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 156);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(174, 26);
			this->textBox3->TabIndex = 25;
			this->textBox3->Text = L"QTY";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 224);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(174, 26);
			this->textBox4->TabIndex = 26;
			this->textBox4->Text = L"COST";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 293);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(174, 26);
			this->textBox5->TabIndex = 27;
			this->textBox5->Text = L"Price";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 352);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(174, 26);
			this->textBox6->TabIndex = 28;
			this->textBox6->Text = L"Rack No.";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 402);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(174, 26);
			this->textBox7->TabIndex = 29;
			this->textBox7->Text = L"BARCODE#";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->ID, this->NAME, this->Quantity,
					this->Cost, this->Price, this->Rackno, this->Barcode, this->Category
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(368, 48);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(811, 399);
			this->listView1->TabIndex = 30;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm6::listView1_SelectedIndexChanged);
			// 
			// ID
			// 
			this->ID->Text = L"PRODUCT_ID";
			this->ID->Width = 123;
			// 
			// NAME
			// 
			this->NAME->Text = L"PRODUCT NAME";
			this->NAME->Width = 160;
			// 
			// Quantity
			// 
			this->Quantity->Text = L"Quantity";
			this->Quantity->Width = 85;
			// 
			// Cost
			// 
			this->Cost->Text = L"Cost";
			// 
			// Price
			// 
			this->Price->Text = L"Price";
			// 
			// Rackno
			// 
			this->Rackno->Text = L"Rackno";
			this->Rackno->Width = 74;
			// 
			// Barcode
			// 
			this->Barcode->Text = L"Barcode";
			this->Barcode->Width = 85;
			// 
			// Category
			// 
			this->Category->Text = L"Category";
			this->Category->Width = 89;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(682, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 32);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Products";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1191, 611);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->Load += gcnew System::EventHandler(this, &MyForm6::MyForm6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void PopulateListView()
		{

			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM product", orc);
			OracleDataReader^ reader = command->ExecuteReader();

			// Clear existing items in the ListView
			// Clear existing items in the ListView
			listView1->Items->Clear();

			// Check if there are any rows returned by the query
			if (reader->HasRows)
			{
				// Iterate through the data reader and add items to the ListView
				while (reader->Read())
				{
					// Create a new ListViewItem and add sub-items
					ListViewItem^ item = gcnew ListViewItem(reader["ID"]->ToString());
					item->SubItems->Add(reader["NAME"]->ToString());
					item->SubItems->Add(reader["QUANTITY"]->ToString());
					item->SubItems->Add(reader["COST"]->ToString());
					item->SubItems->Add(reader["PRICE"]->ToString());
					item->SubItems->Add(reader["RACKNO"]->ToString());
					item->SubItems->Add(reader["BARCODE"]->ToString());
					item->SubItems->Add(reader["CATEGORYNAME"]->ToString());
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
		void listView1_ItemSelectionChanged(System::Object^ sender, ListViewItemSelectionChangedEventArgs ^e)
		{
			if (e->IsSelected)
			{
				ListViewItem^ selectedRow = e->Item;

				ListView::ListViewItemCollection^ items = listView1->Items;
				ListViewItem^ selectedItem = items[selectedRow->Index];

				
				textBox1->Text = selectedItem->SubItems[0]->Text; // Assuming textBox1 is for ID
				textBox2->Text = selectedItem->SubItems[1]->Text; // Assuming textBox2 is for Name
				textBox3->Text = selectedItem->SubItems[2]->Text; // Assuming textBox3 is for Quantity
				textBox4->Text = selectedItem->SubItems[3]->Text; // Assuming textBox4 is for Cost
				textBox5->Text = selectedItem->SubItems[4]->Text;// Assuming textBox5 is for Price
				textBox6->Text = selectedItem->SubItems[5]->Text; // Assuming textBox6 is for RackNo
				textBox7->Text = selectedItem->SubItems[6]->Text; // Assuming textBox7 is for Barcode
				comboBox1->Text = selectedItem->SubItems[7]->Text; // Assuming COMBOBOX1 is for CategoryName
				// Get the selected ListViewItem
				// You can access the data for other columns in a similar way
			}
		}

		void fillout()
		{
			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT name FROM Category", orc);
			

			OracleDataReader^ reader = command->ExecuteReader();

			// Clear existing items in the ComboBox
			comboBox1->Items->Clear();

			// Check if there are any rows returned by the query
			if (reader->HasRows)
			{
				while (reader->Read())
				{
					
					comboBox1->Items->Add(reader["name"]->ToString());
				}
			}
			else
			{
				MessageBox::Show("No data found.", "Empty Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			reader->Close();

			orc->Close();
			
		}
#pragma endregion
	private: System::Void MyForm6_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		fillout();
		PopulateListView();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	orc->Open();
	OracleCommand^ cmd = gcnew OracleCommand("Insert into Product values(" + textBox1->Text + ",'" + textBox2->Text + "',"+ textBox3->Text + "," + textBox4->Text + "," + textBox5->Text + "," + textBox6->Text + ",'" + textBox7->Text + "','" + comboBox1->SelectedItem->ToString() + "')", orc);
	cmd->ExecuteNonQuery();
	orc->Close();
	MessageBox::Show("Product Added successfully", "Successfull");
	PopulateListView();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	orc->Open();
	OracleCommand^ cmd = gcnew OracleCommand("UPDATE Product SET Name = '" + textBox2->Text + "', Quantity = " + textBox3->Text + ", Cost = " + textBox4->Text + ", Price = " + textBox5->Text + ", RackNo = " + textBox6->Text + ", Barcode = '" + textBox7->Text + "', CategoryName = '" + comboBox1->SelectedItem->ToString() + "' WHERE ID = " + textBox1->Text, orc);
	cmd->ExecuteNonQuery();
	orc->Close();
	MessageBox::Show("Product updated successfully", "Success");
	PopulateListView();

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	orc->Open();
	OracleCommand^ cmd = gcnew OracleCommand("DELETE FROM Product WHERE ID = " + textBox1->Text, orc);
	cmd->ExecuteNonQuery();
	orc->Close();
	MessageBox::Show("Product deleted successfully", "Success");
	PopulateListView();

}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
