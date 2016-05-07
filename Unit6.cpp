//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
AnsiString f1;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormCreate(TObject *Sender)
{
Edit1->Clear();
Label3->Visible = false;
ComboBox2->Visible = false;
ComboBox2->Clear();


}
//---------------------------------------------------------------------------
void __fastcall TForm6::Edit1Change(TObject *Sender)
{
        if (Edit1->Text.Length()!=0)
        {
                TLocateOptions Options;
                Options << loPartialKey << loCaseInsensitive;
                DM->poezd->Locate("�����_������",Edit1->Text, Options);
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm6::ComboBox1Select(TObject *Sender)
{

ComboBox2->Visible = true;

if (ComboBox1->Text=="��� ������")
{
        ComboBox2->Clear();
        f1="��� ������";
        Label3->Caption = "������ �� ���� ������ :";
        Label3->Visible = true;


        DM->sql_filter_tip->Active = true;
        DM->sql_filter_tip->First();
        while (DM->sql_filter_tip->Eof!=true )
        {
                ComboBox2->Items->Add(DM->sql_filter_tip->FieldByName("���_�")->AsString );
                DM->sql_filter_tip->Next();
        }

}
if (ComboBox1->Text=="�����������")
{
        ComboBox2->Clear();
        f1="������";
        Label3->Caption = "������ �� �������� ����������� :";
        Label3->Visible = true;
        ComboBox2->Visible = true;


        DM->sql_filter_punkt->Active = true;
        DM->sql_filter_punkt->First();
        while (DM->sql_filter_punkt->Eof!=true )
        {
                ComboBox2->Items->Add(DM->sql_filter_punkt->FieldByName("����")->AsString );
                DM->sql_filter_punkt->Next();
        }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::ComboBox2Change(TObject *Sender)
{
ComboBox2->ItemIndex =ComboBox2->Items->IndexOf(ComboBox1->Text);

  if (ComboBox2->Text.Length()==0)
        {
      DM->poezd->Filter = "";
      DM->poezd->Filtered = false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ComboBox2Select(TObject *Sender)
{
if (ComboBox1->Text=="�����������")
{
        if (ComboBox2->Text.Length()!=0)
        {
                TLocateOptions Options;
                Options << loPartialKey << loCaseInsensitive;
                DM->sql_filter_punkt->Locate("����",ComboBox2->Text, Options);
        }

        if (ComboBox2->Text.Length()>0)
        {
                DM->poezd->Filtered = false;
                DM->poezd->Filter = "���_���� = " + DM->sql_filter_punkt->FieldByName("���_����")->AsString;
                DM->poezd->Filtered = true;
        }
}

if (ComboBox1->Text=="��� ������")
{
        if (ComboBox2->Text.Length()!=0)
        {
                TLocateOptions Options;
                Options << loPartialKey << loCaseInsensitive;
                DM->sql_filter_tip->Locate("���_�",ComboBox2->Text, Options);
        }

        if (ComboBox2->Text.Length()>0)
        {
                DM->poezd->Filtered = false;
                DM->poezd->Filter = "���_����_� = " + DM->sql_filter_tip->FieldByName("���_����_�")->AsString;
                DM->poezd->Filtered = true;
        }
}

}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
Resize = False;        
}
//---------------------------------------------------------------------------


