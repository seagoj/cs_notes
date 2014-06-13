;Name:  Jeremy Seago
;Class: CSC 470
;Prog:  Five
;Due:   4/22/05

%include 'macros.inc'

section .data
	hello:     db 'Hello world!',10    ; 'Hello world!' plus a linefeed character
	helloLen:  equ $-hello             ; Length of the 'Hello world!' string
	
section .text
	global _start

_start:
	test		;call test macro

	mov eax,1	; The system call for exit (sys_exit)
	mov ebx,0	; Exit with return code of 0 (no error)
	int 80h
