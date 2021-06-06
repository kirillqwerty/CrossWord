//---------------------------------------------------------------------------

#pragma hdrstop

#include "ClassWord.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

void word::ShowQ(TMemo *Memo, int TopicNum, int QNum)
{
	switch (TopicNum)
	{
		case 1:
			switch (QNum)
			{
				case 1:
				Memo->Lines->LoadFromFile("Topic1Question1.txt");
				break;

				case 2:
				Memo->Lines->LoadFromFile("Topic1Question2.txt");
				break;

				case 3:
				Memo->Lines->LoadFromFile("Topic1Question3.txt");
				break;

				case 4:
				Memo->Lines->LoadFromFile("Topic1Question4.txt");
				break;

				case 5:
				Memo->Lines->LoadFromFile("Topic1Question5.txt");
				break;
			}
		break;

		case 2:
			switch (QNum)
			{
				case 1:
				Memo->Lines->LoadFromFile("Topic2Question1.txt");
				break;

				case 2:
				Memo->Lines->LoadFromFile("Topic2Question2.txt");
				break;

				case 3:
				Memo->Lines->LoadFromFile("Topic2Question3.txt");
				break;

				case 4:
				Memo->Lines->LoadFromFile("Topic2Question4.txt");
				break;

				case 5:
				Memo->Lines->LoadFromFile("Topic2Question5.txt");
				break;

			}
		break;

		case 3:
			switch (QNum)
			{
				case 1:
				Memo->Lines->LoadFromFile("Topic3Question1.txt");
				break;

				case 2:
				Memo->Lines->LoadFromFile("Topic3Question2.txt");
				break;

				case 3:
				Memo->Lines->LoadFromFile("Topic3Question3.txt");
				break;

				case 4:
				Memo->Lines->LoadFromFile("Topic3Question4.txt");
				break;

				case 5:
				Memo->Lines->LoadFromFile("Topic3Question5.txt");
				break;
			}
		break;

	}
}

