section .data
format db "Hello, Holberton", 0
newline db 10, 0

section .text
global main
extern printf

main:
push rbp
mov rbp, rsp

sub rsp, 8    ; Allocate space for the format string argument

lea rdi, [format]
mov rax, 0    ; Set floating-point argument count to 0 (not using any floating-point arguments)
call printf

lea rdi, [newline]
mov rax, 0
call printf

mov rsp, rbp
pop rbp

mov eax, 0    ; Return 0 from main
ret
