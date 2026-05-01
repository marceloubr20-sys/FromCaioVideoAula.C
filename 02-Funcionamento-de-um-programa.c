#include <stdio.h>

void main( ){ 
    int a = 1;
    int b = 2;
    int c = a +
     b;                         // quebrar uma linha não é um problema, 
                               // o código continua funcionando normalmente
                                //  pois o compilador entende que a expressão ainda não foi finalizada, e 
                                // continua lendo as próximas linhas até encontrar o 
                                //ponto e vírgula que indica o final da expressão.
                    
    printf("%d", c);
}