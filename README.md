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

![Captura de pantalla 2021-05-14 141519](https://user-images.githubusercontent.com/77279628/118269383-957d5a80-b4b6-11eb-90f0-2246bbfdae5e.png)

### Recurso tiempo

En este caso, el algoritmo iterativo emplea un menor recurso de tiempo, mientras que el recursivo, que depende de la cantidad de entrada, por ende se demora más. A partir de la gráfica, podemos deducir que la complejidad del tiempo es exponencial, O(2^n) ó O(a^n), siendo a una constante mayor que 1. 

### Recurso espacio

El espacio para el parámetro para cada llamada es independiente de n, lo que significa que es constante. Por ende, el recurso espacio se define como O(n). Mientras que el recurso tiempo es exponencial, el recurso espacio se mantiene lineal. No obstante, el algortimo recursivo ocupa más espacio en memoria que su correspondiente iterativo, pues a medida que se va ejecutando abre más métodos. El algoritmo iterativo ocupa un menor espacio de memoria, pues se ejecuta menos veces. 

### Conclusión

En conlusión, el algoritmo recursivo suele ser más sencillo: expresa la solución de una manera más natural, aunque emplea un mayor recurso espacio-tiempo. Por otra parte, el algortimo iterativo obtiene una mayor eficiencia, expresado de una manera menos natural y empleando un menor recurso espacio-tiempo.
