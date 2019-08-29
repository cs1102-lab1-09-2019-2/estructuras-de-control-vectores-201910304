#include <iostream>
using namespace std;
int main() 
{int a,b,c,mayores;
    cout<<"Ingrese 3 numeros separados por un espacio (a b c): ";
    cin>>a>>b>>c;
    cout<<"El mayor valor es ";
   if( a>b && a>c)
   cout<<a;
   if(c>b && c>a)
   cout<<c;
   if(b>c && b>a)
   cout<<b;
}
