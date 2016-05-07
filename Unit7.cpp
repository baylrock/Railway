//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit2.h"
#include "Unit8.h"
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



TForm7 *Form7;
int nomer,tip,k1,k2,km;
AnsiString pas1, napr1, tr1, tv1, nv1, pl1, po1, pp1, da1, va1, dp1, vp1, ss1, km1, st1;

//for printing ticket
Variant  vVarApp,vVarDocs,vVarDoc,vVarParagraphs,vVarParagraph,vVarRange,vVarCell,v,vVarTable;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm7::DBLookupComboBox6Exit(TObject *Sender)
{
   DM->sql_poezd_po_napravleniyu->Close();
   DM->sql_poezd_po_napravleniyu->Parameters->ParamByName("qqq")->Value=DBLookupComboBox6->Text;
   DM->sql_poezd_po_napravleniyu->Open();
   tip=DM->sql_poezd_po_napravleniyu->FieldByName("Код_типа_п")->AsInteger;

   DM->sql_punkti->Close();
   DM->sql_punkti->Parameters->ParamByName("eee")->Value=DBLookupComboBox6->KeyValue;
   DM->sql_punkti->Open();

   
}
//---------------------------------------------------------------------------


void __fastcall TForm7::DBLookupComboBox7Exit(TObject *Sender)
{

   DM->sql_poezd_po_napravleniyu->Close();
   DM->sql_poezd_po_napravleniyu->Parameters->ParamByName("qqq")->Value=DBLookupComboBox6->Text;
   DM->sql_poezd_po_napravleniyu->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::DBLookupComboBox2Exit(TObject *Sender)
{
   DM->sql_servic->Close();
   DM->sql_servic->Parameters->ParamByName("www")->Value=DBLookupComboBox2->KeyValue;
   DM->sql_servic->Open();
}
//---------------------------------------------------------------------------


void __fastcall TForm7::DBLookupComboBox3Exit(TObject *Sender)
{
   MaskEdit1->Text = DM->sql_punkti->FieldByName("время_отпр")->AsString;
   k1 =   DM->sql_punkti->FieldByName("километр")->AsInteger;

}
//---------------------------------------------------------------------------


void __fastcall TForm7::DBLookupComboBox4Exit(TObject *Sender)
{
   MaskEdit2->Text = DM->sql_punkti->FieldByName("время_приб")->AsString;
   k2 =   DM->sql_punkti->FieldByName("километр")->AsInteger;
   km=k2-k1;
   DBEdit6->Text = IntToStr(km);

}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn1Click(TObject *Sender)
{
DM->bilet->Append();
GroupBox1->Visible = true;
Form7->Height = 685;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn7Click(TObject *Sender)
{
Graphics::TBitmap*   gBitmap1 = new Graphics::TBitmap;


//робота з МС Ворд
pas1=DBLookupComboBox1->Text;
napr1=DBLookupComboBox6->Text;
tr1=DBLookupComboBox7->Text;
tv1=DBLookupComboBox2->Text;
nv1=DBEdit3->Text;
pl1=DBEdit1->Text;
po1=DBLookupComboBox3->Text;
pp1=DBLookupComboBox4->Text;
da1=DateToStr(DateTimePicker1->Date);
va1=MaskEdit1->Text;
dp1=DateToStr(DateTimePicker2->Date);
vp1=MaskEdit2->Text;
ss1=DBLookupComboBox5->Text;
km1=DBEdit6->Text;
st1=DBEdit7->Text;


AnsiString bar2;
bar2=pas1+"  "+napr1+"  "+tr1+"  "+tv1+"  "+nv1+"  "+pl1+"  "+po1+"  "+pp1+"  "+da1+"  "+va1+"  "+dp1+"  "+vp1+"  "+ss1+"  "+km1+"  "+st1;
Form7->Barcode2D_QRCode1->Barcode=bar2;

gBitmap1=Form7->Image1->Picture->Bitmap;
gBitmap1->SaveToFile("1.bmp");

vVarApp=CreateOleObject("Word.Application");
vVarApp.OlePropertySet("Visible",true);
vVarDocs=vVarApp.OlePropertyGet("Documents");



vVarDocs.OleProcedure("Add");

vVarDoc=vVarDocs.OleFunction("Item",1);

//альбомная ориентация
vVarDoc.OlePropertyGet("PageSetup").OlePropertySet("Orientation",1);
vVarParagraphs=vVarDoc.OlePropertyGet("Paragraphs");

 AnsiString str;
str = "\t\tЖелезнодорожный билет :\t\t";
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
//табл по центру
vVarTable.OlePropertyGet("Rows").OlePropertySet("Alignment",2);
//по ширине окна
vVarTable.OleFunction("AutoFitBehavior",1);

vVarApp.OlePropertyGet("ActiveWindow").
        OlePropertyGet("View").
        OlePropertySet("TableGridlines",false);

        vVarTable.OleFunction("AutoFormat",25);

        vVarCell=vVarTable.OleFunction("Cell",1,1);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Пассажир");

        vVarCell=vVarTable.OleFunction("Cell",1,2);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Направление");

        vVarCell=vVarTable.OleFunction("Cell",1,3);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Поезд");

        vVarCell=vVarTable.OleFunction("Cell",1,4);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Вагон");

        vVarCell=vVarTable.OleFunction("Cell",1,5);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Вагон");

        vVarCell=vVarTable.OleFunction("Cell",1,6);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Место");

        vVarCell=vVarTable.OleFunction("Cell",1,7);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Отпр");

        vVarCell=vVarTable.OleFunction("Cell",1,8);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Приб");

        vVarCell=vVarTable.OleFunction("Cell",1,9);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Отпр");

        vVarCell=vVarTable.OleFunction("Cell",1,10);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Время");

        vVarCell=vVarTable.OleFunction("Cell",1,11);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Приб");

        vVarCell=vVarTable.OleFunction("Cell",1,12);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Время");

        vVarCell=vVarTable.OleFunction("Cell",1,13);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","КМ");

        vVarCell=vVarTable.OleFunction("Cell",1,14);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text","Стоимость");


         vVarCell=vVarTable.OleFunction("Cell",3,1);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",pas1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,2);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",napr1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,3);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",tr1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,4);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",tv1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,5);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",nv1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,6);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",pl1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,7);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",po1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,8);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",pp1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,9);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",da1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,10);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",va1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,11);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",dp1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,12);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",vp1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,13);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",km1.c_str());

        vVarCell=vVarTable.OleFunction("Cell",3,14);
        vVarCell.OleFunction("Select");
        vVarCell.OlePropertyGet("Range").OlePropertySet("Text",st1.c_str());

vVarParagraphs.OleProcedure("Add");
vVarParagraph=vVarParagraphs.OleFunction("Item",3);
vVarDoc.OlePropertyGet("Shapes").OleProcedure("AddPicture", (ExtractFilePath(Application->ExeName)+"1.bmp").c_str(), false, true, 0, 0);
vVarParagraph.OlePropertySet("Alignment",2);

DeleteFile("1.bmp");

}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn2Click(TObject *Sender)
{
DM->bilet->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn3Click(TObject *Sender)
{
DM->bilet->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn4Click(TObject *Sender)
{
DM->bilet->Prior();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn5Click(TObject *Sender)
{
DM->bilet->Last();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::BitBtn6Click(TObject *Sender)
{
DM->bilet->Next();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::DBLookupComboBox5Exit(TObject *Sender)
{
float km=DM->vart_km->FieldByName("Стоим")->AsFloat;
float ss=DM->sql_servic->FieldByName("Стоимость_с")->AsFloat;
float sv=DM->sql_servic->FieldByName("Стоимость_в")->AsFloat;

float x;

x= StrToFloat(Form7->DBEdit6->Text)*km+ss+sv;


Form7->DBEdit7->Text=x;

AnsiString bar1;
bar1=pas1+"  "+napr1+"  "+tr1+"  "+tv1+"  "+nv1+"  "+pl1+"  "+po1+"  "+pp1+"  "+da1+"  "+va1+"  "+dp1+"  "+vp1+"  "+ss1+"  "+km1+"  "+st1;
//ShowMessage(bar1);
Form7->Barcode2D_QRCode1->Barcode=bar1;

}
//---------------------------------------------------------------------------


void __fastcall TForm7::FormCreate(TObject *Sender)
{
GroupBox1->Visible = false;
Form7->Height = 110;
//Form7->Image1->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button2Click(TObject *Sender)
{
Form8->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
Resize = False;        
}
//---------------------------------------------------------------------------

