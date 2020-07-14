#include <iostream>
#include <string.h>
#include <string>

const int longCad = 20;

using namespace std;

struct costoPorArticulo{
char nombreArticulo [longCad + 1];
int cantidad;
float precio;
float costoPorArticulo;
float acumulable;
}producto;

void funci ();

float fact (costoPorArticulo x);

void mostrarDatos ();

float total (costoPorArticulo x); 

int main ()
{
    int n;

    cout<<"INTRODUZCA EL NUMERO DE PRODUCTOS QUE DESEA LLEVAR: ";
    cin>>n;
    
    cin.ignore(100, '\n');
    costoPorArticulo quant [n];
    
    for (int i = 0; i < n; i++)
    {
        funci();
        cin.ignore(100, '\n');
        
        cout<<"TOTAL: " <<fact (producto)<<"$"<<endl;

        mostrarDatos();
    }
    
    cout<<"PRECIO TOTAL POR TODAS SUS COMPRAS: " <<total (producto) <<"$"<<endl;

return 0;

}

void funci () //Funcion B
{
    cout<<endl;
    cout<<"DIGITE EL NOMBRE DEL PRODUCTO: ";
    cin.getline(producto.nombreArticulo, longCad);
    cout<<"PRECIO UNITARIO: ";
    cin>>producto.precio;
    cout<<"CANTIDAD: ";
    cin>>producto.cantidad;
}

float fact (costoPorArticulo x) //Funcion C
{
    x.costoPorArticulo = x.precio * x.cantidad;

    return x.costoPorArticulo;
}

float total (costoPorArticulo x) //Funcion E Fue la que fallo :(
{
    float y = x.acumulable;

    x.costoPorArticulo = x.acumulable;
    
    y += fact(producto);
    return y;
}
void mostrarDatos () //Funcion D
{
    cout<<endl;
    cout<<"FACTURA";
    cout<<endl;
    cout<<"NOMBRE DEL PRODUCTO: " << producto.nombreArticulo;
    cout<<endl;
    cout<<"PRECIO UNITARIO: " << producto.precio;
    cout<<endl;
    cout<<"CANTIDAD DEL PRODUCTO: " <<producto.cantidad;
    cout<<endl;
    cout<<"TOTAL ACUMULADO: " << total (producto)<<"$";
    cout<<endl;
}


