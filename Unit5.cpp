//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormCreate(TObject *Sender)
{
Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Edit1Change(TObject *Sender)
{
if (ComboBox1->Text == "Фамилия")
{
        if (Edit1->Text.Length()!=0)
        {
                TLocateOptions Options;
                Options << loPartialKey << loCaseInsensitive;
                DM->pasagir->Locate("Фамилия",Edit1->Text, Options);
        }
}
if (ComboBox1->Text == "Номер паспорта")
{
        if (Edit1->Text.Length()!=0)
        {
                TLocateOptions Options;
                Options << loPartialKey << loCaseInsensitive;
                DM->pasagir->Locate("Пасп_ном",Edit1->Text, Options);
        }
}


}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
Resize = False;        
}
//---------------------------------------------------------------------------

