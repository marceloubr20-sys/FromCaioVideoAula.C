#include <stdio.h>

void main() {
    float b = 3.9;
    int i = b;
    int c = 3;
    float d = c; 

    printf("Primeiro print: %i\n", i); // implicit conversion, conversão implícita de float para int
    printf("Segundo print: %i\n", (int)b); // casting, forçando a conversão de float para int
    printf("Terceiro print: %f\n", (float)c); // explicit conversion, conversão explícita de int para float
    printf("Quarto print: %f\n", d); // implicit conversion, conversão implícita de int para float
}