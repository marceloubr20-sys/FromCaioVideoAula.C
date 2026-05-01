#include <stdio.h>

void main( ){
    //caracteres
    char nome_da_variavel = 'a'; // -127 a 127
    unsigned char nome_da_variavel1 = 'b'; // 0 a 255
    printf("imprimindo a variavel do tipo char: %c\n", nome_da_variavel);
    printf("texto %c texto %c\n", nome_da_variavel, nome_da_variavel1);

    //numeros inteiros
    unsigned short int nome_da_variavel2 = 1;
    unsigned int nome_da_variavel3 = 1;
    unsigned long int nome_da_variavel4 = 1;
    printf("u short int: %u\n", nome_da_variavel2 );
    printf("u int: %u\n", nome_da_variavel3 );
    printf("u long int: %lu\n", nome_da_variavel4 );                  
    printf("u short int: %u, u int: %u, u long int: %lu\n", nome_da_variavel2, nome_da_variavel3, nome_da_variavel4); //ou juntar tudo em um printf: printf("%u %u %lu", nome_da_variavel2, nome_da_variavel3, nome_da_variavel4);
    
    //numeros reais
    float nome_da_variavel5 = 1.0f;
    double nome_da_variavel6 = 1.0;
    long double nome_da_variavel7 = 3.9e-23L;
    printf("float: %f\n", nome_da_variavel5);
    printf("double: %f\n", nome_da_variavel6);
    printf("long double: %Le\n", nome_da_variavel7);
    
    //demosntração de uso de uma string
    char nome[] = "Caio";
    printf("impressão de string: %s\n", nome);

    //constante nomeada 
    const int MAX = 100;
    printf("const int: %i\n", MAX);
    
    //impressao de endereços de memória
    int a; 
    printf("endereço de memória da variável a: %x\n", &a);


    
}