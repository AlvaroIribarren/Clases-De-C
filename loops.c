#include <stdio.h>
#include <stdbool.h>

#define SIZE 11


int main() {
    int array[SIZE];

    //Inicializacion de indice
    //Condicion de corte
    //Actualizacion de indice
    for (int i = 0; i < SIZE; i++){
        array[i] = i;
    }

//    for (int i=0; i < SIZE; i++){
//        printf("%d\n", i);
//    }

    for (int i = 0; i < SIZE; i++){
        printf("En el índice %d tengo el valor: %d\n", i, array[i]);
    }

    //La variable iteradora depende de su valor previo y de a cuanto se acumulador por iteración.
    //Suma:
    //a = b significa a "a" le asigno el valor de "b".
    int acumulador = 0;   //BIEN PAPA BIEN
    for (int i = 0; i < SIZE; i++) {
        int numeroActual = array[i];
        acumulador += numeroActual;
    }
    printf("Suma: %d\n", acumulador);
    // array[i] es igual al valor en la posicion i del arreglo, o sea array[4] es
    // el valor en el indice 4 del array.
    return 0;
}