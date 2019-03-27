#pragma once
#include "Form1.h"
namespace VanPad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public: String^ times;
	public: int selTab;
	private: System::Windows::Forms::TabPage^  tabPage2;
	public: 
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	public: int current;
	public:
		Form2(Form1^ parent )
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			form1 = parent;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;

	public: Form1^ form1;



	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;










	public: System::Windows::Forms::RichTextBox^  richTextBox1;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 280);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(535, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->MinimumSize = System::Drawing::Size(537, 279);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(537, 281);
			this->tabControl1->TabIndex = 1;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(529, 255);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Найти";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Location = System::Drawing::Point(379, 136);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(140, 93);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Прозрачность";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 41);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(61, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"Всегда";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Никогда";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton1_CheckedChanged);
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->Location = System::Drawing::Point(6, 64);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Minimum = 25;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->trackBar1->Size = System::Drawing::Size(128, 23);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 50;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form2::trackBar1_Scroll);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Control;
			this->richTextBox1->Location = System::Drawing::Point(8, 46);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(365, 203);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(379, 235);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(120, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"С учётом регистра";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(379, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 21);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(379, 67);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 36);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Найти во всех  Открытых Документах";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(379, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 21);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Подсчитать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(379, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 21);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Искать > >";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {L"<head>", L"Привет", L"<html>", L"<!DOCTYPE HTML>", 
				L"<header>", L"<p>", L"dfdsfdf", L"<li>", L"<body>", L"<d", L"<>"});
			this->comboBox1->Location = System::Drawing::Point(55, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(318, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(8, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Найти:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->checkBox2);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(529, 255);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Заменить";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(8, 67);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(365, 182);
			this->richTextBox2->TabIndex = 14;
			this->richTextBox2->Text = L"";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(11) {L"<head>", L"Привет", L"<html>", L"<!DOCTYPE HTML>", 
				L"<header>", L"<p>", L"dfdsfdf", L"<li>", L"<body>", L"<d", L"<>"});
			this->comboBox3->Location = System::Drawing::Point(89, 40);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(284, 21);
			this->comboBox3->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Заменить на:";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(379, 67);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(140, 21);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Заменить всё";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form2::button9_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(379, 235);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(120, 17);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"С учётом регистра";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form2::checkBox2_CheckedChanged);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(379, 136);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 21);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(379, 94);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 36);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Заменить во всех  Открытых Документах";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(379, 40);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(140, 21);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Заменить > >";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form2::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(379, 13);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(140, 21);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Искать > >";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form2::button8_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {L"<head>", L"Привет", L"<html>", L"<!DOCTYPE HTML>", 
				L"<header>", L"<p>", L"dfdsfdf", L"<li>", L"<body>", L"<d", L"<>"});
			this->comboBox2->Location = System::Drawing::Point(89, 13);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(284, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Найти:";
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(535, 302);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->statusStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(551, 341);
			this->Name = L"Form2";
			this->RightToLeftLayout = true;
			this->Text = L"Найти";
			this->Activated += gcnew System::EventHandler(this, &Form2::Form2_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Form2::Form2_Deactivate);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form2::Form2_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form2::Form2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form2::Form2_SizeChanged);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int static opacity = 50;
		private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
			switch(selTab)
			{
			case 1:tabControl1->SelectedTab = tabPage1; break;
			case 2:tabControl1->SelectedTab = tabPage2; break;
			}	
			//this->TopMost = true;
			richTextBox1->Height = tabPage1->Height - 51;
				richTextBox2->Height = tabPage2->Height - 72;
		 }
	private: System::Void Form2_Deactivate(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
private: System::Void Form2_Activated(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void Form2_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			  auto Tab1 = tabControl1;
			   tabControl1->Width = this->Width - 14;
			   tabControl1->Height = this->Height - 60;
				for each(Control^ ctrl in Tab1->Controls)
				{
						TabPage^ tp = dynamic_cast<TabPage^>(ctrl);
							tp->Width = tabControl1->Width - 8;
							tp->Height = tabControl1->Height - 8;
				}
				button1->Left = tabPage1->Width - 150;
				button2->Left = tabPage1->Width - 150;
				button3->Left = tabPage1->Width - 150;
				button4->Left = tabPage1->Width - 150;
				button5->Left = tabPage1->Width - 150;
				button6->Left = tabPage1->Width - 150;
				button7->Left = tabPage1->Width - 150;
				button8->Left = tabPage1->Width - 150;
				button9->Left = tabPage1->Width - 150;
				groupBox1->Left = tabPage1->Width - 150;
				groupBox1->Top = tabPage1->Height - 119;
				checkBox1->Left = tabPage1->Width - 150;
				checkBox2->Left = tabPage1->Width - 150;
				checkBox2->Top = tabPage1->Height - 20;
				checkBox1->Top = tabPage1->Height - 20;
				richTextBox1->Width = tabPage1->Width - 164;
				richTextBox2->Width = tabPage1->Width - 164;
				richTextBox1->Height = tabPage1->Height - 51;
				richTextBox2->Height = tabPage2->Height - 72;
				comboBox1->Width = tabPage1->Width - 211;
				comboBox2->Width = tabPage1->Width - 245;
				comboBox3->Width = tabPage1->Width - 245;
		 }
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->Text = tabControl1->SelectedTab->Text;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

public: System::Void Form2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
		{
			form1->SetFind(false);
		}
public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->TopMost = true;
			Find(comboBox1, checkBox1, richTextBox1);
			this->TopMost = false;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(form1->tabControl1->TabCount == 0)
			 {
				 toolStripStatusLabel1->ForeColor = Color::Orange;
				 toolStripStatusLabel1->Text = "Файл не открыт";
				 richTextBox1->Text = "";
				 return;
			 }
			 this->TopMost = true;
			 for each(Control^ ctrl1 in form1->tabControl1->SelectedTab->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Select(0,tb->Text->Length);
						tb->SelectionBackColor = Color::White;
						richTextBox1->Text = "";
						RichTextBoxFinds finds;

						if((!checkBox1->Checked && tabControl1->SelectedIndex == 0) || (!checkBox2->Checked && tabControl1->SelectedIndex == 1))
								finds = RichTextBoxFinds::None;
						else
							    finds = RichTextBoxFinds::MatchCase;

						int count = 0;
						if(tb->Find(comboBox1->Text, finds) != -1 && comboBox1->Text->Length != 0)
						{
							current = 0;
							int index = 0;
							StringComparison culture;
							if(!checkBox1->Checked)
								culture = StringComparison::CurrentCultureIgnoreCase;
							else
								culture = StringComparison::CurrentCulture;

							 while (index < tb->Text->LastIndexOf(comboBox1->Text,culture) + 1)
							{
									tb->Find(comboBox1->Text, index, tb->TextLength, finds);
								index = tb->Text->IndexOf(comboBox1->Text, index,culture) + 1;
							
								tb->Select(tb->SelectionStart,comboBox1->Text->Length);
								tb->SelectionBackColor = Color::YellowGreen;
								//tb->Select(tb->SelectionStart,tb->SelectionStart);
								richTextBox1->Text += form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " ;\n";
								
								count++;
							 }
						}
						else
						{
							toolStripStatusLabel1->ForeColor = Color::Red;
							toolStripStatusLabel1->Text = "Нет совпадений";
							this->TopMost = false;
							return;
						}
						if(((count%10) < 2) || ((count%10) > 4) || (((count%100) > 9) && ((count%100) < 20))  )
							times = " раз";
						else
							times = " раза";

						toolStripStatusLabel1->ForeColor = Color::Green;
						toolStripStatusLabel1->Text = "Найдено "+ count  + times + "! ";

						
						richTextBox1->Text += "\n\"" + comboBox1->Text + "\" найдено в \""+ form1->tabControl1->SelectedTab->Text + "\", "+ count + times + "\n\n";
						
					}	
			 }
			 this->TopMost = false;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(form1->tabControl1->TabCount == 0)
			 {
				 toolStripStatusLabel1->ForeColor = Color::Orange;
				 toolStripStatusLabel1->Text = "Файл не открыт";
				 richTextBox1->Text = "";
				 return;
			 }
			 this->TopMost = true;
			 auto Tab1 = form1->tabControl1;
			 richTextBox1->Text = "";
			 int allcount = 0;
			 RichTextBoxFinds finds;
			 StringComparison culture;
							if(!checkBox1->Checked)
								culture = StringComparison::CurrentCultureIgnoreCase;
							else
								culture = StringComparison::CurrentCulture;


				for each(Control^ ctrl in Tab1->Controls)
				{
						TabPage^ tp = dynamic_cast<TabPage^>(ctrl);
						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);	

							tb->Select(0,tb->Text->Length);
							tb->SelectionBackColor = Color::White;
							
							int count = 0;

							if((!checkBox1->Checked && tabControl1->SelectedIndex == 0) || (!checkBox2->Checked && tabControl1->SelectedIndex == 1))
								finds = RichTextBoxFinds::None;
						else
							    finds = RichTextBoxFinds::MatchCase;

							if(tb->Find(comboBox1->Text, finds) != -1 && comboBox1->Text->Length != 0)
							{
								current = 0;
								int index = 0;

							//	form1->Podsvetka(0,tb);

								

								 while (index < tb->Text->LastIndexOf(comboBox1->Text,culture) + 1)
								{
										tb->Find(comboBox1->Text, index, tb->TextLength, finds);
								index = tb->Text->IndexOf(comboBox1->Text, index,culture) + 1;
							
									tb->Select(tb->SelectionStart,comboBox1->Text->Length);
									tb->SelectionBackColor = Color::YellowGreen;
									tb->Select(tb->SelectionStart,tb->SelectionStart);
									form1->tabControl1->SelectedTab = tp;
									richTextBox1->Text += form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " ;\n";
								
									count++;
									allcount++;
								 }

								

							}
							else
							{
								toolStripStatusLabel1->ForeColor = Color::Red;
								toolStripStatusLabel1->Text = "Нет совпадений";
							}

							if(((count%10) < 2) || ((count%10) > 4) || (((count%100) > 9) && ((count%100) < 20))  )
							times = " раз";
						else
							times = " раза";
							
							if(count)
							richTextBox1->Text += "\n\"" + comboBox1->Text + "\" найдено в \""+ tp->Text + "\", "+ count + times + "\n\n----------------\n";
						}
						}
				}
				if(allcount)
				{
				toolStripStatusLabel1->ForeColor = Color::Green;

				if(((allcount%10) < 2) || ((allcount%10) > 4) || (((allcount%100) > 9) && ((allcount%100) < 20))  )
							times = " раз";
						else
							times = " раза";

				toolStripStatusLabel1->Text = "Найдено "+ allcount  + times +"! ";
				}
				this->TopMost = false;
				}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->TopMost = true;
			 Find(comboBox2, checkBox2, richTextBox2);
			 this->TopMost = false;
		 }
		 void Find(ComboBox^ cb,CheckBox^ checkbox, RichTextBox^ tb1)
		 {
			 if(form1->tabControl1->TabCount == 0)
			 {
				 toolStripStatusLabel1->ForeColor = Color::Orange;
				 toolStripStatusLabel1->Text = "Файл не открыт";
				 tb1->Text = "";
				 return;
			 }
					for each(Control^ ctrl1 in form1->tabControl1->SelectedTab->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Select(0,tb->Text->Length);
						tb->SelectionBackColor = Color::White;
						richTextBox1->Text = "";
						int culture;
						if((!checkBox1->Checked && tabControl1->SelectedIndex == 0) || (!checkBox2->Checked && tabControl1->SelectedIndex == 1))
							culture = 0;
						else
							culture = 1;
						/*
						if(tb->Find(cb->Text) != -1 == tb->Text->IndexOf(cb->Text,culture) && cb->Text->Length != 0 && current > 0)
						{
							//auto MBox = MessageBox::Show("Был изменен \""+ (String^)tp->Text +"\" \nСохранить изменения?","VanPad", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation);
							toolStripStatusLabel1->ForeColor = Color::Blue;
								toolStripStatusLabel1->Text = "Конец файла" + " . ";
						}
						else
						*/
						RichTextBoxFinds finds;

						if((!checkBox1->Checked && tabControl1->SelectedIndex == 0) || (!checkBox2->Checked && tabControl1->SelectedIndex == 1))
								finds = RichTextBoxFinds::None;
						else
							    finds = RichTextBoxFinds::MatchCase;

						if(tb->Find(cb->Text,finds) != -1 && cb->Text->Length != 0)
						{
								tb->Find(cb->Text, current, tb->TextLength, finds);
							if(!checkbox->Checked)
								current = tb->Text->IndexOf(cb->Text, current,StringComparison::CurrentCultureIgnoreCase) + 1;
							else
							    current = tb->Text->IndexOf(cb->Text, current) + 1;

						//		form1->Podsvetka(0,tb);

								tb->Select(tb->SelectionStart,cb->Text->Length);
								tb->SelectionBackColor = Color::YellowGreen;
								tb->Select(tb->SelectionStart,1);

								
								toolStripStatusLabel1->ForeColor = Color::Green;
								toolStripStatusLabel1->Text = "Найдено!  " + form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " . ";
								
								tb1->Text = "\"" + cb->Text + "\" найдено в" + "\n";
								tb1->Text += form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " ; ";
						}
						else
						{
							toolStripStatusLabel1->ForeColor = Color::Red;
							toolStripStatusLabel1->Text = "Нет совпадений";
						}
						}
					}		
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox2->Text == comboBox3->Text && (comboBox2->Text != "" || comboBox3->Text != ""))
				  return;
			  if(form1->tabControl1->TabCount == 0)
			 {
				 toolStripStatusLabel1->ForeColor = Color::Orange;
				 toolStripStatusLabel1->Text = "Файл не открыт";
				 richTextBox2->Text = "";
				 return;
			 }
			  if(!comboBox3->Text->Length)
			  {
				  toolStripStatusLabel1->ForeColor = Color::Orange;
				  toolStripStatusLabel1->Text = "Не на что заменять";
				  richTextBox2->Text = "";
				  return;
			  }
			  this->TopMost = true;
					for each(Control^ ctrl1 in form1->tabControl1->SelectedTab->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Select(0,tb->Text->Length);
						tb->SelectionBackColor = Color::White;
						richTextBox1->Text = "";
						RichTextBoxFinds finds;
						if((!checkBox1->Checked && tabControl1->SelectedIndex == 0) || (!checkBox2->Checked && tabControl1->SelectedIndex == 1))
								finds = RichTextBoxFinds::None;
						else
							    finds = RichTextBoxFinds::MatchCase;



						if(tb->Find(comboBox2->Text, finds) != -1 && comboBox2->Text->Length != 0)
						{
								tb->Find(comboBox2->Text, current, tb->TextLength, finds);
							if(!checkBox2->Checked)
								current = tb->Text->IndexOf(comboBox2->Text, current,StringComparison::CurrentCultureIgnoreCase) + 1;
							else
							    current = tb->Text->IndexOf(comboBox2->Text, current) + 1;

								tb->Select(tb->SelectionStart,comboBox2->Text->Length);
								tb->SelectedText = comboBox3->Text;
								tb->Select(tb->SelectionStart - comboBox3->Text->Length, comboBox3->Text->Length);

								tb->SelectionBackColor = Color::YellowGreen;
								tb->Select(tb->SelectionStart,tb->SelectionStart);
								
								
								toolStripStatusLabel1->ForeColor = Color::Green;
								toolStripStatusLabel1->Text = "Заменено!  " + form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " . ";
								
								richTextBox2->Text = "\"" + comboBox2->Text + "\" заменено на \""+ comboBox3->Text + "\"\n";
								richTextBox2->Text += form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " ; ";
						}
						else
						{
							toolStripStatusLabel1->ForeColor = Color::Red;
							toolStripStatusLabel1->Text = "Нет совпадений";
						}
						}
					}	
					this->TopMost = false;
		 }
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 opacity = trackBar1->Value;
			 if(!radioButton1->Checked)
			 {
				 this->Opacity = opacity * .01;
			 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(comboBox2->Text == comboBox3->Text && (comboBox2->Text != "" || comboBox3->Text != ""))
				  return;
			  if(form1->tabControl1->TabCount == 0)
			 {
				 toolStripStatusLabel1->ForeColor = Color::Orange;
				 toolStripStatusLabel1->Text = "Файл не открыт";
				 richTextBox2->Text = "";
				 return;
			 }
			  if(!comboBox3->Text->Length)
			  {
				  toolStripStatusLabel1->ForeColor = Color::Orange;
				  toolStripStatusLabel1->Text = "Не на что заменять";
				  richTextBox2->Text = "";
				  return;
			  }

			  this->TopMost = true;
					for each(Control^ ctrl1 in form1->tabControl1->SelectedTab->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Select(0,tb->Text->Length);
						tb->SelectionBackColor = Color::White;
						richTextBox2->Text = "";
						RichTextBoxFinds finds;
						if((!checkBox2->Checked && tabControl1->SelectedIndex == 0) || (!checkBox2->Checked && tabControl1->SelectedIndex == 1))
								finds = RichTextBoxFinds::None;
						else
							    finds = RichTextBoxFinds::MatchCase;


						if(tb->Find(comboBox2->Text,finds) != -1 && comboBox2->Text->Length != 0)
						{
							int index = 0;
							int count = 0;

							StringComparison culture;
							if(!checkBox1->Checked)
								culture = StringComparison::CurrentCultureIgnoreCase;
							else
								culture = StringComparison::CurrentCulture;

							 while (index < tb->Text->LastIndexOf(comboBox2->Text, culture) + 1)
							{
									tb->Find(comboBox2->Text, current, tb->TextLength, finds);

									current = tb->Text->IndexOf(comboBox2->Text, current,culture) + 1;

									tb->Select(tb->SelectionStart,comboBox2->Text->Length);
									tb->SelectedText = comboBox3->Text;
									tb->Select(tb->SelectionStart - comboBox3->Text->Length, comboBox3->Text->Length);

									tb->SelectionBackColor = Color::YellowGreen;
									tb->Select(tb->SelectionStart,tb->SelectionStart);
								
									toolStripStatusLabel1->ForeColor = Color::Green;
									
									count++;

									if(((count%10) < 2) || ((count%10) > 4) || (((count%100) > 9) && ((count%100) < 20))  )
							times = " раз";
						else
							times = " раза";

									toolStripStatusLabel1->Text = "Заменено!  " + count + times +". ";
								
									richTextBox2->Text += "\"" + comboBox2->Text + "\" заменено на \""+ comboBox3->Text + "\" ";
									richTextBox2->Text += form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " ;\n";
							 }

						
						richTextBox2->Text += "\n\"" + comboBox2->Text + "\" заменено на \""+ comboBox3->Text +"\" в \""+ form1->tabControl1->SelectedTab->Text + "\", "+ count + times + "\n\n";
						}
						else
						{
							toolStripStatusLabel1->ForeColor = Color::Red;
							toolStripStatusLabel1->Text = "Нет совпадений";
						}
						}
					}
					this->TopMost = false;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox2->Text == comboBox3->Text && (comboBox2->Text != "" || comboBox3->Text != ""))
				  return;
			   if(form1->tabControl1->TabCount == 0)
			 {
				 toolStripStatusLabel1->ForeColor = Color::Orange;
				 toolStripStatusLabel1->Text = "Файл не открыт";
				 richTextBox2->Text = "";
				 return;
			 }
			  if(!comboBox3->Text->Length)
			  {
				  toolStripStatusLabel1->ForeColor = Color::Orange;
				  toolStripStatusLabel1->Text = "Не на что заменять";
				  richTextBox2->Text = "";
				  return;
			  }
			  this->TopMost = true;
			  auto Tab1 = form1->tabControl1;
			  richTextBox2->Text = "";
			  int allcount = 0;
			  RichTextBoxFinds finds;
			  for each(Control^ ctrl in Tab1->Controls)
			  {
					TabPage^ tabp = dynamic_cast<TabPage^>(ctrl);
					for each(Control^ ctrl1 in tabp->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Select(0,tb->Text->Length);
						tb->SelectionBackColor = Color::White;
						
						if((!checkBox2->Checked && tabControl1->SelectedIndex == 0) || (!checkBox2->Checked && tabControl1->SelectedIndex == 1))
								finds = RichTextBoxFinds::None;
						else
							    finds = RichTextBoxFinds::MatchCase;


						if(tb->Find(comboBox2->Text, finds) != -1 && comboBox2->Text->Length != 0)
						{
							int index = 0;
							int count = 0;
							current = 0;
							StringComparison culture;
							if(!checkBox2->Checked)
								culture = StringComparison::CurrentCultureIgnoreCase;
							else
								culture = StringComparison::CurrentCulture;

							 while (index < tb->Text->LastIndexOf(comboBox2->Text, culture) + 1)
							{
									tb->Find(comboBox2->Text, current, tb->TextLength, finds);
									current = tb->Text->IndexOf(comboBox2->Text, current, culture) + 1;

									tb->Select(tb->SelectionStart,comboBox2->Text->Length);
									tb->SelectedText = comboBox3->Text;
									tb->Select(tb->SelectionStart - comboBox3->Text->Length, comboBox3->Text->Length);

									tb->SelectionBackColor = Color::YellowGreen;
									tb->Select(tb->SelectionStart,tb->SelectionStart);
								
									toolStripStatusLabel1->ForeColor = Color::Green;
									
									count++;

									allcount++;

									form1->tabControl1->SelectedTab = tabp;
									richTextBox2->Text += "\"" + comboBox2->Text + "\" заменено на \""+ comboBox3->Text + "\" ";
									richTextBox2->Text += form1->toolStripStatusLabel5->Text + "  " + form1->toolStripStatusLabel6->Text + " ;\n";
							 }
							 if(count){
								 if(((count%10) < 2) || ((count%10) > 4) || (((count%100) > 9) && ((count%100) < 20))  )
							times = " раз";
						else
							times = " раза";
							richTextBox2->Text += "\n\"" + comboBox2->Text + "\" заменено на \""+ comboBox3->Text +"\" в \""+ form1->tabControl1->SelectedTab->Text + "\", "+ count + times +"\n\n----------------\n";
							 }
						}
						}
					}	
			  }
			  toolStripStatusLabel1->ForeColor = Color::Green;

			  if(((allcount%10) < 2) || ((allcount%10) > 4) || (((allcount%100) > 9) && ((allcount%100) < 20))  )
							times = " раз";
						else
							times = " раза";

			  toolStripStatusLabel1->Text = "Заменено!  " + allcount + times + ". ";
			  if(!allcount)
			  {
				  toolStripStatusLabel1->ForeColor = Color::Red;
							toolStripStatusLabel1->Text = "Нет совпадений";
			  }
			  this->TopMost = false;
		 }
private: System::Void Form2_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 this->Opacity = 1;
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton1->Checked)
			 {
				 this->Opacity = 1;
			 }
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(radioButton2->Checked)
			 {
				 this->Opacity = opacity * .01;
			 }
		 }
};
}
