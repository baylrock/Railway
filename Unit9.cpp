//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm9::BitBtn1Click(TObject *Sender)
{
   DM->sql_find_punkti->Close();
   DM->sql_find_punkti->Parameters->ParamByName("qqqq")->Value=Edit1->Text;
   DM->sql_find_punkti->Open();
   DM->sql_find_punkti->Active = false;
   DM->sql_find_punkti->Active = true;

}
//---------------------------------------------------------------------------
void __fastcall TForm9::DBLookupComboBox1KeyPress(TObject *Sender,
      char &Key)
{
//form6.ComboBox1.ItemIndex  := form6.ComboBox1.Items.IndexOf(form6.ComboBox1.Text);
}
//---------------------------------------------------------------------------




void __fastcall TForm9::FormCreate(TObject *Sender)
{
Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm9::DBGrid1CellClick(TColumn *Column)
{
 int key;
 key=DM->sql_find_punkti->FieldByName("код_напр")->AsInteger;

   DM->sql_find_napr->Close();
   DM->sql_find_napr->Parameters->ParamByName("wwww")->Value=key;
   DM->sql_find_napr->Open();
   DM->sql_find_napr->Active = false;
   DM->sql_find_napr->Active = true;

   DM->sql_find_train->Close();
   DM->sql_find_train->Parameters->ParamByName("eeee")->Value=key;
   DM->sql_find_train->Open();
   DM->sql_find_train->Active = false;
   DM->sql_find_train->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm9::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
Resize = False;        
}
//---------------------------------------------------------------------------

