/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int a,b,dif;
    
    printf("Leia dois valores numericos quaisquer \n");
    scanf("%d %i", &a,&b);
    if (a==b)
    printf("Os numeros sao iguais \n");
    else if (a>b)
    {
     printf("A diferenca e %d\n",a-b);
    }
    else
    {
        printf("A diferenca e %d\n",b-a);
        
    }
}
    
    


 