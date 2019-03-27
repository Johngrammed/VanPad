#include "StdAfx.h"
    #include "Form1.h"
    #include "Form2.h"
	#include "Form3.h"
	#include "Form4.h"
  
namespace VanPad {
       System::Void Form1::toolStripButton12_Click(System::Object^  sender, System::EventArgs^  e) {
		   if(!ToFind)
		   {
			   ToFind = true;
				Form2^ f2 = gcnew Form2(this);
				f2->selTab = 1;
				f2->Show();
		   }
        }
	   System::Void Form1::toolStripButton13_Click(System::Object^  sender, System::EventArgs^  e){
		   if(!ToFind)
			   {
				   ToFind = true;
					Form2^ f2 = gcnew Form2(this);
					f2->selTab = 2;
					f2->Show();
			   }
	   }
	    System::Void Form1::íàéòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
			 if(!ToFind)
			   {
				   ToFind = true;
					Form2^ f2 = gcnew Form2(this);
					f2->selTab = 1;
					f2->Show();
			   }
		}
		System::Void Form1::çàìåíèòüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e){
			 if(!ToFind)
			   {
				   ToFind = true;
					Form2^ f2 = gcnew Form2(this);
					f2->selTab = 2;
					f2->Show();
			   }
		}
		System::Void Form1::toolStripButton18_Click(System::Object^  sender, System::EventArgs^  e){
			if(!Options)
			{
				Options = true;
				Form3^ f3 = gcnew Form3(this);
				f3->ShowDialog();
			}
        }
		System::Void Form1::toolStripButton19_Click(System::Object^ sender, System::EventArgs^ e){
			if(!About)
			{
				About = true;
				Form4^ f4 = gcnew Form4(this);
				f4->Show();
			}
		}
		System::Void Form1::îáùèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
			if(!Options)
			{
				Options = true;
				Form3^ f3 = gcnew Form3(this);
				f3->ShowDialog();
			}
		}
		System::Void Form1::íåÎáùèåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
			if(!Options)
			{
				Options = true;
				Form3^ f3 = gcnew Form3(this);
				f3->ShowDialog();
				f3->tabControl1->SelectedIndex = 1;
			}
		}
		System::Void Form1::ëîãÎáíîâëåíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
			if(!About)
			{
				About = true;
				Form4^ f4 = gcnew Form4(this);
				f4->Show();
				f4->tabControl1->SelectedIndex = 1;
			}
		}
		System::Void Form1::îÏðîãðàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e){
			if(!About)
			{
				About = true;
				Form^ f4 = gcnew Form4(this);
				f4->Show();
			}
		}

    }