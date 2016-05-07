//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn1Click(TObject *Sender)
{
DM->tip_poezda->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn2Click(TObject *Sender)
{
DM->tip_poezda->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn3Click(TObject *Sender)
{
DM->tip_poezda->Append();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn4Click(TObject *Sender)
{
DM->tip_poezda->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn5Click(TObject *Sender)
{
DM->tip_poezda->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn6Click(TObject *Sender)
{
DM->tip_poezda->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn7Click(TObject *Sender)
{
DM->tip_poezda->Last();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn8Click(TObject *Sender)
{
DM->tip_vagona->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn9Click(TObject *Sender)
{
DM->tip_vagona->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn10Click(TObject *Sender)
{
DM->tip_vagona->Append();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn11Click(TObject *Sender)
{
DM->tip_vagona->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn12Click(TObject *Sender)
{
DM->tip_vagona->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn13Click(TObject *Sender)
{
DM->tip_vagona->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn14Click(TObject *Sender)
{
DM->tip_vagona->Last();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn15Click(TObject *Sender)
{
DM->servis->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn16Click(TObject *Sender)
{
DM->servis->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn17Click(TObject *Sender)
{
DM->servis->Append();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn18Click(TObject *Sender)
{
DM->servis->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn19Click(TObject *Sender)
{
DM->servis->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn20Click(TObject *Sender)
{
DM->servis->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn21Click(TObject *Sender)
{
DM->servis->Last();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn22Click(TObject *Sender)
{
DM->napravlenie->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn23Click(TObject *Sender)
{
DM->napravlenie->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn24Click(TObject *Sender)
{
DM->napravlenie->Append();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn25Click(TObject *Sender)
{
DM->napravlenie->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn26Click(TObject *Sender)
{
DM->napravlenie->Post();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn27Click(TObject *Sender)
{
DM->napravlenie->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::BitBtn28Click(TObject *Sender)
{
DM->napravlenie->Last();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender)
{
PageControl1->Pages[0]->Brush->Color=clWhite;
PageControl1->Pages[1]->Brush->Color=clWhite;
PageControl1->Pages[2]->Brush->Color=clWhite;
PageControl1->Pages[3]->Brush->Color=clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
Resize = False;        
}
//---------------------------------------------------------------------------
