#include <iostream>
#include <complex>
#include<cmath>

using namespace std;

complex<double> f(double phi);

int main(){
  int N=100;

  // Example how to declare a single complex variable:
  complex<double> c;
  c = complex<double> (0.1,0.2);
  complex<double> Z[N] ; 
  complex<double> ii=complex<double> (0.0,1.0);
  double dphi=2*M_PI/N;

  
  for(int i=0; i<N;i++){
//     Z[i] = exp(i*dphi*ii);
    Z[i] = f(dphi*i);
  }

  for(int i=0; i<N;i++)
    cout << i*dphi << "\t" <<real(Z[i]) << "\t"<< imag(Z[i]) << "\t"<< abs(Z[i]) <<endl;
  

  return 0;
}

complex<double> f(double phi){
  complex<double> ii=complex<double> (0.0,1.0);
  complex<double> u = tan( (1.0 + ii)*phi);
  return u;
}
