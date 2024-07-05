#include <iostream>
#include <cmath>
using namespace std;



/*General*/
 /*
int Resta(int a, int b){
  cout << "ingrese primer número:" << endl;
  cin >> a;
  cout << "ingrese segundo número:" << endl;
  cin >> b;
  cout << "Resultado: ";
  int value = 0;
  if(a>b){
    for(int i = b; i<a; i++){
    value++;
    }
  } else{
    for(int i = b; i>a; i--){
    value--;
  }
}
  return value;
}
*/
/*
int Multiplicacion(int a, int b){
  int value = 0;
  for(int i = 1; i<=b; i++){
    value = value + a;
  }
  return value;
}
*/
/*
int Division(int a, int b){
  int value = 0;
  for(int i = a; i >= b; i = i - b){
     value = value + 1;

  }
  return value;
}

/*
int Potencia(int a, int b){
  int value = 1;
  for(int i = 0; i < b; i++){
    value *= a;
  }
  return value;
}
*/

/*
int numero(int a) {
    int value = 0;

    for (int i = 0; i < a; i++) {
        value += a;
    }
    return value;

}*/
int main() {
    int a = 0, b = 0;
    //cout << numero(10);
    //cout << "Resta: " << endl << Resta(a, b) << endl;
    //cout << "Multiplicacion: " << Multiplicacion(3, 6) << endl;
    //cout << "Division: " << Division(10, 2) << endl;
    //cout << "Potencia: " << Potencia(8, 2) << endl;
    return 0;
}