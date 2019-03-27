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
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(Form1^ parent)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
		public: Form1^ form1;
	public: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(485, 292);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(477, 266);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"О программе";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(437, 145);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(32, 13);
			this->label18->TabIndex = 16;
			this->label18->Text = L"@.@";
			this->label18->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(256, 173);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"<(O)_(o)>";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(363, 186);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 13);
			this->label16->TabIndex = 14;
			this->label16->Text = L"_-*-VANPAD-*-_";
			this->label16->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(159, 186);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L"(  0  )  ____  (  0  )";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(204, 52);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(50, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"#R0%$R";
			this->label14->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(437, 108);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(27, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"T_T";
			this->label13->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(287, 7);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"^-^";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(439, 173);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"^з^";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(235, 108);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"-_-";
			this->label10->Visible = false;
			this->label10->Click += gcnew System::EventHandler(this, &Form4::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(300, 199);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 13);
			this->label9->TabIndex = 7;
			this->label9->Text = L"$_$";
			this->label9->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(448, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"=)";
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(282, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"0_0";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(204, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L">_<";
			this->label6->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2018 год. 19.05";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(248, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 121);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &Form4::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &Form4::pictureBox1_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Текстовый редактор VanPad версии ";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(477, 264);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Обновления";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(376, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Было многое добавлено, многое изменено, и многое оптимизированно ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Текущая версия ";
			this->label1->Click += gcnew System::EventHandler(this, &Form4::label1_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 290);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(488, 319);
			this->Name = L"Form4";
			this->Text = L"Справка";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form4::Form4_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form4_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 form1->SetAbout(false);
			 }
	private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
				 label2->Text = label2->Text + form1->Version;
				 label1->Text = label1->Text + form1->Version;
			 }
	private: System::Void pictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 return;
					pictureBox1->Width = 300;
					pictureBox1->Height = 300;
					pictureBox1->Image=Image::FromFile("1493044635174059049 (1).JPG");
					pictureBox1->Left -= 45;
					label6->Visible = true;
					 label7->Visible = true;
					 label8->Visible = true;
					 label9->Visible = true;
					 label10->Visible = true;
					 label11->Visible = true;
					 label12->Visible = true;
					 label13->Visible = true;
					 label14->Visible = true;
					 label15->Visible = true;
					 label16->Visible = true;
					 label17->Visible = true;
					 label18->Visible = true;
			 }
private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 return;
			 pictureBox1->Width = 200;
					pictureBox1->Height = 200;
			 pictureBox1->Image=Image::FromFile("vp.PNG");
			 pictureBox1->Left +=45 ;
			 label6->Visible = false;
			 label7->Visible = false;
			 label8->Visible = false;
			 label9->Visible = false;
			 label10->Visible = false;
			 label11->Visible = false;
			 label12->Visible = false;
			 label13->Visible = false;
			 label14->Visible = false;
			 label15->Visible = false;
			 label16->Visible = false;
			 label17->Visible = false;
			 label18->Visible = false;
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
