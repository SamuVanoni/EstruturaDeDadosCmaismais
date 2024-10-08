## Questão 12: Registros - Figuras geométricas
<p>De acordo com a geometria básica, podemos definir três figuras simples: um círculo, um triângulo e um retângulo. A dimensão de um círculo é basicamente representada pelo seu raio, um retângulo necessita de dois parâmetros, base e altura, e um triângulo é representado por três valores, um para cada um de seus lados. Munido dessas informações, pode-se calcular o perímetro e a área de qualquer uma dessas figuras citadas utilizando o método matemático correto.</p>

<p>Faça um programa que, referente a essas 3 figuras geométricas, receba as informações de 5 figuras quaisquer do usuário, sendo que cada figura será composta pelo tipo dela (adotando uma nomenclatura 'C' 'R' 'T' para identificá-las) além de, de acordo com a figura indicada, receber os parâmetros geométricos que as representam (suas dimensões). Por fim, exibir o nome, a área e o perímetro de cada uma dessas 5 figuras fornecidas pelo usuário.</p>

<p>Obs.: As figura devem ser identificadas por um caracter da seguinte maneira:</p>

- 'C' = Círculo (parâmetro: raio)
- 'R' = Retângulo (parâmetros: base e altura)
- 'T' = Triângulo (parâmetros: 3 lados - podendo ser diferentes)

<p>Obs.: Para o valor de PI utilize a constante M_PI disponível na biblioteca cmath.</p>

<p>Sugestão: O cálculo da área de um triângulo pode ser feito através do Teorema de Herão.</p>

### Entrada:
1. Um caracter representando o tipo da figura geométrica.
2. Os valores de suas dimensões (raio, lado, etc.) em ponto flutuante (float).

### Saída:
1. Nome da figura geométrica.
2. Perímetro da figura.
3. Área da figura.

### Exemplo de entrada:
```bash
C 5
C 2
T 3 4 5
R 5 10
R 2 2
```
	
### Exemplo de saída:
```bash
Circulo 31.4159 78.5398 
Circulo 12.5664 12.5664 
Triangulo 12 6 
Retangulo 30 50 
Retangulo 8 4
```