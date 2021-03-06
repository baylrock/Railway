//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "pBarcode2D"
#pragma link "pCompactMatrix"
#pragma link "pCore2D"
#pragma link "pSave2D"
#pragma link "pSave2DBmp"
#pragma link "pQRCode"
#pragma resource "*.dfm"
//for printing ticket
#include      <ComObj.hpp>
#include      <utilcls.h>
#include <string.h>
#include <Stdio.h>

using namespace std;

TForm8 *Form8;

//for printing ticket
Variant  vVarApp,vVarDocs,vVarDoc,vVarParagraphs,vVarParagraph,vVarRange,vVarTable,vVarCell,v;
//����� ��� ����� � �� ����
AnsiString pas, napr, tr, tv, nv, pl, po, pp, da, va, dp, vp, ss, km, st;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormCreate(TObject *Sender)
{
DM->mod_bilet->Active = false;
DM->mod_bilet->Active = true;
Form8->Image1->Visible = false;


        ComboBox1->Clear();
        DM->sql_filter_pas->Active = true;
        DM->sql_filter_pas->First();
        while (DM->sql_filter_pas->Eof!=true )
        {
                ComboBox1->Items->Add(DM->sql_filter_pas->FieldByName("�������")->AsString );
                DM->sql_filter_pas->Next();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm8::DBGrid1CellClick(TColumn *Column)
{

//������ � �� ����
/*
pas="������� : "+DM->mod_bilet->FieldByName("�������")->AsString;
napr="�������� ���� :"+DM->mod_bilet->FieldByName("�����������")->AsString;
tr="����� : "+DM->mod_bilet->FieldByName("�����_������")->AsString;
tv="��� ������ : "+DM->mod_bilet->FieldByName("���_������")->AsString;
nv="����� ������ : "+DM->mod_bilet->FieldByName("�����_������")->AsString;
pl="̳��� : "+DM->mod_bilet->FieldByName("�����")->AsString;
po="³���������� : "+DM->mod_bilet->FieldByName("�����_����")->AsString;
pp="�������� : "+DM->mod_bilet->FieldByName("�����_����")->AsString;
da="���� ����������� : "+DM->mod_bilet->FieldByName("����_����")->AsString;
va="��� ����������� : "+DM->mod_bilet->FieldByName("�����_����")->AsString;
dp="���� �������� : "+DM->mod_bilet->FieldByName("����_����")->AsString;
vp="��� �������� : "+DM->mod_bilet->FieldByName("�����_����")->AsString;
ss="����� : "+DM->mod_bilet->FieldByName("������")->AsString;
km="ʳ�������� : "+DM->mod_bilet->FieldByName("����������")->AsString;
st="������� : "+DM->mod_bilet->FieldByName("���������")->AsString;
*/

pas=DM->mod_bilet->FieldByName("�������")->AsString;
napr=DM->mod_bilet->FieldByName("�����������")->AsString;
tr=DM->mod_bilet->FieldByName("�����_������")->AsString;
tv=DM->mod_bilet->FieldByName("���_������")->AsString;
nv=DM->mod_bilet->FieldByName("�����_������")->AsString;
pl=DM->mod_bilet->FieldByName("�����")->AsString;
po=DM->mod_bilet->FieldByName("�����_����")->AsString;
pp=DM->mod_bilet->FieldByName("�����_����")->AsString;
da=DM->mod_bilet->FieldByName("����_����")->AsString;
va=DM->mod_bilet->FieldByName("�����_����")->AsString;
dp=DM->mod_bilet->FieldByName("����_����")->AsString;
vp=DM->mod_bilet->FieldByName("�����_����")->AsString;
ss=DM->mod_bilet->FieldByName("������")->AsString;
km=DM->mod_bilet->FieldByName("����������")->AsString;
st=DM->mod_bilet->FieldByName("���������")->AsString;

AnsiString bar;
bar=pas+"  "+napr+"  "+tr+"  "+tv+"  "+nv+"  "+pl+"  "+po+"  "+pp+"  "+da+"  "+va+"  "+dp+"  "+vp+"  "+ss+"  "+km+"  "+st;
Form8->Barcode2D_QRCode1->Barcode=bar;
Form8->Image1->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::BitBtn1Click(TObject *Sender)
{
Graphics::TBitmap*   gBitmap = new Graphics::TBitmap;
gBitmap=Form8->Image1->Picture->Bitmap;
gBitmap->SaveToFile("1.bmp");




vVarApp=CreateOleObject("Word.Application");
vVarApp.OlePropertySet("Visible",true);
vVarDocs=vVarApp.OlePropertyGet("Documents");



vVarDocs.OleProcedure("Add");

vVarDoc=vVarDocs.OleFunction("Item",1);

//��������� ����������
vVarDoc.OlePropertyGet("PageSetup").OlePropertySet("Orientation",1);
vVarParagraphs=vVarDoc.OlePropertyGet("Paragraphs");

 AnsiString str;
str = "\t\t��������������� �����:\t\t";
vVarParagraphs.OleProcedure("Add");
vVarParagraph=vVarParagraphs.OleFunction("Item",1);
vVarParagraph.OlePropertyGet("Range").OlePropertySet("Text",str.c_str());
vVarParagraph.OlePropertySet("Alignment",1);

vVarApp.OlePropertyGet("Options").
        OlePropertySet("CheckGrammarAsYouType",false);
vVarApp.OlePropertyGet("Options").
        OlePropertySet("CheckGrammarWithSpelling",false);


vVarParagraphs.OleProcedure("Add");
vVarParagraph=vVarParagraphs.OleFunction("Item",2);
vVarRange = vVarParagraph.OlePropertyGet("Range");
vVarRange = vVarParagraph.OlePropertyGet("Range");
vVarParagraph.OlePropertySet("Alignment",1);
v=vVarParagraph.OlePropertyGet("Range").
                OlePropertyGet("Font");
v.OlePropertySet("Size",8);
vVarDoc.OlePropertyGet("Tables").OleProcedure("Add", vVarRange, 4, 14,1,1);
vVarTable=vVarDoc.OlePropertyGet("Tables").OleFunction("Item",1);
//���� �� ������
vVarTable.OlePropertyGet("Rows").OlePropertySet("Alignment",2);
//�� ������ ����
vVarTable.OleFunction("AutoFitBehavior",1);

vVarApp.OlePropertyGet("ActiveWindow").
        OlePropertyGet("View").
        OlePropertySet("TableGridlines",false);

        vVarTable.OleFunction("AutoFormat",25);

        vVarCell=vVarTable.OleFunction("Cell",1,1);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","��������");

        vVarCell=vVarTable.OleFunction("Cell",1,2);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","�����������");

        vVarCell=vVarTable.OleFunction("Cell",1,3);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","�����");

        vVarCell=vVarTable.OleFunction("Cell",1,4);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","�����");

        vVarCell=vVarTable.OleFunction("Cell",1,5);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","�����");

        vVarCell=vVarTable.OleFunction("Cell",1,6);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","�����");

        vVarCell=vVarTable.OleFunction("Cell",1,7);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","����");

        vVarCell=vVarTable.OleFunction("Cell",1,8);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","����");

        vVarCell=vVarTable.OleFunction("Cell",1,9);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","����");

        vVarCell=vVarTable.OleFunction("Cell",1,10);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","�����");

        vVarCell=vVarTable.OleFunction("Cell",1,11);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","����");

        vVarCell=vVarTable.OleFunction("Cell",1,12);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","�����");

        vVarCell=vVarTable.OleFunction("Cell",1,13);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","��");

        vVarCell=vVarTable.OleFunction("Cell",1,14);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","���������");


         vVarCell=vVarTable.OleFunction("Cell",3,1);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",pas.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,2);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",napr.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,3);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",tr.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,4);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",tv.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,5);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",nv.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,6);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",pl.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,7);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",po.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,8);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",pp.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,9);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",da.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,10);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",va.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,11);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",dp.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,12);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",vp.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,13);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",km.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,14);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",st.c_str());

vVarParagraphs.OleProcedure("Add");
vVarParagraph=vVarParagraphs.OleFunction("Item",3);
vVarDoc.OlePropertyGet("Shapes").OleProcedure("AddPicture", (ExtractFilePath(Application->ExeName)+"1.bmp").c_str(), false, true, 0, 0);
vVarParagraph.OlePropertySet("Alignment",2);

DeleteFile("1.bmp");

}
//---------------------------------------------------------------------------

void __fastcall TForm8::ComboBox1Change(TObject *Sender)
{
        ComboBox1->ItemIndex =ComboBox1->Items->IndexOf(ComboBox1->Text);

  if (ComboBox1->Text.Length()==0)
        {
      DM->mod_bilet->Filter = "";
      DM->mod_bilet->Filtered = false;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm8::ComboBox1Select(TObject *Sender)
{
         if (ComboBox1->Text.Length()!=0)
        {
                TLocateOptions Options;
                Options << loPartialKey << loCaseInsensitive;
                DM->sql_filter_pas->Locate("�������",ComboBox1->Text, Options);
        }
        
        if (ComboBox1->Text.Length()>0)
        {
                DM->mod_bilet->Filtered = false;
                DM->mod_bilet->Filter = "���_��� = " + DM->sql_filter_pas->FieldByName("���_���")->AsString;
                DM->mod_bilet->Filtered = true;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
Resize = False;        
}
//---------------------------------------------------------------------------

