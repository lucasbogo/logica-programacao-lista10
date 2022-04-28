# logica-programacao-lista10-matrizes
Excercícios em **C** para a disciplina de Logica de programação (IFPR) | **MATRIZES**
<br>
<br>

1. Faça um programa para identificar o maior e o menor elemento de uma matriz **[8]** **[8]**, mostrando os valores e a posição destes valores dentro da matriz.
<br>

2. Faça um programa para ler uma matriz 3x3 de valores de ponto flutuante (float) e depois exibir uma determinada linha da matriz indicada pelo usuário.
<br>

3. Considere duas matrizes A e B de tamanho **mxn** (informados pelo usuário). Faça um programa para calcular a matriz C, resultante da soma da matriz A com a matriz B. Imprimir a matriz C na forma de uma matriz **(LxC)**.
<br>

4. Faça um programa para ler os valores de uma matriz A (mxn) e determine a matriz T transposta de A. (obs.: T[i][j] = A [j][i]).
<br>                                                                                                    
 
5. Faça um programa para ler uma matriz 5x5, cujos elementos são do tipo inteiro. Em seguida, o programa deve possuir um menu com opções para cada uma das seguintes operações:
<ol type=a>
    <li> Mostrar todos os elementos da matriz (na forma de uma matriz LxC);
    <li> Mostrar todos os elementos da quarta linha da matriz e da primeira coluna da matriz;
    <li> Mostrar a soma dos elementos da diagonal principal;
    <li> Atribuir o valor 0 para os valores negativos encontrados fora da diagonal principal;
    <li> Buscar um elemento na matriz. O programa deve ler um valor X e buscar esse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
 </ol>
<br>

6. Faça um programa para calcular e apresentar a média geral de uma turma de n alunos. A média a ser obtida deve ser a média geral de cada aluno durante o ano letivo das quatro notas.

| aluno | Nota1 | Nota2 | Nota3 | Nota4 | Media | 
|-------|-------|-------|-------|-------|-------|
|   1   |  8.0  |  9.0  |  8.0  |  7.0  |  8.0  |
|   2   |  9.0  |  7.0  |  6.0  |  7.0  |  7.2  |
|   3   |  5.0  |  6.0  |  7.0  |  6.0  |  6.0  |
media                                      7.1
<br>

7. Faça um programa que usa uma matriz para gerar e armazenar 50 combinações de 6 números para a loteria. Utilize a função rand() - da biblioteca stdlib.h, para gerar os números aleatórios (faixa de números entre 1 e 60) que serão armazendos para cada jogo (combinação). Considere que é permitido a repetição dos números (ou seja, não é necessária essa verificação). Ao final o programa deve imprimir as combinações conforme o exemplo abaixo:

```
Combinação 1: 42 48 35 41 30  5
Combinação 2: 19 19 23 45  6  6 
. . .
Combinação 49:  3 26 29 47 58 58
Combinação 50: 53 33 30 55 42 30
``` 
<br>

8. Faça um programa para simular um jogo da velha. Inicialmente, a matriz deve ser preenchidacom pontos. Depois o programa deve solicitar ao jogador que digite um par de coordenadas atribuir o caractere 'o' ou 'x' ao elemento da matriz correspondente às coordenadas entradas. A cada coordenada digitada, o programa deve imprimir a matriz resultante e verificar se algum jogador já ganhou ou se houve empate. O programa deve permanecer nesse loop até chegar ao final do jogo.
