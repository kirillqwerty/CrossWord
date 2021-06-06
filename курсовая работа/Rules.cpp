//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Rules.h"
#include "Topic.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
	Label1->Caption = "• Write one letter in one cell,\n otherwise the answer will not be counted.";
	Label2->Caption = "• Press the 'check' button after each attempt.";
	Label3->Caption = "• Before pressing the 'check' button,\n check which question you see on the screen\n and which one you answer.";
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	Form6->Hide();
    Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button2Click(TObject *Sender)
{
	Form6->Hide();
	Form1->Show();
}
//---------------------------------------------------------------------------

