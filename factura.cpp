#include <iostream>
using namespace std;
// hacer un programa que permita calcular cuanto tiene que pagar un cliente por enviar un paquete a sieto destino tomando
//en cuenta que el cobro del paquete sera de acuerdo a su peso en libras. hacer un me
int main ()
{
    int libras, precio, librasdeazucar, opc;
    int subtotal, total, isv, descuento;
    string destino, tegucigalpa, san_pedro_sula, la_ceiba, rohatan, puerto_cortes, cliente;

    cout << " -----------MENU PRINCIPAL------------: " << endl;
    cout << "1-----TEGUCIGALPA LPS. 20 LIBRA-------: " << endl;
    cout << "2-----SAN PEDROP SULA LPS. 50 LIBRA--: " << endl;
    cout << "3-----LA CEIBA LPS. 70 LIBRA----------: " << endl;
    cout << "4-----ROHATAN LPS. 150 LIBRA----------: " << endl;
    cout << "5-----PUERTO CORTES LPS. 180 LIBRA----: " << endl;
    cout << "------  ELIJA UNA OPCION POR FAVOR--- --: " << endl;
    cin  >> opc;
    cout << " ingrese el nombre del cliente: " << endl;
    cin  >> cliente;
    cout << " ingrese la cantidad de libras: " << endl;
    cin  >> libras;
    

    switch (opc)
    {
       case 1:
       destino = tegucigalpa;
       precio = 20;
       subtotal = precio * libras;
       isv = subtotal * 0.15;
       break;
    
        case 2:
        destino = san_pedro_sula;
        precio = 50;
        subtotal = precio * libras;
        isv = subtotal * 0.15;
        break;

        case 3:
        destino = la_ceiba;
        precio = 70;
        subtotal = precio * libras;
        isv = subtotal * 0.15;
        break;

        case 4:
        destino = rohatan;
        precio = 150;
        subtotal = precio * libras;
        isv = subtotal * 0.15;
        break;

        case 5:
        destino = puerto_cortes;
        precio = 150;
        subtotal = precio * libras;
        isv = subtotal * 0.15;
        break;

        default:
        cout << " opcion no valida: " << endl;
        
    }
    
    if (libras >= 30)
    {
            descuento = subtotal * 0.05;
    }
    else
   {
           descuento = 0;
   }

        total = (subtotal + isv) - descuento;

        cout << " el nombre del cliente es               : " << cliente   << endl;
        cout << " la cantidad de libras es               : " << libras    << endl;
        cout << " el detino es el siguiente              : " << destino   << endl;
        cout << " el precio por libras es                : " << precio    << endl;
        cout << " el subtotal a pagar es                 : " << subtotal  << endl;
        cout << " el isv a pagar es                      : " << isv       << endl;
        cout << " el descuento a pagar es                : " << descuento << endl;
        cout << " el total a pagar es                    : " << total     << endl;
        cout << " LA FACTURA ES DERECHO DE TODOS EXIJALA   "              << endl;
        cout << " GRACIAS POR SU COMPRA                    "              << endl;


 return 0;

}
