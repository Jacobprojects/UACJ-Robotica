#include <iostream>
#define ARMA_DONT_USE_WRAPPER
#include <armadillo>

using namespace std;
using namespace arma;

int
main(int argc, char** argv)
  {
      
      mat A(500,250, fill::randu);
      cout << "# Renglones: " << A.n_rows << endl;
      cout << "# Columnas: " << A.n_cols << endl;
      cout << "# Elementos: " << A.n_elem << endl;
      A.save("A.txt", raw_ascii);
      cout << "Min = " << min(min(A)) << endl;
      cout << "Max = " << max(max(A)) << endl;
      cout << "Media = " << mean(mean(A)) << endl;
      cout << "Mediana = " << median(median(A)) << endl;
      cout << "Suma acumulada: " << accu(A) << endl;
      uvec q2 = find(A < 0.5);
      q2.save("B.txt", raw_ascii);
      cout << "Menores que 0.5: " << q2.n_elem << endl;
      uvec q3 = find(A > 0.5);
      q3.save("C.txt", raw_ascii);
      cout << "Mayores que 0.5: " << q3.n_elem << endl;
      
      
      return 0;
      
  }

