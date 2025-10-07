#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;   

    double pi = 3.14159;  

    
    double triangle = (A * C) / 2.0;
    double circle = pi * C * C;
    double trapezium = ((A + B) * C) / 2.0;
    double square = B * B;
    double rectangle = A * B;

    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangle << endl;
    cout << "CIRCULO: " << circle << endl;
    cout << "TRAPEZIO: " << trapezium << endl;
    cout << "QUADRADO: " << square << endl;
    cout << "RETANGULO: " << rectangle << endl;

    return 0;
}

