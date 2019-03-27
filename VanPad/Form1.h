#pragma once
 #include<windows.h>

//#include "Classes.h"
namespace VanPad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public: static String^ line1;
	public: static String^ line2;
	public: static String^ line3;
	public: static String^ line4;
	public: static String^ line5;
	public: static RichTextBox^ rline = gcnew RichTextBox();
	
	public: static String^ Version = "1.0";
	public: static bool SaveralFiles = true;
	public: static bool SuppUnkTegs;
	public: static bool ToFind = false;
	public: static bool InsertMode = false;
	public: System::Windows::Forms::ToolStripMenuItem^  tXTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ó·˘ËÂToolStripMenuItem;
	public: 

	private: System::Windows::Forms::ToolStripMenuItem^  ÒÔ‡‚Í‡ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÓœÓ„‡ÏÏÂToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton19;
	public: 
	public: static bool Options = false;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel7;
	public: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  ÒÓı‡ÌËÚ¸ToolStripMenuItem;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  ÍÓ‰ËÓ‚ÍËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem;
	public: 
	public: static bool About = false;
	
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	




	public: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	public: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÓÚÍ˚Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Á‡Í˚Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem;

	public: System::Windows::Forms::TabControl^  tabControl1;
	private: 


	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStripMenuItem^  Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem;

	private: 


	private: System::Windows::Forms::ToolStripMenuItem^  findToolStripMenuItem;

	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton8;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton9;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton14;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton10;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton11;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton12;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton13;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton15;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton16;
	private: System::Windows::Forms::ToolStripMenuItem^  ÔÂ˜‡Ú¸ToolStripMenuItem;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	public: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: 
	public: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;


	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  xToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚ÂÌÛÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚˚ÂÁ‡Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚ÒÚ‡‚ËÚ¸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÔÓËÒÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ì‡ÈÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Á‡ÏÂÌËÚ¸ToolStripMenuItem;
public: System::Windows::Forms::ToolStripDropDownButton^  HTML;
public: System::Windows::Forms::ToolStripMenuItem^  hTMLToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  Ì‡ÒÚÓÈÍËToolStripMenuItem;
private: System::Windows::Forms::ToolStripSeparator^  toolStripButton17;
private: System::Windows::Forms::ToolStripButton^  toolStripButton18;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->HTML = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->hTMLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tXTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel6 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel7 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÓÚÍ˚Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á‡Í˚Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ÔÂ˜‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->findToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚ÂÌÛÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->‚˚ÂÁ‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚ÒÚ‡‚ËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÔÓËÒÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ì‡ÈÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á‡ÏÂÌËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ì‡ÒÚÓÈÍËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ó·˘ËÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÒÔ‡‚Í‡ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton14 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton10 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton11 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton12 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton13 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton15 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton16 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton17 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton18 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton19 = (gcnew System::Windows::Forms::ToolStripButton());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->toolStripStatusLabel1, 
				this->HTML, this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5, 
				this->toolStripStatusLabel6, this->toolStripStatusLabel7});
			this->statusStrip1->Location = System::Drawing::Point(0, 474);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(706, 24);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(94, 19);
			this->toolStripStatusLabel1->Text = L"‘ÓÏ‡Ú Ù‡ÈÎ‡: ";
			// 
			// HTML
			// 
			this->HTML->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->hTMLToolStripMenuItem, 
				this->tXTToolStripMenuItem});
			this->HTML->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->HTML->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->HTML->Name = L"HTML";
			this->HTML->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->HTML->RightToLeftAutoMirrorImage = true;
			this->HTML->Size = System::Drawing::Size(36, 22);
			this->HTML->Text = L"txt.";
			this->HTML->TextChanged += gcnew System::EventHandler(this, &Form1::HTML_TextChanged);
			// 
			// hTMLToolStripMenuItem
			// 
			this->hTMLToolStripMenuItem->Name = L"hTMLToolStripMenuItem";
			this->hTMLToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->hTMLToolStripMenuItem->Text = L"html.";
			this->hTMLToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::hTMLToolStripMenuItem_Click);
			// 
			// tXTToolStripMenuItem
			// 
			this->tXTToolStripMenuItem->Name = L"tXTToolStripMenuItem";
			this->tXTToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->tXTToolStripMenuItem->Text = L"txt.";
			this->tXTToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tXTToolStripMenuItem_Click);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->BorderStyle = System::Windows::Forms::Border3DStyle::Etched;
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(247, 19);
			this->toolStripStatusLabel2->Spring = true;
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->BorderSides = System::Windows::Forms::ToolStripStatusLabelBorderSides::Left;
			this->toolStripStatusLabel3->BorderStyle = System::Windows::Forms::Border3DStyle::Etched;
			this->toolStripStatusLabel3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(60, 19);
			this->toolStripStatusLabel3->Text = L"length : 0";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Margin = System::Windows::Forms::Padding(0, 3, 50, 2);
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(46, 19);
			this->toolStripStatusLabel4->Text = L"lines : 0";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->BorderSides = System::Windows::Forms::ToolStripStatusLabelBorderSides::Left;
			this->toolStripStatusLabel5->BorderStyle = System::Windows::Forms::Border3DStyle::Etched;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(39, 19);
			this->toolStripStatusLabel5->Text = L"Ln : 1";
			// 
			// toolStripStatusLabel6
			// 
			this->toolStripStatusLabel6->Margin = System::Windows::Forms::Padding(0, 3, 50, 2);
			this->toolStripStatusLabel6->Name = L"toolStripStatusLabel6";
			this->toolStripStatusLabel6->Size = System::Drawing::Size(40, 19);
			this->toolStripStatusLabel6->Text = L"Col : 0";
			// 
			// toolStripStatusLabel7
			// 
			this->toolStripStatusLabel7->Name = L"toolStripStatusLabel7";
			this->toolStripStatusLabel7->Size = System::Drawing::Size(29, 19);
			this->toolStripStatusLabel7->Text = L"¬—“";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->Ù‡ÈÎToolStripMenuItem, 
				this->Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem, this->xToolStripMenuItem, this->ÔÓËÒÍToolStripMenuItem, this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem, 
				this->Ì‡ÒÚÓÈÍËToolStripMenuItem, this->ÒÔ‡‚Í‡ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(706, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->newToolStripMenuItem, 
				this->ÓÚÍ˚Ú¸ToolStripMenuItem, this->ÒÓı‡ÌËÚ¸ToolStripMenuItem, this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem, this->ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem, 
				this->Á‡Í˚Ú¸ToolStripMenuItem, this->Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem, this->toolStripSeparator1, this->ÔÂ˜‡Ú¸ToolStripMenuItem, 
				this->toolStripSeparator2, this->‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem});
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			this->Ù‡ÈÎToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Ù‡ÈÎToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->newToolStripMenuItem->Text = L"ÕÓ‚˚È Ù‡ÈÎ";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// ÓÚÍ˚Ú¸ToolStripMenuItem
			// 
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Name = L"ÓÚÍ˚Ú¸ToolStripMenuItem";
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Text = L"ŒÚÍ˚Ú¸";
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÓÚÍ˚Ú¸ToolStripMenuItem_Click);
			// 
			// ÒÓı‡ÌËÚ¸ToolStripMenuItem
			// 
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Name = L"ÒÓı‡ÌËÚ¸ToolStripMenuItem";
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Text = L"—Óı‡ÌËÚ¸";
			this->ÒÓı‡ÌËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÒÓı‡ÌËÚ¸ToolStripMenuItem_Click);
			// 
			// ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem
			// 
			this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Name = L"ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem";
			this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Text = L"—Óı‡ÌËÚ¸ Í‡Í...";
			this->ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem_Click);
			// 
			// ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem
			// 
			this->ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem->Name = L"ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem";
			this->ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem->Text = L"—Óı‡ÌËÚ¸ ‚Ò∏";
			this->ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem_Click);
			// 
			// Á‡Í˚Ú¸ToolStripMenuItem
			// 
			this->Á‡Í˚Ú¸ToolStripMenuItem->Name = L"Á‡Í˚Ú¸ToolStripMenuItem";
			this->Á‡Í˚Ú¸ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->Á‡Í˚Ú¸ToolStripMenuItem->Text = L"«‡Í˚Ú¸";
			this->Á‡Í˚Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Á‡Í˚Ú¸ToolStripMenuItem_Click);
			// 
			// Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem
			// 
			this->Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem->Name = L"Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem";
			this->Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem->Text = L"«‡Í˚Ú¸ ‚Ò∏";
			this->Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(192, 6);
			// 
			// ÔÂ˜‡Ú¸ToolStripMenuItem
			// 
			this->ÔÂ˜‡Ú¸ToolStripMenuItem->Name = L"ÔÂ˜‡Ú¸ToolStripMenuItem";
			this->ÔÂ˜‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->ÔÂ˜‡Ú¸ToolStripMenuItem->Text = L"œÂ˜‡Ú¸...";
			this->ÔÂ˜‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÔÂ˜‡Ú¸ToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(192, 6);
			// 
			// ‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem
			// 
			this->‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem->Name = L"‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem";
			this->‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem->Text = L"¬˚ÈÚ˚ ËÁ ÔÓ„‡ÏÏ˚";
			this->‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem_Click);
			// 
			// Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem
			// 
			this->Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->findToolStripMenuItem, 
				this->‚ÂÌÛÚ¸ToolStripMenuItem, this->toolStripSeparator7, this->‚˚ÂÁ‡Ú¸ToolStripMenuItem, this->ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem, 
				this->‚ÒÚ‡‚ËÚ¸ToolStripMenuItem, this->‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem});
			this->Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem->Name = L"Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem";
			this->Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->Â‰‡ÍÚËÓ‚‡ÌËÂToolStripMenuItem->Text = L"œ‡‚Í‡";
			// 
			// findToolStripMenuItem
			// 
			this->findToolStripMenuItem->Name = L"findToolStripMenuItem";
			this->findToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->findToolStripMenuItem->Text = L"ŒÚÏÂÌ‡";
			this->findToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::findToolStripMenuItem_Click);
			// 
			// ‚ÂÌÛÚ¸ToolStripMenuItem
			// 
			this->‚ÂÌÛÚ¸ToolStripMenuItem->Name = L"‚ÂÌÛÚ¸ToolStripMenuItem";
			this->‚ÂÌÛÚ¸ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->‚ÂÌÛÚ¸ToolStripMenuItem->Text = L"¬ÂÌÛÚ¸";
			this->‚ÂÌÛÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::‚ÂÌÛÚ¸ToolStripMenuItem_Click);
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(145, 6);
			// 
			// ‚˚ÂÁ‡Ú¸ToolStripMenuItem
			// 
			this->‚˚ÂÁ‡Ú¸ToolStripMenuItem->Name = L"‚˚ÂÁ‡Ú¸ToolStripMenuItem";
			this->‚˚ÂÁ‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->‚˚ÂÁ‡Ú¸ToolStripMenuItem->Text = L"¬˚ÂÁ‡Ú¸";
			this->‚˚ÂÁ‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::‚˚ÂÁ‡Ú¸ToolStripMenuItem_Click);
			// 
			// ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem
			// 
			this->ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem->Name = L"ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem";
			this->ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem->Text = L" ÓÔËÓ‚‡Ú¸";
			this->ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem_Click);
			// 
			// ‚ÒÚ‡‚ËÚ¸ToolStripMenuItem
			// 
			this->‚ÒÚ‡‚ËÚ¸ToolStripMenuItem->Name = L"‚ÒÚ‡‚ËÚ¸ToolStripMenuItem";
			this->‚ÒÚ‡‚ËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->‚ÒÚ‡‚ËÚ¸ToolStripMenuItem->Text = L"¬ÒÚ‡‚ËÚ¸";
			this->‚ÒÚ‡‚ËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::‚ÒÚ‡‚ËÚ¸ToolStripMenuItem_Click);
			// 
			// ‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem
			// 
			this->‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem->Name = L"‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem";
			this->‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem->Text = L"¬˚‰ÂÎËÚ¸ ‚Ò∏";
			this->‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem_Click);
			// 
			// xToolStripMenuItem
			// 
			this->xToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->xToolStripMenuItem->Name = L"xToolStripMenuItem";
			this->xToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->xToolStripMenuItem->Size = System::Drawing::Size(26, 20);
			this->xToolStripMenuItem->Text = L"X";
			this->xToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::xToolStripMenuItem_Click);
			// 
			// ÔÓËÒÍToolStripMenuItem
			// 
			this->ÔÓËÒÍToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->Ì‡ÈÚËToolStripMenuItem, 
				this->Á‡ÏÂÌËÚ¸ToolStripMenuItem});
			this->ÔÓËÒÍToolStripMenuItem->Name = L"ÔÓËÒÍToolStripMenuItem";
			this->ÔÓËÒÍToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->ÔÓËÒÍToolStripMenuItem->Text = L"œÓËÒÍ";
			// 
			// Ì‡ÈÚËToolStripMenuItem
			// 
			this->Ì‡ÈÚËToolStripMenuItem->Name = L"Ì‡ÈÚËToolStripMenuItem";
			this->Ì‡ÈÚËToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->Ì‡ÈÚËToolStripMenuItem->Text = L"Õ‡ÈÚË...";
			this->Ì‡ÈÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Ì‡ÈÚËToolStripMenuItem_Click);
			// 
			// Á‡ÏÂÌËÚ¸ToolStripMenuItem
			// 
			this->Á‡ÏÂÌËÚ¸ToolStripMenuItem->Name = L"Á‡ÏÂÌËÚ¸ToolStripMenuItem";
			this->Á‡ÏÂÌËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->Á‡ÏÂÌËÚ¸ToolStripMenuItem->Text = L"«‡ÏÂÌËÚ¸...";
			this->Á‡ÏÂÌËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Á‡ÏÂÌËÚ¸ToolStripMenuItem_Click);
			// 
			// ÍÓ‰ËÓ‚ÍËToolStripMenuItem
			// 
			this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem->Checked = true;
			this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Indeterminate;
			this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem, 
				this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem, this->ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem, this->ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem, 
				this->ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem});
			this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem->Name = L"ÍÓ‰ËÓ‚ÍËToolStripMenuItem";
			this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->ÍÓ‰ËÓ‚ÍËToolStripMenuItem->Text = L" Ó‰ËÓ‚ÍË";
			// 
			// ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem
			// 
			this->ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem->CheckOnClick = true;
			this->ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem->Name = L"ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem";
			this->ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem->Text = L" Ó‰ËÓ‚Í‡ ‚ ANSI";
			this->ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem_Click);
			// 
			// ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem
			// 
			this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem->Checked = true;
			this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem->CheckOnClick = true;
			this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Indeterminate;
			this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem->Name = L"ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem";
			this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->ÍÓ‰ËÓ‚Í‡¬UTF8¡ÂÁBOMToolStripMenuItem->Text = L" Ó‰ËÓ‚Í‡ ‚ UTF-8 ·ÂÁ BOM";
			// 
			// ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem
			// 
			this->ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem->CheckOnClick = true;
			this->ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem->Name = L"ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem";
			this->ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->ÍÓ‰ËÓ‚Í‡¬UTF8ToolStripMenuItem->Text = L" Ó‰ËÓ‚Í‡ ‚ UTF-8";
			// 
			// ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem
			// 
			this->ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem->CheckOnClick = true;
			this->ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem->Name = L"ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem";
			this->ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->ÍÓ‰ËÓ‚Í‡¬UCS2BigEndianToolStripMenuItem->Text = L" Ó‰ËÓ‚Í‡ ‚ UCS-2 Big Endian";
			// 
			// ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem
			// 
			this->ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem->CheckOnClick = true;
			this->ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem->Name = L"ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem";
			this->ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->ÍÓ‰ËÓ‚Í‡¬UCS2LittleEndianToolStripMenuItem->Text = L" Ó‰ËÓ‚Í‡ ‚ UCS-2 Little Endian";
			// 
			// Ì‡ÒÚÓÈÍËToolStripMenuItem
			// 
			this->Ì‡ÒÚÓÈÍËToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->Ó·˘ËÂToolStripMenuItem});
			this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Name = L"Ì‡ÒÚÓÈÍËToolStripMenuItem";
			this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Text = L"ŒÔˆËË";
			this->Ì‡ÒÚÓÈÍËToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Ì‡ÒÚÓÈÍËToolStripMenuItem_Click);
			// 
			// Ó·˘ËÂToolStripMenuItem
			// 
			this->Ó·˘ËÂToolStripMenuItem->Name = L"Ó·˘ËÂToolStripMenuItem";
			this->Ó·˘ËÂToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->Ó·˘ËÂToolStripMenuItem->Text = L"Œ·˘ËÂ";
			this->Ó·˘ËÂToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Ó·˘ËÂToolStripMenuItem_Click);
			// 
			// ÒÔ‡‚Í‡ToolStripMenuItem
			// 
			this->ÒÔ‡‚Í‡ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ÓœÓ„‡ÏÏÂToolStripMenuItem, 
				this->ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem});
			this->ÒÔ‡‚Í‡ToolStripMenuItem->Name = L"ÒÔ‡‚Í‡ToolStripMenuItem";
			this->ÒÔ‡‚Í‡ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ÒÔ‡‚Í‡ToolStripMenuItem->Text = L"—Ô‡‚Í‡";
			// 
			// ÓœÓ„‡ÏÏÂToolStripMenuItem
			// 
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Name = L"ÓœÓ„‡ÏÏÂToolStripMenuItem";
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Text = L"Œ ÔÓ„‡ÏÏÂ";
			this->ÓœÓ„‡ÏÏÂToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÓœÓ„‡ÏÏÂToolStripMenuItem_Click);
			// 
			// ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem
			// 
			this->ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem->Name = L"ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem";
			this->ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem->Text = L"ÀÓ„ Ó·ÌÓ‚ÎÂÌËÈ";
			this->ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Location = System::Drawing::Point(0, 65);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(708, 408);
			this->tabControl1->TabIndex = 3;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::tabControl1_SelectedIndexChanged);
			this->tabControl1->Selected += gcnew System::Windows::Forms::TabControlEventHandler(this, &Form1::tabControl1_Selected);
			this->tabControl1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::tabControl1_KeyPress);
			this->tabControl1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::tabControl1_KeyUp);
			this->tabControl1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::tabControl1_MouseDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(263, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"—ÓÁ‰‡ÈÚÂ ÌÓ‚˚È Ù‡ÈÎ (Õ‡ÊÏËÚÂ Ò˛‰‡)";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(23) {this->toolStripButton1, 
				this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7, 
				this->toolStripSeparator3, this->toolStripButton8, this->toolStripButton9, this->toolStripButton14, this->toolStripSeparator4, 
				this->toolStripButton10, this->toolStripButton11, this->toolStripSeparator5, this->toolStripButton12, this->toolStripButton13, 
				this->toolStripSeparator6, this->toolStripButton15, this->toolStripButton16, this->toolStripButton17, this->toolStripButton18, 
				this->toolStripButton19});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStrip1->Size = System::Drawing::Size(706, 25);
			this->toolStrip1->TabIndex = 6;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Margin = System::Windows::Forms::Padding(7, 1, 0, 2);
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"ÕÓ‚˚È";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"ŒÚÍ˚Ú¸";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"—Óı‡ÌËÚ¸";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"—Óı‡ÌËÚ¸ ‚ÒÂ";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Form1::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"«‡Í˚Ú¸";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &Form1::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"«‡Í˚Ú¸ ‚ÒÂ";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &Form1::toolStripButton6_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"œÂ˜‡Ú¸...";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &Form1::toolStripButton7_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(23, 22);
			this->toolStripButton8->Text = L"¬˚ÂÁ‡Ú¸";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &Form1::toolStripButton8_Click);
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton9.Image")));
			this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Size = System::Drawing::Size(23, 22);
			this->toolStripButton9->Text = L" ÓÔËÓ‚‡Ú¸";
			this->toolStripButton9->Click += gcnew System::EventHandler(this, &Form1::toolStripButton9_Click);
			// 
			// toolStripButton14
			// 
			this->toolStripButton14->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton14.Image")));
			this->toolStripButton14->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton14->Name = L"toolStripButton14";
			this->toolStripButton14->Overflow = System::Windows::Forms::ToolStripItemOverflow::Never;
			this->toolStripButton14->Size = System::Drawing::Size(23, 22);
			this->toolStripButton14->Text = L"¬ÒÚ‡‚ËÚ¸";
			this->toolStripButton14->Click += gcnew System::EventHandler(this, &Form1::toolStripButton14_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton10
			// 
			this->toolStripButton10->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton10.Image")));
			this->toolStripButton10->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton10->Name = L"toolStripButton10";
			this->toolStripButton10->Size = System::Drawing::Size(23, 22);
			this->toolStripButton10->Text = L"ŒÚÏÂÌ‡";
			this->toolStripButton10->Click += gcnew System::EventHandler(this, &Form1::toolStripButton10_Click);
			// 
			// toolStripButton11
			// 
			this->toolStripButton11->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton11.Image")));
			this->toolStripButton11->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton11->Name = L"toolStripButton11";
			this->toolStripButton11->Size = System::Drawing::Size(23, 22);
			this->toolStripButton11->Text = L"œÓ‚ÚÓ";
			this->toolStripButton11->Click += gcnew System::EventHandler(this, &Form1::toolStripButton11_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton12
			// 
			this->toolStripButton12->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton12.Image")));
			this->toolStripButton12->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton12->Name = L"toolStripButton12";
			this->toolStripButton12->Size = System::Drawing::Size(23, 22);
			this->toolStripButton12->Text = L"Õ‡ÈÚË...";
			this->toolStripButton12->Click += gcnew System::EventHandler(this, &Form1::toolStripButton12_Click);
			// 
			// toolStripButton13
			// 
			this->toolStripButton13->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton13.Image")));
			this->toolStripButton13->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton13->Name = L"toolStripButton13";
			this->toolStripButton13->Size = System::Drawing::Size(23, 22);
			this->toolStripButton13->Text = L"«‡ÏÂÌ‡...";
			this->toolStripButton13->Click += gcnew System::EventHandler(this, &Form1::toolStripButton13_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton15
			// 
			this->toolStripButton15->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton15.Image")));
			this->toolStripButton15->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton15->Name = L"toolStripButton15";
			this->toolStripButton15->Size = System::Drawing::Size(23, 22);
			this->toolStripButton15->Text = L" ÛÔÌÂÂ";
			this->toolStripButton15->Click += gcnew System::EventHandler(this, &Form1::toolStripButton15_Click);
			// 
			// toolStripButton16
			// 
			this->toolStripButton16->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton16.Image")));
			this->toolStripButton16->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton16->Name = L"toolStripButton16";
			this->toolStripButton16->Size = System::Drawing::Size(23, 22);
			this->toolStripButton16->Text = L"ÃÂÎ¸˜Â";
			this->toolStripButton16->Click += gcnew System::EventHandler(this, &Form1::toolStripButton16_Click);
			// 
			// toolStripButton17
			// 
			this->toolStripButton17->Name = L"toolStripButton17";
			this->toolStripButton17->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton18
			// 
			this->toolStripButton18->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton18.Image")));
			this->toolStripButton18->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton18->Name = L"toolStripButton18";
			this->toolStripButton18->Size = System::Drawing::Size(23, 22);
			this->toolStripButton18->Text = L"ŒÔˆËË";
			this->toolStripButton18->Click += gcnew System::EventHandler(this, &Form1::toolStripButton18_Click);
			// 
			// toolStripButton19
			// 
			this->toolStripButton19->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton19.Image")));
			this->toolStripButton19->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton19->Name = L"toolStripButton19";
			this->toolStripButton19->Size = System::Drawing::Size(23, 22);
			this->toolStripButton19->Text = L"—Ô‡‚Í‡";
			this->toolStripButton19->Click += gcnew System::EventHandler(this, &Form1::toolStripButton19_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->BeginPrint += gcnew System::Drawing::Printing::PrintEventHandler(this, &Form1::printDocument1_BeginPrint);
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->Document = this->printDocument1;
			this->printDialog1->UseEXDialog = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(537, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÌ˚Â ÚÂ„Ë:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 498);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 // «‡„ÛÁÍ‡
		IO::StreamReader^ ReaderP;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Text = "VanPad";
				 //tabPage1->Text = "‘‡ÈÎ 1";
				 saveFileDialog1->Title = "—Óı‡ÌËÚ¸ Ù‡ÈÎ Í‡Í";
				 openFileDialog1->Title = "ŒÚÍ˚Ú¸ Ù‡ÈÎ";
				 if(!File::Exists("config.txt"))
				 {
					 FileStream^ fs = gcnew FileStream ("config.txt", FileMode::Create, FileAccess::Write);
					StreamWriter^ sw = gcnew StreamWriter (fs);
					sw->WriteLine("DefaultFormat = .html;");
					sw->WriteLine("DoubleTags = false;");
					sw->WriteLine("SafeMode = true;");
					sw->WriteLine("SafeFiles = 0;");
							
					SuppUnkTegs = false;
					SaveralFiles = true;
					label2->Text = "ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÚÌ˚Â ÚÂ„Ë: ‚˚ÍÎ";
					openFileDialog1->Filter = "¬ÒÂ Ù‡ÈÎ˚ (*.*)|*.*|“ÂÍÒÚÓ‚˚Â Ù‡ÈÎ˚ (*.txt)|*.txt|(*.html)|*.html";
					saveFileDialog1->Filter = "“ÂÍÒÚÓ‚˚Â Ù‡ÈÎ˚ (*.txt)|*.txt|(*.html)|*.html";

					sw->Close();
					fs->Close();
					New();
				 }
				 else
					{
						try
						{
					label1->Left = (int)(this->Width / 2.8);
					FileStream ^fs = gcnew FileStream("config.txt", FileMode::Open, FileAccess::ReadWrite);
					StreamReader^ sr = gcnew StreamReader(fs);
					StreamWriter^ sw = gcnew StreamWriter(fs);
					rline->Text = sr->ReadToEnd();

					rline->Find("DefaultFormat =");
					rline->Find(";", rline->SelectionStart, RichTextBoxFinds::None);
					rline->Select(rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse)+2, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse) - 2);
					saveFileDialog1->Filter = "(*" + rline->SelectedText + ")|*" + rline->SelectedText + "|(*.txt)|*.txt|(*.html)|*.html";
					openFileDialog1->Filter = "¬ÒÂ Ù‡ÈÎ˚ (*.*)|*.*|(*" + rline->SelectedText + ")|*" + rline->SelectedText + "|(*.html)|*.html|(*.txt)|*.txt";


					/*if(rline->Find())
					{
					saveFileDialog1->Filter = "“ÂÍÒÚÓ‚˚Â Ù‡ÈÎ˚ (*.txt)|*.txt|(*.html)|*.html";
					openFileDialog1->Filter = "“ÂÍÒÚÓ‚˚Â Ù‡ÈÎ˚ (*.txt)|*.txt|(*.html)|*.html";
					}
					else
					{
						//line->Find();
						saveFileDialog1->Filter = "(*." + line1 + ")|*." + line1 + "|(*.txt)|*.txt";
						HTML->Text = line1;
						openFileDialog1->Filter = "(*." + line2 + ")|*." + line2 + "|(*.html)|*.html";
					}*/

					//line2 = sr->ReadLine();
					rline->Find("DoubleTags =");
					rline->Find(";", rline->SelectionStart, RichTextBoxFinds::None);
					rline->Select(rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse)+2, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse) - 2);
					
					if(rline->SelectedText == "true")
					{
						SuppUnkTegs = true;
						label2->Text = "ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÚÌ˚Â ÚÂ„Ë: ‚ÍÎ";
					}
					else
					{
						SuppUnkTegs = false;
						label2->Text = "ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÚÌ˚Â ÚÂ„Ë: ‚˚ÍÎ";	
					}

					rline->Find("SafeMode =");
					rline->Find(";", rline->SelectionStart, RichTextBoxFinds::None);
					rline->Select(rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse)+2, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse) - 2);

					String ^lineT = sr->ReadLine();
					if(rline->SelectedText == "true")
						SaveralFiles = true;
					else
						SaveralFiles = false;
					
					rline->Find("SafeFiles =");
					rline->Find(";", rline->SelectionStart, RichTextBoxFinds::None);
					rline->Select(rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse)+2, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - rline->Find("=", 0, rline->SelectionStart + 10, RichTextBoxFinds::Reverse) - 2);

					

					if(!SaveralFiles || rline->SelectedText == "0")
					{
						New();
						fs->Close();
				sr->Close();
					}
					else
					 if(rline->SelectedText != "")
						{
							int files = Int32::Parse(rline->SelectedText);
								FileStream ^FS;
								StreamReader^ SR;
								String^ Name = lineT;

						rline->Find("SafeFiles =");
					rline->Find(";", rline->SelectionStart, RichTextBoxFinds::None);
					rline->Find(";", rline->SelectionStart+1, RichTextBoxFinds::None);
					rline->Select(rline->Find("\"", 0, rline->SelectionStart-2, RichTextBoxFinds::Reverse)+1, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - rline->Find("\"", 0, rline->SelectionStart-2, RichTextBoxFinds::Reverse) - 2);
					
					for(int i=0; i < files; i++)
								{
										
									if(File::Exists(rline->SelectedText))
									{
									FS = gcnew FileStream(rline->SelectedText, FileMode::Open);
									SR = gcnew StreamReader(FS);
										
									auto tabPage = gcnew System::Windows::Forms::TabPage();
									String^ names = Path::GetFileName(rline->SelectedText);
									tabPage->Text = names;
									int tempo = rline->Find(";" ,rline->SelectionStart, RichTextBoxFinds::None);
									 tempo = rline->Find("\"" ,rline->SelectionStart, RichTextBoxFinds::None);
									rline->Select(rline->SelectionStart+1, rline->Find("\"",rline->SelectionStart+1, RichTextBoxFinds::None) - tempo - 1);
									int selectionStart = Int32::Parse(rline->SelectedText);

									this->tabControl1->Controls->Add(tabPage);
									auto textBoxS = gcnew System::Windows::Forms::TextBox();
									auto textBox = gcnew System::Windows::Forms::RichTextBox();
									textBoxS->Visible = false;
									textBoxS->Text += "Insert = true;";
									 toolStripButton7->Text = "¬—“";
									tabPage->Controls->Add(textBoxS);
									tabPage->Controls->Add(textBox);
									textBox->Location = System::Drawing::Point(0,0);
									textBox->Width = tabControl1->Width - 8;
									textBox->Multiline = true;
									textBox->Height = tabControl1->Height - 26;
									textBox->SelectionStart = selectionStart;

									textBox->Text = SR->ReadToEnd();

									textBox->Focus();
									textBox->SelectionStart = textBox->TextLength;
									toolStripStatusLabel3->Text = "length : " + textBox->Text->Length;
									toolStripStatusLabel4->Text = "lines : " + textBox->Lines->Length;
									toolStripStatusLabel5->Text = "Ln : " + (textBox->GetLineFromCharIndex(textBox->SelectionStart) + 1);
									toolStripStatusLabel6->Text = "Col : " + textBox->SelectionStart;

									textBox->Enabled = false;

									//PodsvetkaThread = gcnew Thread (gcnew ThreadStart(this, &Form1::DoNotSomething));
									//PodsvetkaThread->IsBackground = true;
									//PodsvetkaThread->Start();
									tabControl1->SelectedTab = tabPage;
									Podsvetka();

								//	textBox->SelectAll();

									textBox->Enabled = true;

									textBox->SelectionChanged += gcnew EventHandler(this, &Form1::RichTextBoxSelectionChanged);
									textBox->TextChanged += gcnew EventHandler(this, &Form1::RichTextBoxTextChanged);
									textBox->KeyDown += gcnew KeyEventHandler(this, &Form1::RichTextBoxKeyDown);
									FS->Close();
									SR->Close();
									File::Delete("QuickStart\\"+rline->SelectedText);
									}
									sr->ReadLine();
									rline->Find(";", rline->SelectionStart, RichTextBoxFinds::None);
									rline->Find(";", rline->SelectionStart+1, RichTextBoxFinds::None);
									rline->Select(rline->Find("\"", 0, rline->SelectionStart-2, RichTextBoxFinds::Reverse)+1, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - rline->Find("\"", 0, rline->SelectionStart-2, RichTextBoxFinds::Reverse) - 2);
									
								}
					int tempo;
					rline->Find("SelectedTab =");
					tempo = rline->Find("=", rline->SelectionStart, RichTextBoxFinds::None);
					//rline->Find(";", rline->SelectionStart+1, RichTextBoxFinds::None);
					rline->Select(rline->SelectionStart+2, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - tempo - 2);
					
					int SelectedTab = Int32::Parse(rline->SelectedText);
					tabControl1->SelectedIndex = SelectedTab;
					/*
					rline->Find("SelectionStart =");
					rline->Find(";", rline->SelectionStart, RichTextBoxFinds::None);
					rline->Find(";", rline->SelectionStart+1, RichTextBoxFinds::None);
					rline->Select(rline->Find("\"", 0, rline->SelectionStart-2, RichTextBoxFinds::Reverse)+1, rline->Find(";",rline->SelectionStart, RichTextBoxFinds::None) - rline->Find("\"", 0, rline->SelectionStart-2, RichTextBoxFinds::Reverse) - 2);
					*/
								fs->Close();
						sr->Close();
								FileStream^ FSS = gcnew FileStream ("config.txt", FileMode::Create, FileAccess::Write);
				 StreamWriter ^SW = gcnew StreamWriter (FSS);
				 tabControl1->SelectedIndex = 0;
					SW->WriteLine("DefaultFormat = .html;");
				 if(SuppUnkTegs)
				 {
					SW->WriteLine("DoubleTags = true;");
				 }
				 else
				 {
					 SW->WriteLine("DoubleTags = false;");
				 }

				 if(SaveralFiles)
				 {
					 SW->WriteLine("SafeMode = true;");
				 }
				 else
				 {
					 SW->WriteLine("SafeMode = false;");
				 }

				 SW->WriteLine("SafeFiles = 0;");
				 SW->Close();
				 ResizeAction();
							}
						
						
						
							}
							catch(Exception^ Sit)
							{
								New();
							}
						}
				 openFileDialog1->FileName = "";
				 label1->Enabled = false;
				 label1->Visible = false;
				 //tabControl1->SelectedTab = tabPage1;
				// richTextBox1->Focus();
				  label2->Left = this->Width - 212;
				 //richTextBox1->SelectionChanged += gcnew EventHandler(this, &Form1::RichTextBoxSelectionChanged);
				 //richTextBox1->TextChanged += gcnew EventHandler(this, &Form1::RichTextBoxTextChanged);
				 
				 //Options->Close();
				 //richTextBox1->KeyPress += gcnew KeyPressEventHandler(this, &Form1::richTextBox_KeyPress);
			 }
	private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void ÓÚÍ˚Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Open();
			 
		 }
		  void Open()
		  {
			  openFileDialog1->ShowDialog();
			if(openFileDialog1->FileName == nullptr) return;
			try
			{
				auto Reader = gcnew IO::StreamReader(openFileDialog1->FileName, System::Text::Encoding::GetEncoding(1251));
				auto tabPage = gcnew System::Windows::Forms::TabPage();
				String^ Path1 = openFileDialog1->FileName;
				String^ Name;
				Name = Path::GetFileName( Path1 );
				
				this->tabControl1->Controls->Add(tabPage);
				auto textBoxS = gcnew System::Windows::Forms::TextBox();
				auto textBox = gcnew System::Windows::Forms::RichTextBox();
				textBoxS->Visible = false;
				textBoxS->Text += "Insert = true;";
				textBoxS->Text += " " + openFileDialog1->FileName;
				 toolStripButton7->Text = "¬—“";
				tabPage->Controls->Add(textBoxS);
				tabPage->Controls->Add(textBox);
				textBox->Location = System::Drawing::Point(0,0);
				textBox->Width = tabControl1->Width - 8;
				textBox->Multiline = true;
				textBox->Height = tabControl1->Height - 26;
				textBox->Text = Reader->ReadToEnd();
				tabPage->Text = Name;
				
				String^ tempName = tabControl1->SelectedTab->Text;
				Reader->Close();
				label1->Visible = false;
				label1->Enabled = false;
				if(tabControl1->TabCount == 1)
				{
					HTML->Visible = true;
					toolStripStatusLabel1->Visible = true;
					toolStripButton3->Enabled = true;
				 toolStripButton4->Enabled = true;
				 toolStripButton5->Enabled = true;
				 toolStripButton9->Enabled = true;
				 toolStripButton6->Enabled = true;
				 toolStripButton7->Enabled = true;
				 toolStripButton8->Enabled = true;
				 toolStripButton14->Enabled = true;
				 toolStripButton10->Enabled = true;
				 toolStripButton11->Enabled = true;
				 toolStripButton16->Enabled = true;
				 toolStripButton15->Enabled = true;
				}

				HTML->Text = "";
				for(int i = Name->LastIndexOf('.')+1; i < Name->Length; i++)
				{
					HTML->Text += Name[i];
				}
				HTML->Text += ".";
				Name = Path::GetFileName( Path1 );
				textBox->Focus();
				textBox->SelectionStart = textBox->TextLength;
				toolStripStatusLabel3->Text = "length : " + textBox->Text->Length;
				toolStripStatusLabel4->Text = "lines : " + textBox->Lines->Length;
				toolStripStatusLabel5->Text = "Ln : " + (textBox->GetLineFromCharIndex(textBox->SelectionStart) + 1);
				toolStripStatusLabel6->Text = "Col : " + textBox->SelectionStart;
				tabPage->Text = Name;
				textBox->Enabled = false;
				tabControl1->SelectedTab->Text = tempName;
				tabControl1->SelectedIndex = tabPage->TabIndex;
				//PodsvetkaThread = gcnew Thread (gcnew ThreadStart(this, &Form1::DoNotSomething));
				//PodsvetkaThread->IsBackground = true;
				//PodsvetkaThread->Start();
				Podsvetka();
			//	textBox->SelectAll();

				textBox->Enabled = true;

				textBox->SelectionChanged += gcnew EventHandler(this, &Form1::RichTextBoxSelectionChanged);
				textBox->TextChanged += gcnew EventHandler(this, &Form1::RichTextBoxTextChanged);
				//textBox->KeyPress += gcnew KeyPressEventHandler(this, &Form1::richTextBox_KeyPress);
				textBox->KeyDown += gcnew KeyEventHandler(this, &Form1::RichTextBoxKeyDown);
				
				
				this->Text = tabControl1->SelectedTab->Text + " - VanPad";
				
			}
			catch (IO::FileNotFoundException^ Sit)
			{
				MessageBox::Show(Sit->Message + "\nÕÂÚ Ú‡ÍÓ„Ó Ù‡ÈÎ‡", "Œÿ»¡ ¿", MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			}
			catch (Exception^ Sit)
			{
				//MessageBox::Show(Sit->Message, "Œ¯Ë·Í‡", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			ResizeAction();
		  }
private: System::Void ‚˚ÈÚ˚»ÁœÓ„‡ÏÏ˚ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void ÒÓı‡ÌËÚ¸ ‡ÍToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(tabControl1->TabCount == 0)
				return;
			 String^ name = HTML->Text->Replace(".", "");
			 saveFileDialog1->Filter = "(*." + name + ")|*." + name + "|(*.txt)|*.txt|(*.html)|*.html";
			 if(openFileDialog1->FileName != "")
			 saveFileDialog1->FileName = openFileDialog1->FileName;
			 else
				 saveFileDialog1->FileName = tabControl1->SelectedTab->Text;
			 if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) Record();
		 }

		 private: System::Void ÒÓı‡ÌËÚ¸¬Ò∏ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
					  if(tabControl1->TabCount == 0)
				return;

			auto Tab1 = tabControl1;

			for each(Control^ ctrl in Tab1->Controls)
			{
				 tabControl1->SelectedTab = dynamic_cast<TabPage^>(ctrl);

				 if(openFileDialog1->FileName != "")
				 {
					 saveFileDialog1->Filter = "(*" + HTML->Text + ")|*" + HTML->Text + "|(*.txt)|*.txt|(*.html)|*.html";
				 saveFileDialog1->FileName = openFileDialog1->FileName;
				 }
				 else
					 saveFileDialog1->FileName = tabControl1->SelectedTab->Text;
				 if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) Record();
			}
		 }

		 void Record()
		 {
			 try
			 {

				auto Reader = gcnew IO::StreamWriter(saveFileDialog1->FileName, false, System::Text::Encoding::GetEncoding(1251));
				auto Tab1 = tabControl1->SelectedTab;
				for each(Control^ ctrl in Tab1->Controls)
				{
					if(ctrl == dynamic_cast<RichTextBox^>(ctrl))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl);
						Reader->Write(tb->Text);
						Reader->Close();
						tb->Modified = false;
						tabControl1->SelectedTab->Text = Path::GetFileName( saveFileDialog1->FileName );
						break;
					}
				}
						
			 }
			 catch (Exception^ Sit)
			 {
				 MessageBox::Show(Sit->Message, "Œ¯Ë·Í‡", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }
		 }

		 void Recordo(String^ name)
		 {
			 try
			 {

				auto Reader = gcnew IO::StreamWriter(name, false, System::Text::Encoding::GetEncoding(1251));
				auto Tab1 = tabControl1->SelectedTab;
				for each(Control^ ctrl in Tab1->Controls)
				{
					if(ctrl == dynamic_cast<RichTextBox^>(ctrl))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl);
						Reader->Write(tb->Text);
						Reader->Close();
						tb->Modified = false;
						tabControl1->SelectedTab->Text = Path::GetFileName( name );
						break;
					}
				}
						
			 }
			 catch (Exception^ Sit)
			 {
				 MessageBox::Show(Sit->Message, "Œ¯Ë·Í‡", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 }
		 }

private: System::Void Ù‡ÈÎToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 auto Tab1 = tabControl1;

			 FileStream^ FS;
			 StreamWriter ^SW;

			 if(!File::Exists("config.txt"))
			 {
				 FileStream^ FSS = gcnew FileStream ("config.txt", FileMode::Create, FileAccess::Write);
				 StreamWriter ^SW = gcnew StreamWriter (FSS);
				 tabControl1->SelectedIndex = 0;
					SW->WriteLine("DefaultFormat = .html;");
				 if(SuppUnkTegs)
				 {
					SW->WriteLine("DoubleTags = true;");
				 }
				 else
				 {
					 SW->WriteLine("DoubleTags = false;");
				 }

				 if(SaveralFiles)
				 {
					 SW->WriteLine("SafeMode = true;");
				 }
				 else
				 {
					 SW->WriteLine("SafeMode = false;");
				 }

				 SW->WriteLine("SafeFiles = 0;");
				 SW->Close();
			 }

			 if(SaveralFiles)
			 {
				 int RealSelectedTab = tabControl1->SelectedIndex;
				 int RealSelectionStart;

				 for each(Control^ ctrl1 in tabControl1->SelectedTab->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
								 RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
								 RealSelectionStart = tb->SelectionStart;
							}

						}

				 FileStream^ FS = gcnew FileStream ("config.txt", FileMode::Create, FileAccess::Write);
				 StreamWriter ^SW = gcnew StreamWriter (FS);
				 tabControl1->SelectedIndex = 0;
					SW->WriteLine("DefaultFormat = .html;");
				 if(SuppUnkTegs)
				 {
					SW->WriteLine("DoubleTags = true;");
				 }
				 else
				 {
					 SW->WriteLine("DoubleTags = false;");
				 }

				 if(SaveralFiles)
				 {
					 SW->WriteLine("SafeMode = true;");
				 }
				 else
				 {
					 SW->WriteLine("SafeMode = false;");
				 }

				 SW->WriteLine("SafeFiles = " + tabControl1->TabCount +";");

				TCHAR dir[100];
				String^ direct;
				GetModuleFileName(NULL,dir,100);
				direct = gcnew String(dir);
				direct->LastIndexOf("\\");
				direct = direct->Remove(direct->LastIndexOf("\\"), direct->Length - direct->LastIndexOf("\\")) + "\\QuickStart\\";
				String^ name;
				bool saved;
				 //for(int i = 0; i < tabControl1->TabCount; i++)
				// {

					 for each(Control^ ctrl in Tab1->Controls)
				 {
						TabPage^ tp = dynamic_cast<TabPage^>(ctrl);
						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<TextBox^>(ctrl1))
							{
								 TextBox^ tb = dynamic_cast<TextBox^>(ctrl1);
								 name = "";
								for(int i = tb->Text->LastIndexOf(';')+2; i < tb->Text->Length; i++)
								{
									name += tb->Text[i];
								}

								for each (Control^ ctrl2 in tp->Controls)
								{
									if(ctrl2 == dynamic_cast<RichTextBox^>(ctrl2))
									{
										RichTextBox^ Rtb = dynamic_cast<RichTextBox^>(ctrl2);
										if(name != "")
										{ 
											SW->WriteLine("\"" + name + "\"; \"" + Rtb->SelectionStart + "\"");
											saved = true;
										}
										else
										{
											SW->WriteLine("\"" + direct + tabControl1->SelectedTab->Text + "\"; \"" + Rtb->SelectionStart + "\"");
											saved = false;
										}
									}
								}
								 tabControl1->SelectedIndex++;
							}
						}
				}



				 //}
				 SW->WriteLine("SelectedTab = " + RealSelectedTab + ";");
				// SW->WriteLine("SelectionStart = " + RealSelectionStart + ";");
				 SW->Close();
				 for each(Control^ ctrl in Tab1->Controls)
				{
						TabPage^ tp = dynamic_cast<TabPage^>(ctrl);
						//if(tb!= nullptr)tb->Text = tb->Name;
						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);

							if(SaveralFiles && !saved)
							{
								if(!Directory::Exists("QuickStart"))
								{
								CreateDirectory ( L"QuickStart", 0);
								}
								FileStream^ fs = gcnew FileStream ("QuickStart\\"+tp->Text, FileMode::Create, FileAccess::Write);
								StreamWriter^ sw = gcnew StreamWriter (fs);
								sw->Write(tb->Text);
								sw->Close();

								
								SW->Close();
							}
							}
						}
				 }
			 }
			 else
			 {
			 
				for each(Control^ ctrl in Tab1->Controls)
				{
						TabPage^ tp = dynamic_cast<TabPage^>(ctrl);
						//if(tb!= nullptr)tb->Text = tb->Name;
						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);

							if(tb->Modified == false) break;
							auto MBox = MessageBox::Show("¡˚Î ËÁÏÂÌÂÌ \""+ (String^)tp->Text +"\" \n—Óı‡ÌËÚ¸ ËÁÏÂÌÂÌËˇ?","VanPad", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation);
							if(MBox == Windows::Forms::DialogResult::No)
								{
									break;
							}
							if(MBox == Windows::Forms::DialogResult::Cancel)
								{e->Cancel = true;
								return;
							}
							if(MBox == Windows::Forms::DialogResult::Yes)
							{

								 //if(saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
								//	 {
										 tabControl1->SelectedTab = tp;
										 toolStripButton3_Click(sender, e);
											//auto Reader = gcnew IO::StreamWriter(saveFileDialog1->FileName, false, System::Text::Encoding::GetEncoding(1251));
											//Reader->Write(tb->Text);
											//Reader->Close();
											//tb->Modified = false;
											//break;
								//	 }
								// else
								// {	
								//		e ->Cancel = true;
								//		return;
								// }
							}
							//tb->Modified = false;
							}
							}
				}
			 }
				return;
		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			New();
		 }
private: System::Void Á‡Í˚Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 Closer(tabControl1->SelectedTab);

			
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			New();
		 }
	
void New() 
		 {
			auto tabPage = gcnew System::Windows::Forms::TabPage();
			
			
			tabPage->Text = "‘‡ÈÎ " + (tabControl1->TabCount + 1) + ".txt";
			
			this->tabControl1->Controls->Add(tabPage);
			auto richtextBox = gcnew System::Windows::Forms::RichTextBox();
			auto textboxS = gcnew System::Windows::Forms::TextBox();
			textboxS->Visible = false;
			textboxS->Text += "Insert = true;";
			 toolStripButton7->Text = "¬—“";
			 toolStripStatusLabel3->Text = "length : 0";
			 toolStripStatusLabel4->Text = "lines : 0";
			 toolStripStatusLabel5->Text = "Ln : 1";
			 toolStripStatusLabel6->Text = "Col : 0";
			tabPage->Controls->Add(textboxS);
			tabPage->Controls->Add(richtextBox);
			richtextBox->Location = System::Drawing::Point(0,0);
			richtextBox->Width = tabControl1->Width - 8;
			richtextBox->Multiline = true;
			richtextBox->Height = tabControl1->Height - 26;
			label1->Visible = false;
			label1->Enabled = false;
			if(tabControl1->TabCount == 1)
				{
					HTML->Visible = true;
					toolStripStatusLabel1->Visible = true;
					toolStripButton3->Enabled = true;
				 toolStripButton4->Enabled = true;
				 toolStripButton5->Enabled = true;
				 toolStripButton9->Enabled = true;
				 toolStripButton6->Enabled = true;
				 toolStripButton7->Enabled = true;
				 toolStripButton8->Enabled = true;
				 toolStripButton14->Enabled = true;
				 toolStripButton10->Enabled = true;
				 toolStripButton11->Enabled = true;
				 toolStripButton16->Enabled = true;
				 toolStripButton15->Enabled = true;
				}
			//if(File::Exists("config.txt"))
			//{
				//StreamReader^ Options = gcnew StreamReader("config.txt",true);
				//Options->ReadLine();
				//Options->Close();
			//}
			//hTMLToolStripMenuItem->Text = "html";
			tabControl1->SelectedTab = tabPage;
			HTML->Text = "txt.";
			this->Text = tabControl1->SelectedTab->Text + " - VanPad";
			richtextBox->Focus();
			ResizeAction();

			richtextBox->SelectionChanged += gcnew EventHandler(this, &Form1::RichTextBoxSelectionChanged);
			richtextBox->TextChanged += gcnew EventHandler(this, &Form1::RichTextBoxTextChanged);
			richtextBox->KeyPress += gcnew KeyPressEventHandler(this, &Form1::RichTextBoxKeyPress);
			richtextBox->KeyDown += gcnew KeyEventHandler(this, &Form1::RichTextBoxKeyDown);

}

 private: System::Void RichTextBoxSelectionChanged(System::Object^  sender, EventArgs^  e)
 {
	
						TabPage^ tp = tabControl1->SelectedTab;

						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							toolStripStatusLabel5->Text = "Ln : " + (tb->GetLineFromCharIndex(tb->SelectionStart) + 1);
							toolStripStatusLabel6->Text = "Col : " + tb->SelectionStart;
							//if(e->KeyChar == 8)
							//	toolStripStatusLabel3->Text = "length : " + (tb->TextLength);
							//else
							toolStripStatusLabel3->Text = "length : " + (tb->TextLength);
							if(tb->Lines->Length > 0)
								toolStripStatusLabel4->Text = "lines : " + tb->Lines->Length;
							else
								toolStripStatusLabel4->Text = "lines : 1";
							}
						}
				
		
 }

private: System::Void Á‡Í˚Ú¸¬Ò∏ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClosedAll();
		 }

		  void ClosedAll()
		 {
				int j = tabControl1->TabCount;
			 for(int i(0); i < j; i++)
			 {
				 tabControl1->SelectedIndex = 0;
				 if(Closer(tabControl1->SelectedTab) == 5)
					return;
			 }
		 }

		 int Closer(TabPage^ tp)
		 {
			 if(tabControl1->TabCount > 0)
			 {
			

			 for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							if(tb->Modified == false){  this->tabControl1->TabPages->Remove(tp);
							
							break;
							}
							auto MBox = MessageBox::Show("¡˚Î ËÁÏÂÌÂÌ \""+ (String^)tp->Text +"\" \n—Óı‡ÌËÚ¸ ËÁÏÂÌÂÌËˇ?","VanPad", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation);
							if(MBox == Windows::Forms::DialogResult::No)
								{
									this->tabControl1->TabPages->Remove(tp);
									if(tabControl1->SelectedTab)
									this->Text = tabControl1->SelectedTab->Text + " - VanPad";
									else
										this->Text = "VanPad";
								}
							if(MBox == Windows::Forms::DialogResult::Cancel) return 5;
							if(MBox == Windows::Forms::DialogResult::Yes)
							{
								 if(saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
									 {
											auto Reader = gcnew IO::StreamWriter(saveFileDialog1->FileName, false, System::Text::Encoding::GetEncoding(1251));
											Reader->Write(tb->Text);
											Reader->Close();
											tb->Modified = false;
											break;
									 }
								 else break;
							}
							tb->Modified = false;
							break;
							}
			 }
			 }
			  	 if (tabControl1->TabCount == 0)
			 {
				 label1->Visible = true;
				 label1->Enabled = true;
				 toolStripStatusLabel1->Visible = false;
				 HTML->Visible = false;
				 toolStripButton3->Enabled = false;
				 toolStripButton4->Enabled = false;
				 toolStripButton5->Enabled = false;
				 toolStripButton9->Enabled = false;
				 toolStripButton6->Enabled = false;
				 toolStripButton7->Enabled = false;
				 toolStripButton8->Enabled = false;
				 toolStripButton14->Enabled = false;
				 toolStripButton10->Enabled = false;
				 toolStripButton11->Enabled = false;
				 toolStripButton16->Enabled = false;
				 toolStripButton15->Enabled = false;
				 toolStripStatusLabel3->Visible = false;
				 toolStripStatusLabel4->Visible = false;
				 toolStripStatusLabel5->Visible = false;
				 toolStripStatusLabel6->Visible = false;
				 ResizeAction();
				 this->Text = "VanPad";
			 }
				 return 0;
		 }
public: System::Void tabControl1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				
		 }
		/*
		private: System::Void InsertMode()
				 {
					 TabPage^ tp = tabControl1->SelectedTab;

						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<TextBox^>(ctrl1))
							{
							TextBox^ tb = dynamic_cast<TextBox^>(ctrl1);
							if(tb->Text->IndexOf("Insert = true;"))
							{
								toolStripStatusLabel7->Text = "¬—“";
							}
							else
								if(tb->Text->IndexOf("Insert = false;"))
								{
									toolStripStatusLabel7->Text = "«¿Ã";
								}
							}

						}
				 }
				 */
	private: System::Void RichTextBoxKeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
		{
			if(e->KeyCode == Keys::Insert)
			{
				TabPage^ tp = tabControl1->SelectedTab;

						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<TextBox^>(ctrl1))
							{
							TextBox^ tb = dynamic_cast<TextBox^>(ctrl1);
							if(tb->Text->IndexOf("false;") > 0)
							{
								toolStripStatusLabel7->Text = "¬—“";
								tb->Text = tb->Text->Replace("Insert = false;","Insert = true;");
							}
							else
								if(tb->Text->IndexOf("true;") > 0)
								{
									toolStripStatusLabel7->Text = "«¿Ã";
									tb->Text = tb->Text->Replace("Insert = true;","Insert = false;");
								}
							}

						}
			}
			/*
			if(e->KeyCode == Keys::Insert)
				if(!InsertMode)
				{
				toolStripStatusLabel7->Text = "«¿Ã";

				InsertMode = true;
				}
				else
				{
					toolStripStatusLabel7->Text = "¬—“";
				InsertMode = false;
				}
				*/
			return;	
		}
	private: System::Void RichTextBoxKeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
		{
			if(e->KeyChar == (char)96)
				toolStripStatusLabel7->Text = "df";

			return;	
		}
	private: System::Void RichTextBoxTextChanged(System::Object^ sender, EventArgs^ e)
		{
			 TabPage^ tp = tabControl1->SelectedTab;

						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							
							tb->Enabled = false;
							int index = 0, indexP, indexL, current(tb->SelectionStart);
							bool modified, colored;

						if(tb->GetLineFromCharIndex(current) > 0 && tb->GetLineFromCharIndex(current) + 2 < tb->Lines->Length)
							{
								indexP = tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) - 1);
								tb->Select(tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) - 1),tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) + 2) - tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) - 1) - 1);
								indexL = tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) + 2);
							}
							else if(tb->GetLineFromCharIndex(current) > 0 && tb->GetLineFromCharIndex(current) + 2 >= tb->Lines->Length)
							{
								indexP = tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) - 1);
								tb->Select(tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) - 1), tb->TextLength);
								indexL = tb->TextLength;
							}
							else if(tb->GetLineFromCharIndex(current) == 0 && tb->GetLineFromCharIndex(current) + 2 >= tb->Lines->Length)
							{
								indexP = tb->GetFirstCharIndexOfCurrentLine();
								tb->Select(tb->GetFirstCharIndexOfCurrentLine(),tb->TextLength);
								indexL = tb->TextLength;
							}
							else
							{
								indexP = tb->GetFirstCharIndexOfCurrentLine();
								tb->Select(tb->GetFirstCharIndexOfCurrentLine(),tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) + 2));
								indexL = tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) + 2);
							}

							tb->SelectionColor = Color::Black;
							tb->SelectionBackColor = Color::White;

							if(tb->Modified)
							{
								modified = true;
							}
							else

							{
								modified = false;
							}

							float zoom = tb->ZoomFactor;
							
							tb->ZoomFactor = 1.0;
							tb->ZoomFactor = zoom;
							array<String^>^ Tdouble = {"<html>","</html>","<head>","</head>","<body>","</body>","<p>","</p>","<div>","</div>","<li>","</li>","<h1>","</h1>","<h2>","</h2>","<h3>","</h3>","<h4>","</h4>","<h5>","</h5>","<h6>","</h6>","<a>","</a>"};
							array<String^>^ Tmeta = {"!"};
							array<String^>^ Tdefa = {"link"};
							array<String^>^ Tonec = {"<!DOCTYPE html>","<link>","<meta>"};


							if(current > 0)
							{
								
								if(tb->Find(">", current-1, current, RichTextBoxFinds::Reverse) != -1)
								{
									if(tb->Find("<", 0, current - 1, RichTextBoxFinds::Reverse) < 0 || tb->Find(">", current-2,current-1,RichTextBoxFinds::Reverse) != -1)
									{
										tb->Select(current, 0);
										tb->SelectionColor = Color::Black;
										tb->SelectionStart = current;
										tb->Enabled = true;
										tb->Focus();
										tb->Modified = modified;
										break;
									}
									
									index = tb->Find("<", 0, current - 1, RichTextBoxFinds::Reverse);
									if(tb->Find(">", current-2,current-1,RichTextBoxFinds::Reverse) == -1)
									{
										if(SuppUnkTegs && index < current - 2 && tb->Find("<", 0 , current - 1, RichTextBoxFinds::Reverse) > tb->Find("/", 1 , current - 1, RichTextBoxFinds::Reverse))
										{
											for(int i(0); i < Tonec->Length ; i++)
											{
												if(tb->Find("<", 0 , current - 1, RichTextBoxFinds::Reverse) == tb->Find(Tonec[i], 0 , current-1, RichTextBoxFinds::Reverse))
												{
													tb->Select(current, 0);
													tb->SelectionColor = Color::Black;
													tb->SelectionStart = current;
													tb->Enabled = true;
													tb->Focus();
													return;
												}
											}
												tb->Select(tb->Find("<", 0 , current - 1, RichTextBoxFinds::Reverse) + 1, tb->Find(">", 0 , current, RichTextBoxFinds::Reverse) - tb->Find("<", 0 , current - 1, RichTextBoxFinds::Reverse) + 1);
											tb->Copy();
											tb->Text = tb->Text->Insert(current, "\n</");
											tb->Select(tb->Find("/", current, tb->Text->Length, RichTextBoxFinds::None)+1,1);
											tb->Paste();
											indexL += tb->SelectionLength + 3;
											tb->Select(tb->Find("<", 0 , current - 1, RichTextBoxFinds::Reverse), (tb->Find(">", 0 , current, RichTextBoxFinds::Reverse) - tb->Find("<", 0 , current - 1, RichTextBoxFinds::Reverse)) * 2 + 4);
											tb->SelectionBackColor = Color::LightGray;
											//PodsvetkaThread = gcnew Thread (gcnew ThreadStart(this, &Form1::DoSomething));
											//PodsvetkaThread->IsBackground = true;
											//PodsvetkaThread->Start();
										}
										else
										for(int i(0); i < Tdouble->Length; i += 2)
										{
											if (index - 1 < tb->Find(Tdouble[i], index, current, RichTextBoxFinds::None))
											{
												tb->Select(tb->SelectionStart + Tdouble[i]->Length,0);
												tb->SelectedText = "\n" + Tdouble[i+1];
												indexL += Tdouble[i+1]->Length + 1;
												tb->Select(current - Tdouble[i]->Length,  Tdouble[i]->Length + Tdouble[i+1]->Length+1);
												tb->SelectionBackColor = Color::LightGray;
												//PodsvetkaThread = gcnew Thread (gcnew ThreadStart(this, &Form1::DoSomething));
												//PodsvetkaThread->IsBackground = true;
												//PodsvetkaThread->Start();
											}
										}
									
									}
								}
								int index = tb->GetFirstCharIndexOfCurrentLine();


				array<String^>^ Ttext = {"p","h1","h2","h3","h4","h5","h6","ul","li","div","ol"};
				array<String^>^ Tmeta = {"!"};
				array<String^>^ Tdefa = {"link"};
				int current = tb->SelectionStart;

				index = 0;
				tb->SelectionStart = current;
				/*
				while (index < tb->Text->LastIndexOf("<") + 1)
				{
					int index2 = tb->GetFirstCharIndexOfCurrentLine();
					tb->Find("<", index, tb->TextLength, RichTextBoxFinds::None);
					tb->SelectionColor = Color::Blue;
					index = tb->Text->IndexOf("<",index) + 1;
					for(int i(0); i < Tdouble->Length; i++)
					{
						if(tb->Find(Tdouble[i], index2, tb->TextLength, RichTextBoxFinds::None) != -1)
						{
									//current = tb->Text->IndexOf(comboBox2->Text, current) + 1;
							//tb->Select(tb->Find(Tdouble[i], index, tb->TextLength, RichTextBoxFinds::None), Tdouble[i]->Length);
							tb->SelectionColor = Color::Orange;
						}
					}
					
				}
				*/
				//*
				while (indexP < tb->Text->LastIndexOf("<") + 1 && tb->Text->IndexOf("<",indexP) < indexL)
				 {
					 tb->Find("<", indexP, tb->TextLength, RichTextBoxFinds::None);
					 tb->SelectionColor = Color::Blue;
					 indexP = tb->Text->IndexOf("<", indexP) + 1;
					 colored = false;

					 if(!colored)
					 {
						 for(int k(0); k < Tdefa->Length; k++)
						 {
							 if (indexP - 1 < tb->Find(Tdefa[k], indexP, indexL, RichTextBoxFinds::MatchCase) && tb->Find(Tdefa[k], indexP, indexL, RichTextBoxFinds::MatchCase) < tb->Find(">", indexP, indexL, RichTextBoxFinds::None))
							 {
								 tb->Select(indexP - 1, tb->Find(">", indexP, indexL, RichTextBoxFinds::None) - indexP + 2);
								 tb->SelectionColor = Color::Blue;
								 colored = true;
							 }
						 }
					 }

					 if(!colored)
					 {
							for(int i(0); i < Ttext->Length; i++)
							{
								if (indexP - 1 < tb->Find(Ttext[i], indexP, indexL, RichTextBoxFinds::MatchCase) && tb->Find(Ttext[i], indexP, indexL, RichTextBoxFinds::MatchCase) < tb->Find(">", indexP, indexL, RichTextBoxFinds::None))
								{
									tb->Select(indexP - 1, tb->Find(">", indexP, indexL, RichTextBoxFinds::None) - indexP + 2);
									tb->SelectionColor = Color::Orange;
									colored = true;
									break;
								}
							}
					 }

					 if(!colored)
					 {
							for(int j(0); j < Tmeta->Length; j++)
							{
								if (indexP - 1 < tb->Find(Tmeta[j], indexP, indexL, RichTextBoxFinds::None) && tb->Find(Tmeta[j], indexP, indexL, RichTextBoxFinds::None) < tb->Find(">", indexP, indexL, RichTextBoxFinds::None))
								{
									tb->Select(indexP - 1, tb->Find(">", indexP, indexL, RichTextBoxFinds::None) - indexP + 2);
									tb->SelectionColor = Color::DarkGray;
									colored = true;
									break;
								}
							}
					 }

					if (indexP < tb->Find(">", indexP, indexL, RichTextBoxFinds::None) && !colored)
					{
						tb->Select(indexP - 1, tb->Find(">", indexP, indexL, RichTextBoxFinds::None) - indexP + 2);
						tb->SelectionColor = Color::Blue;
					}
									
								
							
					
				 }
				//*/
				tb->SelectionStart = current;
				tb->Select(current,0);

								//PodsvetkaThread = gcnew Thread (gcnew ThreadStart(this, &Form1::DoSomething));
								//PodsvetkaThread->IsBackground = true;
								//PodsvetkaThread->Start();
							
							}
							tb->SelectionStart = current;
							tb->Select(current,0);
							tb->Enabled = true;
							tb->Focus();
							tb->Modified = modified;
							}
						}
						
				return;

		}

	private: System::Threading::Thread^ PodsvetkaThread;

	void DoSomething()
	{
		this->Invoke(gcnew Action(this, &Form1::PodsvetkaFast));
		return;
	}
	void DoNotSomething()
	{
		this->Invoke(gcnew Action(this, &Form1::Podsvetka));
		return;
	}


	public: void Podsvetka()
		 {
			 TabPage^ tp = tabControl1->SelectedTab;

			 for each(Control^ ctrl1 in tp->Controls)
			 {
				 if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
				 RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
				 int index = 0;
				 bool colored = false;

				array<String^>^ Ttext = {"p","h1","h2","h3","h4","h5","h6","ul","li","div","ol"};
				array<String^>^ Tmeta = {"!"};
				array<String^>^ Tdefa = {"link"};
				int current = tb->SelectionStart;
				while (index < tb->Text->LastIndexOf("<") + 1)
				 {

					 
					 tb->Find("<", index, tb->TextLength, RichTextBoxFinds::None);
					 tb->SelectionColor = Color::Blue;
					 index = tb->Text->IndexOf("<", index) + 1;
					 colored = false;
					 

					 for(int k(0); k < Tdefa->Length; k++)
					 {
						 if (index - 1 < tb->Find(Tdefa[k], index, tb->TextLength, RichTextBoxFinds::MatchCase) && tb->Find(Tdefa[k], index, tb->TextLength, RichTextBoxFinds::MatchCase) < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None))
						 {
							 tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
							 tb->SelectionColor = Color::Blue;
							 colored = true;
							 break;
						 }
					 }

					if(!colored)
					{
						for(int i(0); i < Ttext->Length; i++)
						{
							if (index - 1 < tb->Find(Ttext[i], index, tb->TextLength, RichTextBoxFinds::MatchCase) && tb->Find(Ttext[i], index, tb->TextLength, RichTextBoxFinds::MatchCase) < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None))
							{
								tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
								tb->SelectionColor = Color::Orange;
								colored = true;
								break;
							}
						}
					}	

					if(!colored)
					{
						for(int j(0); j < Tmeta->Length; j++)
						{
							if (index - 1 < tb->Find(Tmeta[j], index, tb->TextLength, RichTextBoxFinds::None) && tb->Find(Tmeta[j], index, tb->TextLength, RichTextBoxFinds::None) < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None))
							{
								tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
								tb->SelectionColor = Color::DarkGray;
								colored = true;
								break;
							}
						}
					}

					if (index < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) && !colored)
					 {
						tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
						tb->SelectionColor = Color::Blue;
					 }	

				 
				}
				tb->SelectionStart = current;
				tb->Select(current,0);

				 return;
			 }
			 }
		 }

	public: void PodsvetkaFast()
		 {
			 TabPage^ tp = tabControl1->SelectedTab;

			 for each(Control^ ctrl1 in tp->Controls)
			 {
				 if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
				 RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
				 int index = tb->GetFirstCharIndexOfCurrentLine();


				array<String^>^ Ttext = {"p","h1","h2","h3","h4","h5","h6","ul","li","div","ol"};
				array<String^>^ Tmeta = {"!"};
				array<String^>^ Tdefa = {"link"};
				int current = tb->SelectionStart;

				tb->Select(tb->GetFirstCharIndexOfCurrentLine(),tb->GetFirstCharIndexFromLine(tb->GetLineFromCharIndex(current) + 1) - tb->GetFirstCharIndexOfCurrentLine());
				String^ temp = tb->SelectedText;
				tb->SelectedText = temp;




				while (index < tb->Text->LastIndexOf("<") + 1 && index < tb->GetFirstCharIndexFromLine((tb->GetLineFromCharIndex(current) + 1)))
				 {
					 tb->Find("<", index, tb->TextLength, RichTextBoxFinds::None);
					 tb->SelectionColor = Color::Blue;
					 index = tb->Text->IndexOf("<", index) + 1;

					 for(int k(0); k < Tdefa->Length; k++)
					 {
						 if (index - 1 < tb->Find(Tdefa[k], index, tb->TextLength, RichTextBoxFinds::MatchCase) && tb->Find(Tdefa[k], index, tb->TextLength, RichTextBoxFinds::MatchCase) < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None))
						 {
							 tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
							 tb->SelectionColor = Color::Blue;
							 break;
						 }
					 }
					 for(int i(0); i < Ttext->Length; i++)
					 {
						if (index - 1 < tb->Find(Ttext[i], index, tb->TextLength, RichTextBoxFinds::MatchCase) && tb->Find(Ttext[i], index, tb->TextLength, RichTextBoxFinds::MatchCase) < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None))
						{
							tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
							tb->SelectionColor = Color::Orange;
							break;
						}
					 }
								 
					for(int j(0); j < Tmeta->Length; j++)
					{
						if (index - 1 < tb->Find(Tmeta[j], index, tb->TextLength, RichTextBoxFinds::None) && tb->Find(Tmeta[j], index, tb->TextLength, RichTextBoxFinds::None) < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None))
						{
							tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
							tb->SelectionColor = Color::DarkGray;
							break;
						}
					}

					if (index < tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None))
					{
						tb->Select(index - 1, tb->Find(">", index, tb->TextLength, RichTextBoxFinds::None) - index + 2);
						tb->SelectionColor = Color::Blue;
						break;
					}
									 
								 
							 
					 
				 }
				tb->SelectionStart = current;
				tb->Select(current,0);

				return;
			 }
			 }
		 }

private: System::Void tabControl1_Selected(System::Object^  sender, System::Windows::Forms::TabControlEventArgs^  e) {
			 
		 }
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(tabControl1->TabCount > 0)
			 {
				 for each(Control^ ctrl in tabControl1->SelectedTab->Controls)
							{
								if(ctrl == dynamic_cast<System::Windows::Forms::RichTextBox^>(ctrl))
								{
								RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl);
								tb->Focus();
								toolStripStatusLabel3->Text = "length : " + tb->Text->Length;
								toolStripStatusLabel4->Text = "lines : " + tb->Lines->Length;
								toolStripStatusLabel5->Text = "Ln : " + (tb->GetLineFromCharIndex(tb->SelectionStart) + 1);
								toolStripStatusLabel6->Text = "Col : " + tb->SelectionStart;
								}
								if(ctrl == dynamic_cast<TextBox^>(ctrl))
								{
									TextBox^ tb = dynamic_cast<TextBox^>(ctrl);
									if(tb->Text->IndexOf("Insert = false;"))
									{
										toolStripStatusLabel7->Text = "¬—“";
									}
									else
										if(tb->Text->IndexOf("Insert = true;"))
										{
											toolStripStatusLabel7->Text = "«¿Ã";
										}
									

						}
				}
				String^ name = tabControl1->SelectedTab->Text;
				 HTML->Text = "";
				 
				for(int i = name->LastIndexOf('.')+1; i < name->Length; i++)
				{
					HTML->Text += name[i];
				}
				HTML->Text += ".";
				tabControl1->SelectedTab->Text = name;
				this->Text = tabControl1->SelectedTab->Text + " - VanPad";
			 }
			 else
				 toolStripStatusLabel7->Text = "¬—“";
		 }
		 
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(tabControl1->TabCount > 0)
			 {
				 for each(Control^ ctrl in tabControl1->SelectedTab->Controls)
							{
								RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl);
								tb->Focus();
							}
			 }
		 }

private: System::Void ResizeAction()
		{
						label1->Left = (int)(this->Width / 2.8);
			 label2->Left = this->Width - 212;
			 tabControl1->Width = this->Width - 14;
			   

			 if(this->Width < 650)
			 {
				 label1->Left = -400;
			 }
			 else
			 {
				 label1->Left = (int)(this->Width / 2.8);

			 }
			 /////////////////////////////////////////////////////////////////////////////////////////////////////////
			 if(this->Width < 580 && (toolStripStatusLabel3->Text->Length + toolStripStatusLabel4->Text->Length) > 20)
			 {
				  toolStripStatusLabel3->Visible = false;
				  toolStripStatusLabel4->Visible = false;
			 }
			 else if(tabControl1->TabCount > 0)
			 {
				 toolStripStatusLabel3->Visible = true;
				 toolStripStatusLabel4->Visible = true;
			 }

			 if(this->Width < 510)
			 {
				 toolStripStatusLabel3->Visible = false;
				 toolStripStatusLabel4->Visible = false;
			 }
			 else if(tabControl1->TabCount > 0)
			 {
				 toolStripStatusLabel3->Visible = true;
				 toolStripStatusLabel4->Visible = true;
			 }

			 if(this->Width < 355)
			 {
				 toolStripStatusLabel5->Visible = false;
				 toolStripStatusLabel6->Visible = false;
				 tabControl1->Height = this->Height - 124;
			 }
			 else
			 {
				 if(tabControl1->TabCount > 0)
				 {
				 toolStripStatusLabel5->Visible = true;
				 toolStripStatusLabel6->Visible = true;
				 tabControl1->Height = this->Height - 126;
				 }
				 else
				 tabControl1->Height = this->Height - 124;
			 }


			 if(this->Width < 280)
			 {
				 toolStripStatusLabel1->Visible = false;
				 label2->Left = 2;
				 if(SuppUnkTegs)
				 label2->Text = "ƒ‚ÓÈÌ˚Â ÚÂ„Ë +";
				 else
				 label2->Text = "ƒ‚ÓÈÌ˚Â ÚÂ„Ë: -";
			 }
			 else
			 {
				 if(tabControl1->SelectedTab)
				 toolStripStatusLabel1->Visible = true;
				 if(SuppUnkTegs)
				 label2->Text = "ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÚÌ˚Â ÚÂ„Ë: ‚ÍÎ";
				 else
				 label2->Text = "ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÚÌ˚Â ÚÂ„Ë: ‚˚ÍÎ";
			 }
			 if(this->Height < 250 && tabControl1->TabCount > 0)
			 {
				 statusStrip1->Visible = false;
				 tabControl1->Height = this->Height - 88;
				 tabControl1->Top = 50;
				
				 label2->Visible = false;
				 
			 }
			 else if(this->Height < 250 && tabControl1->TabCount < 1)
			 {
				 statusStrip1->Visible = true;
				 tabControl1->Height = this->Height - 88;
				 tabControl1->Top = 50;
				menuStrip1->Visible = true;
				 label2->Visible = false;
			 }
			 else
			 {
				tabControl1->Top = 65;
				label2->Visible = true;
				statusStrip1->Visible = true;
				  
			 }
			 
			 if(this->Height < 150 && tabControl1->TabCount > 0)
			 {
				menuStrip1->Visible = false;
				tabControl1->Height = this->Height - 38;
				tabControl1->Top = 0;
				toolStrip1->Visible = false;
			 }
			 else if(this->Height < 150)
			 {
				menuStrip1->Visible = true;
				tabControl1->Height = this->Height - 88;
				tabControl1->Top = 65;
				toolStrip1->Visible = true;
				statusStrip1->Visible  = false;
				label2->Visible = true;
				menuStrip1->Visible = true;
			 }
			 else
				if(this->Height < 200 && tabControl1->TabCount > 0)
			 {
					toolStrip1->Visible = true;
					tabControl1->Height = this->Height - 88;
					tabControl1->Top = 50;
					menuStrip1->Visible = true;
					statusStrip1->Visible = true;
			 }
			 else if(this->Height < 200)
			 {
					toolStrip1->Visible = true;
					tabControl1->Height = this->Height - 88;
					tabControl1->Top = 65;
					menuStrip1->Visible = true;
					statusStrip1->Visible = true;
					 label2->Visible = true;
				statusStrip1->Visible = true;
				menuStrip1->Visible = true;
			 }
			 else
				 if(this->Height < 250 && tabControl1->TabCount > 0)
			 {
					toolStrip1->Visible = true;
					tabControl1->Height = this->Height - 88;
					tabControl1->Top = 50;
			 }
			 else
				 if(this->Height < 250)
				 {
					 toolStrip1->Visible = true;
					tabControl1->Height = this->Height - 88;
					tabControl1->Top = 65;
					
					 label2->Visible = true;
				statusStrip1->Visible = true;
				menuStrip1->Visible = true;
				 }
			 else
				 {
					 tabControl1->Top = 65;
					 label2->Visible = true;
				statusStrip1->Visible = true;
				toolStrip1->Visible = true;
				menuStrip1->Visible = true;
				 }

			 auto Tab1 = tabControl1;
				for each(Control^ ctrl in Tab1->Controls)
				{
						TabPage^ tp = dynamic_cast<TabPage^>(ctrl);

						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							tb->Width = tabControl1->Width - 8;
							tb->Height = tabControl1->Height - 26;
							}
						}
				}
		 }

private: System::Void Form1_Resize(System::Object^  sender, System::EventArgs^  e) {
			 ResizeAction();

		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 New();
		 }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Open();
		 }
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(tabControl1->TabCount == 0)
				return;
				String^ name; //= saveFileDialog1->FileName;

			 String^ type = HTML->Text->Replace(".","");
				

				TabPage^ tp = tabControl1->SelectedTab;
				 for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<TextBox^>(ctrl1))
							{
									TextBox^ tb = dynamic_cast<TextBox^>(ctrl1);
								for(int i = tb->Text->LastIndexOf(';')+1; i < tb->Text->Length; i++)
								{
								name += tb->Text[i];
								}

								 saveFileDialog1->Filter = "(*." + type + ")|*." + type + "|(*.txt)|*.txt|(*.html)|*.html";
								 if(openFileDialog1->FileName != "")
								 saveFileDialog1->FileName = tabControl1->SelectedTab->Text;
								 else
									 saveFileDialog1->FileName = tabControl1->SelectedTab->Text;
								if(File::Exists(name)  && Path::GetFileName(name) == tabControl1->SelectedTab->Text)
								 {
									 Recordo(name);
								 }
								 else
								 if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
								 {
				 
												
							
													tb->Text += " " + saveFileDialog1->FileName;
						
									 Record();
								 }
							}

						}
		 }
private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(tabControl1->TabCount == 0)
				return;

			auto Tab1 = tabControl1;
			int current = Tab1->SelectedIndex;

			for each(Control^ ctrl in Tab1->Controls)
			{
				 tabControl1->SelectedTab = dynamic_cast<TabPage^>(ctrl);

				 TabPage^ tp = tabControl1->SelectedTab;
				 for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<TextBox^>(ctrl1))
							{
									TextBox^ tb = dynamic_cast<TextBox^>(ctrl1);

									String^ name("");
									String^ type = HTML->Text->Replace(".","");
								for(int i = tb->Text->LastIndexOf(';')+1; i < tb->Text->Length; i++)
								{
								name += tb->Text[i];
								}

								 saveFileDialog1->Filter = "(*." + type + ")|*." + type + "|(*.txt)|*.txt|(*.html)|*.html";
								 if(openFileDialog1->FileName != "")
								 saveFileDialog1->FileName = tabControl1->SelectedTab->Text;
								 else
									 saveFileDialog1->FileName = tabControl1->SelectedTab->Text;
								if(File::Exists(name)  && Path::GetFileName(name) == tabControl1->SelectedTab->Text)
								 {
									 Recordo(name);
								 }
								 else
								 if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
								 {
				 
												
							
													tb->Text += " " + saveFileDialog1->FileName;
						
									 Record();
								 }
							}

						}
				 tabControl1->SelectedIndex = current;


				 //if(openFileDialog1->FileName != "")
				// saveFileDialog1->FileName = openFileDialog1->FileName;
				 ////else
				//	 saveFileDialog1->FileName = tabControl1->SelectedTab->Text;
				 //if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) Record();
			}
		 }
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Closer(tabControl1->SelectedTab);
		 }
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClosedAll();
		 }
private: System::Void toolStripButton7_Click(System::Object^  sender, System::EventArgs^  e) {
		 Print();
		 }
private: System::Void toolStripButton8_Click(System::Object^  sender, System::EventArgs^  e) {
			 Cut();
		 }
private: System::Void toolStripButton9_Click(System::Object^  sender, System::EventArgs^  e) {
			Copy();
		 }
private: System::Void toolStripButton14_Click(System::Object^  sender, System::EventArgs^  e) {
			Paste();
		 }
private: System::Void toolStripButton10_Click(System::Object^  sender, System::EventArgs^  e) {
			 Undo();
		 }
private: System::Void toolStripButton11_Click(System::Object^  sender, System::EventArgs^  e) {
			 Redo();
		 }
private: System::Void toolStripButton12_Click(System::Object^  sender, System::EventArgs^  e);

public: System::Void Form2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			//toFind = false;
		 }

void     Find()
{

}
		

public: void SetFind(bool b)
{
	ToFind = b;
}

public: void SetOptions(bool b)
{
	Options = b;
}
public: void SetAbout(bool b)
		{
			About = b;
		}
private: System::Void toolStripButton13_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void toolStripButton15_Click(System::Object^  sender, System::EventArgs^  e) {
			ZoomP();			
		 }
private: System::Void toolStripButton16_Click(System::Object^  sender, System::EventArgs^  e) {
			 ZoomM();
		 }
private: System::Void ÔÂ˜‡Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Print();
		 }

		void Save()
		 {
			 if(tabControl1->TabCount == 0)
				return;

			 TabPage^ tp = tabControl1->SelectedTab;

						for each(Control^ ctrl1 in tp->Controls)
						{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							tb->SaveFile(String::Concat
							(System::Environment::GetFolderPath
							(System::Environment::SpecialFolder::Personal),
							tp->Text), RichTextBoxStreamType::RichNoOleObjs);
						}
		 }

void Print()
		 {
			if(tabControl1->TabCount == 0)
				return;
			if (printDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
			{
					printDocument1->Print();
			}

			 
		 }

		 int linesPrinted;
		 array<String^>^ lines;

private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {

			 float x = (float)e->MarginBounds.Left;
				float y = (float)e->MarginBounds.Top;

				while (linesPrinted < lines->Length)
				{
					 Drawing::Font ^ Font = gcnew Drawing::Font("Times New Roman", 12.0F);
					e->Graphics->DrawString(lines[linesPrinted++], Font, /*brush*/ Brushes::Black, x, y);
					y += 15;
					if (y >= e->MarginBounds.Bottom)
					{
						e->HasMorePages = true;
						return;
					}
				}

				linesPrinted = 0;
				e->HasMorePages = false;
		 }
private: System::Void tabControl1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				
						if(tabControl1->TabCount < 1)
							return;
						TabPage^ tp = tabControl1->SelectedTab;


						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							if(e->KeyChar == 8)
								toolStripStatusLabel3->Text = "length : " + (tb->TextLength);
							else
								toolStripStatusLabel3->Text = "length : " + (tb->TextLength + 1);
							if(tb->Lines->Length > 0)
								toolStripStatusLabel4->Text = "lines : " + tb->Lines->Length;
							else
								toolStripStatusLabel4->Text = "lines : 1";
							}
						}
				
		 }
private: System::Void tabControl1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			  auto Tab1 = tabControl1;
				for each(Control^ ctrl in Tab1->Controls)
				{
						TabPage^ tp = dynamic_cast<TabPage^>(ctrl);

						for each(Control^ ctrl1 in tp->Controls)
						{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							
						}
				}
		 }

		 void ZoomP()
		 {
			  if(tabControl1->TabCount == 0)
				return;
			 TabPage^ tp = tabControl1->SelectedTab;

						for each(Control^ ctrl1 in tp->Controls)
						{
							if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
							RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
							if(tb->ZoomFactor < 5)
							tb->ZoomFactor += (float)0.25;
							}
						}
				
		 }

		 void ZoomM()
		 {
			  if(tabControl1->TabCount == 0)
				return;
			 
					TabPage^ tp = tabControl1->SelectedTab;

					for each(Control^ ctrl1 in tp->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						if(tb->ZoomFactor > 0.25)
						tb->ZoomFactor -= (float)0.25;
						}
					}
				
		 }

		 void Cut()
		 {	
			 if(tabControl1->TabCount == 0)
				return;
			 TabPage^ tp = tabControl1->SelectedTab;

					for each(Control^ ctrl1 in tp->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						if(tabControl1->TabCount > 0)
						tb->Cut();
						}
					}
		 }
		 void Copy()
		 {
			  if(tabControl1->TabCount == 0)
				return;
			 TabPage^ tp = tabControl1->SelectedTab;

					for each(Control^ ctrl1 in tp->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Copy();
						}
					}
		 }

		 void Paste()
		 {
			  if(tabControl1->TabCount == 0)
				return;
			  TabPage^ tp = tabControl1->SelectedTab;

					for each(Control^ ctrl1 in tp->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Paste();
						}
					}
		 }

		 void Undo()
		 {
			  if(tabControl1->TabCount == 0)
				return;
			 TabPage^ tp = tabControl1->SelectedTab;

					for each(Control^ ctrl1 in tp->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Undo();
						}
					}
		 }

		 void Redo()
		 {
			  if(tabControl1->TabCount == 0)
				return;
			 TabPage^ tp = tabControl1->SelectedTab;

					for each(Control^ ctrl1 in tp->Controls)
					{
						if(ctrl1 == dynamic_cast<RichTextBox^>(ctrl1))
							{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Redo();
						}
					}
		 }

private: System::Void richTextBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		 }
	
private: System::Void printDocument1_BeginPrint(System::Object^  sender, System::Drawing::Printing::PrintEventArgs^  e) {
		wchar_t param = { '\n' };
		for each(Control^ ctrl1 in tabControl1->SelectedTab->Controls)
					{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						lines = tb->Text->Split(param);

					
						int i = 0;
						wchar_t trimParam = { '\r' };

						for each (String^ s in lines)
						{
							lines[i++] = s->TrimEnd(trimParam);
						}
					}
		 }
private: System::Void xToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

private: System::Void findToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Undo();								
		 }

private: System::Void ‚ÂÌÛÚ¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Redo();
		 }

		 
private: System::Void ‚˚ÂÁ‡Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Cut();
		 }
private: System::Void ÍÓÔËÓ‚‡Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Copy();
		 }
private: System::Void ‚ÒÚ‡‚ËÚ¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Paste();
		 }
private: System::Void ‚˚‰ÂÎËÚ¸¬Ò∏ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(tabControl1->TabCount == 0)
				 return;
			 for each(Control^ ctrl1 in tabControl1->SelectedTab->Controls)
					{
						RichTextBox^ tb = dynamic_cast<RichTextBox^>(ctrl1);
						tb->Select(0,tb->TextLength);
					}
		 }
private: System::Void Ì‡ÈÚËToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Á‡ÏÂÌËÚ¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);

private: System::Void hTMLToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ temp = hTMLToolStripMenuItem->Text;
				if(tXTToolStripMenuItem->Text != HTML->Text)
				hTMLToolStripMenuItem->Text = tXTToolStripMenuItem->Text;
				tXTToolStripMenuItem->Text = HTML->Text;

				HTML->Text = temp;
				saveFileDialog1->Filter = "(*."+temp+")|*."+temp+"|“ÂÍÒÚÓ‚˚Â Ù‡ÈÎ˚ (*.txt)|*.txt";
		 }
private: System::Void toolStripButton18_Click(System::Object^  sender, System::EventArgs^  e);

		 
private: System::Void tXTToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ temp = tXTToolStripMenuItem->Text;
				if(tXTToolStripMenuItem->Text != HTML->Text)
				hTMLToolStripMenuItem->Text = tXTToolStripMenuItem->Text;
				tXTToolStripMenuItem->Text = HTML->Text;

				HTML->Text = temp;
				saveFileDialog1->Filter = "(*."+ temp +")|*."+ temp +"|(*.html)|*.html";
		 }
private: System::Void Ì‡ÒÚÓÈÍËToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Ó·˘ËÂToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void toolStripButton19_Click(System::Object^  sender, System::EventArgs^  e);
		 
private: System::Void ÌÂŒ·˘ËÂToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void ÎÓ„Œ·ÌÓ‚ÎÂÌËÈToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void ÓœÓ„‡ÏÏÂToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 /*
			 if(e->KeyCode == Keys::Control && e->KeyCode == Keys::D)
			 {
				 if(!SuppUnkTegs)
				 {
					SuppUnkTegs = true;
					label2->Text = "ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÚÌ˚Â ÚÂ„Ë: ‚ÍÎ";
				 }
				 else
				 {
					SuppUnkTegs = false;
					label2->Text = "ƒ‚ÓÈÌ˚Â ÌÂËÁ‚ÂÒÚÌ˚Â ÚÂ„Ë: ‚˚ÍÎ";
				 }
			 } */
		 
		 }
private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			/* if((e->KeyChar == KeyChar->A) && (e->KeyChar == KeyChar::D))
			 {
					
			 }*/
		 }
private: System::Void HTML_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ name = HTML->Text->Replace(".","");
			if(tabControl1->SelectedTab->Text->LastIndexOf("."))
			{
				 tabControl1->SelectedTab->Text = tabControl1->SelectedTab->Text->Remove(tabControl1->SelectedTab->Text->LastIndexOf('.'));
				 tabControl1->SelectedTab->Text += "." + name;
			}
		 }
private: System::Void ÒÓı‡ÌËÚ¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 toolStripButton3_Click(sender,e);
		 }
private: System::Void ÍÓ‰ËÓ‚Í‡¬ANSIToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
