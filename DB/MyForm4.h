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
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::TextBox^ textBox3;
	public:
	private: System::Windows::Forms::Label^ label3;
		   

	public:





	public:	   
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ NAME;
	private: System::Windows::Forms::ColumnHeader^ PHONE_NUMBER;
	private: System::Windows::Forms::Label^ label2;

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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->NAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->PHONE_NUMBER = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(25, 221);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(214, 26);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"PHONE NUMBER";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 169);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 26);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"CUSTOMER NAME";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(25, 109);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 26);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"CUSTOMER NUMBER";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(20, 262);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 15);
			this->label1->TabIndex = 13;
			this->label1->Text = L"* NO SPACE OR BAR IN PHONE NUMBER";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(23, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 45);
			this->button1->TabIndex = 14;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(144, 303);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 45);
			this->button3->TabIndex = 15;
			this->button3->Text = L"EDIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(265, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 45);
			this->button2->TabIndex = 16;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) { this->ID, this->NAME, this->PHONE_NUMBER });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(521, 59);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(631, 399);
			this->listView1->TabIndex = 17;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ID
			// 
			this->ID->Text = L"CUSTOMER_ID";
			this->ID->Width = 159;
			// 
			// NAME
			// 
			this->NAME->Text = L"CUSTOMER NAME";
			this->NAME->Width = 243;
			// 
			// PHONE_NUMBER
			// 
			this->PHONE_NUMBER->Text = L"PHONE NUMBER";
			this->PHONE_NUMBER->Width = 188;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(671, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(186, 29);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Customers List";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(234, 536);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 26);
			this->textBox3->TabIndex = 19;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 532);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 29);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Orders Count";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1191, 611);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void PopulateListView()
		{

			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM CUSTOMER", orc);
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
					ListViewItem^ item = gcnew ListViewItem(reader["ID"]->ToString());
					item->SubItems->Add(reader["NAME"]->ToString());
					item->SubItems->Add(reader["PHONE_NO"]->ToString());
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		orc->Open();
		OracleCommand^ cmd = gcnew OracleCommand("Insert into CUSTOMER values(" + textBox2->Text + ",'" + textBox1->Text + "','" + textBox4->Text + "')", orc);
		cmd->ExecuteNonQuery();
		orc->Close();
		MessageBox::Show("Customer entered successfully", "Successfull");
		PopulateListView();

	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox4->Text == "")
	{
		orc->Open();
		OracleCommand^ command = gcnew OracleCommand("UPDATE customer SET name = '" + textBox1->Text + "' WHERE id = " + textBox2->Text, orc);
		command->ExecuteNonQuery();
		orc->Close();
		MessageBox::Show("Customer name Updated successfully", "Successfull");
		PopulateListView();
	}
	else if (textBox1->Text == "")
	{
		orc->Open();
		OracleCommand^ command = gcnew OracleCommand("UPDATE customer SET phone_no =" + textBox4->Text + "WHERE id = " + textBox2->Text, orc);
		command->ExecuteNonQuery();
		orc->Close();
		MessageBox::Show("Phone number Updated successfully", "Successfull");
		PopulateListView();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox2->Text == "")
	{
		MessageBox::Show("Must Enter ID to Remove The customer");
	}
	else
	{
		orc->Open();
		OracleCommand^ command = gcnew OracleCommand("DELETE FROM customer WHERE id = " + textBox2->Text, orc);

		int rowsAffected = command->ExecuteNonQuery();

		if (rowsAffected > 0)
		{
			MessageBox::Show("Record deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("Record not found.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	orc->Close();
	PopulateListView();

}
	     
	  public:
	  void SetCustomerCountFromSales()
	   {
		    orc->Open();
		   try
		   {
			   OracleCommand^ command = orc->CreateCommand();
			   command->CommandText = "SELECT COUNT(customer_id) FROM sales";

			  
			   Object^ result = command->ExecuteScalar();

			   if (result != nullptr && result != DBNull::Value)
			   {
				   int count = Convert::ToInt32(result);
				   textBox3->Text = count.ToString();
			   }
		   }
		   catch (Exception^ ex)
		   {
			   // Handle any exceptions that occurred during database interaction
			   // Display an error message or perform error handling as needed
		   }
		   finally
		   {
			   orc->Close();
		   }
	   }


private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) 
{
	PopulateListView();
	SetCustomerCountFromSales();
}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
