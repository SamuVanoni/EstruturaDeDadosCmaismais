### Questão 3: Vetor - Quantidade de ocorrências em vetores de strings
<p>Faça um programa que receba três listas de strings. Cada lista representa um conjunto de elementos. Cada lista será digitada em uma linha específica. Será garantido que as duas primeiras listas serão diferentes.</p>

<p>Seu programa deverá exibir no dispositivo de saída padrão, para cada palavra da terceira lista, se a palavra em questão apareceu em nenhuma, uma ou nas duas listas iniciais.</p>

### Entradas:
Três listas de strings. Cada lista será fornecida em uma linha específica, com a quantidade de palavras no início.

### Saídas:
Sequência de valores que denotam se cada palavra da terceira lista apareceu em nenhuma, uma ou nas duas listas iniciais.

### Exemplo de Entrada:
```bash
4 bola garrafa pedra cachorro
3 cachorro pedra pato
5 bola garrafa pato cachorro pedra
```

### Exemplo de Saída:
```bash
1 1 1 2 2
```

### Exemplo de Entrada:
```bash
4 bola garrafa pedra cachorro
3 cachorro pedra pato
2 cachorro pedra
```

### Exemplo de Saída:
```bash
2 2
```

### Exemplo de Entrada:
```bash
4 bola garrafa pedra cachorro
3 cachorro pedra pato
3 cachorro pedra sapato
```

### Exemplo de Saída:
```bash
2 2 0
```