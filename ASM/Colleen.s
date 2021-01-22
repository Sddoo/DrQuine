;hfrankly
global _main
extern _printf

section .text

_main:
push rbx
lea rdi, [rel format]
lea rsi, [rel format]
mov rdx, 10
mov rcx, 34
xor rax, rax
call _printf
pop rsi
ret ;hfrankly

format:
db ";hfrankly%2$cglobal _main%2$cextern _printf%2$c%2$csection .text%2$c%2$c_main:%2$cpush rbx%2$clea rdi, [rel format]%2$clea rsi, [rel format]%2$cmov rdx, 10%2$cmov rcx, 34%2$cxor rax, rax%2$ccall _printf%2$cpop rsi%2$cret ;hfrankly%2$c%2$cformat:%2$cdb %3$c%1$s%3$c, 0", 0