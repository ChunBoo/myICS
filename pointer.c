

#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr=(&a+1);  //ptr-a== sizeof(int)*5
    printf("%d,%d\n",*(a+1),*(ptr-1));  //output 2,5
    printf("%p \n",a);  //0xFE00
    printf("%p \n",&a); //0xFE00
    printf("%p \n",a+1); //0xFE04
    printf("%p \n",&a+1); //0xFE14
}