#pragma once
#include <string>
#include "Item.h"
#include "Order.h"
#include "Coin.h"
#include "Inventory.h"
#include <iostream>
#include <cliext/list>
#include <chrono>
#include <ctime>
#include <iostream>

namespace VendingMachine {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			InitializeData();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbShowWindow;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbBalance;
	private: System::Windows::Forms::PictureBox^ pbTooney;
	private: System::Windows::Forms::PictureBox^ pbLooney;
	private: System::Windows::Forms::PictureBox^ pbQuater;
	private: System::Windows::Forms::PictureBox^ pbDime;
	private: System::Windows::Forms::PictureBox^ pbNickle;
	private: System::Windows::Forms::PictureBox^ pbPenny;
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::TextBox^ tbMessage;
	private: System::Windows::Forms::Button^ btnA;
	private: System::Windows::Forms::Button^ btnB;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnD;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pbShowWindow = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbBalance = (gcnew System::Windows::Forms::Label());
			this->pbTooney = (gcnew System::Windows::Forms::PictureBox());
			this->pbLooney = (gcnew System::Windows::Forms::PictureBox());
			this->pbQuater = (gcnew System::Windows::Forms::PictureBox());
			this->pbDime = (gcnew System::Windows::Forms::PictureBox());
			this->pbNickle = (gcnew System::Windows::Forms::PictureBox());
			this->pbPenny = (gcnew System::Windows::Forms::PictureBox());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->tbMessage = (gcnew System::Windows::Forms::TextBox());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTooney))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLooney))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbQuater))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDime))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbNickle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPenny))->BeginInit();
			this->SuspendLayout();
			// 
			// pbShowWindow
			// 
			this->pbShowWindow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbShowWindow.BackgroundImage")));
			this->pbShowWindow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbShowWindow.Image")));
			this->pbShowWindow->Location = System::Drawing::Point(2, -4);
			this->pbShowWindow->Name = L"pbShowWindow";
			this->pbShowWindow->Size = System::Drawing::Size(266, 425);
			this->pbShowWindow->TabIndex = 0;
			this->pbShowWindow->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(285, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Balance $ ";
			// 
			// lbBalance
			// 
			this->lbBalance->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbBalance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBalance->ForeColor = System::Drawing::Color::Yellow;
			this->lbBalance->Location = System::Drawing::Point(354, 90);
			this->lbBalance->Name = L"lbBalance";
			this->lbBalance->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbBalance->Size = System::Drawing::Size(100, 23);
			this->lbBalance->TabIndex = 2;
			this->lbBalance->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pbTooney
			// 
			this->pbTooney->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbTooney.Image")));
			this->pbTooney->Location = System::Drawing::Point(285, 152);
			this->pbTooney->Name = L"pbTooney";
			this->pbTooney->Size = System::Drawing::Size(47, 44);
			this->pbTooney->TabIndex = 3;
			this->pbTooney->TabStop = false;
			this->pbTooney->Text = L"2.0";
			this->pbTooney->Click += gcnew System::EventHandler(this, &MyForm::CoinClick);
			// 
			// pbLooney
			// 
			this->pbLooney->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLooney.Image")));
			this->pbLooney->Location = System::Drawing::Point(337, 152);
			this->pbLooney->Name = L"pbLooney";
			this->pbLooney->Size = System::Drawing::Size(47, 44);
			this->pbLooney->TabIndex = 4;
			this->pbLooney->TabStop = false;
			this->pbLooney->Text = L"1.0";
			this->pbLooney->Click += gcnew System::EventHandler(this, &MyForm::CoinClick);
			// 
			// pbQuater
			// 
			this->pbQuater->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbQuater.Image")));
			this->pbQuater->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbQuater.InitialImage")));
			this->pbQuater->Location = System::Drawing::Point(390, 152);
			this->pbQuater->Name = L"pbQuater";
			this->pbQuater->Size = System::Drawing::Size(47, 44);
			this->pbQuater->TabIndex = 5;
			this->pbQuater->TabStop = false;
			this->pbQuater->Text = L"0.25";
			this->pbQuater->Click += gcnew System::EventHandler(this, &MyForm::CoinClick);
			// 
			// pbDime
			// 
			this->pbDime->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbDime.Image")));
			this->pbDime->Location = System::Drawing::Point(285, 202);
			this->pbDime->Name = L"pbDime";
			this->pbDime->Size = System::Drawing::Size(47, 44);
			this->pbDime->TabIndex = 6;
			this->pbDime->TabStop = false;
			this->pbDime->Text = L"0.1";
			this->pbDime->Click += gcnew System::EventHandler(this, &MyForm::CoinClick);
			// 
			// pbNickle
			// 
			this->pbNickle->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbNickle.Image")));
			this->pbNickle->Location = System::Drawing::Point(337, 202);
			this->pbNickle->Name = L"pbNickle";
			this->pbNickle->Size = System::Drawing::Size(47, 44);
			this->pbNickle->TabIndex = 7;
			this->pbNickle->TabStop = false;
			this->pbNickle->Text = L"0.05";
			this->pbNickle->Click += gcnew System::EventHandler(this, &MyForm::CoinClick);
			// 
			// pbPenny
			// 
			this->pbPenny->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPenny.Image")));
			this->pbPenny->Location = System::Drawing::Point(390, 202);
			this->pbPenny->Name = L"pbPenny";
			this->pbPenny->Size = System::Drawing::Size(47, 44);
			this->pbPenny->TabIndex = 8;
			this->pbPenny->TabStop = false;
			this->pbPenny->Text = L"0.01";
			this->pbPenny->Click += gcnew System::EventHandler(this, &MyForm::CoinClick);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(337, 274);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 9;
			this->btnReturn->Text = L"Return";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyForm::btnReturn_Click);
			// 
			// tbMessage
			// 
			this->tbMessage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tbMessage->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->tbMessage->Location = System::Drawing::Point(2, 427);
			this->tbMessage->Multiline = true;
			this->tbMessage->Name = L"tbMessage";
			this->tbMessage->ReadOnly = true;
			this->tbMessage->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbMessage->Size = System::Drawing::Size(266, 141);
			this->tbMessage->TabIndex = 10;
			// 
			// btnA
			// 
			this->btnA->Location = System::Drawing::Point(298, 324);
			this->btnA->Name = L"btnA";
			this->btnA->Size = System::Drawing::Size(33, 27);
			this->btnA->TabIndex = 11;
			this->btnA->Text = L"A";
			this->btnA->UseVisualStyleBackColor = true;
			this->btnA->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// btnB
			// 
			this->btnB->Location = System::Drawing::Point(337, 324);
			this->btnB->Name = L"btnB";
			this->btnB->Size = System::Drawing::Size(33, 27);
			this->btnB->TabIndex = 12;
			this->btnB->Text = L"B";
			this->btnB->UseVisualStyleBackColor = true;
			this->btnB->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// btnC
			// 
			this->btnC->Location = System::Drawing::Point(379, 324);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(33, 27);
			this->btnC->TabIndex = 13;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// btnD
			// 
			this->btnD->Location = System::Drawing::Point(418, 324);
			this->btnD->Name = L"btnD";
			this->btnD->Size = System::Drawing::Size(33, 27);
			this->btnD->TabIndex = 14;
			this->btnD->Text = L"D";
			this->btnD->UseVisualStyleBackColor = true;
			this->btnD->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(298, 357);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(33, 27);
			this->btn1->TabIndex = 15;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(337, 357);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(33, 27);
			this->btn2->TabIndex = 16;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(379, 357);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(33, 27);
			this->btn3->TabIndex = 17;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(418, 357);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(33, 27);
			this->btn4->TabIndex = 18;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btnCode_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 580);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnD);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnB);
			this->Controls->Add(this->btnA);
			this->Controls->Add(this->tbMessage);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->pbPenny);
			this->Controls->Add(this->pbNickle);
			this->Controls->Add(this->pbDime);
			this->Controls->Add(this->pbQuater);
			this->Controls->Add(this->pbLooney);
			this->Controls->Add(this->pbTooney);
			this->Controls->Add(this->lbBalance);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbShowWindow);
			this->Name = L"MyForm";
			this->Text = L"VendingMachine";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbShowWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbTooney))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLooney))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbQuater))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbDime))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbNickle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPenny))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: double dBalance = 0.0;
	public: String^ sOrderCode = gcnew String("");

	private: System::Void UpdateBalance(double price) {
		dBalance += price;
		lbBalance->Text = dBalance.ToString("N2");
	}
private: System::Void UpdateInventory(String^ code) {
	for each (Inventory ^ snack_inventory in inventory_list) {
		if (code == snack_inventory->code) {
			snack_inventory->amount -= 1;
		}
	}
	//	if ( we found the code )
	//snack_inventory->amount -= 1;
}

	private: System::Void CoinClick(System::Object^ sender, System::EventArgs^ e) {
		UpdateBalance(Double::Parse(((PictureBox^)sender)->Text));
	}
	private: System::Void OrderProcessing(String^ code) {
		sOrderCode += code;
		if (sOrderCode->Length < 2) {
			return;
		}
		for each (Item ^ item in item_list) {
			if (item->code != sOrderCode) continue;
			// we found the code matched
			// 
			// for each snack_inventory in snack_nventory_list code matched
			//if (snack_inventory->amount < 1 ) {
			//	tbMessage->Text += item->title + "We have no morenot  + item->price + " Not enough money\r\n";
			//	sOrderCode = "";
			//	return;
			//}
			if (dBalance < item->price) {
				tbMessage->Text += item->title + " $ "+ item->price + " Not enough money\r\n";
				sOrderCode = "";
				return;
			}
			UpdateBalance(-item->price);
			//UpdateInventory(item->code);

			tbMessage->Text += item->title + " $ " + item->price + " Purchased!\r\n";
			sOrderCode = "";
			//auto time_now = chrono::system_clock::to_time_t(chrono::system_clock::now());
			//order_list->push_back(gcnew Order( date::format("%F %T", std::chrono::system_clock::now()) , item));
			order_list->push_back(gcnew Order( "datetime" , item));
			return;
		}

		tbMessage->Text += "Please try again ! ( " + sOrderCode + " )\r\n";
		sOrderCode = "";
	}
	//https://stackoverflow.com/questions/39074878/erase-substring-followed-by-a-digit-or-character-in-c-cli
	//String^ str = "Third3";
	//String^ what = "^[A-Za-z]+";
	//String^ result;
	//Regex^ r = gcnew Regex(what, System::Text::RegularExpressions::RegexOptions::CultureInvariant);
	//result = r->Match(str)->Value;
	//Console::WriteLine(result); // => Third
	private: System::Void btnCode_Click(System::Object^ sender, System::EventArgs^ e) {
		//OrderProcessing((System::Windows::Forms::Button)(sender)->Text);
		//String^ temp = sender->ToString();
		//String^ regex_expression = ".{1}$"; // get last character
		//String^ last_char = Regex;
		//OrderProcessing( regex );
		//Button^ btn = (Button^)sender;

		//OrderProcessing( btn->Text );
		OrderProcessing(( (Button^)sender )->Text);
	}
	private: System::Void btnReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		Int16 NumberOfCoin = 0;
		for each (Coin ^ coin in coin_list) {
			// for precesion of 2 decimal
			NumberOfCoin = ( round(dBalance * 100) / coin->value )/ 100;
			if (NumberOfCoin <= 0) continue;
			tbMessage->Text += coin->title + "\t"+ NumberOfCoin + " \r\n";
			UpdateBalance( - NumberOfCoin * coin->value );
		}
	}

	private: cliext::list<Item^>^ item_list = gcnew cliext::list<Item^>;
	private: cliext::list<Order^>^ order_list = gcnew cliext::list<Order^>;
	private: cliext::list<Coin^>^ coin_list = gcnew cliext::list<Coin^>;
	private: cliext::list<Inventory^>^ inventory_list = gcnew cliext::list<Inventory^>;

	private: void InitializeData()   {
		item_list->push_back(gcnew Item("A1", "CocaCola 0 ", 1.25));
		item_list->push_back(gcnew Item("A2", "CocaCola 1 ", 1.50));
		item_list->push_back(gcnew Item("A3", "CocaCola 2 ", 1.75));
		item_list->push_back(gcnew Item("A4", "CocaCola 3 ", 2.25));

		item_list->push_back(gcnew Item("B1", "Poweraid 0 ", 1.25));
		item_list->push_back(gcnew Item("B2", "Poweraid 1 ", 1.50));
		item_list->push_back(gcnew Item("B3", "Poweraid 2 ", 1.75));
		item_list->push_back(gcnew Item("B4", "Poweraid 3 ", 2.25));

		item_list->push_back(gcnew Item("C1", "Sprite 0 ", 1.25));
		item_list->push_back(gcnew Item("C2", "Sprite 1 ", 1.50));
		item_list->push_back(gcnew Item("C3", "Sprite 2 ", 1.75));
		item_list->push_back(gcnew Item("C4", "Sprite 3 ", 2.25));

		item_list->push_back(gcnew Item("D1", "Mountain Due 0 ", 1.25));
		item_list->push_back(gcnew Item("D2", "Mountain Due 1 ", 1.50));
		item_list->push_back(gcnew Item("D3", "Mountain Due 2 ", 1.75));
		item_list->push_back(gcnew Item("D4", "Mountain Due 3 ", 2.25));

		coin_list->push_back(gcnew Coin("Tooney", 2.00));
		coin_list->push_back(gcnew Coin("Looney", 1.00));
		coin_list->push_back(gcnew Coin("Quater", 0.25));
		coin_list->push_back(gcnew Coin("Dime", 0.1));
		coin_list->push_back(gcnew Coin("Nicle", 0.05));
		coin_list->push_back(gcnew Coin("Penny", 0.01));
		
		inventory_list->push_back(gcnew Inventory("A1", 5));
		inventory_list->push_back(gcnew Inventory("A2", 5));
		inventory_list->push_back(gcnew Inventory("A3", 5));
		inventory_list->push_back(gcnew Inventory("A4", 5));

		inventory_list->push_back(gcnew Inventory("B1", 5));
		inventory_list->push_back(gcnew Inventory("B2", 5));
		inventory_list->push_back(gcnew Inventory("B3", 5));
		inventory_list->push_back(gcnew Inventory("B4", 5));

		inventory_list->push_back(gcnew Inventory("C1", 5));
		inventory_list->push_back(gcnew Inventory("C2", 5));
		inventory_list->push_back(gcnew Inventory("C3", 5));
		inventory_list->push_back(gcnew Inventory("C4", 5));

		inventory_list->push_back(gcnew Inventory("D1", 5));
		inventory_list->push_back(gcnew Inventory("D2", 5));
		inventory_list->push_back(gcnew Inventory("D3", 5));
		inventory_list->push_back(gcnew Inventory("D4", 5));


		// for testing for item_list
		//for each (Item^ item in item_list) {
		//    tbMessage->Text += item->code + "\r\n";
		//}
		// for testing for coin_list
		//for each (Coin^ coin in coin_list) {
		//    tbMessage->Text += coin->title + "\t" + coin->value + "\r\n";
		//}
	}

};
}
