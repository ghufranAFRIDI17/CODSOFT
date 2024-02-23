//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
    flag=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::cancelClick(TObject *Sender)
{
    flag=false;
	Form3->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::okayClick(TObject *Sender)
{
    flag=true;
	Form3->Close();
}
//---------------------------------------------------------------------------
