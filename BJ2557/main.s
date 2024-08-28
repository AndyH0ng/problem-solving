//
//  Hello World
//  BJ2557
//
//  Created by 홍준우 on 8/29/24.
//

section .data
msg db "Hello World!"

section .text
global main

main:
mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, 12
syscall
