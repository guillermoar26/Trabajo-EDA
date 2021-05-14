# Torres de Hánoi

Las Torres de Hanói es un rompecabezas o juego matemático, inventado en 1883 por el matemático francés Édouard Lucas. Se trata de un problema muy recurrente en la ciencia de la computación, como introducción a la teoría de algoritmos. Pero, ¿cómo funciona?

## Reglas del juego 

El juego en sí consta de tres postes verticales. En uno de ellos se apila, una serie de discos de tamaño decreciente (de abajo arriba), lo que determina la complejidad de la solución. El juego consiste en pasar todos los discos de un poste a otro. Para hacer esto, nos basamos en tres reglas.

   1. Sólo se puede mover un discos a la vez, estando todos en los postes
   2. Un disco de mayor tamaño no puede estar sobre otro de menor tamaño.
   3. Sólo se puede desplazar el disco situado más arriba del poste.


## Complejidad y número de movimientos 

La complejidad de este algoritmo o problema matemático viene dada por el número de discos. El número de movimientos necesarios para mover n discos de un poste a otro es 2^n-1. Por lo tanto, para 3 discos, se necesitarán (como mínimo) 7 movimientos para resolver el rompecabezas.

La solución para 64 se discos se asemeja mucho a la leyenda del inventor del ajedrez. Cuando el inventor presentó el juego a su rey, pidió un grano de trigo por la primera casilla, dos por la segunda y así sucesivamente. Si calculamos el número de granos de trigo en total, obtenemos la solución al enigma: un total de _18.446.744.073.709.551.615_ movimientos (o granos de trigo) Y mucho tiempo, desde luego. 

## Comparación del costo temporal

![Captura de pantalla 2021-05-14 131550](https://user-images.githubusercontent.com/77279628/118263502-47fcef80-b4ae-11eb-857b-efa9ae56f855.png)
