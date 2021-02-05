#include <iostream>
#include <fstream>


using namespace std; 

int main()

{ ofstream fp("misdatos.txt");

for(float i=0.0; i<1.0; i+=0.05)
 fp << i << ", " << i*i << ", " << pow(i, 3.0) << ", " << sqrt(i) << ", " << pow(i, 1.0/3.0) <<endl;
    
    
    
    fp.close();
 return 0;

}

