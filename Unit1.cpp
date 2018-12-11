//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
          ComboBox1->Items->Add("Иформатика");
          ComboBox1->Items->Add("ООП");
          ComboBox1->Items->Add("РКСЗ");
          ComboBox1->Items->Add("Бд");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DataSource1DataChange(TObject *Sender,
      TField *Field)
{
        Edit1->Text=ADOTable1->FieldCount;
        Edit2->Text=ADOTable1->RecordCount;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
     int i;
        int kol; 
        double sum, sredn; 
        sum=0;
        kol=0;
        for(i=2;i<ADOTable1->FieldCount;i++)
        {  
                sum=sum+ADOTable1->Fields->Fields[i]->AsInteger; 
                kol=kol+1; 
        }   
sredn=sum/kol; 
ShowMessage(ADOTable1->Fields->Fields[1]->AsString+": "+FloatToStr(sredn));   
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        int rows= StrToInt(Edit2->Text);
int sum=0;
float sredn;
if(ComboBox1->Text==""){ShowMessage("Выберите предмет.");}else
if(ComboBox1->ItemIndex==0){
        ADOTable1->First();
        for(int i=1; i<=ADOTable1->RecordCount;i++){
         sum+=ADOTable1->Fields->Fields[2]->AsInteger;
         ADOTable1->Next();
        }
        sredn=float(sum)/rows;
        ShowMessage(ComboBox1->Text+" "+FloatToStr(sredn));
}
else
if(ComboBox1->ItemIndex==1){
  ADOTable1->First();
        for(int i=1; i<=ADOTable1->RecordCount;i++){
         sum+=ADOTable1->Fields->Fields[3]->AsInteger;
         ADOTable1->Next();
        }
        sredn=float(sum)/rows;
        ShowMessage(ComboBox1->Text+" "+FloatToStr(sredn));
}
else
if(ComboBox1->ItemIndex==2){
    ADOTable1->First();
        for(int i=1; i<=ADOTable1->RecordCount;i++){
         sum+=ADOTable1->Fields->Fields[4]->AsInteger;
         ADOTable1->Next();
        }
        sredn=float(sum)/rows;
        ShowMessage(ComboBox1->Text+" "+FloatToStr(sredn));
}
else
if(ComboBox1->ItemIndex==3){
ADOTable1->First();
        for(int i=1; i<=ADOTable1->RecordCount;i++){
         sum+=ADOTable1->Fields->Fields[5]->AsInteger;
         ADOTable1->Next();
        }
        sredn=float(sum)/rows;
        ShowMessage(ComboBox1->Text+" "+FloatToStr(sredn));}        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
if(Sort->ItemIndex==0){
   ADOTable1->Sort="[ФИО] ASC";
  } else
if(Sort->ItemIndex==1){
   ADOTable1->Sort="[Номер зачетки] ASC";
  } else
if(Sort->ItemIndex==2){
   ADOTable1->Sort="[Номер зачетки] DESC";
  }  else{ShowMessage("Выберите тип сортировки");}
         
}
//---------------------------------------------------------------------------
