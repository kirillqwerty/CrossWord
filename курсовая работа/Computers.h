//---------------------------------------------------------------------------

#ifndef ComputersH
#define ComputersH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TStringGrid *StringGrid2;
	TStringGrid *StringGrid3;
	TStringGrid *StringGrid4;
	TStringGrid *StringGrid5;
	TButton *Button1;
	TButton *Button2;
	TMemo *Memo1;
	TButton *Button3;
	TButton *Button4;
	TLabel *Label1;
	TImage *Image1;
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
