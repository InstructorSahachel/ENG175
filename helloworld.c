#include <stdio.h> //header file provides you access to input/output functions (printf scanf)

/*
    This is a multiple line comment,
    You can write as much as much as you want in in between the
    this block
*/
int main(void)
{
    // single line comments
    // Variable types
    int x = 1;       // int can store integers values
    int X;           // Defining variable is case sensitive
    double _x = 1.5; // you can name a variable starting with an underscode
    double y = 0.5;  // double can store decimals
    char c = 's';    // char data type can store single characters

    // invalid varaible naming
    // int 12var;

    printf("the value of is x: %d\n", x);
    printf("the value of is X: %d\n", X);
    printf("the value of is _x: %f\n", _x);
    scanf("%d", &X);
    printf("\nthe value of is X: %d\n", X);
    // printf("the value of is c: %c\n", c);

    return 0;
}

// bugs ->  is an unexpected problem with software or hardware
// debugger -> A debugger is a software tool used by developers to test and debug programs during the development process.

// Source code -> compiler -> Assembler -> Object code -> Linker -> Executable file -> Loader
// Compiler -> A compiler is a software tool that translates source code written in a high-level programming language
//             into machine code or executable code that can be understood and executed by a computer.
// Assembler -> A Software that converts an assembly language code to machine code
// Object Code -> generally refers to the output, a compiled file, which is produced when the Source Code is compiled with a C compiler
// linker   -> Linker is a program in a system which helps to link object modules of a program into a single object file.
// Executable file -> Output file produced by the linker
// Loader ->  It is special program that takes input of executable files from linker, loads it to main memory, and prepares this code for execution by computer.