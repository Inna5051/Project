//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button1;
        TEdit *Edit1;
        TEdit *Edit2;
        TADOConnection *ADOConnection1;
        TADOTable *ADOTable1;
        TDataSource *DataSource1;
        TDBGrid *DBGrid1;
        TDBNavigator *DBNavigator1;
        TComboBox *ComboBox1;
        TButton *Button2;
        TRadioGroup *Sort;
        TButton *Button3;
        void __fastcall DataSource1DataChange(TObject *Sender,
          TField *Field);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
