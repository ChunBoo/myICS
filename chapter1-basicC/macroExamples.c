// #include<stdlib.h>
#include <stdio.h>
#define ARCH "x86-64"


// #define A "aaaaaaaaaa"
// #define TEN(A) A A A A A A A A A A
// #define B TEN(A)
// #define C TEN(B)
// #define D TEN(C)
// #define E TEN(D)
// #define G TEN(E)



#define A sys ## tem   
void foo(){
    #if a==b
    printf("yes\n");  //output yes
    #else
    printf("No");
    #endif
}
int main()
{
    // printf("The arch is " ARCH "\n");
    // foo();
    // puts(E);
    A("echo hello");  //system("echo hello");
}