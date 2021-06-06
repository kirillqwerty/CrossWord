//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Menu.h"
#include "Topic.h"
#include "Rules.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Form6->Show();
    //Form1->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
