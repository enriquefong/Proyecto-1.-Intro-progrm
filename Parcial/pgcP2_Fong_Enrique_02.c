#include <stdio.h>

int main (){
    //Bloque declarativo de Constantes
    const int max_Personascarros = 5;
    const int max_Personasbusesfonge = 60;
    const int max_Personasmotosfonge = 2;   

    //Bloque declarativo de variables
    int tipo_Transportefonge, cantidad_Personasfonge;
    int total_Carrosfonge = 0;
    int total_Busesfonge = 0;
    int total_Motosfonge = 0;
    int total_Personascarrosfonge = 0;
    int total_Personasbusesfonge = 0;
    int total_Personasmotosfonge = 0;
    float promedio_Carrosfonge, promedio_Busesfonge, promedio_Motosfonge;
    
    //Bloque de Instrucciones
    printf("\n Curso: Principios de programacion."); 
    printf("\n Grupo: 1SF-115"); 
    printf("\n Fecha: 26/10/2023"); 
    printf("\n Programa: pgcP2_Fong_Enrique_02 - Enrique Fong (4-829-300)"); 
    printf("\n Problema 02\n"); 

    while (1) {
        printf("\nIngrese el tipo de transporte (1: Carro - 2: Bus - 3: Moto - 0: Acabar\n): ");
        scanf("%d", &tipo_Transportefonge);

        if (tipo_Transportefonge == 0) { //Se termina el proceso
            break;
        }
        printf("\nIngrese la cantidad de personas: ");
        scanf("%d", &cantidad_Personasfonge);

        if (tipo_Transportefonge == 1) {  //Si entra carro
            total_Carrosfonge++;
            if (max_Personascarros >= cantidad_Personasfonge)
            {
            total_Personascarrosfonge += cantidad_Personasfonge;
            }
            else {
                printf ("La cantidad de pasajeros supera el maximo permitido\n");
            }
        } 
        else if (tipo_Transportefonge == 2) {  //Si entra bus
            total_Busesfonge++;
            if (max_Personasbusesfonge >= cantidad_Personasfonge)
            {
                total_Personasbusesfonge += cantidad_Personasfonge;
            }
            else {
                printf ("La cantidad de pasajeros supera el maximo permitido\n");
            }
        } 
        else if (tipo_Transportefonge == 3) {  //Si entra moto
            total_Motosfonge++;
            if (max_Personasmotosfonge >= cantidad_Personasfonge)
            {
                total_Personasmotosfonge += cantidad_Personasfonge;
            }
            else {
                printf ("La cantidad de pasajeros supera el maximo permitido\n");
            }
          
        }
    }

    //Calculación de promedios
    promedio_Carrosfonge = (float) total_Personascarrosfonge / total_Carrosfonge;
    promedio_Busesfonge = (float) total_Personasbusesfonge / total_Busesfonge;
    promedio_Motosfonge = (float) total_Personasmotosfonge / total_Motosfonge;
    
    //Salidas
    printf("total de Carros: %d\n", total_Carrosfonge);
    printf("total de Buses: %d\n", total_Busesfonge);
    printf("total de Motos: %d\n", total_Motosfonge);
    printf("Promedio de Personas en Carros: %.2f\n", promedio_Carrosfonge);
    printf("Promedio de Personas en Buses: %.2f\n",promedio_Busesfonge);
    printf("Promedio de Personas en Motos: %.2f\n", promedio_Motosfonge);

    return 0;
}
