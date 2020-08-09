#include <stdio.h>
int i=0,j=2, a=1000000;
int c=0;
long double residuo(long double num,long double divisor);
int main ()
{
printf("Este programa calcula primos \n");
/*
printf("¿Hasta que numero quieres que encuentre los primos? \n si quieres que lo haga hasta el infinito escribe 0 \n");
scanf("%d",&a);
*/
printf("\n\nSon primos :\n\n");
printf("2,  ");
	for(i=3;i<=a;i=i+2)
	{
		for(j=3;j<=i;j++)
		{
		if(i%j==0)
		c++;
		}
	if(c==1)
	printf("%d,  ",i);
	c=0;
	}

}

long double residuo(long double num,long double divisor){
int r;
r=num/divisor;
num=num-divisor*r;
return num;
}

