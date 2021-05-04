#include <iostream>

using namespace std;

void Hanoi(int discos, char a, char b, char c){
    if (discos == 1) {
        cout << "Se ha movido el disco " << discos << "de la barra " << a << "a la barra c" << "\n";
    }
    else {
        Hanoi(discos - 1, a, c, b);
        cout << "Se ha movido el disco " << discos << "de la barra " << a << "a la barra c" << "\n";
        Hanoi(discos - 1, b, a, c);
    }
}
