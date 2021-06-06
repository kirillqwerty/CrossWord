//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Geography.h"
#include "Computers.h"
#include "Movies.h"
#include "Topic.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	Form2->Show();
	Form3->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
	Form4->Show();
	Form3->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
	Form5->Show();
    Form3->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
	Form1->Show();
	Form3->Hide();
}
//---------------------------------------------------------------------------

