#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;


double zufall(int a,int c,int m){
  static int I;
  double u;
  I = (a*I+c)%m;
  u=(double)I/m;
  return u;
}

int main() {
  vector<float> y;
  vector<float> x;
  int S=0;
  double pi=0, u=0, p=3.1415/4;
  for(int N=0; N<100; N++){
    u = zufall(5, 3, 16);
    x.push_back(u);
  }
  for(int N=0; N<100; N++){
    u = zufall(5, 3, 16);
    y.push_back(u);
  }
  for(int i=0; i<x.size(); i++){
    if ((((x[i])*(x[i]))+((y[i])*(y[i]))) <= 1){
      S++;
    }
  }
  pi=(double)S/x.size()*4;
  cout << pi << endl;
  cout << S << endl;
  cout << p*x.size()<< endl;
  cout << p
}
