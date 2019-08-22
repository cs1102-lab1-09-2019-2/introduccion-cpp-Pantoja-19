#include <iostream>
#include <vector>

using std::cout;
using std::vector;
	
int main() {
	vector <int> a {1, 2, 3, 4, 5};
    for (auto i : a) { // forma de recursividad
        cout << i <<" ";// Imprimir los numeros
    }
    cout <<"\n";
    
    return 0;
}
