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
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
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

		MyForm11(void)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ ENAME;
	private: System::Windows::Forms::ColumnHeader^ PHONENO;
	private: System::Windows::Forms::ColumnHeader^ SALESANNAME;
	private: System::Windows::Forms::ColumnHeader^ CITY;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;

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
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->ENAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->PHONENO = (gcnew System::Windows::Forms::ColumnHeader());
			this->SALESANNAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->CITY = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(763, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 29);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Vendors List";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->ID, this->ENAME,
					this->PHONENO, this->SALESANNAME, this->CITY
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(520, 71);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(700, 399);
			this->listView1->TabIndex = 19;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm11::listView1_SelectedIndexChanged);
			// 
			// ID
			// 
			this->ID->Text = L"VENDOR_ID";
			this->ID->Width = 122;
			// 
			// ENAME
			// 
			this->ENAME->Text = L"COMPANY NAME";
			this->ENAME->Width = 187;
			// 
			// PHONENO
			// 
			this->PHONENO->Text = L"PHONENO";
			this->PHONENO->Width = 90;
			// 
			// SALESANNAME
			// 
			this->SALESANNAME->Text = L"SALESMANNAME";
			this->SALESANNAME->Width = 175;
			// 
			// CITY
			// 
			this->CITY->Text = L"CITY";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(165, 80);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(212, 26);
			this->textBox4->TabIndex = 18;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(419, 511);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 45);
			this->button2->TabIndex = 17;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm11::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(197, 511);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 45);
			this->button3->TabIndex = 16;
			this->button3->Text = L"EDIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm11::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(7, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 45);
			this->button1->TabIndex = 15;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(165, 240);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(212, 26);
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 185);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 26);
			this->textBox2->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(165, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 26);
			this->textBox1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 20);
			this->label2->TabIndex = 21;
			this->label2->Text = L"VENDOR ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 20);
			this->label3->TabIndex = 22;
			this->label3->Text = L"COMPANY NAME";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 20);
			this->label4->TabIndex = 23;
			this->label4->Text = L"CITY";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 20);
			this->label5->TabIndex = 24;
			this->label5->Text = L"SALESMAN NAME";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 20);
			this->label6->TabIndex = 25;
			this->label6->Text = L"PHONE NUMBER";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(165, 304);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(212, 26);
			this->textBox5->TabIndex = 26;
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1380, 686);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm11";
			this->Text = L"MyForm11";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void PopulateListView()
		{
			// Clear existing items in the ListView
			listView1->Items->Clear();

			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM vendor", orc);
			OracleDataReader^ reader = command->ExecuteReader();

			// Check if there are any rows returned by the query
			if (reader->HasRows)
			{
				// Iterate through the data reader and add items to the ListView
				while (reader->Read())
				{
					// Create a new ListViewItem and add sub-items
					ListViewItem^ item = gcnew ListViewItem(reader["ID"]->ToString());
					item->SubItems->Add(reader["COMPANYNAME"]->ToString());
					item->SubItems->Add(reader["PHONENO"]->ToString());
					item->SubItems->Add(reader["SALESMAN"]->ToString());
					item->SubItems->Add(reader["CITY"]->ToString());

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

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		orc->Open();
		OracleCommand^ cmd = gcnew OracleCommand("INSERT INTO vendor (ID, COMPANYNAME, PHONENO, SALESMAN, CITY) VALUES (" + textBox4->Text + ", '" + textBox1->Text + "', " + textBox2->Text + ", '" + textBox3->Text + "', '" + textBox5->Text + "')", orc);
		cmd->ExecuteNonQuery();
		orc->Close();
		MessageBox::Show("Data inserted successfully", "Success");
		PopulateListView();

	}

private: System::Void MyForm11_Load(System::Object^ sender, System::EventArgs^ e) 
{
	PopulateListView();
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (listView1->SelectedItems->Count > 0)
	{
		ListViewItem^ selectedItem = listView1->SelectedItems[0];

		// Assuming the order of columns in the ListView matches the order of textboxes
		textBox4->Text = selectedItem->SubItems[0]->Text;
		textBox1->Text = selectedItem->SubItems[1]->Text;
		textBox2->Text = selectedItem->SubItems[2]->Text;
		textBox3->Text = selectedItem->SubItems[3]->Text;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int id = Int32::Parse(textBox4->Text);

	// Open the connection
	orc->Open();

	// Create the update query
	String^ query = "UPDATE vendor SET COMPANYNAME = '" + textBox1->Text + "', PHONENO = " + textBox2->Text + ", SALESMAN = '" + textBox3->Text + "', CITY = '" + textBox5->Text + "' WHERE ID = " + id;

	// Execute the update query
	OracleCommand^ command = gcnew OracleCommand(query, orc);
	command->ExecuteNonQuery();

	// Close the connection
	orc->Close();

	MessageBox::Show("Record updated successfully", "Success");
	PopulateListView();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int id = Int32::Parse(textBox4->Text);

	// Open the connection
	orc->Open();

	// Create the delete command
	OracleCommand^ command = gcnew OracleCommand("DELETE FROM vendor WHERE ID = " + id, orc);

	// Execute the delete command
	command->ExecuteNonQuery();

	// Close the connection
	orc->Close();

	MessageBox::Show("Record deleted successfully", "Success");
	PopulateListView();
}
};
}
