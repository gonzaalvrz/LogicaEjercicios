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



/*
int numerosPerfecto(int a) {
    int value = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            value += i;
            if (value == a) cout << a << " es perfecto" << endl;
            else cout << a << " no es perfecto" << endl; 
       }
       return value;
    }  
}
*/

/*
int numeroGuay(int a) {
    int value = 0;
    bool guay = false;

    for (int i = 1; i < a && guay == false; i++) {
        value += i;
        if (value == a) {
         guay = true; 
         if (guay) cout << a << " Es un numero Guay";
         else cout << a << " No es un numero Guay";
        }
    }
    return value;
}
*/



int main() {
    int a = 0, b = 0;
    //cout << numero(10);
    //cout << "Resta: " << endl << Resta(a, b) << endl;
    //cout << "Multiplicacion: " << Multiplicacion(3, 6) << endl;
    //cout << "Division: " << Division(10, 2) << endl;
    //cout << "Potencia: " << Potencia(8, 2) << endl;
    //numerosPerfecto(10);
    //numeroGuay(8);
    return 0;
}
