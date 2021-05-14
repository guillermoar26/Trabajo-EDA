#include <iostream>

// La función toma cuatro parámetros de entrada: discos (int) y 3 carácteres (a,b,c), que simulan los postes del juego
void Hanoi_recursivo(int discos, char pivote_inicial, char pivote_auxiliar, char pivote_final) {
        if (discos == 1) { // Caso base. Si discos == 1, movemos el disco de la barra A a la barra B. Fin del juego
                std::cout << "Mueve el disco " << discos << " de la barra " << pivote_inicial << " a la barra " << pivote_final <<"\n";
        }
        // Caso general. Algoritmo recursivo para más de un disco
        else {
                // Nuestro 'approach'. Queremos mover (n - 1) discos del poste inicial al auxiliar, siendo n el disco más grande
                // De acuerdo con  las reglas del juego, estos son  los tres pasos a seguir para obtener una solución recursiva
                // Primer paso -> el pivote auxiliar para a ser el C, mientras que el final será el B y el incial el A (punto de partida)
                Hanoi_recursivo(discos - 1, pivote_inicial, pivote_final, pivote_auxiliar);
                // Segundo paso de nuestro 'approach'. Movemos el disco más grande del pivote incial al pivote final
                std::cout << "Mueve el disco " << discos << " de la barra " << pivote_inicial << " a la barra " << pivote_final <<"\n";
                // Último paso -> Queremos mover los discos restantes (n - 1) hacia el poste final
                // El pivote incial será el B, el auxiliar el A, y el final el pivote C, siguiendo con el apartado anterior
                Hanoi_recursivo(discos - 1, pivote_auxiliar, pivote_inicial, pivote_final);
        }
}
