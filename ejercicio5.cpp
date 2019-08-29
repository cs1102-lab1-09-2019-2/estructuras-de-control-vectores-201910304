#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, delta, x1, x2;
    cout<<"Escribe los 3 parametros separados por un espacio en este orden : a b c: ";
    cin>>a>>b>>c;
    if(a==0){
      if(b==0)
      cout<<"La ecuacion no tiene solución";
      else{
      x1=-c/b;
      cout<<"La ecuacion tiene una solucion y esta es"<<x1;}
      }
    else{
    delta=pow(b,2)-4*a*c;
    if(delta<0)
      cout<<"La ecuación no tiene solucion real";
    else{
      x1=(-b+(pow(delta,0.5)))/(2*a);
      x2=(-b-(pow(delta,0.5)))/(2*a);
      if(x1==x2)
        cout<<"La ecuacion es un trinomio cuadrado perfecto y la solucion es "<<x1;
      else{
        cout<<"La ecuacion tiene dos soluciones y estas son"<<x1<<" y "<<x2;
      }
      }
      }
      
    }
