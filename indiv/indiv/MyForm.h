#pragma once

#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <cctype>
#include <locale.h>
#include <wchar.h>

namespace indiv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Text::RegularExpressions;
	using namespace System::IO;

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Array_R;
	private: System::Windows::Forms::TextBox^  Array_I;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  Max_Z;
	private: System::Windows::Forms::TextBox^  Min_Z;
	private: System::Windows::Forms::TextBox^  N_Z;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  Zakr;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  MaxVIV;

	private: System::Windows::Forms::TextBox^  MinVIV;





	private: System::Windows::Forms::TextBox^  Strok;
	private: System::Windows::Forms::TextBox^  Stolb;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  Maxi;
	private: System::Windows::Forms::TextBox^  Mini;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Button^  Gen;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  vivod1;



	private: System::Windows::Forms::TextBox^  txtvivod1;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  vvod1;

	private: System::Windows::Forms::TextBox^  txtvvod1;

	private: System::Windows::Forms::Label^  label14;



	private: System::Windows::Forms::RichTextBox^  stroki;
	private: System::Windows::Forms::Button^  resh;
	private: System::Windows::Forms::TextBox^  razl;


	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  Nat;
	private: System::Windows::Forms::RichTextBox^  viv_str;
	private: System::Windows::Forms::Button^  Prov;

	private: System::Windows::Forms::RichTextBox^  vvod_str;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  Vup;
	private: System::Windows::Forms::RichTextBox^  Viv;
	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::RichTextBox^  Posled;
	private: System::Windows::Forms::Button^  vvod2;
	private: System::Windows::Forms::TextBox^  txtvvod2;


	private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  vivod2;

private: System::Windows::Forms::TextBox^  txtvivod2;

	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Button^  vivod3;
private: System::Windows::Forms::TextBox^  txtvivod3;


	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Button^  vivod4;
private: System::Windows::Forms::TextBox^  txtvivod4;


	private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Button^  vvod4;

private: System::Windows::Forms::TextBox^  txtvvod4;

	private: System::Windows::Forms::Label^  label19;















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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Posled = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->vivod1 = (gcnew System::Windows::Forms::Button());
			this->txtvivod1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->vvod1 = (gcnew System::Windows::Forms::Button());
			this->txtvvod1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Array_R = (gcnew System::Windows::Forms::TextBox());
			this->Array_I = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Max_Z = (gcnew System::Windows::Forms::TextBox());
			this->Min_Z = (gcnew System::Windows::Forms::TextBox());
			this->N_Z = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->vvod2 = (gcnew System::Windows::Forms::Button());
			this->txtvvod2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->vivod2 = (gcnew System::Windows::Forms::Button());
			this->txtvivod2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Viv = (gcnew System::Windows::Forms::RichTextBox());
			this->Vup = (gcnew System::Windows::Forms::Button());
			this->stroki = (gcnew System::Windows::Forms::RichTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Maxi = (gcnew System::Windows::Forms::TextBox());
			this->Mini = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Gen = (gcnew System::Windows::Forms::Button());
			this->Zakr = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->MaxVIV = (gcnew System::Windows::Forms::TextBox());
			this->MinVIV = (gcnew System::Windows::Forms::TextBox());
			this->Strok = (gcnew System::Windows::Forms::TextBox());
			this->Stolb = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->vivod3 = (gcnew System::Windows::Forms::Button());
			this->txtvivod3 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->resh = (gcnew System::Windows::Forms::Button());
			this->razl = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Nat = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->vivod4 = (gcnew System::Windows::Forms::Button());
			this->txtvivod4 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->vvod4 = (gcnew System::Windows::Forms::Button());
			this->txtvvod4 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->viv_str = (gcnew System::Windows::Forms::RichTextBox());
			this->Prov = (gcnew System::Windows::Forms::Button());
			this->vvod_str = (gcnew System::Windows::Forms::RichTextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1295, 754);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Posled);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->vivod1);
			this->tabPage1->Controls->Add(this->txtvivod1);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->vvod1);
			this->tabPage1->Controls->Add(this->txtvvod1);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->Array_R);
			this->tabPage1->Controls->Add(this->Array_I);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1287, 725);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Первое";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// Posled
			// 
			this->Posled->Font = (gcnew System::Drawing::Font(L"Courier New", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Posled->Location = System::Drawing::Point(111, 580);
			this->Posled->Name = L"Posled";
			this->Posled->ReadOnly = true;
			this->Posled->Size = System::Drawing::Size(777, 112);
			this->Posled->TabIndex = 36;
			this->Posled->Text = L"";
			this->Posled->WordWrap = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(118, 525);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(527, 36);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Самая длинная последовательность";
			// 
			// vivod1
			// 
			this->vivod1->Location = System::Drawing::Point(1005, 525);
			this->vivod1->Name = L"vivod1";
			this->vivod1->Size = System::Drawing::Size(194, 60);
			this->vivod1->TabIndex = 33;
			this->vivod1->Text = L"Сохранить в файл";
			this->vivod1->UseVisualStyleBackColor = true;
			this->vivod1->Click += gcnew System::EventHandler(this, &MyForm::vivod1_Click);
			// 
			// txtvivod1
			// 
			this->txtvivod1->BackColor = System::Drawing::Color::White;
			this->txtvivod1->Location = System::Drawing::Point(1005, 489);
			this->txtvivod1->Name = L"txtvivod1";
			this->txtvivod1->ReadOnly = true;
			this->txtvivod1->Size = System::Drawing::Size(191, 30);
			this->txtvivod1->TabIndex = 32;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(997, 461);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(199, 25);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Имя файла вывода:";
			// 
			// vvod1
			// 
			this->vvod1->Location = System::Drawing::Point(999, 247);
			this->vvod1->Name = L"vvod1";
			this->vvod1->Size = System::Drawing::Size(197, 58);
			this->vvod1->TabIndex = 30;
			this->vvod1->Text = L"Ввод из файла";
			this->vvod1->UseVisualStyleBackColor = true;
			this->vvod1->Click += gcnew System::EventHandler(this, &MyForm::vvod1_Click);
			// 
			// txtvvod1
			// 
			this->txtvvod1->BackColor = System::Drawing::Color::White;
			this->txtvvod1->Location = System::Drawing::Point(999, 211);
			this->txtvvod1->Name = L"txtvvod1";
			this->txtvvod1->ReadOnly = true;
			this->txtvvod1->Size = System::Drawing::Size(197, 30);
			this->txtvvod1->TabIndex = 29;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(994, 183);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(185, 25);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Имя файла ввода:";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LawnGreen;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(1002, 612);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(197, 80);
			this->button5->TabIndex = 27;
			this->button5->Text = L" Закрыть";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LawnGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(1002, 345);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(197, 80);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Выполнить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LawnGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(999, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 80);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Генерация массива";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(118, 429);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(319, 36);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Результаты операции";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(118, 306);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(255, 36);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Исходный массив";
			// 
			// Array_R
			// 
			this->Array_R->BackColor = System::Drawing::Color::White;
			this->Array_R->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Array_R->Location = System::Drawing::Point(111, 471);
			this->Array_R->Name = L"Array_R";
			this->Array_R->ReadOnly = true;
			this->Array_R->Size = System::Drawing::Size(777, 41);
			this->Array_R->TabIndex = 17;
			// 
			// Array_I
			// 
			this->Array_I->BackColor = System::Drawing::Color::White;
			this->Array_I->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Array_I->Location = System::Drawing::Point(111, 345);
			this->Array_I->Name = L"Array_I";
			this->Array_I->Size = System::Drawing::Size(777, 41);
			this->Array_I->TabIndex = 15;
			this->Array_I->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Array_I_KeyPress);
			this->Array_I->Leave += gcnew System::EventHandler(this, &MyForm::Array_I_Leave);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Max_Z);
			this->groupBox1->Controls->Add(this->Min_Z);
			this->groupBox1->Controls->Add(this->N_Z);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(111, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(777, 192);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// Max_Z
			// 
			this->Max_Z->BackColor = System::Drawing::Color::White;
			this->Max_Z->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Max_Z->Location = System::Drawing::Point(493, 133);
			this->Max_Z->Name = L"Max_Z";
			this->Max_Z->Size = System::Drawing::Size(258, 34);
			this->Max_Z->TabIndex = 5;
			this->Max_Z->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Max_Z->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Max_Z_KeyPress);
			this->Max_Z->Leave += gcnew System::EventHandler(this, &MyForm::Max_Z_Leave);
			// 
			// Min_Z
			// 
			this->Min_Z->BackColor = System::Drawing::Color::White;
			this->Min_Z->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Min_Z->Location = System::Drawing::Point(493, 89);
			this->Min_Z->Name = L"Min_Z";
			this->Min_Z->Size = System::Drawing::Size(258, 34);
			this->Min_Z->TabIndex = 4;
			this->Min_Z->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Min_Z->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Min_Z_KeyPress);
			this->Min_Z->Leave += gcnew System::EventHandler(this, &MyForm::Min_Z_Leave);
			// 
			// N_Z
			// 
			this->N_Z->BackColor = System::Drawing::Color::White;
			this->N_Z->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->N_Z->Location = System::Drawing::Point(493, 46);
			this->N_Z->Name = L"N_Z";
			this->N_Z->Size = System::Drawing::Size(258, 34);
			this->N_Z->TabIndex = 3;
			this->N_Z->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->N_Z->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::N_Z_KeyPress);
			this->N_Z->Leave += gcnew System::EventHandler(this, &MyForm::N_Z_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(25, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(415, 28);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Максимальное значение диапазона";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(25, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(402, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Минимальное значение диапазона";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(25, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов массива";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->vvod2);
			this->tabPage2->Controls->Add(this->txtvvod2);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->vivod2);
			this->tabPage2->Controls->Add(this->txtvivod2);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->Viv);
			this->tabPage2->Controls->Add(this->Vup);
			this->tabPage2->Controls->Add(this->stroki);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->Maxi);
			this->tabPage2->Controls->Add(this->Mini);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->Gen);
			this->tabPage2->Controls->Add(this->Zakr);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->MaxVIV);
			this->tabPage2->Controls->Add(this->MinVIV);
			this->tabPage2->Controls->Add(this->Strok);
			this->tabPage2->Controls->Add(this->Stolb);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1287, 725);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Второе";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// vvod2
			// 
			this->vvod2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vvod2->Location = System::Drawing::Point(826, 458);
			this->vvod2->Name = L"vvod2";
			this->vvod2->Size = System::Drawing::Size(197, 58);
			this->vvod2->TabIndex = 39;
			this->vvod2->Text = L"Ввод из файла";
			this->vvod2->UseVisualStyleBackColor = true;
			this->vvod2->Click += gcnew System::EventHandler(this, &MyForm::vvod2_Click);
			// 
			// txtvvod2
			// 
			this->txtvvod2->BackColor = System::Drawing::Color::White;
			this->txtvvod2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtvvod2->Location = System::Drawing::Point(826, 407);
			this->txtvvod2->Name = L"txtvvod2";
			this->txtvvod2->ReadOnly = true;
			this->txtvvod2->Size = System::Drawing::Size(197, 36);
			this->txtvvod2->TabIndex = 38;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(821, 366);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(200, 29);
			this->label18->TabIndex = 37;
			this->label18->Text = L"Имя файла ввода:";
			// 
			// vivod2
			// 
			this->vivod2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vivod2->Location = System::Drawing::Point(1052, 456);
			this->vivod2->Name = L"vivod2";
			this->vivod2->Size = System::Drawing::Size(229, 60);
			this->vivod2->TabIndex = 36;
			this->vivod2->Text = L"Сохранить в файл";
			this->vivod2->UseVisualStyleBackColor = true;
			this->vivod2->Click += gcnew System::EventHandler(this, &MyForm::vivod2_Click);
			// 
			// txtvivod2
			// 
			this->txtvivod2->BackColor = System::Drawing::Color::White;
			this->txtvivod2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtvivod2->Location = System::Drawing::Point(1052, 407);
			this->txtvivod2->Name = L"txtvivod2";
			this->txtvivod2->ReadOnly = true;
			this->txtvivod2->Size = System::Drawing::Size(229, 36);
			this->txtvivod2->TabIndex = 35;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1047, 366);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(217, 29);
			this->label12->TabIndex = 34;
			this->label12->Text = L"Имя файла вывода:";
			// 
			// Viv
			// 
			this->Viv->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Viv->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Viv->Location = System::Drawing::Point(26, 181);
			this->Viv->Name = L"Viv";
			this->Viv->Size = System::Drawing::Size(776, 406);
			this->Viv->TabIndex = 23;
			this->Viv->Text = L"";
			this->Viv->WordWrap = false;
			this->Viv->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Viv_KeyPress);
			// 
			// Vup
			// 
			this->Vup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Vup->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Vup->Location = System::Drawing::Point(1084, 92);
			this->Vup->Name = L"Vup";
			this->Vup->Size = System::Drawing::Size(180, 49);
			this->Vup->TabIndex = 22;
			this->Vup->Text = L"Выполнить";
			this->Vup->UseVisualStyleBackColor = true;
			this->Vup->Click += gcnew System::EventHandler(this, &MyForm::Vup_Click);
			// 
			// stroki
			// 
			this->stroki->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->stroki->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stroki->Location = System::Drawing::Point(26, 612);
			this->stroki->Name = L"stroki";
			this->stroki->ReadOnly = true;
			this->stroki->Size = System::Drawing::Size(1041, 96);
			this->stroki->TabIndex = 21;
			this->stroki->Text = L"";
			this->stroki->WordWrap = false;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(1038, 181);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(226, 79);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Максимальная сумма";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(820, 180);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(232, 80);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Минимальная сумма";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Maxi
			// 
			this->Maxi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Maxi->Location = System::Drawing::Point(967, 99);
			this->Maxi->Name = L"Maxi";
			this->Maxi->Size = System::Drawing::Size(100, 39);
			this->Maxi->TabIndex = 15;
			this->Maxi->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Maxi->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Maxi_KeyPress);
			this->Maxi->Leave += gcnew System::EventHandler(this, &MyForm::Maxi_Leave);
			// 
			// Mini
			// 
			this->Mini->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mini->Location = System::Drawing::Point(967, 39);
			this->Mini->Name = L"Mini";
			this->Mini->Size = System::Drawing::Size(100, 39);
			this->Mini->TabIndex = 14;
			this->Mini->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Mini->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Mini_KeyPress);
			this->Mini->Leave += gcnew System::EventHandler(this, &MyForm::Mini_Leave);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(543, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(399, 33);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Введите максимальное значение";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(543, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(392, 33);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Введите минимальное значение";
			// 
			// Gen
			// 
			this->Gen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Gen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Gen->Location = System::Drawing::Point(1084, 37);
			this->Gen->Name = L"Gen";
			this->Gen->Size = System::Drawing::Size(180, 46);
			this->Gen->TabIndex = 10;
			this->Gen->Text = L"Генерация ";
			this->Gen->UseVisualStyleBackColor = true;
			this->Gen->Click += gcnew System::EventHandler(this, &MyForm::Gen_Click);
			// 
			// Zakr
			// 
			this->Zakr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Zakr->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Zakr->Location = System::Drawing::Point(1084, 612);
			this->Zakr->Name = L"Zakr";
			this->Zakr->Size = System::Drawing::Size(180, 96);
			this->Zakr->TabIndex = 9;
			this->Zakr->Text = L"Закрыть";
			this->Zakr->UseVisualStyleBackColor = true;
			this->Zakr->Click += gcnew System::EventHandler(this, &MyForm::Zakr_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(21, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(368, 33);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Введите количество столбцов";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(21, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(326, 33);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Введите количество строк";
			// 
			// MaxVIV
			// 
			this->MaxVIV->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->MaxVIV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MaxVIV->Location = System::Drawing::Point(1098, 263);
			this->MaxVIV->Name = L"MaxVIV";
			this->MaxVIV->ReadOnly = true;
			this->MaxVIV->Size = System::Drawing::Size(100, 39);
			this->MaxVIV->TabIndex = 5;
			this->MaxVIV->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MinVIV
			// 
			this->MinVIV->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->MinVIV->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinVIV->Location = System::Drawing::Point(883, 263);
			this->MinVIV->Name = L"MinVIV";
			this->MinVIV->ReadOnly = true;
			this->MinVIV->Size = System::Drawing::Size(100, 39);
			this->MinVIV->TabIndex = 4;
			this->MinVIV->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Strok
			// 
			this->Strok->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Strok->Location = System::Drawing::Point(414, 99);
			this->Strok->Name = L"Strok";
			this->Strok->Size = System::Drawing::Size(100, 39);
			this->Strok->TabIndex = 1;
			this->Strok->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Strok->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Strok_KeyPress);
			this->Strok->Leave += gcnew System::EventHandler(this, &MyForm::Strok_Leave);
			// 
			// Stolb
			// 
			this->Stolb->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Stolb->Location = System::Drawing::Point(414, 42);
			this->Stolb->Name = L"Stolb";
			this->Stolb->Size = System::Drawing::Size(100, 39);
			this->Stolb->TabIndex = 0;
			this->Stolb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Stolb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Stolb_KeyPress);
			this->Stolb->Leave += gcnew System::EventHandler(this, &MyForm::Stolb_Leave);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->vivod3);
			this->tabPage3->Controls->Add(this->txtvivod3);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->resh);
			this->tabPage3->Controls->Add(this->razl);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->Nat);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1287, 725);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Третье";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// vivod3
			// 
			this->vivod3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vivod3->Location = System::Drawing::Point(524, 618);
			this->vivod3->Name = L"vivod3";
			this->vivod3->Size = System::Drawing::Size(283, 60);
			this->vivod3->TabIndex = 36;
			this->vivod3->Text = L"Сохранить в файл";
			this->vivod3->UseVisualStyleBackColor = true;
			this->vivod3->Click += gcnew System::EventHandler(this, &MyForm::vivod3_Click);
			// 
			// txtvivod3
			// 
			this->txtvivod3->BackColor = System::Drawing::Color::White;
			this->txtvivod3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtvivod3->Location = System::Drawing::Point(524, 564);
			this->txtvivod3->Name = L"txtvivod3";
			this->txtvivod3->ReadOnly = true;
			this->txtvivod3->Size = System::Drawing::Size(283, 38);
			this->txtvivod3->TabIndex = 35;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(518, 515);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(277, 32);
			this->label21->TabIndex = 34;
			this->label21->Text = L"Имя файла вывода:";
			// 
			// resh
			// 
			this->resh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resh->Location = System::Drawing::Point(496, 229);
			this->resh->Name = L"resh";
			this->resh->Size = System::Drawing::Size(335, 91);
			this->resh->TabIndex = 3;
			this->resh->Text = L"Разложить";
			this->resh->UseVisualStyleBackColor = true;
			this->resh->Click += gcnew System::EventHandler(this, &MyForm::resh_Click);
			// 
			// razl
			// 
			this->razl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->razl->Location = System::Drawing::Point(49, 389);
			this->razl->Name = L"razl";
			this->razl->ReadOnly = true;
			this->razl->Size = System::Drawing::Size(1181, 76);
			this->razl->TabIndex = 2;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(303, 28);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(732, 68);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Введите натуральное число";
			// 
			// Nat
			// 
			this->Nat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Nat->Location = System::Drawing::Point(435, 121);
			this->Nat->Name = L"Nat";
			this->Nat->Size = System::Drawing::Size(479, 76);
			this->Nat->TabIndex = 0;
			this->Nat->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Nat->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Nat_KeyPress);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->vivod4);
			this->tabPage4->Controls->Add(this->txtvivod4);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->vvod4);
			this->tabPage4->Controls->Add(this->txtvvod4);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->viv_str);
			this->tabPage4->Controls->Add(this->Prov);
			this->tabPage4->Controls->Add(this->vvod_str);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1287, 725);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Четвертое ";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// vivod4
			// 
			this->vivod4->Location = System::Drawing::Point(886, 609);
			this->vivod4->Name = L"vivod4";
			this->vivod4->Size = System::Drawing::Size(194, 60);
			this->vivod4->TabIndex = 36;
			this->vivod4->Text = L"Сохранить в файл";
			this->vivod4->UseVisualStyleBackColor = true;
			this->vivod4->Click += gcnew System::EventHandler(this, &MyForm::vivod4_Click);
			// 
			// txtvivod4
			// 
			this->txtvivod4->BackColor = System::Drawing::Color::White;
			this->txtvivod4->Location = System::Drawing::Point(886, 573);
			this->txtvivod4->Name = L"txtvivod4";
			this->txtvivod4->ReadOnly = true;
			this->txtvivod4->Size = System::Drawing::Size(191, 30);
			this->txtvivod4->TabIndex = 35;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(878, 545);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(199, 25);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Имя файла вывода:";
			// 
			// vvod4
			// 
			this->vvod4->Location = System::Drawing::Point(192, 611);
			this->vvod4->Name = L"vvod4";
			this->vvod4->Size = System::Drawing::Size(197, 58);
			this->vvod4->TabIndex = 33;
			this->vvod4->Text = L"Ввод из файла";
			this->vvod4->UseVisualStyleBackColor = true;
			this->vvod4->Click += gcnew System::EventHandler(this, &MyForm::vvod4_Click);
			// 
			// txtvvod4
			// 
			this->txtvvod4->BackColor = System::Drawing::Color::White;
			this->txtvvod4->Location = System::Drawing::Point(192, 575);
			this->txtvvod4->Name = L"txtvvod4";
			this->txtvvod4->ReadOnly = true;
			this->txtvvod4->Size = System::Drawing::Size(197, 30);
			this->txtvvod4->TabIndex = 32;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(187, 547);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(185, 25);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Имя файла ввода:";
			// 
			// viv_str
			// 
			this->viv_str->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->viv_str->Location = System::Drawing::Point(64, 426);
			this->viv_str->Multiline = false;
			this->viv_str->Name = L"viv_str";
			this->viv_str->ReadOnly = true;
			this->viv_str->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->viv_str->Size = System::Drawing::Size(1161, 63);
			this->viv_str->TabIndex = 3;
			this->viv_str->Text = L"";
			this->viv_str->TextChanged += gcnew System::EventHandler(this, &MyForm::viv_str_TextChanged);
			// 
			// Prov
			// 
			this->Prov->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Prov->Location = System::Drawing::Point(290, 271);
			this->Prov->Name = L"Prov";
			this->Prov->Size = System::Drawing::Size(706, 91);
			this->Prov->TabIndex = 2;
			this->Prov->Text = L"Проверить выражение";
			this->Prov->UseVisualStyleBackColor = true;
			this->Prov->Click += gcnew System::EventHandler(this, &MyForm::Prov_Click);
			// 
			// vvod_str
			// 
			this->vvod_str->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vvod_str->Location = System::Drawing::Point(157, 155);
			this->vvod_str->Name = L"vvod_str";
			this->vvod_str->Size = System::Drawing::Size(979, 60);
			this->vvod_str->TabIndex = 1;
			this->vvod_str->Text = L"";
			this->vvod_str->TextChanged += gcnew System::EventHandler(this, &MyForm::vvod_str_TextChanged);
			this->vvod_str->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::vvod_str_KeyPress);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Times New Roman", 42, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(62, 40);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(1122, 80);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Введите арифметическое выражение";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1319, 779);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Индивидуальные задания";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int N, MinZ, MaxZ, check;
		array<int>^ Arr;
		String^ checkS;
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (N_Z->Text == "") {
			String^ msg("Введите количество символов");
			MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
			return;
		}
		if (Min_Z->Text == "") {
			String^ msg("Введите минимальное значение");
			MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
			return;
		}
		if (Max_Z->Text == "") {
			String^ msg("Введите максимальное значение");
			MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
			return;
		}
		Array_I->Text = "";
		Array_R->Text = "";
		Posled->Text = "";
		Arr = gcnew array<int>(N);
		for (int i = 0; i < N; i++)
		{
			Arr[i] = (rand() % (MaxZ - MinZ + 1)) + (MinZ);
			Array_I->Text += Convert::ToString(Arr[i]);
			Array_I->Text += " ";
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Array_R->Text = "";
		
		String^ stroka = Array_I->Text;
		stroka = Regex::Replace(stroka, "\\--+", "-");
		stroka = Regex::Replace(stroka, " - ", " ");
		stroka = Regex::Replace(stroka, "[^\\d-]", " ");
		stroka = Regex::Replace(stroka, " - ", " ");
		stroka = Regex::Replace(stroka, "\\s+", " ");
		Array_I->Text = stroka;
		String^ stro = Array_I->Text;
		int maxLength = 0;
		int length = 0;
		int a = 0;

		for (int i = 0; i < stro->Length; ++i) {
			if (stro[i] == ' ') {
				a++;
			}
		}

		array<int>^ Arr_R;
		Arr_R = gcnew array<int>(a);

		int w = 0;
		String^ s1;
		for (int i = 0; i < stro->Length; i++)
		{
			if (stro[i] == ' ')
			{
				Arr_R[w] = Convert::ToInt32(s1);
				w++;
				s1 = "";
			}
			else {
				s1 += stro[i];
			}
		}
		Posled->Text = "";
		array<double>^ dlin = gcnew array<double>(w*w);
		for (int i = 0; i < dlin->Length; i++) {
			dlin[i] = 0.1;
		}
		int p = 1;
		int mx = 0;
		int pmx = 0;
		int max = 0;
		int j, k;
		int vvod = 0;
		while (p < Arr_R->Length - 1) {

			if ((Arr_R[p] > Arr_R[p - 1]) && (Arr_R[p] > Arr_R[p + 1])) {

				j = p;
				k = 0;

				while (j < Arr_R->Length - 1 && (Arr_R[j] > Arr_R[j - 1] && Arr_R[j] > Arr_R[j + 1])) {
					k = k + 1;
					j = j + 2;

				}
				if (k > mx) {
					for (int i = 0; i < dlin->Length; i++) {
						dlin[i] = 0.1;
					}

					max = 2 * k + 1;
					pmx = p - 1;
					mx = k;
					for (int z = pmx; z < pmx + max; z++) {
						dlin[vvod] = Arr_R[z];
						vvod++;
					}
					p = p + 2 * k ;
					k = 0;
					vvod--;
				}
				if (k == mx && k > 0) {

					pmx = p - 1;
					vvod++;
					dlin[vvod] = 0.01;
					for (int z = pmx; z < pmx + max && z < Arr_R->Length; z++) {
						vvod++;
						dlin[vvod] = Arr_R[z];

					}
					p = p + 2 * k + 1;
					k = 0;
					

				}
				else {
					p = p + 2 * k + 1;
					k = 0;
					
				}
			}
			else {
				p = p + 1;
			}
		}

		for (int i = 0; i < dlin->Length; i++) {
			if (dlin[i] != 0.1) {
				if (dlin[i] == 0.01) {
					Posled->Text += "\n";
				}
				else {
					Posled->Text += String::Format("{0,4}", dlin[i]);
					Posled->Text += " ";
				}
			}
		}
		Array_R->Text = Convert::ToString(max);


	}
	private: System::Void Array_I_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	 N_Z->Text = "";
	 Min_Z->Text = "";
	 Max_Z->Text = "";
	 Array_R->Text = "";
	 Posled->Text = "";
	}
	private: System::Void N_Z_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (N_Z->Text != "")
		{
			N = Convert::ToDouble(N_Z->Text);
		}
	}
	private: System::Void Min_Z_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (Min_Z->Text != "") {
			MinZ = Convert::ToDouble(Min_Z->Text);
		}
	}
	private: System::Void Max_Z_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (Max_Z->Text != "") {
			MaxZ = Convert::ToDouble(Max_Z->Text);
		}
	}
	private: System::Void Array_I_Leave(System::Object^  sender, System::EventArgs^  e) {
		String^ stroka = Array_I->Text;
		stroka = Regex::Replace(stroka, "\\s+", " ");
		Array_I->Text = stroka;
	}

		int STR, STO;
		int Minim, Maxim;

	private: System::Void Stolb_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (Stolb->Text != "")
		{
			STO = Convert::ToInt16(Stolb->Text);
		}
	}
	private: System::Void Strok_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (Strok->Text != "")
		{
			STR = Convert::ToInt16(Strok->Text);
		}
	}
	private: System::Void Mini_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (Mini->Text != "")
		{
			Minim = Convert::ToDouble(Mini->Text);
		}
		
	}
	private: System::Void Maxi_Leave(System::Object^  sender, System::EventArgs^  e) {
		if (Maxi->Text != "")
		{
			Maxim = Convert::ToDouble(Maxi->Text);
		}
	}
			int maxind=0;
			int minind=0;
			double Su = 0;
			
private: System::Void Gen_Click(System::Object^  sender, System::EventArgs^  e) {
	MinVIV->Text = "";
	MaxVIV->Text = "";
	this->stroki->Text = "";
	if (Minim>Maxim) {
		String^ msg("Неправильный диапазон значений");
		Mini->Text = "";
		Mini->Text = "";
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
	}
	if (Stolb->Text == "") {
		String^ msg("Введите количество столбцов");
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
	}
	if (Strok->Text == "") {
		String^ msg("Введите количесвто строк");
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
	}
	if (Maxi->Text == "") {
		String^ msg("Введите максимальное значение");
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
	}
	if (Mini->Text == "") {
		String^ msg("Введите минимальное значение");
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
	}
	
	Viv->Text = "";
	array<double, 2>^ values = gcnew array<double, 2>(STR, STO);
	Viv->Text = "";
	double lowerRange = Minim;
	double upperRange = Maxim;
	for (int p= 0; p < STR; p++)
	{
		for (int j= 0; j < STO; j++) {
			values[p,j] = ((double)rand() * (upperRange - lowerRange)) / (double)RAND_MAX + lowerRange;
			Viv->Text += String::Format("{0,10:F2}", values[p, j]);
		}
		Viv->Text += "\r\n";
	}
	
}
private: System::Void Vup_Click(System::Object^  sender, System::EventArgs^  e) {
	this->txtvivod2->Text = "";

	this->stroki->Text = "";
	MinVIV->Text = "";
	MaxVIV->Text = "";

	if (this->Viv->Text == "") {
		return;
	}
	try {
		cli::array<String^>^ arrays = this->Viv->Text->Trim()->Split('\n');
		cli::array<String^>^ arrs = this->Viv->Text->Split('\n');
		int elementsCount = arrays->Length;
		while (arrays[0]->Contains("  "))
			arrays[0] = arrays[0]->Replace("  ", " ");
		int stolb = arrays[0]->Trim()->Split()->Length;

		cli::array<Double, 2>^ matrix = gcnew array<Double, 2>(elementsCount, stolb);
		for (int i = 0; i < elementsCount; i++) {
			while (arrays[i]->Contains("  "))
				arrays[i] = arrays[i]->Replace("  ", " ");

			cli::array<String^>^ arrayElements = arrays[i]->Trim()->Split(' ');

			for (int j = 0; j < stolb; j++) {
				matrix[i, j] = Convert::ToDouble(arrayElements[j]);
			}
		}
		
		
		double MaxSum = -999999999999;
		double MinSum = 999999999999;
		for (int p = 0; p < elementsCount; p++)
		{
			for (int j = 0; j < stolb; j++) {
				Su += matrix[p, j];

			}
			if (Su > MaxSum) {
				MaxSum = Su;
				maxind = p;
			}
			if (Su < MinSum) {
				MinSum = Su;
				minind = p;
			}
			Su = 0;
		}

		MinVIV->Text = MinSum.ToString("F2");
		MaxVIV->Text = MaxSum.ToString("F2");
		stroki->Text += "Строка с максимальной суммой: ";
		for (int i = 0; i < stolb; i++) {
			stroki->Text += String::Format("{0,10:F2}", matrix[maxind, i]);
		}
		stroki->Text += "\r\n";
		stroki->Text += "Строка с минимальной суммой : ";

		for (int i = 0; i < stolb; i++) {
			stroki->Text += String::Format("{0,10:F2}", matrix[minind, i]);
		}

		this->Viv->SelectionStart = this->Viv->Text->IndexOf(arrs[maxind]);
		this->Viv->SelectionLength = arrs[maxind]->Length;
		this->Viv->SelectionColor = Color::Red;
		this->Viv->SelectionFont = gcnew System::Drawing::Font(this->Viv->Font, FontStyle::Bold);


		this->Viv->SelectionStart = this->Viv->Text->IndexOf(arrs[minind]);
		this->Viv->SelectionLength = arrs[minind]->Length;
		this->Viv->SelectionColor = Color::Blue;
		this->Viv->SelectionFont = gcnew System::Drawing::Font(this->Viv->Font, FontStyle::Bold);
	}
	catch (IndexOutOfRangeException^ e) {
		String^ msg("Неверный формат матрицы");
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
	}
}
private: System::Void Viv_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 MinVIV->Text = "";
			 MaxVIV->Text = "";
			 stroki->Text = "";
			 Mini->Text = "";
			 Maxi->Text = "";
			 Stolb->Text = "";
			 Strok->Text = "";
}
private: System::Void Zakr_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
	private: System::Void N_Z_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		// Если нажатая клавиша не цифровая.
		if (!Char::IsDigit(e->KeyChar))
			// Запрет на ввод более одного знака минуса.
			if (e->KeyChar != '-' || N_Z->Text->IndexOf('-') == -1)
					if (e->KeyChar != (char)Keys::Back)
						e->Handled = true;          // Запрет ввода

			// Запрет ввода повторных нулей в начале числа.
		if (e->KeyChar == (char)Keys::D0 ||
			e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
			if (N_Z->Text->Length >= 1)        // Если строка не пустая
				if (N_Z->Text[0] == '0' && N_Z->SelectionStart < 2)
					e->Handled = true;             // Запрет ввода
}
private: System::Void Min_Z_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Если нажатая клавиша не цифровая.
	if (!Char::IsDigit(e->KeyChar))
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-' || Min_Z->Text->IndexOf('-') != -1)
			if (e->KeyChar != (char)Keys::Back)
				e->Handled = true;          // Запрет ввода

	// Запрет ввода повторных нулей в начале числа.
	if (e->KeyChar == (char)Keys::D0 ||
		e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (Min_Z->Text->Length >= 1)        // Если строка не пустая
			if (Min_Z->Text[0] == '0' && Min_Z->SelectionStart < 2)
				e->Handled = true;             // Запрет ввода
}
private: System::Void Max_Z_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Если нажатая клавиша не цифровая.
	if (!Char::IsDigit(e->KeyChar))
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-' || Max_Z->Text->IndexOf('-') != -1)
			if (e->KeyChar != (char)Keys::Back)
				e->Handled = true;          // Запрет ввода

	// Запрет ввода повторных нулей в начале числа.
	if (e->KeyChar == (char)Keys::D0 ||
		e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (Max_Z->Text->Length >= 1)        // Если строка не пустая
			if (Max_Z->Text[0] == '0' && Max_Z->SelectionStart < 2)
				e->Handled = true;             // Запрет ввода
}
private: System::Void Stolb_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Если нажатая клавиша не цифровая.
	if (!Char::IsDigit(e->KeyChar))
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-' || Stolb->Text->IndexOf('-') == -1)
			if (e->KeyChar != (char)Keys::Back)
				e->Handled = true;          // Запрет ввода

	// Запрет ввода повторных нулей в начале числа.
	if (e->KeyChar == (char)Keys::D0 ||
		e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (Stolb->Text->Length >= 1)        // Если строка не пустая
			if (Stolb->Text[0] == '0' && Stolb->SelectionStart < 2)
				e->Handled = true;             // Запрет ввода
}
private: System::Void Strok_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Если нажатая клавиша не цифровая.
	if (!Char::IsDigit(e->KeyChar))
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-' || Strok->Text->IndexOf('-') == -1)
			if (e->KeyChar != (char)Keys::Back)
				e->Handled = true;          // Запрет ввода

	// Запрет ввода повторных нулей в начале числа.
	if (e->KeyChar == (char)Keys::D0 ||
		e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (Strok->Text->Length >= 1)        // Если строка не пустая
			if (Strok->Text[0] == '0' &&  Strok->SelectionStart < 2)
				e->Handled = true;             // Запрет ввода
}
private: System::Void Mini_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Если нажатая клавиша не цифровая.
	if (!Char::IsDigit(e->KeyChar))
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-' || Mini->Text->IndexOf('-') != -1)
			if (e->KeyChar != (char)Keys::Back)
				e->Handled = true;          // Запрет ввода

	// Запрет ввода повторных нулей в начале числа.
	if (e->KeyChar == (char)Keys::D0 ||
		e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (Mini->Text->Length >= 1)        // Если строка не пустая
			if (Mini->Text[0] == '0' && Mini->SelectionStart < 2)
				e->Handled = true;             // Запрет ввода
}
private: System::Void Maxi_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Если нажатая клавиша не цифровая.
	if (!Char::IsDigit(e->KeyChar))
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-' || Maxi->Text->IndexOf('-') != -1)
			if (e->KeyChar != (char)Keys::Back)
				e->Handled = true;          // Запрет ввода

	// Запрет ввода повторных нулей в начале числа.
	if (e->KeyChar == (char)Keys::D0 ||
		e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (Maxi->Text->Length >= 1)        // Если строка не пустая
			if (Maxi->Text[0] == '0' && Maxi->SelectionStart < 2)
				e->Handled = true;             // Запрет ввода
}

private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->MaximizeBox = true;
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->MaximizeBox = false;
}
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->MaximizeBox = false;
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->MaximizeBox = false;
}

		
private: System::Void resh_Click(System::Object^  sender, System::EventArgs^  e) {
	razl->Text = "";
	if (Nat->Text == "")
	{
		String^ msg("Введите натуральное число");
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
	}
	int nat = Convert::ToInt64(Nat->Text);
	if ((nat == 1) || (nat==0))
	{
		razl->Text = "Нет простых множителей";
		return;
	}
	else
	{
		razl->Text += Convert::ToString(nat);
		razl->Text += "=";
		int j = 2;
		while (j<=nat)
		{
			int k = 0;
			while (nat%j==0)
			{
				k++;
				nat = nat/ j;
			}
			if (j < nat)
			{
				if (k == 1)
				{
					razl->Text += Convert::ToString(j);
					razl->Text += "*";
				}
				else
				{
					if (k>1)
					{
						razl->Text += Convert::ToString(j);
						razl->Text += "^";
						razl->Text += Convert::ToString(k);
						razl->Text += "*";
					}
				}
		
			}
			else
			{
				if (k==1)
				{
					razl->Text += Convert::ToString(j);
				
				}
				else
				{
					if (k>1)
					{
						razl->Text += Convert::ToString(j);
						razl->Text += "^";
						razl->Text += Convert::ToString(k);
					}
				}
			}
			j++;
		}
	
	}
	
}
private: System::Void Nat_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	// Если нажатая клавиша не цифровая.
	if (!Char::IsDigit(e->KeyChar))
		// Запрет на ввод более одного знака минуса.
		if (e->KeyChar != '-' || Nat->Text->IndexOf('-') == -1)
			if (e->KeyChar != (char)Keys::Back)
				e->Handled = true;          // Запрет ввода

	// Запрет ввода повторных нулей в начале числа.
	if (e->KeyChar == (char)Keys::D0 ||
		e->KeyChar == (char)Keys::NumPad0)  // Если нажата клавиша 0
		if (Nat->Text->Length >= 1)        // Если строка не пустая
			if (Nat->Text[0] == '0' && Nat->SelectionStart < 2)
				e->Handled = true;             // Запрет ввода
}
private: System::Void Prov_Click(System::Object^  sender, System::EventArgs^  e) {
	if (vvod_str->Text == "") {
		String^ msg("Введите арифметиеское выражение");
		MessageBox::Show(msg, "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);;
		return;
		return;
	}
	viv_str->Text = "";
	String^ vir = vvod_str->Text;

	while (vir->Contains(" "))
		vir=vir->Replace(" ", "");
	//проврека на начало на операцию
	if (vir[0] == '*' || vir[0] == '+' || vir[0] == '^' || vir[0] == '/' || vir[0] == ',') {
		viv_str->Text = L"Синтаксически неверная запись начала выражения";
		return;
	}
	
	// знак на конце 
	if (vir[vir->Length - 1] == '*' || vir[vir->Length - 1] == '+' || vir[vir->Length - 1] == '-' || vir[vir->Length - 1] == '/' || vir[vir->Length - 1] == '^' || vir[vir->Length - 1] == ',')
	{
		viv_str->Text = L"Синтаксически неверная запись конца выражения";
		return;

	}
	// проверка на содержание
	for (int i=0; i <= vir->Length-1; i++) {
	if (vir[i] != 'x' && vir[i] != '-' &&  vir[i] != '+' && vir[i] != '/' &&vir[i] != '*' && vir[i] != '^' &&vir[i] != 'x' && vir[i] != ',' &&vir[i] != '(' && vir[i] != ')'  && !isdigit(vir[i]) && vir[i] != 'e') {
		viv_str->Text = L"Синтаксически неверная запись элементов выражения";
		return;
	}	
	}
	// 2 подрят знака
	int znak = 0;
	for (int i = 0; i <= vir->Length - 1; i++) {
		if (vir[i] == '*' || vir[i] == '+' || vir[i] == '-' || vir[i] == '+' || vir[i] == '^' || vir[i] == '/'  ) {
			znak++;
			if (vir[i + 1] == '*' || vir[i + 1] == '+' || vir[i + 1] == '-' || vir[i + 1] == '+' || vir[i + 1] == '^' || vir[i+1] == '/' || vir[i + 1] == ')' ) {
				viv_str->Text = L"Синтаксически неверная математической операции";
				return;
			}
		}
	}
	// открытые и закрытые скобки
	for (int i = 0; i <= vir->Length - 2; i++) {
		if (vir[i] == '(') {
			if (vir[i + 1] == ')') {
				viv_str->Text = L"Синтаксически неверная запись скобок";
				return;
			}
		}
	}
	for (int i = 1; i <= vir->Length - 2; i++) {
		if (vir[i] == '0') {
			if (!isdigit(vir[i-1])  &&  vir[i-1]!=',' && vir[i-1] != '*' && vir[i-1] != '+' && vir[i-1] != '-' && vir[i-1] != '+' && vir[i-1] != '^' && vir[i-1] != '/' && vir[i - 1] != ')'    && vir[i - 1] != '(') {
				viv_str->Text = L"Синтаксически неверная запись числа";
				return;
			}
		}
	}
	for (int i = 0; i <= vir->Length - 2; i++) {
		if (vir[i] == '(') {
			if (vir[i + 1] == '*' || vir[i + 1] == '+'  || vir[i + 1] == '+' || vir[i + 1] == '^' || vir[i + 1] == '/' || vir[i + 1] == ')') {
				viv_str->Text = L"Синтаксически неверная запись математической операции";
				return;
			}
		}
	}
	bool odinznakmin = false;
	for (int i = 0; i <= vir->Length - 1; i++) {
		
			if (isdigit(vir[i]))
			{
				break;
			}
			if (vir[i] == '-' ) 
			{
				odinznakmin = true;
				break;
			}
	}

	int k = 0;
	int r = 0;
	for (int i = 0; i < vir->Length; i++) { //проверка скобок
		if (vir[i] == '(') {
			k=k+1;	
		}
		if (vir[i] == ')') {
			k = k - 1;
		}
		if (k < 0) {
		break;
		}
		
	}
	if (k != 0) {
		viv_str->Text = L"Синтаксически неверная запись скобок";
		return;
	}
	if (znak<=0) {
		viv_str->Text = L"Синтаксически неверная запись выражения";
		return;
	}
	if (znak == 1 && odinznakmin==true) {
		viv_str->Text = L"Синтаксически неверная запись выражения";
		return;
	}
	for (int i = 1; i < vir->Length-1; i++) { //проверка запятых
		if (vir[i] == ',') {
			if (!isdigit(vir[i - 1]) || !isdigit(vir[i + 1])) {
				viv_str->Text = L"Синтаксически неверная запись десятичного числа";
				return;
			}

		}

	}
	for (int i = 1; i < vir->Length - 2; i++) { //проверка запятых
		if (vir[i] == ',') {
			i++;
			while (i < vir->Length && vir[i]!= '*' && vir[i] != ')' && vir[i] != '(' && vir[i] != '+' && vir[i] != '-' && vir[i] != '/' && vir[i] != '^'&& vir[i] != 'x' && vir[i] != 'e')
			{
				if (!isdigit(vir[i])) {
					viv_str->Text = L"Синтаксически неверная запись десятичного числа";
					return;
				}
				i++;
			}
		}
	}
	viv_str->Text = "Синтаксически верная запись выражения";
}
private: System::Void vvod_str_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	viv_str->Text = "";
	txtvivod4->Text = "";
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void vvod1_Click(System::Object^  sender, System::EventArgs^  e) {
	Posled -> Text = "";
	Array_I->Text = "";
	Array_R->Text = "";
	
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	openFileDialog->Title = "Открытие файла";
	openFileDialog->InitialDirectory = "c:\\";
	openFileDialog->Filter = "txt files (*.txt) |*.txt|All files (*.*) | *.*";
	openFileDialog->FilterIndex = 1;
	openFileDialog->ShowReadOnly = true;
	openFileDialog->RestoreDirectory = true;

	if (openFileDialog->ShowDialog() ==System::Windows::Forms::DialogResult::OK) {
		txtvvod1->Text = openFileDialog->FileName;
		if (txtvvod1->Text == "") return;
		String^ path = txtvvod1->Text;
		String^ line = "";
		StreamReader^ sr = File::OpenText(path);
		Array_R->Text = "";
		while (line = sr->ReadLine())
			Array_I->Text += line + " ";
		sr->Close();
	}
	else
	{
		txtvvod1->Text = "";
	}
	String^ stroka = Array_I->Text;
	stroka = Regex::Replace(stroka, "\\--+", "-");
	stroka = Regex::Replace(stroka, " - ", " ");
	stroka = Regex::Replace(stroka, "[^\\d-]", " ");
	stroka = Regex::Replace(stroka, " - ", " ");
	stroka = Regex::Replace(stroka, "\\s+", " ");
	Array_I->Text = stroka;
}
private: System::Void vivod1_Click(System::Object^  sender, System::EventArgs^  e) {
	if(Array_R->Text=="")
	{
		return;
	}
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Title = "Сохранение файла";
	saveFileDialog->InitialDirectory = "c:\\";
	saveFileDialog->Filter = "Text files (*.txt) |*.txt|All files (*.*)” +“ | *.*";
	saveFileDialog->FilterIndex = 1;
	saveFileDialog->RestoreDirectory = true;
	saveFileDialog->OverwritePrompt = true;

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		txtvivod1->Text = saveFileDialog->FileName;
		if (txtvivod1->Text == "") return;
		String^ path = txtvivod1->Text;
		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->WriteLine("Исходные значения: " + Array_I->Text);
			sw->WriteLine("Операция: " + Array_R->Text);
			sw->WriteLine(Posled->Text);
			sw->Close();
		}
		else {
			if (checkS == Array_I->Text) { return; }
			StreamWriter^ sw = File::AppendText(path);
			if (checkS != Array_I->Text) {
				sw->WriteLine("");
				sw->WriteLine("Исходный массив: " + Array_I->Text);
			}
			sw->WriteLine("Операция: " + Array_R->Text);
			sw->WriteLine("");
			sw->WriteLine( Posled->Text);
			sw->Close();

		}
		checkS = Array_I->Text;
		
	}
}
private: System::Void vvod2_Click(System::Object^  sender, System::EventArgs^  e) {
	 MinVIV->Text = "";
	 MaxVIV->Text = "";
	 stroki->Text = "";
	 Viv->Text = "";
	 OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	 openFileDialog->Title = "Открытие файла";
	 openFileDialog->InitialDirectory = "c:\\";
	 openFileDialog->Filter = "txt files (*.txt) |*.txt|All files (*.*) | *.*";
	 openFileDialog->FilterIndex = 1;
	 openFileDialog->ShowReadOnly = true;
	 openFileDialog->RestoreDirectory = true;

	 if (openFileDialog->ShowDialog() ==System::Windows::Forms::DialogResult::OK) {
		 txtvvod2->Text = openFileDialog->FileName;
		 if (txtvvod2->Text == "") return;
		 String^ path = txtvvod2->Text;
		 String^ line = "";
		 StreamReader^ sr = File::OpenText(path);
		 while (line = sr->ReadLine())
			 Viv->Text += line + "\n";
		 sr->Close();
	 }
	 else {
		 txtvvod2->Text = "";
	 }
	 
		 
}
private: System::Void vivod2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (stroki->Text == "")
	{
		return;
	}
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Title = "Сохранение файла";
	saveFileDialog->InitialDirectory = "c:\\";
	saveFileDialog->Filter = "Text files (*.txt) |*.txt|All files (*.*)” +“ | *.*";
	saveFileDialog->FilterIndex = 1;
	saveFileDialog->RestoreDirectory = true;
	saveFileDialog->OverwritePrompt = true;

	if (saveFileDialog->ShowDialog() ==System::Windows::Forms::DialogResult::OK) {
		txtvivod2->Text = saveFileDialog->FileName;
		if (txtvivod2->Text == "") return;
		String^ path = txtvivod2->Text;
		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->WriteLine("Исходные значения: \n" +Viv->Text);
			sw->WriteLine("Минимальная сумма :"+ MinVIV->Text+ " Максимальная сумма :"+MaxVIV->Text);
			sw->WriteLine(stroki->Text);
			sw->WriteLine();

			sw->Close();
		}
		else {
			StreamWriter^ sw = File::AppendText(path);
			String^ line = "";
			sw->WriteLine("Исходные значения: \n" + Viv->Text);
			sw->WriteLine("Минимальная сумма :" + MinVIV->Text + " Максимальная сумма :" + MaxVIV->Text);
			sw->WriteLine(stroki->Text);
			sw->WriteLine();

			sw->Close();

		}
		checkS = Viv->Text;
	
	}

}
private: System::Void vivod3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (razl->Text == "")
	{
		return;
	}
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Title = "Сохранение файла";
	saveFileDialog->InitialDirectory = "c:\\";
	saveFileDialog->Filter = "Text files (*.txt) |*.txt|All files (*.*)” +“ | *.*";
	saveFileDialog->FilterIndex = 1;
	saveFileDialog->RestoreDirectory = true;
	saveFileDialog->OverwritePrompt = true;

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		txtvivod3->Text = saveFileDialog->FileName;
		if (txtvivod3->Text == "") return;
		String^ path = txtvivod3->Text;
		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->WriteLine("Исходные значения: " + Nat->Text);
			sw->WriteLine(razl->Text);
			
			sw->Close();
		}
		else {
			if (checkS == Nat->Text) { return; }
			StreamWriter^ sw = File::AppendText(path);
			if (checkS != Nat->Text) {
				sw->WriteLine("");
				sw->WriteLine("Исходные данные: " + Nat->Text);
			}
			sw->WriteLine("Операция: " + razl->Text);
			sw->Close();

		}
		checkS = Nat->Text;
	}
}

private: System::Void vvod4_Click(System::Object^  sender, System::EventArgs^  e) {
	viv_str->Text = "";
	vvod_str->Text = "";
	txtvivod4->Text = "";

	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	openFileDialog->Title = "Открытие файла";
	openFileDialog->InitialDirectory = "c:\\";
	openFileDialog->Filter = "txt files (*.txt) |*.txt|All files (*.*) | *.*";
	openFileDialog->FilterIndex = 1;
	openFileDialog->ShowReadOnly = true;
	openFileDialog->RestoreDirectory = true;

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		txtvvod4->Text = openFileDialog->FileName;
		if (txtvvod4->Text == "") return;
		String^ path = txtvvod4->Text;
		String^ line = "";
		StreamReader^ sr = File::OpenText(path);
		
		while (line = sr->ReadLine())
			vvod_str->Text += line + " ";
		sr->Close();
	}
	else
		txtvvod4->Text = "";

	
}
private: System::Void vivod4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (viv_str->Text == "")
	{
		return;
	}
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Title = "Сохранение файла";
	saveFileDialog->InitialDirectory = "c:\\";
	saveFileDialog->Filter = "Text files (*.txt) |*.txt|All files (*.*)” +“ | *.*";
	saveFileDialog->FilterIndex = 1;
	saveFileDialog->RestoreDirectory = true;
	saveFileDialog->OverwritePrompt = true;

	if (saveFileDialog->ShowDialog() ==System::Windows::Forms::DialogResult::OK) {
		txtvivod4->Text = saveFileDialog->FileName;
		if (txtvivod4->Text == "") return;
		String^ path = txtvivod4->Text;
		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->WriteLine("Исходные значения: " + vvod_str->Text);
			sw->WriteLine(viv_str->Text);
			sw->Close();
		}
		else {
			if (checkS == vvod_str->Text) { return; }
			StreamWriter^ sw = File::AppendText(path);
			if (checkS != vvod_str->Text) {
				sw->WriteLine("");
				sw->WriteLine("Исходные данные: " + vvod_str->Text);
			}
			sw->WriteLine("Операция: " + viv_str->Text);
			sw->Close();

		}
		checkS = vvod_str->Text;
		}
	}

private: System::Void viv_str_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void vvod_str_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
