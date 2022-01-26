#include <stdio.h>

int main(){
    char nombre[100];
    printf("Hola Mundo!\n");
    unsigned int edad;

    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Tu nombre es: %s", nombre); 
    printf("Edad: ");
    scanf("%u", &edad);
    printf("vas a cumplir: %u", edad + 1);

    return 0;
}