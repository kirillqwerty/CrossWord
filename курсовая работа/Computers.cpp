//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Computers.h"
#include "ClassWord.h"
#include "Topic.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
int pos1 = 0;
int correct1 = 0;
word *Words1 = new word [5];
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
	StringGrid1->Cells[0][0] = 1;
	StringGrid2->Cells[0][0] = 2;
	StringGrid3->Cells[0][0] = 3;
	StringGrid4->Cells[0][0] = 4;
	StringGrid5->Cells[0][0] = 5;

	word Processor;
	Processor.name = "processor";
	Processor.TopicNum = 2;
	Processor.QNum = 1;
	Processor.Answer = false;

	word Textolite;
	Textolite.name = "textolite";
	Textolite.TopicNum = 2;
	Textolite.QNum = 2;
	Textolite.Answer = false;

	word XBox;
	XBox.name = "xbox";
	XBox.TopicNum = 2;
	XBox.QNum = 3;
	XBox.Answer = false;

	word SSD;
	SSD.name = "ssd";
	SSD.TopicNum = 2;
	SSD.QNum = 4;
	SSD.Answer = false;

	word Monoblock;
	Monoblock.name = "monoblock";
	Monoblock.TopicNum = 2;
	Monoblock.QNum = 5;
	Monoblock.Answer = false;

	Words1[0] = Processor;
	Words1[1] = Textolite;
	Words1[2] = XBox;
	Words1[3] = SSD;
	Words1[4] = Monoblock;

	Words1[pos1].ShowQ(Memo1, Words1[pos1].TopicNum, Words1[pos1].QNum);
	Label1->Caption = IntToStr(correct1) + "/5";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button3Click(TObject *Sender)
{
	pos1--;
	if (pos1 < 0 || pos1 == 0)
	{
		Words1[0].ShowQ(Memo1, Words1[0].TopicNum, Words1[0].QNum);
		pos1 = 0;
	}
	else
	{
		Words1[pos1].ShowQ(Memo1, Words1[pos1].TopicNum, Words1[pos1].QNum);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button4Click(TObject *Sender)
{
	pos1++;
	if (pos1 > 4 || pos1 == 4)
	{
		Words1[4].ShowQ(Memo1, Words1[4].TopicNum, Words1[4].QNum);
		pos1 = 4;
	}
	else
	{
		Words1[pos1].ShowQ(Memo1, Words1[pos1].TopicNum, Words1[pos1].QNum);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
	if (correct1 == 5)
	{
		ShowMessage("Level passed");
		Form3->Show();
		Form4->Hide();
	}

	bool check = true;
	switch (pos1)
	{
		case 0:
		for (int i = 1; i < StringGrid1->ColCount; i++)
		{
			if (StringGrid1->Cells[i][0] == Words1[pos1].name[i-1])
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
			if	(Words1[pos1].Answer == false)
			{
				correct1++;
			}
			else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words1[pos1].Answer = true;
			if (correct1 >= 5)
			{
				correct1 = 5;
			}
			Label1->Caption = IntToStr(correct1) + "/5";
			ShowMessage("Correct");
			StringGrid1->Options = StringGrid1->Options >> goEditing;
		}
		break;

		case 1:
		for (int i = 1; i < StringGrid2->ColCount; i++)
		{
			if (StringGrid2->Cells[i][0] == Words1[pos1].name[i-1])
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
			if	(Words1[pos1].Answer == false)
			{
				correct1++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}

			Words1[pos1].Answer = true;
			if (correct1 >= 5)
			{
				correct1 = 5;
			}
			Label1->Caption = IntToStr(correct1) + "/5";
			ShowMessage("Correct");
			StringGrid2->Options = StringGrid2->Options >> goEditing;
		}
		break;

		case 2:
		for (int i = 1; i < StringGrid3->ColCount; i++)
		{
			if (StringGrid3->Cells[i][0] == Words1[pos1].name[i-1])
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
			if	(Words1[pos1].Answer == false)
			{
				correct1++;
			}
			else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words1[pos1].Answer = true;
			if (correct1 >= 5)
			{
				correct1 = 5;
			}
			Label1->Caption = IntToStr(correct1) + "/5";
			ShowMessage("Correct");
			StringGrid3->Options = StringGrid3->Options >> goEditing;
		}
		break;

		case 3:
		for (int i = 1; i < StringGrid4->ColCount; i++)
		{
			if (StringGrid4->Cells[i][0] == Words1[pos1].name[i-1])
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
			if	(Words1[pos1].Answer == false)
			{
				correct1++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words1[pos1].Answer = true;
			if (correct1 >= 5)
			{
				correct1 = 5;
			}
			Label1->Caption = IntToStr(correct1) + "/5";
			ShowMessage("Correct");
			StringGrid4->Options = StringGrid4->Options >> goEditing;
		}
		break;

		case 4:
		for (int i = 1; i < StringGrid5->ColCount; i++)
		{
			if (StringGrid5->Cells[i][0] == Words1[pos1].name[i-1])
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
			if	(Words1[pos1].Answer == false)
			{
				correct1++;
			}
            else
			{
				ShowMessage("Question is already answered");
				break;
			}
			Words1[pos1].Answer = true;
			if (correct1 >= 5)
			{
				correct1 = 5;
			}
			Label1->Caption = IntToStr(correct1) + "/5";
			ShowMessage("Correct");
			StringGrid5->Options = StringGrid5->Options >> goEditing;
		}
		break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
	Form3->Show();
	Form4->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TForm4::Button5Click(TObject *Sender)
{
	switch (pos1)
	{
		case 0:
		Memo1->Hide();
		Image1->Picture->LoadFromFile("CPU.jpg");
		break;

		case 1:
		Memo1->Hide();
		Image1->Picture->LoadFromFile("CPU.jpg");
		break;

		case 2:
		Memo1->Hide();
		Image1->Picture->LoadFromFile("CPU.jpg");
		break;

		case 3:
		Memo1->Hide();
		Image1->Picture->LoadFromFile("CPU.jpg");
		break;

		case 4:
		Memo1->Hide();
		Image1->Picture->LoadFromFile("CPU.jpg");
		break;
	}

}
//---------------------------------------------------------------------------

