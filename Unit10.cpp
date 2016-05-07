//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "Unit1.h"
#include "Unit2.h"
#include "Unit10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
extern int f;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::FormCreate(TObject *Sender)
{
Edit1->Clear();
Edit2->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm10::BitBtn1Click(TObject *Sender)
{

DM->adm->Active = true;
        DM->adm->First();
        while (DM->adm->Eof!=true )
        {
                if (DM->adm->FieldByName("login")->AsString == "admin" && DM->adm->FieldByName("password")->AsString == Form10->Edit2->Text)
                {
                  Form1->Height = 670;
                  Form1->BitBtn9->Visible = true;
                  Form1->BitBtn11->Visible = false;
                  Form1->GroupBox3->Visible = true;
                }
               else
               if (DM->adm->FieldByName("login")->AsString == Form10->Edit1->Text && DM->adm->FieldByName("password")->AsString == Form10->Edit2->Text && DM->adm->FieldByName("login")->AsString != "admin")
                {
                  Form1->Height = 255;
                  Form1->BitBtn9->Visible = false;
                  Form1->BitBtn11->Visible = true;
                  Form1->GroupBox3->Visible = true;
                }

        DM->adm->Next();
        }
Form10->Close();
Form1->Show();
  Form1->Image1->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::BitBtn2Click(TObject *Sender)
{
Form10->Height = 370;
DM->adm->Append();
}
//---------------------------------------------------------------------------
void __fastcall TForm10::BitBtn3Click(TObject *Sender)
{
 DM->adm->Post();
 Form10->Height = 230;
}
//---------------------------------------------------------------------------

