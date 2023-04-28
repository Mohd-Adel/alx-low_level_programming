extern printf

SECTION .text
global main

main:
push rbp

mov edi, fmt
mov esi, msg
mov eax, 0
call printf

mov eax, 0
ret

SECTION .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0
