## Questão 30: Ponteiros - Batalha Naval 1 (matriz, subprogramas, arquivo, alocação)
<p>Leia de um arquivo de nome "BatalhaNaval.txt", duas matrizes de tamanho NxN a serem alocadas dinamicamente, sendo que primeira matriz representa a localização dos navios no tabuleiro e a segunda matriz representa a posição de onde os tiros atingiram na primeira matriz.</p>

<p>Na primeira matriz, k representa uma parte do k-ésimo navio, 0 partes no mar.</p>

<p>Na segunda matriz, 1 representa a posição do tiro (correspondente a posição na primeira matriz), 0 posição sem tiro.</p>

<p>Os navios sempre terão tamanho maior que uma posição da matriz, e estarão sempre totalmente na vertical ou horizontal.</p>

<p>O programa deverá retornar o número total de navios completamente afundados pelos tiros. OBS: Sub-rotinas devem ser utilizadas.</p>

### Entradas:
1. Tamanho da matriz N (inteiro).
2. Valores da primeira matriz NxN (inteiros).
3. Valores da segunda matriz NxN (inteiros).

### Saídas:
Número total de navios completamente afundados (inteiro).

### Exemplo de Entrada:
```bash
5
0 1 1 1 0
2 0 0 0 0
2 0 0 0 0
2 0 0 0 0
2 3 3 0 0
0 1 1 1 1
1 0 0 0 0
1 0 0 0 0
1 0 0 0 0
1 1 0 0 0
```

### Exemplo de Saída:
2