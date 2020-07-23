#include <stdio.h>

//Comentario: Todo esto no se compila
int main() {
    //Variables
    int numero;                     //Integer: Esto es un numero entero
    float numeroFlotante;           //Float: Numero con coma
    unsigned int numeroPositivo;    //Unsigned Integer: Numero siempre positivo
    char caracter;                  //Character: Un caracter
    //Entre corchetes la longitud MAXIMA de la palabra.
    char palabra[10];
    //void variable;                //Variable de tipo void (vacio);

    //Ejemplo Char
    //Importante, hay diferencia entre las "" y las ''.
    //Las simples se usan para los caracteres.
    //Las dobles se usan para las palabras.
    char caracter1 = 'a';
    char palabra1[10] = "Lautaro";


    //Ejemplo Numeros
    int numero1 = 5;
    int numero2 = 8;
    int numero3 = numero1 + numero2;
    printf("El resultado de la suma es: %d\n", numero3);
    //Ingreso de numeros
    printf("Ingrese un numero: \n");
    int entero1;
    scanf("%d", &entero1);
    printf("Numero ingresado: %d\n", entero1);
    return 0;
}
