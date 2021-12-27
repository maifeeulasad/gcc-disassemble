# gcc-disassemble

## The program in `.c`(recommended) or `.cpp`

For this purpose, I worte a simple program. Like this:
```
#include<stdio.h>
int main(){
	printf("Hello - Maifee");
	return 0;
}
```

## Compile and Run
*Skipping for now*

## Disassembling
Execute this command:
**`gcc -save-temps -c -o code.o code.c`**
It will/should generate two files
 - `code.i`-> this is the pre-processed source
 - `code.s` -> this is the assembly source generate using *GNU-GCC* compiler

### Pre-processed source
### Assembly source

The code looks something like this:
```
	.file	"code.c"
	.text
	.section	.rodata
.LC0:
	.string	"Hello - Maifee"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
```
