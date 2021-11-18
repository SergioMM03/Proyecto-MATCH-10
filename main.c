#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void Mmatriz(int dim,int matriz[dim][dim], int filas);
void llenarMatriz(int dim,int matriz[dim][dim]);
void tableroPuntos(int puntosJ);
void turnosJugador(int dim, int matriz[dim][dim], int filas,int seleccion1, int seleccion2, int puntosJ);
// Funcion principal
int main(){
    srand(time(NULL));
    int puntosJ = 0;
    int filas = 3;
    int a, seleccion1,seleccion2;
    int dim = 9;
    int matriz[dim][dim];
    llenarMatriz(dim,matriz);
    Mmatriz(dim,matriz,filas);
    turnosJugador(dim,matriz,filas,seleccion1,seleccion2, puntosJ);
 
    return 0;

}
// Funcion que controla los turnos de los jugadores y sus acciones
void turnosJugador(int dim, int matriz[dim][dim], int filas, int seleccion1, int seleccion2, int puntosJ){
    int turnos = 1;
    int i,j;
    int marca1 = 0;
    int marca2 = 0;
    do{
        //inicia turno jugador 1
        printf("Turno #%d del Jugador 1\n", turnos);
        printf("Seleccione la fila del primer numero:");
        scanf("%d",&i);
        i--;
        printf("Seleccione la columna del primer numero:");
        scanf("%d",&j);
        j--;
        seleccion1 = matriz[i][j];
        matriz[i][j] = marca1;
        printf("Seleccione la fila del segundo numero:");
        scanf("%d",&i);
        i--;
        printf("Seleccione la columna del segundo numero:");
        scanf("%d",&j);
        j--;
        seleccion2 = matriz[i][j];
        matriz[i][j] = marca2;
        system("clear");
        Mmatriz(dim,matriz,filas);
        calcularPuntos(seleccion1,seleccion2,puntosJ);
        tableroPuntos(puntosJ);
        printf("%d ", puntosJ);
        turnos++;
        filas++;
    } while (turnos <=3);
    
}

//Esta función muestra la matriz.
void Mmatriz(int dim, int matriz[dim][dim], int filas){
    int i,j;
    int f=1;
    printf("\t 1|\t 2|\t 3|\t 4|\t 5|\t 6|\t 7|\t 8|\t 9|\n");
    for (i=0; i<filas; i++){
        printf("      %d|", f);
        f++;
        for (j=0; j<9; j++){
            printf("|%d|\t", matriz[i][j]);
        }
        
        printf("\n\n\n");
    }
    
}

// Esta función crea los valores aleatorios del tablero.
void llenarMatriz( int dim, int matriz[dim][dim]){
    int i,j;
    for (i=0; i<dim; i++){
        for (j=0; j<dim; j++){
            matriz[i][j]=1+rand() % 9;
        }
    }
}

//Esta funcion muestra los puntos de cada jugador, falta el codigo que determine los puntos.
void tableroPuntos(int puntosJ){
    printf("Jugador\tPuntos\n");
    printf("1\t%d\n", puntosJ);

}

//Esta funcion verifica si hay parejas o sumas 10 disponibles
void comprobarParejasSumas(int dim, int matriz[dim][dim], int filas){
    if (matriz)
}