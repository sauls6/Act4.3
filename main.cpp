#include <iostream>
#include <sstream>


using namespace std;

int main() {
    // lectura de datos de input

    int n;
    int x, y;
    char comma;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> x >> comma >> y;
        // guardar el cada par de coordenadas, aunque aun no se en que estructura lo haremos
        cout << "(" << x << ", " << y << ")" << endl;
    }
}