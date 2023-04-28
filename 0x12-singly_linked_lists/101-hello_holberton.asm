extern printf

section .text
global main

main:
push rbp

mov rdi, var_fmt
mov rsi, var_msg
mov rax, 0
call printf

pop rbp

mov rax, 0
ret

section .data
var_msg: db "Hello, Holberton", 0
var_fmt: db "%s", 10, 0
