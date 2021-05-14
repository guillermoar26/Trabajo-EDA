#include <iostream>
#include "hanoi_iterativo.h"
#include "Hanoi_recursivo.h"
#include <ctime>

int main() {
    unsigned t0,t1,t2,t3;

    t0 = clock();
    // Algoritmo recursivo
    Hanoi_recursivo(3, 'A', 'B', 'C');
    t1 = clock();

    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    std::cout << "\nExecution Time: " << time << "\n";

    t2 = clock();
    // Algoritmo iterativo
    Hanoi_iterativo h;
    h.solve(3);
    t3 = clock();

    double time2 = (double(t3-t2)/CLOCKS_PER_SEC);
    std::cout << "\nExecution Time: " << time2 << "\n";
}
