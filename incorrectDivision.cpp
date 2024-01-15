/**
Here's how you get the two's complement of 2:

1. Start with the binary representation of 2: 00000010.
2. Invert all the bits: 11111101.
3. Add one to the result: 11111101 + 1 = 11111110.

In most modern computing systems, all signed integers are stored in two's
complement form because it simplifies the design of arithmetic circuits,
allowing addition and subtraction to be performed with the same hardware and
also making the range of representable numbers symmetric around zero (except for
the fact that there is one more negative number than positive numbers).

For unsigned integers, two's complement is not used because there is no need to
represent negative values; the binary representation is taken at face value.

In the C code snippet you provided:
int a = 0x80000000;
int b = -1;
int c = a / b;

a is initialized with the hexadecimal value 0x80000000, which is the smallest
32-bit signed integer when interpreted as a two's complement integer, equivalent
to -2147483648 in decimal.

b is initialized with -1.

The division a / b is mathematically equivalent to -2147483648 / -1, which
should result in 2147483648. However, 2147483648 is outside the range of a
32-bit signed integer (which ranges from -2147483648 to 2147483647).

This operation results in an integer overflow. In C, signed integer overflow
leads to undefined behavior. Depending on the compiler and the system, the
program may crash, produce a wrong result, or even behave erratically. Another
Codes In the C code snippet you provided: int a = 0x80000000; int b = a / -1;

a is initialized with the hexadecimal value 0x80000000. Assuming int is a 32-bit
signed integer, this value is the binary representation of -2147483648 in two's
complement, which is the minimum value for a 32-bit signed integer.

The expression a / -1 attempts to negate the value of a. Mathematically, this
would result in 2147483648. However, this value cannot be represented in a
32-bit signed integer, as the maximum positive value for a 32-bit signed integer
is 2147483647.

This operation results in signed integer overflow, which is undefined behavior
in C. The actual result of this operation will depend on the behavior of the
specific system and compiler used. Some compilers might issue a warning or an
error, while others might wrap around the result, yielding -2147483648 due to
overflow, or even raise a runtime signal like SIGFPE on platforms that support
signaling such errors.
*/

#include<iostream>
// #include<>
using namespace std;


int foo1()
{
    int a=0x80000000;
    int b=a/-1;
    
    cout<<"a="<<a<<",a/b= "<<b;
}

int foo2()
{
    int a=0x80000000;
    int b=-1;
    int c=a/b;
    int c=-a;
    cout<<"a/b= "<<c;
}

int main()
{
    foo1();
    foo2();
}