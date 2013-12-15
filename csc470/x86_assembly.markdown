; comment

; swap
mov eax,dog
xchg eax,cat
mov dog,eax

; dog++
inc dog

; dog--
dec dog

; 2's cmplement (negative dog)
dog:                00000101
1's compliment:     11111010 (not dog)
2's compliment:     11111011 (negative dog)

; A = B + C
mov eax,B
imul C
mov A,eax

; A = B / C
mov eax,B
cdq
idiv C
mov A,eax

; A = B % C
mov eax,B
cdq
idiv C
mov A,edx
