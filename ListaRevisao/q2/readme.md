## Questão 2: Vetores - União de vetores (alocação dinâmica)
<p>Na matemática a união de dois conjuntos A e B é representada por A ∪ B e é formada por todos os elementos pertencentes a A ou B. Por exemplo, seja A = {1, 2, 3} e B = {4, 5}, então a união destes dois conjuntos será A ∪ B = {1, 2, 3, 4, 5}, porém caso um elemento esteja em ambos os conjuntos ele não irá aparecer duas vezes no conjunto união, por exemplo, seja A = {1, 2, 3} e B = {1, 2, 4}, assim a união será A ∪ B = {1, 2, 3, 4}.</p>

<p>Utilizando os conceitos de conjunto faça um programa que leia dois vetores A e B e determine a união. O tamanho de cada vetor será informado pelo usuário.</p>

<p>Obs.: Considere que não existirão vetores vazios.</p>

<p>Obs.2: Os vetores devem ser alocados dinamicamente.</p>

### Entradas:
1. Tamanho do vetor A.
2. Elementos do vetor A.
3. Tamanho do vetor B.
4. Elementos do vetor B.

### Saídas:
Vetor C representado a união dos vetores A e B.

### Exemplo de Entrada:
```bash
3
1 2 3
2
2 4
```

### Exemplo de Saída:
```bash
1 2 3 4
```

### Exemplo de Entrada:
```bash
3
3 7 5
2
3 4
```

### Exemplo de Saída:
```bash
3 7 5 4
```