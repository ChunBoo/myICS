#include<stdlib.h>
#include<stdio.h>


int main()
{
    int len=5;
    int *p=malloc(len*sizeof(int));
    int *q=p;
    p++;
    // --p;
    free(p); //free() can only free the pointer which point to the original address which returned from malloc
    //below is correct;
    free(q);
    q=NULL;//Should reset this pointer as null, as it contains the valid address after releasing
}