#include<stdio.h>
int not(int a)
{
    int result;
    result=!a;
    printf("\n%d\n",result);
    return result;
}

int and_two(int a,int b)
{
    int result;
    result=a&b;
    printf("\n%d\n",result);
    return result;
}
int and_three(int a,int b,int c)
{
    int result;
    result=a&b&c;
    printf("\n%d\n",result);
    return result;
}
int or_two(int a,int b)
{
    int result;
    result=a|b;
    printf("\n%d\n",result);
    return result;
}
int or_three(int a,int b,int c)
{
    int result;
    result=a|b|c;
    printf("\n%d\n",result);
    return result;
}

int nor_two(int a,int b)
{
    int result;
    result=!(a|b);
    printf("\n%d\n",result);
    return result;
}
int nor_three(int a,int b,int c)
{

int result;
    result=!(a|b|c);
    printf("\n%d\n",result);
    return result;
}



int nand_two(int a,int b)
{
    int result;
    result=!(a&b);
    printf("\n%d\n",result);
    return result;
}
int nand_three(int a,int b,int c)
{

    int result;
    result=!(a&b&c);
    printf("\n%d\n",result);
    return result;

}
int xor_two(int a,int b)
{
    int result;
    result=((a&(~b))+((~a)&b));
    printf("\n%d\n",result);
    return result;
}
int xor_three(int a,int b,int c)
{
    int result;
    result=((a&b&c) + ((~a)&(~b)&c) + ((~a)&b&(~c)) + (a&(~b)&(~c)));
    printf("\n%d\n",result);
    return result;
}
int xnor(int a,int b)
{
    int result;
    result=((a&b)+((!a)&(!b)));
    printf("\n%d\n",result);
    return result;
}
