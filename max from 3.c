#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    
    if (a>b && a>c)
    {
        printf("A is max");
    }
    else if (b>a && b>c)
    {
        printf("B is max");
    }
    
    else 
    {
        printf("C is max");
    }
    
    return 0;
       
}