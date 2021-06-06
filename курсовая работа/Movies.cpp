//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Movies.h"
#include "ClassWord.h"
#include "Topic.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
int pos2 = 0;
int correct2 = 0;
word *Words2 = new word [5];
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
	StringGrid1->Cells[0][0] = 1;
	StringGrid2->Cells[0][0] = 2;
	StringGrid3->Cells[0][0] = 3;
	StringGrid4->Cells[0][0] = 4;
	StringGrid5->Cells[0][0] = 5;

	word Guy;
	Guy.name = "guy";
	Guy.TopicNum = 3;
	Guy.QNum = 1;
	Guy.Answer = false;

	word Marvel;
	Marvel.name = "marvel";
	Marvel.TopicNum = 3;
	Marvel.QNum = 2;
	Marvel.Answer = false;

	word Universal;
	Universal.name = "universal";
	Universal.TopicNum = 3;
	Universal.QNum = 3;
	Universal.Answer = false;

	word Carrey;
	Carrey.name = "carrey";
	Carrey.TopicNum = 3;
	Carrey.QNum = 4;
	Carrey.Answer = false;

	word Neo;
	Neo.name = "neo";
	Neo.TopicNum = 3;
	Neo.QNum = 5;
	Neo.Answer = false;

	Words2[0] = Guy;
	Words2[1] = Marvel;
	Words2[2] = Universal;
	Words2[3] = Carrey;
	Words2[4] = Neo;

	Words2[pos2].ShowQ(Memo1, Words2[pos2].TopicNum, Words2[pos2].QNum);
	Label1->Caption = IntToStr(correct2) + "/5";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
	pos2--;
	if (pos2 < 0 || pos2 == 0)
	{
		Words2[0].ShowQ(Memo1, Words2[0].TopicNum, Words2[0].QNum);
		pos2 = 0;
	}
	else
	{
		Words2[pos2].ShowQ(Memo1, Words2[pos2].TopicNum, Words2[pos2].QNum);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button4Click(TObject *Sender)
{
	pos2++;
	if (pos2> 4 || pos2 == 4)
	{
		Words2[4].ShowQ(Memo1, Words2[4].TopicNum, Words2[4].QNum);
		pos2 = 4;
	}
	else
	{
		Words2[pos2].ShowQ(Memo1, Words2[pos2].TopicNum, Words2[pos2].QNum);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button2Click(TObject *Sender)
{
	if (correct2 == 5)
	{
		ShowMessage("Level passed");
		Form3->Show();
		Form5->Hide();
	}

	bool check = true;
	switch (pos2)
	{
		case 0:
		for (int i = 1; i < StringGrid1->ColCount; i++)
		{
			if (StringGrid1->Cells[i][0] == Words2[pos2].name[i-1])
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
			if	(Words2[pos2].Answer == false)
			{
				correct2++;
			}
			else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words2[pos2].Answer = true;
			if (correct2 >= 5)
			{
				correct2 = 5;
			}
			Label1->Caption = IntToStr(correct2) + "/5";
			ShowMessage("Correct");
			StringGrid1->Options = StringGrid1->Options >> goEditing;
		}
		break;

		case 1:
		for (int i = 1; i < StringGrid2->ColCount; i++)
		{
			if (StringGrid2->Cells[i][0] == Words2[pos2].name[i-1])
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
			if	(Words2[pos2].Answer == false)
			{
				correct2++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}

			Words2[pos2].Answer = true;
			if (correct2 >= 5)
			{
				correct2 = 5;
			}
			Label1->Caption = IntToStr(correct2) + "/5";
			ShowMessage("Correct");
			StringGrid2->Options = StringGrid2->Options >> goEditing;
		}
		break;

		case 2:
		for (int i = 1; i < StringGrid3->ColCount; i++)
		{
			if (StringGrid3->Cells[i][0] == Words2[pos2].name[i-1])
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
			if	(Words2[pos2].Answer == false)
			{
				correct2++;
			}
			else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words2[pos2].Answer = true;
			if (correct2 >= 5)
			{
				correct2 = 5;
			}
			Label1->Caption = IntToStr(correct2) + "/5";
			ShowMessage("Correct");
			StringGrid3->Options = StringGrid3->Options >> goEditing;
		}
		break;

		case 3:
		for (int i = 1; i < StringGrid4->ColCount; i++)
		{
			if (StringGrid4->Cells[i][0] == Words2[pos2].name[i-1])
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
			if	(Words2[pos2].Answer == false)
			{
				correct2++;
			}
			else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words2[pos2].Answer = true;
			if (correct2 >= 5)
			{
				correct2 = 5;
			}
			Label1->Caption = IntToStr(correct2) + "/5";
			ShowMessage("Correct");
			StringGrid4->Options = StringGrid4->Options >> goEditing;
		}
		break;

		case 4:
		for (int i = 1; i < StringGrid5->ColCount; i++)
		{
			if (StringGrid5->Cells[i][0] == Words2[pos2].name[i-1])
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
			if	(Words2[pos2].Answer == false)
			{
				correct2++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words2[pos2].Answer = true;
			if (correct2 >= 5)
			{
				correct2 = 5;
			}
			Label1->Caption = IntToStr(correct2) + "/5";
			ShowMessage("Correct");
			StringGrid5->Options = StringGrid5->Options >> goEditing;
		}
		break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button1Click(TObject *Sender)
{
	Form3->Show();
	Form5->Hide();
}
//---------------------------------------------------------------------------

