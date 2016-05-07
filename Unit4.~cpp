//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormCreate(TObject *Sender)
{
  ComboBox1->Clear();
  DM->sql_filter_punkt->Active = true;
  DM->sql_filter_punkt->First();
  while (DM->sql_filter_punkt->Eof!=true )
  {
        ComboBox1->Items->Add(DM->sql_filter_punkt->FieldByName("Напр")->AsString );
        DM->sql_filter_punkt->Next();
  }

}
//---------------------------------------------------------------------------
void __fastcall TForm4::ComboBox1Change(TObject *Sender)
{

ComboBox1->ItemIndex =ComboBox1->Items->IndexOf(ComboBox1->Text);

  if (ComboBox1->Text.Length()==0)
        {
      DM->punkti->Filter = "";
      DM->punkti->Filtered = false;
        }



}
//---------------------------------------------------------------------------
void __fastcall TForm4::ComboBox1Select(TObject *Sender)
{

         if (ComboBox1->Text.Length()!=0)
        {
                TLocateOptions Options;
                Options << loPartialKey << loCaseInsensitive;
                DM->sql_filter_punkt->Locate("Напр",ComboBox1->Text, Options);
        }

 if (ComboBox1->Text.Length()>0)
 {
      DM->punkti->Filtered = false;
      DM->punkti->Filter = "Код_напр = " + DM->sql_filter_punkt->FieldByName("Код_напр")->AsString;
      DM->punkti->Filtered = true;
 }




}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
Resize = False;        
}
//---------------------------------------------------------------------------

