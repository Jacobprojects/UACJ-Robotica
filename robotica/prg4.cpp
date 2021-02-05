#include <iostream>
#include <fstream>
#include <cmath>
#include "areas.hpp"
#include <iomanip>


using namespace std;

int main()

{
    cout << std::setprecision(10) << circ(10) << endl;
    cout << circ(12.14, 1.0) << endl;
    
    cout << "Area del Cuadrado (int): "<< cuadro(5) << endl;
    cout << "Area del Cuadrado (float): "<< cuadro(5, 1.0) << endl;
    cout << "Volumen de Cilindro (int): "<< cilindro(5, 10.0) << endl;
    cout << "Volumen de Cilindro (float): "<< cilindro(5, 10.0, 1.0) << endl;
    
return 0;

}

