
#include <vector>
#include <iostream>
using namespace std;

float mediana(vector<int> &lista);
vector<int> leerConsola();

vector<int> leerConsola() {
  vector<int>lista;
  int numero;
  do{
    cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:\n";
    cin>>numero;
    if(numero==-1)
      break;
    lista.push_back(numero);
  }while(numero!=-1);
    return lista;
}

float mediana(vector<int> &lista) {
   float mediana;
   int posicion;
   posicion=(lista.size()/2)-1;
   if (lista.size()%2==0)
    mediana=(lista[posicion]+lista[posicion+1])/2.0;
  else
    mediana= lista[posicion+1];
    return mediana;
}

int main() {
    cout<<"Calcular la mediana de los numeros ingresados:\n\n";
    vector<int> leer_usuario = leerConsola();
    float mediana_elemento = mediana(leer_usuario);
    cout<<"La mediana es: "<<mediana_elemento<<"\n";
}
