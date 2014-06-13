section .data
  message: db 'Hello, world!'
  msglength: equ 12
  buffersize: dw 1024

section .text
  global _start

_start:
  mov ax, message
  mov ds, ax

  mov ah, 9
  mov dx, message
  int 80h
  
  mov ax, 4C00h
  int 80h
