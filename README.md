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
 - `code.s` -> this is the assembly source generate using *GNU-GCC* copiler
