#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //Bloque de Declaraciones
    const double pi = 3.1416;
    int opcion;
    
    //Bloque de instrucciones
    printf("\nCurso: Principios de programacion."); 
    printf("\nGrupo: 1SF-115"); 
    printf("\nIntegrantes: Jose Huertas(2-754-1176), Enrique Fong(4-829-300), William Rush(8-1017-1144)"); 
    printf("\nProfesora: Anna Araba"); 
    printf("\nFecha de entrega: 31/10/2023"); 
    printf("\n\nProblema#2: Algoritmo que calcule e imprima el volumen de un cono, de un cilindro y valores de la linea recta y=2x+1."); 
    printf("\nPrograma: pgcEq0502 - Enrique Fong (4-829-300)"); 
    printf("\nDesarrollado en Visual Studio Code v1.83.1\n"); 

    //Preguntar qué proceso desea realizar
    printf("Seleccione una opcion:\n");
    printf("1. Calcular el volumen de un cono\n");
    printf("2. Calcular el volumen de un cilindro\n");
    printf("3. Calcular los valores de la linea recta y = 2x + 1\n");
    printf("4. Terminar el proceso\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: // Calcular el volumen de un cono
            {
                double radio, altura, volumen_Cono;
                printf("Ingresa el radio del cono: ");
                scanf("%lf", &radio);
                printf("Ingresa la altura del cono: ");
                scanf("%lf", &altura);
                volumen_Cono = (pi * (radio * radio) * altura) / 3;
                printf("El volumen del cono es: %.2lf\n", volumen_Cono);
                break;
            }
        case 2: // Calcular el volumen de un cilindro
            {
                double radio, altura, volumen_Cilindro;
                printf("Ingresa el radio del cilindro: ");
                scanf("%lf", &radio);
                printf("Ingresa la altura del cilindro: ");
                scanf("%lf", &altura);
                volumen_Cilindro = pi * (radio * radio) * altura;
                printf("El volumen del cilindro es: %.2lf\n", volumen_Cilindro);
                break;
            }
        case 3: // Calcular los valores de la línea recta y = 2x + 1
            {
                double n1, n2, x, y;
                printf("Ingresa el primer valor (n1): ");
                scanf("%lf", &n1);
                printf("Ingresa el segundo valor (n2): ");
                scanf("%lf", &n2);
                printf("Valores de la linea recta (y = 2x + 1):\n");
                for (x = n1; x <= n2; x++) {
                    y = 2 * x + 1;
                    printf("y = %.2lf\n", y);
                }
                break;
            }
        case 4:
            {
                break;
            }
        default:
            printf("Opción no válida.\n");
    }
    getch();

    return 0;
}