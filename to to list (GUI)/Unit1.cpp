//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::addClick(TObject *Sender)
{
	if(input->Text!="")
	{
		list->Items->Add(input->Text);
        input->Text="";
	}

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::listItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	Form2->ShowModal();
	if(Form2->flag==true)
	{
		list->Items->Delete(Item->Index);
		Form2->flag=false;
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::clearClick(TObject *Sender)
{
	Form3->ShowModal();
	if(Form3->flag==true)
	{
		list->Clear();
		Form3->flag=false;
	}

}
//---------------------------------------------------------------------------
