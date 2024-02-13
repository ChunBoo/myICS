#include<stdlib.h>
#include<stdio.h>


int main()
{
    void *p=NULL;
    int cnt=0;
    while(p=malloc(100*1024*1024))
    {
        cnt++;
    }
    printf("Can allocate at most %d00MB heap.\n",cnt);
}