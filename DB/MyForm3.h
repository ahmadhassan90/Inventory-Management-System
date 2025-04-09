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
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ ID;
	private: System::Windows::Forms::ColumnHeader^ ENAME;
	private: System::Windows::Forms::ColumnHeader^ HIRE_DATE;



	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ColumnHeader^ SAL;









	public:
		
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->ENAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->HIRE_DATE = (gcnew System::Windows::Forms::ColumnHeader());
			this->SAL = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 112);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"EMPLOYEE NAME";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 167);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"HIRE DATE(DD-JAN-YYYY)";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 221);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(212, 26);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"SALARY";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(12, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(133, 286);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 45);
			this->button3->TabIndex = 6;
			this->button3->Text = L"EDIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(268, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 45);
			this->button2->TabIndex = 7;
			this->button2->Text = L"DELETE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 53);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(212, 26);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"EMPLOYEE NUMBER";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox4_TextChanged);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->ID, this->ENAME,
					this->HIRE_DATE, this->SAL
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(567, 53);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(631, 399);
			this->listView1->TabIndex = 10;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// ID
			// 
			this->ID->Text = L"EMP_ID";
			this->ID->Width = 78;
			// 
			// ENAME
			// 
			this->ENAME->Text = L"EMPLOYEE NAME";
			this->ENAME->Width = 187;
			// 
			// HIRE_DATE
			// 
			this->HIRE_DATE->Text = L"HIRING DATE";
			this->HIRE_DATE->Width = 188;
			// 
			// SAL
			// 
			this->SAL->Text = L"SALARY";
			this->SAL->Width = 175;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(774, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Employees List";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1270, 697);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void PopulateListView()
		{ 
			
			orc->Open();
			OracleCommand^ command = gcnew OracleCommand("SELECT * FROM EMP", orc);
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
					item->SubItems->Add(reader["ENAME"]->ToString());
					item->SubItems->Add(reader["HIRE_DATE"]->ToString());
					item->SubItems->Add(reader["SAL"]->ToString());

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
		OracleCommand^ cmd = gcnew OracleCommand("Insert into EMP values(" + textBox4->Text + ",'" + textBox1->Text + "','" + textBox2->Text + "','" + textBox3->Text + "')", orc);
		cmd->ExecuteNonQuery();		
		orc->Close();
		MessageBox::Show("Employee data entered successfully", "Successfull");
		PopulateListView();
		

	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) 
{
	PopulateListView();
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox4->Text == "")
	{
		MessageBox::Show("Must Enter ID to Remove The Employee");
	}
	else
	{
		orc->Open();
		OracleCommand ^command = gcnew OracleCommand("DELETE FROM emp WHERE id = "+ textBox4->Text, orc);

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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	if (textBox2->Text == "HIRE DATE(DD-JAN-YYYY)" && textBox3->Text == "SALARY")
	{
		orc->Open();
		OracleCommand ^command = gcnew OracleCommand("UPDATE emp SET ename = '" + textBox1->Text + "' WHERE id = " + textBox4->Text, orc);
		command->ExecuteNonQuery();
		orc->Close();
		MessageBox::Show("Employee name Updated successfully", "Successfull");
		PopulateListView();
	}
	else if (textBox1->Text == "EMPLOYEE NAME" && textBox3->Text == "SALARY")
	{
		orc->Open();
		OracleCommand^ command = gcnew OracleCommand("UPDATE emp SET hire_date =" + textBox2->Text + "WHERE id = " + textBox4->Text, orc);
		command->ExecuteNonQuery();
		orc->Close();
		MessageBox::Show("Employee hire date Updated successfully", "Successfull");
		PopulateListView();
	}
	else if (textBox1->Text == "EMPLOYEE NAME" && textBox2->Text == "HIRE DATE(DD-JAN-YYYY)")
	{
		orc->Open();
		OracleCommand^ command = gcnew OracleCommand("UPDATE emp SET sal =" + textBox3->Text + "WHERE id = " + textBox4->Text, orc);
		command->ExecuteNonQuery();
		orc->Close();
		MessageBox::Show("Employee Salary Updated successfully", "Successfull");
		PopulateListView();
	}
	
	PopulateListView();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	PopulateListView();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
