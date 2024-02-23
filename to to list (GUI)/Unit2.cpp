//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	flag=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::okayClick(TObject *Sender)
{
	flag=true;
	Form2->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::cancelClick(TObject *Sender)
{
	flag=false;
	Form2->Close();
}
//---------------------------------------------------------------------------
