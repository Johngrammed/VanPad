#pragma once
#include "Form1.h"
#include <fstream>
using namespace std;
namespace VanPad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(Form1^ parent )
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			form1 = parent;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
		public: Form1^ form1;
	public: bool FormatMod;
	private: System::Windows::Forms::TabPage^  tabPage1;
	public: 
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	public: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: 

	public: 

















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(477, 264);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Общие";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Location = System::Drawing::Point(8, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(455, 99);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Текущий файл";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Формат текущего файла:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Подсветка синтаксиса:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L".html", L".txt"});
			this->comboBox1->Location = System::Drawing::Point(281, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(126, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L".txt";
			this->comboBox1->SelectedValueChanged += gcnew System::EventHandler(this, &Form3::comboBox1_SelectedValueChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Html", L"CSS"});
			this->comboBox2->Location = System::Drawing::Point(281, 59);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(126, 21);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->Text = L"Html";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 39);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Автоматически открывать файлы,\r\nпри запуске программы, на которых\r\nВы остановилис" 
				L"ь ранее:\r\n";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(289, 181);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form3::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(289, 121);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Раздваивать неизвестные теги:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Сбросить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(289, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ОК";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(388, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(485, 290);
			this->tabControl1->TabIndex = 0;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 290);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(488, 319);
			this->MinimumSize = System::Drawing::Size(488, 319);
			this->Name = L"Form3";
			this->Text = L"Опции";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form3::Form3_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &Form3::Form3_SizeChanged);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
				// tabControl1->Width = this->Width - 14;
			   tabControl1->Height = this->Height - 14;
			   //FormatMod = false;

			   if(form1->tabControl1->TabCount==0)
			   {
				   comboBox1->Enabled = false;
			   }
				   
				   comboBox1->Text = "." + form1->HTML->Text->Replace("." , "");

					if(form1->SuppUnkTegs)
						checkBox1->Checked = true;
					else
						checkBox1->Checked = false;

					if(form1->SaveralFiles)
						checkBox2->Checked = true;
					else
						checkBox2->Checked = false;

			 }
	private: System::Void Form3_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 form1->SetOptions(false);
			 }
	private: System::Void Form3_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
				//  auto Tab1 = tabControl1;
			  // tabControl1->Width = this->Width - 14;
			  // tabControl1->Height = this->Height - 14;
			 }
	private: System::Void comboBox1_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e) {
				FormatMod = true;				
			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 auto MBox = MessageBox::Show("Точно сбросить все настройки?", "Сброс настроек", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
			 if(MBox == Windows::Forms::DialogResult::Yes)
			 {
				 comboBox2->Text = "Html";
				 checkBox1->Checked = false;
				 checkBox2->Checked = true;
				  FileStream^ fs = gcnew FileStream ("config.txt", FileMode::Create, FileAccess::Write);
					StreamWriter^ sw = gcnew StreamWriter (fs);
					sw->WriteLine("DefaultFormat = .html;");
					sw->WriteLine("DoubleTags = false;");
					sw->WriteLine("SafeMode = true;");
					sw->WriteLine("SafeFiles = 0;");
							
					form1->SuppUnkTegs = false;
					form1->SaveralFiles = true;
					label2->Text = "ДНТ: выкл";
					form1->openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|(*.html)|*.html";
					form1->saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|(*.html)|*.html";
					sw->Close();
					fs->Close();
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {			// if(FormatMod)
			// {
			 if(comboBox1->Text->IndexOf('.') == comboBox1->Text->LastIndexOf('.') && comboBox1->Text->Length > 1 && comboBox1->Text->IndexOf('.')==0)
			 {
					String^ name = comboBox1->Text;
					if(form1->tabControl1->TabCount > 0)
					if(form1->tabControl1->SelectedTab->Text->LastIndexOf("."))
					{
						 form1->tabControl1->SelectedTab->Text = form1->tabControl1->SelectedTab->Text->Remove(form1->tabControl1->SelectedTab->Text->LastIndexOf('.'));
						 form1->tabControl1->SelectedTab->Text += name;
					     form1->HTML->Text = comboBox1->Text->Replace(".","") + ".";
					}	

			 }
			  FileStream^ fs = gcnew FileStream ("config.txt", FileMode::Create, FileAccess::Write);
					StreamWriter^ sw = gcnew StreamWriter (fs);
					sw->WriteLine("DefaultFormat = .html;");

					if(checkBox1->Checked)
					{
					sw->WriteLine("DoubleTags = true;");
					form1->SuppUnkTegs = true;
					form1->label2->Text = "ДНТ: вкл";
					}
					else
					{
						sw->WriteLine("DoubleTags = false;");
					form1->SuppUnkTegs = false;
					form1->label2->Text = "ДНТ: выкл";
					}
					if(checkBox2->Checked)
					{
						sw->WriteLine("SafeMode = true;");
						form1->SaveralFiles = true;
					}
					else
					{
						sw->WriteLine("SafeMode = false;");
						form1->SaveralFiles = false;
						
						for each(Control^ ctrl in form1->tabControl1->Controls)
						{
							if(ctrl == dynamic_cast<RichTextBox^>(ctrl))
							{
							TabPage^ tp = dynamic_cast<TabPage^>(ctrl);
							//if(tb!= nullptr)tb->Text = tb->Name;
							for each(Control^ ctrl1 in tp->Controls)
							{
								RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
								tb->Modified = true;
							}
							}
							}

					}
					sw->WriteLine("SafeFiles = 0;");
					
					sw->Close();
					fs->Close();
			// }
				 this->Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			/*
			 if(!checkBox2->Checked)
			 {
			 auto MBox = MessageBox::Show("Точно выключить эту опцию?\nЭто приведёт к удалению ранее зарезервированных файлов", "Резервирование файлов",MessageBoxButtons::YesNo,MessageBoxIcon::Exclamation);
					if(MBox == Windows::Forms::DialogResult::Yes)
					{
						checkBox2->Checked = false;
					}
					if(MBox == Windows::Forms::DialogResult::No)
					{
						checkBox2->Checked = true;
					}
		 }*/
		 }
};
}
