#pragma once
#include "User.h"
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

	static void Reload_DataGrid_Type(Object^% dataTable, String^ type) {
		SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
		sqlConn->Open();

		String^ sqlQuery = "SELECT Id,meat,price FROM products WHERE type=@type";

		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@type", type);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataTable = dt;
	}
	static void Reload_DataGrid_Cart(Object^% dataTable, String^ email) {
		SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
		sqlConn->Open();

		String^ sqlQuery = "SELECT Id,products,price FROM carts WHERE username=@email";

		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@email", email);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataTable = dt;
	}

	static void Add_Carts(String^ username, int price, String^ products) {

		try {

			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO carts " +
				"(products, price, username) VALUES" +
				"(@products, @price, @username);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@products", products);
			command.Parameters->AddWithValue("@price", price);
			command.Parameters->AddWithValue("@username", username);

			command.ExecuteNonQuery();

			MessageBox::Show("Added to cart",
				"Success", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}


	}
	static void Purchase_Success(String^ username) {
		try {
			// Correctly declare and use SqlConnection as a managed object
			SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
			sqlConn->Open();

			// Correctly declare and use SqlCommand as a managed object
			String^ sqlQuery = "DELETE FROM carts WHERE username=@username";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@username", username);
			command->ExecuteNonQuery();

			MessageBox::Show("Payment is Successful", "Success", MessageBoxButtons::OK);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}

	static int TotalPrice(String^ email) {
		SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
		sqlConn->Open();

		String^ sqlQuery = "SELECT price FROM carts WHERE username=@email";

		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@email", email);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		int totalPrice = 0;
		for each (DataRow ^ row in dt->Rows) {
			if (!row->IsNull("price")) {
				totalPrice += Convert::ToInt32(row["price"]);
			}
		}

		return totalPrice;
	}
	static List<Product^>^ Reload_DataGrid_Cart(String^ query) {
		SqlConnection^ sqlConn = gcnew SqlConnection(connstring);
		sqlConn->Open();

		String^ sqlQuery = "SELECT * FROM products WHERE type=@type";

		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@type", query);

		SqlDataAdapter^ da = gcnew SqlDataAdapter(command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		List<Product^>^ products = gcnew List<Product^>();
		for each (DataRow ^ row in dt->Rows) {
			Product^ product = gcnew Product();
			product->id = Convert::ToInt32(row["id"]);
			product->meat = row["meat"]->ToString();
			product->price = Convert::ToInt32(row["price"]);
			product->type = row["type"]->ToString();
			products->Add(product);
		}

		return products;
	}

	static Product^ GetProductById(int id) {
		try {
			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM products WHERE Id=@id";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@id", id);

			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				Product^ product = gcnew Product();
				// Assuming your product table has columns like 'Id', 'Name', 'Price'
				product->id = Convert::ToInt32(reader["Id"]);
				product->meat = reader["Meat"]->ToString();
				product->price = Convert::ToInt32(reader["Price"]);

				sqlConn.Close();
				return product;
			}

			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to fetch product details",
				"Error", MessageBoxButtons::OK);
		}

		return nullptr;
	}

	static void Delete_Cart(String^ id) {
		try {
			int Id = System::Int32::Parse(id);

			SqlConnection sqlConn(connstring);
			sqlConn.Open();

			String^ sqlQuery = "DELETE carts WHERE Id=@id";

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


};