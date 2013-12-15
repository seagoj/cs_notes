;   Sample
INCLUDE Irvine32.inc
.data
initial BYTE ?
prompt  BYTE "Sample Text"
animal  sword ?
dog     sword 5
cat     sword -2
rodent  sdword ?
rat     sdword 3
mouse   sdword -1
.code
main    PROC
        mov al,initial
        mov initial,al
        mov ah,initial
        mov bl,initial
        mov initial,bl
        mov ax,dog
        mov animal,ax
        mov bx,dog
        mov animal,bx
        mov eax,rat
        mov rodent,eax
        mov ebx,rat
        mov rodent,ebx
        mov ecx,rat
        mov rodent,ecx
        mov edx,rat
        mov rodent,edx
        add eax,1
        add ebx,2
        mov ecx,3
        mov edx,4
        add eax,mouse
        add ebx,mouse
        add mouse,eax
        add mouse,ebx
        add mouse,1
        exit
main    ENDP
        END main

