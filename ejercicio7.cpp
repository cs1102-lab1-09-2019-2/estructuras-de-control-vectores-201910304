#include<string>
#include <iostream>
#include <stdexcept> //Validar en la division por 0
using std::cout;
using std::cin;
using std::invalid_argument;
using std::string;

void mostrarMenu();
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int modulo(int a, int b);


void mostrarMenu() {
    cout<<"***************************************************\n";
    cout<<"                     MENU                          \n";
    cout<<"***************************************************\n";
    cout<<"  1.- Add\n";
    cout<<"  2.- Resta\n";
    cout<<"  3.- Multiplicar\n";
    cout<<"  4.- Dividir\n";
    cout<<"  6.- Modulo\n";
}
int sumar(int a, int b){int suma;suma=a+b;
  return suma;}
int restar(int a, int b){int resta;resta=a-b;
  return resta;}
int multiplicar(int a, int b){int producto;producto=a*b;
  return producto;}
float dividir(int a, int b){float dividir;dividir=a/b;
  return dividir;
  }
int modulo(int a, int b){int modulo;modulo=a%b;
  return modulo;}
void operaciones(int a,int b,int opcion){
  switch(opcion){
    case 1:
    cout<<"Resultado: "<<sumar(a,b);
    break;
    case 2:
    cout<<"Resultado: "<<restar(a,b);
    break;
    case 3:
    cout<<"Resultado: "<<multiplicar(a,b);
    break;
    case 4:
    cout<<"Resultado: "<<dividir(a,b);
    break;
    case 5:
    cout<<"Resultado: "<<modulo(a,b);
    break;
    default:
    cout<<"No está en el rango de opciones.";

  }

}

int main() {int a; int b; int opcion;string po;int numero;
  do{cout<<"Ingresa una opción: ";
  cin>>opcion;
  cout<<"Ingresa los dos numeros separados por un espacio: ";
  cin>>a>>b;
  
  operaciones(a,b,opcion);
  cout<<"\n"<<"Continuar? ";
  cin>>po;}while(po=="y");
  cout<<"Gracias :)";

    return 0;
}
