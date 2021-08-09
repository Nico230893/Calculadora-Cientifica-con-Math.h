#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define Pi 3.141592 //Constante Pi

double funDeg2Rad (int deg); // Prototipo de la funcion que convierte grados en Radianes

int main(void)
{
    int varAbs, varExp, varPotBase, varPotExp, varRaiz, opcion, varDeg;
    double varRad;

    printf("\t\t\t\t\t\tCalculadora con math.h\n\n");//Cartel en pantalla
    do
    {
        printf("\nMenu de opciones:\n\n1)Modulo\t2)e^x\t   3)Potencia \t4)Raiz cuadrada \t  5)seno \t 6)Coseno\t7)tangente\t8)Salir\n\n");//Cartel en pantalla
        printf("Ingrese opcion:\n");//Cartel en pantalla
        scanf("%i", &opcion);//Leo la opcion por teclado
        system("cls");//Ejecutamos el comando el DOS para borrar pantalla
        switch(opcion)
        {
             case 1:// Valor absoluto o modulo
                 printf("Ingrese valor a realizar el valor absoluto o modulo:\n");
                 scanf("%i", &varAbs);//Leo la variable por teclado
                 printf("El valor absoluto o modulo es: %i\n", abs(varAbs));
                 break;

             case 2:// e^x
                 printf("Ingrese el exponente:\n");
                 scanf("%i", &varExp);//Leo la variable por teclado
                 printf("El de e^x es: %3.2f\n", exp(varExp));
                 break;

             case 3: // Potencia
                 printf("Ingrese la base:\n");
                 scanf("%i", &varPotBase);//Leo la variable por teclado
                 printf("Ingrese el exponente:\n");
                 scanf("%i", &varPotExp);//Leo la variable por teclado
                 printf("El valor de %i elevado a la %i es: %3.2f\n", varPotBase, varPotExp, pow(varPotBase,varPotExp));
                 break;

             case  4: // Raiz cuadrada
                 printf("Ingrese el valor a realizarle la raiz cuadrada:\n");
                 scanf("%i", &varRaiz);//Leo la variable por teclado
                 printf("La raiz cuadrada de %i es: %3.2f\n", varRaiz, sqrt(varRaiz));
                 break;

            case 5: //Seno
                 printf("Ingrese el angulo en grados:\n");
                 scanf("%i", &varDeg);//Leo la variable por teclado
                 varRad = funDeg2Rad(varDeg);
                 printf("El seno de %i grados es: %lf\n", varDeg, sin(varRad));//La funcion seno recibe el angulo en radianes
                 break;

            case 6: //Coseno
                 printf("Ingrese el angulo en grados:\n");
                 scanf("%i", &varDeg);//Leo la variable por teclado
                 varRad = funDeg2Rad(varDeg);
                 printf("El coseno de %i grados es: %lf\n", varDeg, cos(varRad));
                 break;

            case 7: //Tangente
                 printf("Ingrese el angulo en grados:\n");
                 scanf("%i", &varDeg);//Leo la variable por teclado
                 varRad = funDeg2Rad(varDeg);
                 printf("La tangente de %i grados es: %lf\n", varDeg, tan(varRad));
                 break;

             case 8:
                 printf("Opcion de salida\n");
                 break;

             default:
                 printf("La opcion es incorrecta.\n");
         }
    }while(opcion != 8);
    return 0;
}

double funDeg2Rad (int deg)// funcion que convierte grados en Radianes
{
    double rad;
    rad = (deg * 2 * Pi) / 360;
    return rad;
}
