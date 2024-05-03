// #include<stdlib.h>
#include <stdio.h>
#define ARCH "x86-64"


#define A "aaaaaaaaaa"
#define TEN(A) A A A A A A A A A A
#define B TEN(A)
#define C TEN(B)
#define D TEN(C)
#define E TEN(D)
#define G TEN(E)

void foo(){
    #if a==b
    printf("yes\n");
    #else
    printf("No");
    #endif
}
int main()
{
    // printf("The arch is " ARCH "\n");
    // foo();
    puts(E);
}