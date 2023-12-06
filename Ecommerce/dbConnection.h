#pragma once

#include <cliext/list>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic; // Include this for List
using namespace cliext;

ref class Connection {
private:
	static String^ connstring = "Data Source=DESKTOP-G6KJNEA\\SQLEXPRESS01;Initial Catalog=ecommercedb;Integrated Security=True;Connect Timeout=30;Encrypt=False;";
public:
	static void Create(String^ meat, String^ type, int price) {

		try {

			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO products " +
				"(meat,type,price) VALUES" +
				"(@meat,@type,@price);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@meat", meat);
			command.Parameters->AddWithValue("@type", type);
			command.Parameters->AddWithValue("@price", price);

			command.ExecuteNonQuery();

			MessageBox::Show("Successfully inserted",
				"Success", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}


	}
	static void Update(int id, String^ meat, String^ type, int price ) {
		try {
			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "UPDATE products SET meat=@meat, type=@type, price=@price WHERE Id=@id";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);
			command.Parameters->AddWithValue("@meat", meat);
			command.Parameters->AddWithValue("@type", type);
			command.Parameters->AddWithValue("@price", price);

			command.ExecuteNonQuery();

			MessageBox::Show("Successfully Updated",
				"Success", MessageBoxButtons::OK);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}

	static void Delete(String^ id) {
		try {
			int Id = System::Int32::Parse(id);

			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "DELETE products WHERE Id=@id";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", Id);

			command.ExecuteNonQuery();

			MessageBox::Show("Successfully Deleted",
				"Success", MessageBoxButtons::OK);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}

	static void Reload_DataGrid(Object^% dataTable, String^ query) {
		SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
		sqlConn->Open();

		String^ sqlQuery = "SELECT * FROM " + query;
		SqlDataAdapter^ da = gcnew SqlDataAdapter(sqlQuery, sqlConn);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		dataTable = dt;
	}

};