/*
RESUMO — PRECEDÊNCIA, ASSOCIATIVIDADE E OPERADOR TERNÁRIO EM C

1) PRECEDÊNCIA
Precedência é a ordem de prioridade entre operadores dentro de uma expressão.

Exemplo:
int x = 2 + 3 * 4;

Primeiro acontece:
3 * 4 = 12

Depois:
2 + 12 = 14

Logo:
x = 14

Ou seja:
multiplicação tem precedência maior que adição.

Regra simples:
- operador com maior precedência é resolvido primeiro
- parênteses mudam a ordem e têm prioridade máxima

Exemplo:
int x = (2 + 3) * 4;   // x = 20

--------------------------------------------------

2) ASSOCIATIVIDADE
Associatividade define para que lado a expressão é resolvida
quando os operadores têm a MESMA precedência.

Pode ser:
- à esquerda
- à direita

Exemplo com associatividade à esquerda:
int x = 10 - 3 - 2;

Como a subtração tem associatividade à esquerda:
10 - 3 = 7
7 - 2 = 5

Logo:
x = 5

Se fosse da direita:
10 - (3 - 2) = 9
mas NÃO é isso que acontece.

--------------------------------------------------

3) MAIORIA DOS OPERADORES É ASSOCIATIVA À ESQUERDA
Exemplos:
- *, /, %
- +, -
- <, <=, >, >=
- ==, !=
- &&
- ||

Exemplo:
int x = 20 / 5 * 2;

Como / e * têm mesma precedência e associatividade à esquerda:
20 / 5 = 4
4 * 2 = 8

--------------------------------------------------

4) OPERADORES UNÁRIOS E ATRIBUIÇÃO: ASSOCIATIVIDADE À DIREITA

4.1) Operadores unários
São operadores que atuam sobre UM único operando.

Exemplos:
++x
--x
+x
-x
!x
(tipo)x

Eles têm associatividade à direita quando aparecem ENCADEADOS.

Exemplo:
int x = 0;
int y = !-x;

Resolução da direita para a esquerda:
primeiro: -x
depois: !resultado

Outro exemplo:
int a = 5;
int b = - + a;

A leitura é da direita para a esquerda:
+a
depois -resultado

Mas, para o seu nível, a principal ideia é:
em expressões com operadores unários encadeados, a leitura vai da direita para a esquerda.

4.2) Atribuição
O operador = também tem associatividade à direita.

Exemplo:
int a, b, c;
a = b = c = 5;

A leitura correta é:
c = 5
b = c
a = b

Resultado final:
a = 5
b = 5
c = 5

Ou seja:
a atribuição vai da direita para a esquerda.

--------------------------------------------------

5) INCREMENTO E DECREMENTO: O QUE REALMENTE IMPORTA

Os operadores:
x++
++x
x--
--x

são melhor entendidos assim:

- pré-incremento (++x): altera antes, usa depois
- pós-incremento (x++): usa antes, altera depois
- pré-decremento (--x): altera antes, usa depois
- pós-decremento (x--): usa antes, altera depois

Exemplo:
int x = 5;
int y = ++x;

Passos:
x vira 6
y recebe 6

Resultado:
x = 6
y = 6

Exemplo:
int x = 5;
int y = x++;

Passos:
y recebe 5
depois x vira 6

Resultado:
x = 6
y = 5

IMPORTANTE:
Evite expressões como:
x = x++;
x = ++x;
y = x++ + ++x;

Isso confunde muito e não é boa prática para iniciantes.

Observação importante:
Em algumas tabelas, ++ e -- aparecem entre os operadores unários prefixos.
Isso NÃO quer dizer que você deva tratá-los como operadores associativos comuns
em qualquer situação.
Para aprender corretamente, o melhor é pensar no momento da mudança:
- pré: muda antes
- pós: muda depois

--------------------------------------------------

6) ORDEM PRÁTICA DE PRECEDÊNCIA (RESUMO ÚTIL)

Do mais forte para o mais fraco, em forma simplificada:

1. ()
2. ++x, --x, +x, -x, !x, (tipo)x
3. *, /, %
4. +, -
5. <, <=, >, >=
6. ==, !=
7. &&
8. ||
9. ?:
10. =, +=, -=, *=, /=, %=

Se estiver em dúvida:
USE PARÊNTESES.

--------------------------------------------------

7) OPERADOR TERNÁRIO (? :)

O operador ternário é o único operador ternário da linguagem C,
porque trabalha com três partes.

Sintaxe:
condicao ? valor_se_verdadeiro : valor_se_falso

Exemplo:
int x = 10;
int y = 5;
int maior;

maior = (x > y) ? x : y;

Leitura:
- se x > y for verdadeiro, maior recebe x
- senão, maior recebe y

Como 10 > 5 é verdadeiro:
maior = 10

--------------------------------------------------

8) COMO LER O TERNÁRIO PASSO A PASSO

Exemplo:
int idade = 20;
char resultado = (idade >= 18) ? 'A' : 'M';

Leitura:
- a condição é: idade >= 18
- se for verdadeira, resultado recebe 'A'
- se for falsa, resultado recebe 'M'

Como 20 >= 18 é verdadeiro:
resultado = 'A'

--------------------------------------------------

9) O TERNÁRIO É PARECIDO COM IF/ELSE

Ternário:
maior = (x > y) ? x : y;

Equivalente com if/else:
if (x > y)
    maior = x;
else
    maior = y;

--------------------------------------------------

10) QUANDO USAR O TERNÁRIO
Use quando houver:
- uma condição simples
- dois resultados possíveis
- uma atribuição simples

Bom uso:
int maior = (x > y) ? x : y;
int par = (n % 2 == 0) ? 1 : 0;

--------------------------------------------------

11) QUANDO NÃO USAR O TERNÁRIO
Evite quando:
- a lógica ficar grande
- tiver mais de uma ação em cada caso
- o código ficar difícil de ler

Evite algo assim:
resultado = (x > y) ? (a + b * c - d) : (e / f + g - h);

Tecnicamente pode funcionar,
mas pode ficar ruim de entender.

--------------------------------------------------

12) EXEMPLOS DE TREINO

Exemplo 1:
int x = 3;
int y = 7;
int menor = (x < y) ? x : y;

Resultado:
menor = 3

Exemplo 2:
int n = 8;
int r = (n % 2 == 0) ? 100 : 200;

Como 8 % 2 == 0:
r = 100

Exemplo 3:
int a = 5;
int b = 5;
int resp = (a == b) ? 1 : 0;

Resultado:
resp = 1

--------------------------------------------------

13) RESUMO FINAL PARA FIXAR

PRECEDÊNCIA:
decide qual operador é resolvido primeiro

ASSOCIATIVIDADE:
decide para que lado resolver quando a precedência é a mesma

MAIORIA DOS OPERADORES:
associatividade à esquerda

UNÁRIOS E ATRIBUIÇÃO:
associatividade à direita quando encadeados ou quando empatam em precedência

INCREMENTO/DECREMENTO:
para aprender bem, pense assim:
- pré: altera antes
- pós: altera depois

OPERADOR TERNÁRIO:
condicao ? verdadeiro : falso

Use o ternário para decisões curtas e simples.

Regra de ouro:
quando houver dúvida, use parênteses e quebre o raciocínio em passos.
*/
