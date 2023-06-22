Integrantes Equipo 5: Robles Ramirez Angel Elias, Bazan Tehuitzil Oscar Damian, Ortiz Martinez Isai Eliezer, Santiago Guerrero Isaac Alejandro, Solares Velasco Arturo.

    #include <stdio.h>
     
    int main ()
     {
    	int a,b,max=0,mcm,producto;         // Variables
        
	    printf ("\nEncontrar el m.c.m. de dos numeros enteros");
	    printf("\nIngrese un numero entero: ");                  // Entrada
	    scanf("%d",&a);
	    printf("\nIngrese el segundo numero: ");                // Entrada
	    scanf("%d",&b);

     producto = a * b;    
        
        if (a>0 && b>0 && a!=b)
	    {
    	    	   if (a>b)
		   {
			int aux=a;
			a=b;		// Poner el numero mas grande primero
			b=aux;
		   }
		
		int i=a;
		
		while (!max && i>=1)   //Ejecutar mientras el numero ingresado sea diferente de 0 y mayor o igual a 1
		{
			if (a % i ==0 && b % i == 0)  //Si ambos modulos se cumplen ejecutar
			{
                            mcm = producto / i ;             //Formula segun algoritmo de Euclides
				printf ("\nEL MCM es %d",mcm);     // Salida
				max=1;
			}
			else
			{
				i--;    // Si no reducir el valor de i hasta que se cumplan las dos condiciones
			}
		}

	     }
	     else
	     {
		if (a==b)
		{
			printf("\nDebes ingresar numeros diferentes");    // Salida
		}
		else
		{
			printf("\nDebes ingresar numeros positivos");     // Salida
		}
	      }
		

	  return 0;
      }

