#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


enum gates{ NOT=1, AND, OR, NAND, NOR, XOR, XNOR, QUIT };
int main()
{
int n,choice,a,b,c,result;
printf("\nWelcome!!!\n");
printf("\nLogic Gates Evaluator");
    while(1)
    {
    printf("\n Choose any of the below operations \n");
    printf("\n1. NOT 2. AND 3. OR 4. NAND 5. NOR 6. XOR 7. XNOR 8.EXIT\n");
    scanf("%d", &choice);

    switch(choice)
    {
    case NOT :
             printf("\nEnter the value\n");
             scanf("%d",&a);
             result=not(a);
             break;

    case AND :
              printf("\n 1.Two input AND\n 2.Three input AND\n");
              scanf("%d",&n);
              if(n==1)
              {
                int a,b;
                printf("\nEnter the values\n");
                scanf("%d %d",&a,&b);
                result=and_two(a,b);
              }
              else if(n==2)
              {
               int a,b,c;
               printf("\nEnter the values\n");
               scanf("%d %d %d",&a,&b,&c);
               result=and_three(a,b,c);
              }
              else
              {
               printf("\ninvalid input\n");
              }
              break;

            case OR:
    printf("\n 1.Two input OR\n 2.Three input OR\n");
    scanf("%d",&n);
    if(n==1)
    {
    int a,b;
    printf("\nEnter the values\n");
    scanf("%d %d",&a,&b);
    result=or_two(a,b);
    }
    else if(n==2)
    {
    int a,b,c;
    printf("\nEnter the values\n");
    scanf("%d %d %d",&a,&b,&c);
    result=or_three(a,b,c);
    }
    else
    {
        printf("\ninvalid input\n");
    }
                      break;

            case NAND:
    printf("\n 1.Two input NAND\n 2.Three input NAND\n");
    scanf("%d",&n);
    if(n==1)
    {
    int a,b;
    printf("\nEnter the values\n");
    scanf("%d %d",&a,&b);
    result=nand_two(a,b);
    }
    else if(n==2)
    {
    int a,b,c;
    printf("\nEnter the values\n");
    scanf("%d %d %d",&a,&b,&c);
    result=nand_three(a,b,c);
    }
    else
    {
        printf("\ninvalid input\n");
    }
                      break;

            case NOR:
    printf("\n 1.Two input NOR\n 2.Three input NOR\n");
    scanf("%d",&n);
    if(n==1)
    {
    int a,b;
    printf("\nEnter the values\n");
    scanf("%d %d",&a,&b);
    result=nor_two(a,b);
    }
    else if(n==2)
    {
    int a,b,c;
    printf("\nEnter the values\n");
    scanf("%d %d %d",&a,&b,&c);
    result=nor_three(a,b,c);
    }
    else
    {
        printf("\ninvalid input\n");
    }

                      break;

            case XOR:
    printf("\n 1.Two input XOR\n 2.Three input XOR\n");
    scanf("%d",&n);
    if(n==1)
    {
    int a,b;
    printf("\nEnter the values\n");
    scanf("%d %d",&a,&b);
    result=xor_two(a,b);

    }
    else if(n==2)
    {
    int a,b,c;
    printf("\nEnter the values\n");
    scanf("%d %d %d",&a,&b,&c);
    result=xor_three(a,b,c);
    }
    else
    {
        printf("\ninvalid input\n");
    }
                      break;

            case XNOR:
    printf("\nEnter the values\n");
    scanf("%d%d",&a,&b);
    result=xnor(a,b);
                      break;

            case QUIT:
                      exit(0);
                      break;
            default : system("cls");

    printf("\nYou have entered unavailable option\n");
    printf("\nPlease Enter any one of below available options\n");
        }
    }
    test_main();
}

