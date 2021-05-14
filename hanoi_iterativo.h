#include <iostream>
#include <math.h>
#include <stack>

// Creamos la clase, que nos permitirá resolver el problema de manera iterativa
class Hanoi_iterativo {
        public:
        // moveDisk recibe dos stacks de enteros por referencia. Nos servirá para mover el disco entre pivotes
        int moveDisk(std::stack<int> & principio, std::stack<int> & final);
        // Función que resuelve el problema. Recibe como parámetro de entrada el número de discos
        void solve(int discos);

        private:
        // Miembros privados -> Tres stack de numeros enteros, simulando los pivotes
        std::stack<int> pivote_inicial,pivote_auxiliar,pivote_final;
};
