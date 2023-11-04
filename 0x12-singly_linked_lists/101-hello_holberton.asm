section .data
    hello db "Hello, Holberton",10,0   ; The string to print (10 is the newline character)
    format db "%s",0                 ; Format specifier for printf (null-terminated)

section .text
    global main

extern printf                 ; Déclarez la fonction printf comme externe

main:
    ; Call printf with our string
    push rdi                ; Preserve RDI (callee-saved register)
    push rsi                ; Preserve RSI (callee-saved register)
    lea rdi, [format]       ; Load the format specifier address
    lea rsi, [hello]        ; Load the string address
    call printf             ; Call printf
    pop rsi                 ; Restore RSI
    pop rdi                 ; Restore RDI
    ret
