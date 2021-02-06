#include <iostream>
#define ARMA_DONT_USE_WRAPPER
#include <armadillo>
#include <cmath>

using namespace std;
using namespace arma;

// g++ mat2.cpp -o mat2 -std=c++11 -O2 -larmadillo -framework Accelerate


int
main(int argc, char** argv)
  {
      float pi=M_PI;
      float eu=std::exp(1.0);
      float raiz= sqrt(2);
      float raiz1= pow(pi,0.3333);
      float coseno = cos(pi/4);
      float cdiag = pow(7,0.3333);
      
      mat A(10,10, fill::zeros); //A(fila, columna)
      cout << "A.n_rows: " << A.n_rows << endl;
      cout << "A.n_cols: " << A.n_cols << endl;
      A.rows(0,4) += pi;
      A.rows(5,9) += eu;
      A.save("A1.txt", raw_ascii);
      
      mat B(10,10, fill::zeros);
      cout << "B.n_rows: " << B.n_rows << endl;
      cout << "B.n_cols: " << B.n_cols << endl;
      B.col(0) += raiz;
      B.col(2) += raiz;
      B.col(4) += raiz;
      B.col(8) += raiz;
      B.col(1) += raiz1;
      B.col(6) += raiz1;
      B.col(7) += raiz1;
      B.col(3) += coseno;
      B.col(5) += coseno;
      B.col(9) += coseno;
      B.save("B1.txt", raw_ascii);
      
      mat C = repelem(A, 1, 1);
      C.diag() += cdiag;
      C.save("C1.txt", raw_ascii);
      
      mat D(10,10, fill::randu);
      mat E(10,10, fill::zeros );

      E += pow((A.t()+B),-1 ) + (pow(A,-1)*pow(B,0.3333)*pow(D,0.2)) - (pow(D,-1)*B.t()*(A.t()*pow(C,-1))) + D*(cos(C)*sin(A)+pow(sin(B),2)) ;
      E.save("E1.txt", raw_ascii);
      
      mat F(10,10, fill::zeros);
      
      F += exp(C)*D + exp(A)*sin(A) + (sqrt(pow(pi, 3))/exp(pi))*cos(D) - log10(sqrt(pi/8))*pow(cos(B),4) + pow(sin(D.t()*pow(C,3)*A),-1)+ E*(cos(D)+sin(D));
      F.save("F1.txt", raw_ascii);
      
      cout << "C.n_rows: " << C.n_rows << endl;
      cout << "C.n_cols: " << C.n_cols << endl;
      cout << "D.n_rows: " << D.n_rows << endl;
      cout << "D.n_cols: " << D.n_cols << endl;
      cout << "E.n_rows: " << E.n_rows << endl;
      cout << "E.n_cols: " << E.n_cols << endl;
      cout << "F.n_rows: " << F.n_rows << endl;
      cout << "F.n_cols: " << F.n_cols << endl;
      
      return 0;
      
  }

