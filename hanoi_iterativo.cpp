#include "hanoi_iterativo.h"

int Hanoi_iterativo::moveDisk(std::stack<int> &principio, std::stack<int> &final) {
    // Si el primer stack esta vacio, hacemos push del otro parámetro y borramos una unidad de este
    if (principio.empty()) {
        principio.push(final.top());
        final.pop();
        return 2;
    }
    // Si el segundo stack esta vacio, hacemos push del otro parámetro y borramos una unidad de este
    else if (final.empty()) {
        final.push(principio.top());
        principio.pop();
        return 1;
    }
    // Si ningun stack esta vacio, comparamos los tamaños
    // Esto evita que un disco de radio 2 este encima de uno de menor tamaño por ejemplo
    else if (principio.top() < final.top()) {
        final.push(principio.top());
        principio.pop();
        return 1;
    }
    else if (final.top() < principio.top()) {
        principio.push(final.top());
        final.pop();
        return 2;
    }
}

void Hanoi_iterativo::solve(int discos) {
    // Declaramos las variables i y check, que nos servirán para más adelante
    int i, check;
    
    // Calculamos el numero de movimientos necesarios
    int movimientos = (pow(2, discos)-1);

    // Introducimos los discos en el pivote inicial
    for (i=discos; i>=1; i--) {
        pivote_inicial.push(i);
    }
    
    // Inicializamos la variable i al valor 1
    i = 1;

    // Si el numero de discos es par, intercambiamos el pivote C por el pivote B
    if (discos % 2 == 0)
    {
        // Instrucciones para cada iteración
        while(i <= movimientos)
        {
            if (i % 3 == 1)
            {
                //  i = 1, (i % 3 == 1) -> movimiento legal de la barra A a la barra B
                check = moveDisk(pivote_inicial, pivote_auxiliar);
                if (check == 1)
                    std::cout << "Mueve el disco " << pivote_auxiliar.top() << " de la barra A a la barra B " << "\n";
                // Si no es posible, movemos el disco de la barra B a la barra A
                else
                    std::cout << "Mueve el disco " << pivote_inicial.top() << " de la barra B a la barra A " << "\n";
            }
            else if (i % 3 == 2)
            {
                // i = 2, (i % 3 == 2) -> movimiento legal entre A y C
                check = moveDisk(pivote_inicial, pivote_final);
                if (check == 1)
                    std::cout << "Mueve el disco " << pivote_final.top() << " de la barra A a la barra C " << "\n";
                // Si no es posible, movemos el disco de la barra C a la barra A
                else
                    std::cout << "Mueve el disco " << pivote_inicial.top() << " de la barra C a la barra A " << "\n";
            }
            else if (i % 3 == 0)
            {
                // i = 3, (i % 3 == 0) -> movimiento legal de la barra B a la C 
                check = moveDisk(pivote_auxiliar, pivote_final);
                if (check == 1)
                    std::cout << "Mueve el disco " << pivote_final.top() << " de la barra B a la barra C " << "\n";
                // Si no es posible, movemos el disco de la barra C a la barra B
                else
                    std::cout << "Mueve el disco " << pivote_auxiliar.top() << " de la barra C a la barra B " << "\n";
            }
            i++;
        }
    }
    // Si el numero de discos es impar, no hacemos nada
    else
    {
        // Instrucciones para cada iteración
        while(i <= movimientos)
        {
            if (i % 3 == 1)
            {
                // i = 1, (i % 3 == 1) -> movimiento legal entre A y C
                check = moveDisk(pivote_inicial, pivote_final);
                if (check == 1)
                    std::cout << "Mueve el disco " << pivote_final.top() << " de la barra A a la barra C " << "\n";
                // Si no es posible, movemos el disco de la barra C a la barra A
                else
                    std::cout << "Mueve el disco " << pivote_inicial.top() << " de la barra C a la barra A " << "\n";
            }
            else if (i % 3 == 2)
            {
                // i = 2, (i % 3 == 2) -> movimiento legal entre A y B
                check = moveDisk(pivote_inicial, pivote_auxiliar);
                if (check == 1)
                    std::cout << "Mueve el disco " << pivote_auxiliar.top() << " de la barra A a la barra B " << "\n";
                // Si no es posible, movemos el disco de la barra B a la barra A
                else
                    std::cout << "Mueve el disco " << pivote_inicial.top() << " de la barra B a la barra A " << "\n";
            }
            else if (i % 3 == 0)
            {
                // i = 3, (i % 3 == 0) -> movimiento legal entre B y C
                check = moveDisk(pivote_auxiliar, pivote_final);
                if (check == 1)
                    std::cout << "Mueve el disco " << pivote_final.top() << " de la barra B a la barra C " << "\n";
                // Si no es posible, movemos el disco de la barra C a la barra B
                else
                    std::cout << "Mueve el disco " << pivote_auxiliar.top() << " de la barra C a la barra B " << "\n";
            }
            i++;
        }
    }
}
