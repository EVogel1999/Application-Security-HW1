;; From slide 63 of lecture 4

section .data
	msg db "hello world ASM", 0xa, 0
	len equ $-msg

section .text
	global main

main:
	mov eax, 0x04
	mov ebx, 0x01
	mov ecx, msg
	mov edx, len
	int 0x80

	mov eax, 0x01
	mov ebx, 0x00
	int 0x80
