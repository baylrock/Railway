//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include "pBarcode2D.hpp"
#include "pCompactMatrix.hpp"
#include "pCore2D.hpp"
#include "pSave2D.hpp"
#include "pSave2DBmp.hpp"
#include "pQRCode.hpp"
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TBitBtn *BitBtn1;
        TImage *Image1;
        TBarcode2D_QRCode *Barcode2D_QRCode1;
        TLabel *Label1;
        TComboBox *ComboBox1;
        TImage *Image2;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall DBGrid1CellClick(TColumn *Column);
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall ComboBox1Select(TObject *Sender);
        void __fastcall FormCanResize(TObject *Sender, int &NewWidth,
          int &NewHeight, bool &Resize);
private:	// User declarations
public:		// User declarations
        __fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
