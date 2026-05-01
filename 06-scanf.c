 #include <stdio.h>

void main() {
    int idade;
    float altura;
    char letra_favorita;

    printf("qual a sua idade?\n");
    scanf("%i", &idade); // & é o operador de endereço, ele pega o endereço de memória da variável idade e armazena o valor digitado pelo usuário nesse endereço de memória.
    printf("qual a sua altura?\n");
    scanf("%f", &altura);
    printf("qual a sua letra favorita?\n");
    scanf(" %c", &letra_favorita); // o espaço antes do %c é para consumir o caractere de nova linha que fica no buffer do teclado 
                                  //após a leitura da altura, evitando que ele seja lido como a letra favorita.  


    printf("A sua Idade eh : %i\n"\
           "A sua Altura eh : %f\n"\
           "A sua letra favorita eh : %c\n"\
           , idade, altura, letra_favorita);
}