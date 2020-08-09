//definicion de archivos de cabecera
#include <stdio.h>
//#include <conio.h> //Esto es por si se corre como ejecutable en windows para evitar que el programa cierre inmediatamente despues de terminear

//definicion de variables y constantes globales
float Temperatura=0, TemperaturaConvertida=0;
int Escala=0;
//definicion de funciones de usuario
float gradoscelsiusyrankine (float Temperaturar, int Escalar);
//definicion he implementación del programa principal main()

int main()
{
    printf ("\nEste programa te permite calcular la conversion de temperatura entre grados:\n Celsius y rankine\n");
    printf("Ingrese el valor de la temperatura:\n");
    scanf("%f",&Temperatura);
    printf("\n Seleciona la escala en que actualmente tienes la temperatura segun su numero: \n\n1) Celsius\n2) rankine");
    scanf("%d",&Escala);
    TemperaturaConvertida=gradoscelsiusyrankine(Temperatura, Escala);
    switch(Escala)
    	{
		case (1) : 
	    printf ("\n Tu entrada fue: %f grados Celsius",Temperatura);
	    printf ("\n\n La conversión nos da: %f grados rankine",TemperaturaConvertida);
	    break;
		case (2) : 
	    printf ("\n Tu entrada fue: %f grados rankine",Temperatura);
	    printf ("\n\n La conversión nos da: %f grados Celsius",TemperaturaConvertida);
	    break;
	    	}
//getch();   //Esto es por si se corre como ejecutable en windows para evitar que el programa cierre inmediatamente despues de terminear
}
//implementación de las funciones de usuario
float gradoscelsiusyrankine (float Temperaturar, int Escalar)
{
		switch(Escalar)
    	{
		case (1) : 
	    return ((Temperaturar*1.8)+491.67);
	    break;
		case (2) : 
	    return ((Temperaturar-491.67)/1.8);
	    break;
	    }
    
}
