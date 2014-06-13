// Author:  Jeremy pSeago
// Class:   CSC260
// Program: 3
// Date:    10/14/04
// Unfinished

#ifndef c260p3UnitH
#define c260p3UnitH

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

class TForm1: public TForm1
{
    __published: //IDE Managed Components
        TButton *Create;
        TButton *Insert;
        TButton *FindMaxHp;
        TButton *FindMinHP;
        TButton *Traverse;
        TButton *Destroy;
        TLabel *Label1;
        TEdit *InsertHpEditBox;
        TEdit *FindHpEditBox;
        TEdit *FindMaxHpEditBox;
        TEdit *FindMinHpEditBox;
        TEdit *InsertAutoEditBox;
        TEdit *FindAutoEditBox;
        TEdit *FindMaxAutoEditBox;
        TEdit *FindMinAutoEditBox;
        TMemo *TraverseHpMemoBox;
        TMemo *TraverseAutoMemoBox;
        TMemo *debugMemoBox;
        void __fastcall CreateClick(TObject *Sender);
        void __fastcall InsertClick(TObject *Sender);
        void __fastcall TraverseClick(TObject *Sender);
        void __fastcall DestroyClick(TObject *Sender);
        void __fastcall FindHpClick(TObject *Sender);
        void __fastcall FindMaxHpClick(TObject *Sender);
        void __fastcall FindMinHpClick(TObject *Sender);
    __private:  //User declarations
        typedef char String12[12];
        struct datatype
        {
            String12 autoname;
            int hp;
        };
        struct node;
        typedef node *pointer;
        struct node
        {
            pointer left;
            datatype info;
            pointer right;
        };
        pointer root;
    __public:   //User declarations
        __fastcall TForm1(TComponent* Owner);
};

extern PACKAGE TForm1 *Form1;
#endif

void insert(datatype data, pointer *tmp)
{
    if(tmp == NULL)
    {
        tmp = new node;
        tmp->left = NULL:
        tmp->right = NULL:
        tmp->info = data;
    } else {
        if(data.hp > tmp->info.hp)
            insert(data, tmp->left);
        else if (data.hp < tmp->info.hp)
            insert(data, tmp->right);
    }
}
void traverse(pointer *tmp)
{
    if(tmp != NULL)
        if(tmp->left==NULL)
        {
            TraverseHpMemoBox->Lines->Add(tmp->info.hp);
            TraverseAutoMemoBox->Lines->Add(tmp->info.autoname);
            if(tmp->right) != NULL)
                traverse(tmp->right);
        } else {
            traverse(tmp->left);
            TraverseHpMemoBox->Lines->Add(tmp->info.hp);
            TraverseAutoMemoBox->Lines->Add(tmp->info.autoname);
            traverse(tmp->right);
        }
}
pointer findHp(int data, pointer *tmp)
{
    if(tmp != NULL)
        if(data == tmp->info.hp)
            return tmp;
        else if(data > tmp->info.hp)
            findHp(data, tmp->left);
        else if(data < tmp->info.hp)
            findHp(data, tmp->right);
        else return tmp;
}
/*
void findMax(pointer *tmp)
{
    if(tmp->left != NULL)
        findMax(tmp->left);
    else 

}
*/
''
