#include <stdio.h>
void main( ){
    int a = 5, b = 5, c = 5, d = 5;


    // operadores de pré incremento é quando o incremento é feito antes do valor ser utilizado na expressão, antes do print por exemplo 
    printf("pré incremento a: %d\n", ++a);
    //a = a + 1; //a = 6 já antes do print

    // operadores de pós incremento é quando o incremento é feito depois do valor ser utilizado na expressão, depois do print por exemplo
    printf("pós incremento b: %d\n", b++);
    //b = b + 1; //b = 6 so depois do print

    printf("valores finais %d %d \n", a, b);
    
    // pre decremento é quando o decremento é feito antes do valor ser utilizado na expressão, antes do print por exemplo
    printf("pré decremento c: %d\n", --c);
    //c = c - 1; //c = 4 já antes do print

    // pós decremento é quando o decremento é feito depois do valor ser utilizado na expressão, depois do print por exemplo
    printf("pós decremento d: %d\n", d--);
    //d = d - 1; //d = 4 so depois do print

    printf("valores finais %d %d \n", c, d);








}