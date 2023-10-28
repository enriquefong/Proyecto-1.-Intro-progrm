#include <stdio.h>
#include <math.h>

int main() {
    //Bloque de Declaraciones
    float a, b, c, discriminante = 0, x1 = 0, x2 = 0;
    int terminar;
    
    //Bloque de instrucciones
    printf("\nCurso: Principios de programacion."); 
    printf("\nGrupo: 1SF-115"); 
    printf("\nIntegrantes: Jose Huertas(2-754-1176), Enrique Fong(4-829-300), William Rush(8-1017-1144)"); 
    printf("\nProfesora: Anna Araba"); 
    printf("\nFecha de entrega: 31/10/2023"); 
    printf("\n\nProblema#1: Calcular las soluciones de la formula cuadratica."); 
    printf("\nPrograma: FormulaCuadratica - Enrique Fong (4-829-300)"); 
    printf("\nDesarrollado en Visual Studio Code v1.83.1\n"); 

    do
    {
    printf("\nIngrese los coeficientes de la ecuacion cuadratica:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    // Calcula el discriminante
    discriminante = b * b - 4 * a * c;
     // Comprueba el valor del discriminante
     if (discriminante > 0) {
        // Dos soluciones reales distintas
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("\nLas respuestas son x1 = %.2f y x2 = %.2f", x1, x2);
    } else if (discriminante == 0) { 
        // Una solución real
        x1 = -b / (2 * a);
        printf("\nLa x = %.2f", x1);
    } else {
        // No tiene soluciones reales
        printf("\nNo tiene soluciones reales"); 
    }
    printf ("\n¿Desea terminar la ejecucion? (1: Si / 0: No)"); //Consultar si desea terminar la ejecución
    scanf("%d", &terminar);
    } while (terminar == 0);
    return 0;
}

