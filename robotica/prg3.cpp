#include <iostream>
#include <fstream>
#include <cmath>

// graficar f(x,y)= x + xy - x^2 + y^2 - yx^2 + xy^2
// graficar f(x,y)= sin(x) - cos(y) + cos(x)sin(y)

using namespace std;

int main()

{ofstream fp("polinomio.txt");
    for(float x=-20.0; x<= 20.0; x+= 0.25)
    for(float y= -20.0; y<=20.0; y+= 0.25)
    
    fp << x << ", "<< y << ", " << sin(x) - cos(y) + cos(x)*sin(y) << endl;
    
    fp.close();
    


    return 0;

}

