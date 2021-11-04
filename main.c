#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void Mmatriz(int dim,int matriz[dim][dim]);
void llenarMatriz(int dim,int matriz[dim][dim]);
void tableroPuntos();
void turnosJugador(int dim, int matriz[dim][dim]);

// Funcion principal
int main(){
    srand(time(NULL));
    int a;
    int dim = 9;
    int matriz[dim][dim];
    llenarMatriz(dim,matriz);
    Mmatriz(dim,matriz);
    tableroPuntos();
    turnosJugador(dim,matriz);
 
    return 0;

}
// Funcion que controla los turnos de los jugadores y sus acciones
void turnosJugador(int dim, int matriz[dim][dim]){
    int turnos = 1;
    int i,j;
    int marca = 0 ;
    do{
        //inicia turno jugador 1
        printf("Turno #%d del Jugador 1\n", turnos);
        printf("Seleccione la fila del primer numero:");
        scanf("%d",&i);
        i--;
        printf("Seleccione la columna del primer numero:");
        scanf("%d",&j);
        j--;
        matriz[i][j] = marca;
        printf("Seleccione la fila del segundo numero:");
        scanf("%d",&i);
        i--;
        printf("Seleccione la columna del segundo numero:");
        scanf("%d",&j);
        j--;
        matriz[i][j] = marca;
        system("clear");
        Mmatriz(dim,matriz);
        //inicia turno jugador 2
        printf("Turno #%d del Jugador 2\n", turnos);
        printf("Seleccione la fila del primer numero:");
        scanf("%d",&i);
        i--;
        printf("Seleccione la columna del primer numero:");
        scanf("%d",&j);
        j--;
        matriz[i][j] = marca;
        printf("Seleccione la fila del segundo numero:");
        scanf("%d",&i);
        i--;
        printf("Seleccione la columna del segundo numero:");
        scanf("%d",&j);
        j--;
        matriz[i][j] = marca;
        system("clear");
        Mmatriz(dim,matriz);
        turnos++;
    } while (turnos <=3);
    
}

//Esta función muestra la matriz.
void Mmatriz(int dim, int matriz[dim][dim]){
    int i,j;
    int f=1;
    printf("\t1.\t2.\t3.\t4.\t5.\t6.\t7.\t8.\t9.\n");
    for (i=0; i<9; i++){
        printf("      %d.", f);
        f++;
        for (j=0; j<9; j++){
            printf("%d\t", matriz[i][j]);
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
void tableroPuntos(){
    int puntosJ1 = 150;
    int puntosJ2 = 350;
    printf("Jugador\tPuntos\n");
    printf("1\t%d\n", puntosJ1);
    printf("2\t%d\n", puntosJ2);

}
