//---------------------------------------------------------------------------

#ifndef ClassWordH
#define ClassWordH
#include <vcl.h>
#include <windows.h>
//---------------------------------------------------------------------------
#endif
class word
{
	public:
	std :: string name;
	int TopicNum;
	int QNum;
    bool Answer;
	void ShowQ(TMemo *Memo, int TopicNum, int QNum);
};