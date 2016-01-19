// Author:  Jeremy Seago
// Class:   CSC260
// Program: 3
// Date:    10/14/04

#include <vcl.h>
#pragma hrdstop
#include <c260p3Unit.h>

#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
    {}

void __fastcall TForm1::CreateClick(TObject *Sender)
{
    root = NULL;
}

void __fastcall TForm1::InsertClick(TObject *Sender)
{
    datatype=data;
    data.hp = StrToInt(InsertHpEditBox->Text);
    StrPCopy(data.autoname, InsertAutoEditBox->Text);
    insert(data, root);
}

void __fastcall TForm1::TraverseClick(TObject *Sender)
{
    TraverseHpMemoBox->Lines->Clear();
    TraverseAutoMemoBox->Lines->Clear();

    traverse(root);
}

void __fastcall TForm1::DestroyClick(TObject *Sender)
{
    root = NULL;
}

void __fastcall TForm1::FindHpClick(TObject *Sender)
{
    if(findHp(StrToInt(FindHpEditBox->Text), root)==NULL)
    {
        FindHpEditBox->Text = "Not Found";
        FindAutoEditBox->Text = "Not Found";
    } else
        FindAutoEditBox->Text = findHp(StrToInt(FindHpEditBox->Text), root)->info.autoname;
}

void __fastcall TForm1::FindMinHpClick(TObject *Sender)
{
    findMin(root);
}
