//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class TDM : public TDataModule
{
__published:	// IDE-managed Components
        TADOConnection *rail;
        TADOTable *tip_poezda;
        TADOTable *poezd;
        TADOTable *napravlenie;
        TADOTable *punkti;
        TADOTable *bilet;
        TADOTable *pasagir;
        TADOTable *tip_vagona;
        TADOTable *servis;
        TDataSource *DStip_poezda;
        TDataSource *DSpoezd;
        TDataSource *DSnapravlenie;
        TDataSource *DSpunkti;
        TDataSource *DSbilet;
        TDataSource *DSpasagir;
        TDataSource *DStip_vagona;
        TDataSource *DSservis;
        TWideStringField *servisDSDesigner;
        TWideStringField *servis_;
        TWideStringField *servis__;
        TFloatField *servis_2;
        TStringField *servisField;
        TAutoIncField *punkti_;
        TIntegerField *punkti_2;
        TWideStringField *punktiDSDesigner;
        TIntegerField *punktiDSDesigner2;
        TStringField *punktiField;
        TWideStringField *punkti_3;
        TWideStringField *punkti_4;
        TIntegerField *poezd__;
        TIntegerField *poezd_2;
        TIntegerField *poezd__2;
        TIntegerField *poezd__3;
        TIntegerField *poezd__4;
        TIntegerField *poezd__5;
        TIntegerField *poezd__6;
        TIntegerField *poezd__7;
        TIntegerField *poezd__8;
        TStringField *poezdField;
        TIntegerField *poezd_;
        TStringField *poezdField2;
        TADOQuery *sql_poezd_po_napravleniyu;
        TDataSource *DSpoezd_po_napr;
        TADOQuery *sql_servic;
        TDataSource *DSsql_servic;
        TADOQuery *sql_punkti;
        TDataSource *DSsql_punkti;
        TADOTable *vart_km;
        TAutoIncField *pasagir_;
        TWideStringField *pasagirDSDesigner;
        TWideStringField *pasagirDSDesigner2;
        TWideStringField *pasagirDSDesigner3;
        TWideStringField *pasagir_2;
        TIntegerField *pasagir_3;
        TDataSource *DSmod_bilet;
        TADOTable *mod_bilet;
        TAutoIncField *mod_bilet_;
        TIntegerField *mod_bilet_3;
        TIntegerField *mod_bilet_4;
        TIntegerField *mod_bilet_5;
        TIntegerField *mod_biletDSDesigner;
        TDateTimeField *mod_bilet_6;
        TDateTimeField *mod_bilet_8;
        TWideStringField *mod_bilet_10;
        TIntegerField *mod_biletDSDesigner2;
        TBCDField *mod_biletDSDesigner3;
        TStringField *mod_biletField;
        TStringField *mod_bilet_11;
        TStringField *mod_bilet_12;
        TStringField *mod_bilet_13;
        TIntegerField *mod_bilet_2;
        TWideStringField *mod_bilet__;
        TIntegerField *mod_bilet__2;
        TIntegerField *mod_bilet__3;
        TStringField *mod_biletField2;
        TStringField *mod_biletField3;
        TWideStringField *mod_bilet_7;
        TWideStringField *mod_bilet_9;
        TADOQuery *sql_find_punkti;
        TDataSource *DSsql_find_punkti;
        TADOQuery *sql_find_napr;
        TDataSource *DSsql_find_napr;
        TADOQuery *sql_find_train;
        TDataSource *DSsql_find_train;
        TADOQuery *sql_print_ticket;
        TDataSource *DSsql_print_ticket;
        TADOQuery *sql_filter_punkt;
        TAutoIncField *sql_filter_punkt_;
        TWideStringField *sql_filter_punktDSDesigner;
        TADOQuery *sql_filter_tip;
        TADOTable *adm;
        TDataSource *DSAdmin;
        TADOQuery *sql_filter_pas;
private:	// User declarations
public:		// User declarations
        __fastcall TDM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM *DM;
//---------------------------------------------------------------------------
#endif
