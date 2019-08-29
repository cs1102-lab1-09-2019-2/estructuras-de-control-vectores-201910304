#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector<int> leerConsola() {
  vector<int> OTRA_LISTA;
  int numero=0;
  while(numero!=-1)
  {
    cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros: \n";
    cin>>numero;
    if (numero==-1)
    break;
    OTRA_LISTA.push_back(numero);
  }
  return OTRA_LISTA  ;
}

float promedio(vector<int> &lista) {
    float suma=0.0;
    int size;
    size=lista.size();
    for(auto i: lista){
      suma=suma+i;
    }
    return suma/size ;
}

int main() {
    cout<<"Calcular el promedio de los ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float promedio_elemento = promedio(leer_usuario);
    cout<<"El promedio es: "<<fixed<<setprecision(2)<<promedio_elemento<<"\n";
    return 0;
}
