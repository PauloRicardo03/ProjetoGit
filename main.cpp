#include<stdio.h>

int main(){
    int a = 0,temp=0;
   unsigned long long  result=1;

   printf("Ola mundo\n");
    printf("Digite um numero entre 0 e 20: ");
    scanf("%d", &a);  
    if (a < 0 || a > 20)
    {
        printf("Numero invalido!\n");
    }
    else
    {
        while (a>0)
        {
            printf("%d\n", a);
            result= result*a;
            a--;
        }
    }
    

    printf("O seu numero fatorado eh: %llu\n", result);
   return 0;
}