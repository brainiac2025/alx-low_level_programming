# 0x00-hello_world directory each file details
## Prerequisites
Make sure you have GCC (GNU Compiler Collection) installed on your system before using this script.

## How to Use
1. Open the `compile_script.sh` file in a text editor.
2. Set the `$CFILE` variable to the name of your C source file.
3. Open a terminal and navigate to the directory containing the `compile_script.sh` and your C source file.
4. Run the script by executing the following command:

# 0-preprocessor script

## Description

Thde script invokes the GCC compiler with the -E flag. The -E flag tells GCC to perform only the preprocessing stage on the C source file specified by the $CFILE variable.

# 1-compiler Script

## Description

The script line is invoking the GNU Compiler Collection (GCC) with the -c flag. The purpose of this line is to compile a C source file represented by the $CFILE variable. The -c flag tells GCC to compile the source file into an object file, which can be later linked to create an executable.

This will create an object file named `my_program.o` in the same directory.

# 2-Assembler script

## Description

The script line invokes the GNU Compiler Collection (GCC) with the -S flag. The purpose of this script is to generate assembly code from the provided C source file represented by the $CFILE variable.

# 100-intel

## Description

This line is the main command in the script. It invokes the GCC compiler with the following options:

-S: This flag tells GCC to stop after the compilation phase, generating the assembly code instead of creating an object file or an executable. The output will have a .s extension.
-masm=intel: This option specifies that the assembly code should be generated using the Intel syntax 

# 3-name

## Description

The script line. It invokes the GNU Compiler Collection (GCC) to compile the C source file specified by the $CFILE variable and create an executable named cisfun


# 4-puts

## Description

This C code is a simple program that prints a message to the console. using the puts() function inside the <stdio.h> header

# 5-printf

## Description

This C code is a simple program that prints a message to the console using the printf() function insode the <stdio.h> header

# 6-size

## Description

This C program is designed to display the sizes of various data types in bytes. using the prinf() function to display them.
The actual sizes will vary depending on the specific system and compiler being used.

When you run this program, it will print the sizes of the data types to the console, providing information about how many bytes each data type occupies in memory.

# 101-quote

## Description

This C program is designed to display a specific message on the console using the fputs() function. 





