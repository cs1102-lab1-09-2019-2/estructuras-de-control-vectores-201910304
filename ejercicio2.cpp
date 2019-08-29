#include <iostream>
#include <vector>
using namespace std;
int numero;
vector<int>lista;
vector<int> leerConsola() {
    do{
        cout<<"Ingrese un numero positivo, escriba -1 si ya no quiere ingresar mas numeros:\n";
        cin>>numero;
        if(numero==-1)
            break;
        lista.push_back(numero);

    }while(numero!=-1);
    return lista;
}
vector<int>numeros;
vector<int>moda1;

int contador1=0;
int contador2=0;
int indice=0;
int moda(vector<int> &lista){
    for(auto i:lista)
    {contador1=contador1+1;
        for(int x=contador1;x<lista.size();x++)
            if(i!=-1)
                if (i==lista[x])
                {lista[x]=-1;
                    contador2=contador2+1;}
        if(i!=-1)
            numeros.push_back(i);
        moda1.push_back(contador2);
    }
    for(int h=0;h<moda1.size();h++){
        if(moda1[h]<moda1[h+1])
            indice=h+1;
        else
            moda1[h+1]=moda1[h];
    }
    return indice;
}



int main()
{
    cout<<"Calcular la moda de los numeros ingresados:\n\n";
    vector<int>leer_usuario= leerConsola();
    int moda_indice=moda(leer_usuario);
    cout<<"La moda es: "<<numeros[moda_indice]<<"\n";
}
