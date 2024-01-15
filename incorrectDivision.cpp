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