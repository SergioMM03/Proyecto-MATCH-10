#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void Mmatriz(int dim,int matriz[dim][dim]);
void llenarMatriz(int dim,int matriz[dim][dim]);

int main(){
    srand(time(NULL));
    int a;
    int dim = 9;
    int matriz[dim][dim];
    llenarMatriz(dim,matriz);
    Mmatriz(dim,matriz);
      
    return 0;

}
//Esta función muestra la matriz
void Mmatriz(int dim, int matriz[dim][dim]){
    int i,j;
    for (i=0; i<9; i++){
        for (j=0; j<9; j++){
            printf("%d\t", matriz[i][j]);
        }
         printf("\n\n\n");
    }
}

// Esta función crea los valores aleatorios del tablero
void llenarMatriz( int dim, int matriz[dim][dim]){
    int i,j;
    for (i=0; i<dim; i++){
        for (j=0; j<dim; j++){
            matriz[i][j]=1+rand() % 9;
        }
    }
}
