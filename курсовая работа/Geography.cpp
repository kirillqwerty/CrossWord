//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Geography.h"
#include "ClassWord.h"
#include "Topic.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int pos = 0;
int correct = 0;
word *Words = new word [5];
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	if (correct == 5)
	{
		ShowMessage("Level passed");
		Form3->Show();
		Form2->Hide();
	}

	StringGrid1->Cells[0][0] = 1;
	StringGrid2->Cells[0][0] = 2;
	StringGrid3->Cells[0][0] = 3;
	StringGrid4->Cells[0][0] = 4;
	StringGrid5->Cells[0][0] = 5;

	word Rome;
	Rome.name = "rome";
	Rome.TopicNum = 1;
	Rome.QNum = 1;
	Rome.Answer = false;

	word Pacific;
	Pacific.name = "pacific";
	Pacific.TopicNum = 1;
	Pacific.QNum = 2;
	Pacific.Answer = false;

	word Baikal;
	Baikal.name = "baikal";
	Baikal.TopicNum = 1;
	Baikal.QNum = 3;
	Baikal.Answer = false;

	word Monako;
	Monako.name = "monako";
	Monako.TopicNum = 1;
	Monako.QNum = 4;
	Monako.Answer = false;

	word Crimea;
	Crimea.name = "crimea";
	Crimea.TopicNum = 1;
	Crimea.QNum = 5;
	Crimea.Answer = false;

	Words[0] = Rome;
	Words[1] = Pacific;
	Words[2] = Baikal;
	Words[3] = Monako;
	Words[4] = Crimea;

	Words[pos].ShowQ(Memo1, Words[pos].TopicNum, Words[pos].QNum);
    Label1->Caption = IntToStr(correct) + "/5";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	pos--;
	if (pos < 0 || pos == 0)
	{
		Words[0].ShowQ(Memo1, Words[0].TopicNum, Words[0].QNum);
		pos = 0;
	}
	else
	{
		Words[pos].ShowQ(Memo1, Words[pos].TopicNum, Words[pos].QNum);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
	pos++;
	if (pos > 4 || pos == 4)
	{
		Words[4].ShowQ(Memo1, Words[4].TopicNum, Words[4].QNum);
		pos = 4;
	}
	else
	{
		Words[pos].ShowQ(Memo1, Words[pos].TopicNum, Words[pos].QNum);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
	bool check = true;
	switch (pos)
	{
		case 0:
		for (int i = 1; i < StringGrid1->ColCount; i++)
		{
			if (StringGrid1->Cells[i][0] == Words[pos].name[i-1])
			{
				continue;
			}
			else
			{
				check = false;
				ShowMessage("Incorrect");
				for (int i = 1; i < StringGrid1->ColCount; i++)
				{
					StringGrid1->Cells[i][0] = "";
				}
				break;
			}
		}
		if (check == true)
		{
			if	(Words[pos].Answer == false)
			{
				correct++;
			}
			else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words[pos].Answer = true;
			if (correct >= 5)
			{
				correct = 5;
			}
			Label1->Caption = IntToStr(correct) + "/5";
			ShowMessage("Correct");
			StringGrid1->Options = StringGrid1->Options >> goEditing;
		}
		break;

		case 1:
		for (int i = 1; i < StringGrid2->ColCount; i++)
		{
			if (StringGrid2->Cells[i][0] == Words[pos].name[i-1])
			{
				continue;
			}
			else
			{
				check = false;
				ShowMessage("Incorrect");
				for (int i = 1; i < StringGrid2->ColCount; i++)
				{
					StringGrid2->Cells[i][0] = "";
				}
				break;
			}
		}
		if (check == true)
		{
			if	(Words[pos].Answer == false)
			{
				correct++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}

			Words[pos].Answer = true;
            if (correct >= 5)
			{
				correct = 5;
			}
			Label1->Caption = IntToStr(correct) + "/5";
			ShowMessage("Correct");
			StringGrid2->Options = StringGrid2->Options >> goEditing;
		}
		break;

		case 2:
		for (int i = 1; i < StringGrid3->ColCount; i++)
		{
			if (StringGrid3->Cells[i][0] == Words[pos].name[i-1])
			{
				continue;
			}
			else
			{
				check = false;
				ShowMessage("Incorrect");
				for (int i = 1; i < StringGrid3->ColCount; i++)
				{
					StringGrid3->Cells[i][0] = "";
				}
				break;
			}
		}
		if (check == true)
		{
			if	(Words[pos].Answer == false)
			{
				correct++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words[pos].Answer = true;
            if (correct >= 5)
			{
				correct = 5;
			}
			Label1->Caption = IntToStr(correct) + "/5";
			ShowMessage("Correct");
			StringGrid3->Options = StringGrid3->Options >> goEditing;
		}
		break;

		case 3:
		for (int i = 1; i < StringGrid4->ColCount; i++)
		{
			if (StringGrid4->Cells[i][0] == Words[pos].name[i-1])
			{
				continue;
			}
			else
			{
				check = false;
				ShowMessage("Incorrect");
				for (int i = 1; i < StringGrid4->ColCount; i++)
				{
					StringGrid4->Cells[i][0] = "";
				}
				break;
			}
		}
		if (check == true)
		{
			if	(Words[pos].Answer == false)
			{
				correct++;
			}
			else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words[pos].Answer = true;
            if (correct >= 5)
			{
				correct = 5;
			}
			Label1->Caption = IntToStr(correct) + "/5";
			ShowMessage("Correct");
			StringGrid4->Options = StringGrid4->Options >> goEditing;
		}
		break;

		case 4:
		for (int i = 1; i < StringGrid5->ColCount; i++)
		{
			if (StringGrid5->Cells[i][0] == Words[pos].name[i-1])
			{
				continue;
			}
			else
			{
				check = false;
				ShowMessage("Incorrect");
				for (int i = 1; i < StringGrid5->ColCount; i++)
				{
					StringGrid5->Cells[i][0] = "";
				}
				break;
			}
		}
		if (check == true)
		{
			if	(Words[pos].Answer == false)
			{
				correct++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words[pos].Answer = true;
			if (correct >= 5)
			{
				correct = 5;
			}
			Label1->Caption = IntToStr(correct) + "/5";
			ShowMessage("Correct");
			StringGrid5->Options = StringGrid5->Options >> goEditing;
		}
		break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
	Form3->Show();
	Form2->Hide();
}
//---------------------------------------------------------------------------
