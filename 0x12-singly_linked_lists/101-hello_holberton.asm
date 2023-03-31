extern printf

section .data
    format db "Hello, Holberton", 10, 0

section .text
    global main

main:
    ; set up stack frame
    push rbp
    mov rbp, rsp
    
    ; call printf function
    mov edi, format
    xor eax, eax
    call printf
    
    ; clean up stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

