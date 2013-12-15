; name:         Jeremy Seago
; class:        csc 470
; program:      one
; description: Intel Assembly Language implementation of a Simplified Instructional Computer (SIC) one-pass assember.

; c470d1.txt
;SAMPLE  START   4       START OF PROGRAM
;DOG     WORD    5       # OF DOGS
;CAT     WORD    7       # OF CATS
;ANIMAL  RESW    1       # OF ANIMALS
;*
;FIRST   LDA     DOG     LOAD DOG
;        ADD     CAT     ADD CAT
;        STA     ANIMAL  STORE IN ANIMAL
;        RSUB
;LAST    END     FIRST   END OF PROGRAM

; PSEUDO C++
:infile.open("a:c470d1.txt");
:if error
:   cout>>"Error: Cannot open file."<<endl;
;else
;{
:   // input buffer here (1000 chars)
;   // output heading
;   cout<<"ADDRESS OBJECT ERROR SYMBOL OPCODE OPERAND COMMENTS";
;   cout<<endl<<endl;
;   do
;   {
;       // input symbol, opcode, operand, and comments from buffer into inbuf (52 chars)
;       infile>inbuf;
;       // output 30 spaces, symbol, operand and comments (82 chars)
;       cout<<outbuf
;   } while opcode != "End       ";
;}
;infile.close();

INCLUDE Irvine32.inc

.data                                                                               ;variable dictionary
buffer  BYTE 1000 dup(?)                                                            ;buffer
bsize   =($-buffer)                                                                 ;buffer size
outbuf  BYTE 82 dup(' '),0                                                          ;output buffer
inbuf   =(outbuf+30)                                                                ;input buffer
symbol  =(inbuf+0)                                                                  ;symbol value of current row
opcode  =(inbuf+10)                                                                 ;opcode value of current row
operand =(inbuf+20)                                                                 ;operand value of current row
endcode BYTE 'END       '                                                           ;endcode value of current row
errmsg  BYTE "SIC Error: Cannot open file.",0dh,0ah0                                ;error message if Createfile fails
fname   BYTE "c470d1.txt",0                                                         ;file name
fhandle DWORD ?                                                                     ;file handle
bcount  DWORD ?                                                                     ;?
blank10 BYTE 10 dup(' '),0                                                          ;string of 10 blanks
heading BYTE 'ADDRESS OBJECT ERROR SYMBOL OPCODE OPERAND COMMENTS',0dh,0ah,0ah,0    ;heading string

;**MACROS**
cmpstring macro string1,string2,num
    push ecx                ;store register values
    push esi
    push edi                ;set counter to length of strings
    cld
    mov ecx,num
    mov esi,offset string1  ;move strings into esi and edi
    mov edi,offset string2
    repe cmpsb              ;compare esi to edi
    pop edi                 ;restore original values
    pop esi
    pop ecx
    endm
movto macro string2,num
    push ecx                ;store register values
    push edi
    cld                     ;clear direction flag
    mov ecx,num             ;set counter to number of characters per line
    mov edi,offset string2  ;move line into edi 1 char at a time
    rep movsb
    pop edi                 ;restore register values
    pop ecx
    endm

;**CODE**
.code
main    PROC
        ;Create file for reading
        INVOKE Createfile, ADDR fname, GENERIC_READ, DO_NOT_SHARE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0
        mov fhandle,eax     ; set file handle
        .if eax == INVALID_HANDLE_VALUE                             ;if Createfile fails
        mov edx,offset errmsg                                       ;output errmsg
        call writestring
        .else
        mov edx,offset heading                                      ;output heading
        call writestring
        INVOKE ReadFile,fhandle,ADDR buffer,1000,ADDR bcount,0      ;read from file put into buffer
        mov esi, offset buffer                                      ;load buffer as string source
        .repeat                                                     ;repeat until opcode == endcode
        movto inbuf,52                                              ;extract line from file
        mov edx,offset outbuf                                       ;output outbuf
        call writestring
        cmpstring opcode, endcode, 10                               ;check to see if opcode == endcode
        .until ZERO?
        .endif
        INVOKE CloseHandle,fhandle                                  ;close file
        INVOKE ExitProcess,0                                        ;close process
main    endp
        END main
        



