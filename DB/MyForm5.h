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
	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
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
				
		
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ NAME;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->NAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(476, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CATEGORIES";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(265, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 45);
			this->button2->TabIndex = 19;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(144, 301);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 45);
			this->button3->TabIndex = 18;
			this->button3->Text = L"EDIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(23, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 45);
			this->button1->TabIndex = 17;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 184);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 26);
			this->textBox1->TabIndex = 21;
			this->textBox1->Text = L"CATEGORY ID";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(31, 236);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(214, 26);
			this->textBox4->TabIndex = 20;
			this->textBox4->Text = L"CATEGORY NAME";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->ID, this->NAME });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(505, 90);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(631, 399);
			this->listView1->TabIndex = 22;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ID
			// 
			this->ID->Text = L"CATEGORY_ID";
			this->ID->Width = 159;
			// 
			// NAME
			// 
			this->NAME->Text = L"CATEGORY NAME";
			this->NAME->Width = 243;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1191, 611);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm5";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		void PopulateListView()
		{

			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM category", orc);
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

	private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		PopulateListView();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	orc->Open();
	OracleCommand^ cmd = gcnew OracleCommand("Insert into CATEGORY values(" + textBox1->Text + ",'" + textBox4->Text + "')", orc);
	cmd->ExecuteNonQuery();
	orc->Close();
	MessageBox::Show("Category Added successfully", "Successfull");
	PopulateListView();

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	orc->Open();
	OracleCommand^ command = gcnew OracleCommand("UPDATE category SET name = '" + textBox4->Text + "' WHERE id = " + textBox1->Text, orc);
	command->ExecuteNonQuery();
	orc->Close();
	MessageBox::Show("Category name Updated successfully", "Successfull");
	PopulateListView();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text == "")
	{
		MessageBox::Show("Must Enter ID to Remove The Category");
	}
	else
	{
		orc->Open();
		OracleCommand^ command = gcnew OracleCommand("DELETE FROM category WHERE id = " + textBox1->Text, orc);

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
};
}
