#include <iostream>
using namespace std;

int main (){
    int saldo_inicial = 1000;
    int saldo, reintegro, opcion, agregar;

    cout << "\tBienvenido a su cajero virtual";
    cout <<"\nEscoja una opcion: ";
    cout << "n1. Ingreso en cuenta";
    cout << "\n2. Reintegro";
    cout << "n3. Ver saldo en cuenta";
    cout << "\n0. Salir";
    cin >> opcion;

    if (opcion==1){
        cout<<"\nIngrese la cantidad a depositar: ";
        cin>>agregar;
        saldo=saldo_inicial + agregar;
        cout<<"\n Cantidad disponible en cuenta: "<<saldo;
    }
    else if (opcion==2){
        cout<<"\n Cuanta cantidad desea retirar: ";
        cin>>reintegro;
        if(reintegro>1000){
            cout<<"La cantidad es mayor a su saldo disponible, ingrese nuevamente la cantidad a retirar";
            cin>>reintegro;
        }
        saldo=saldo_inicial-reintegro;
        cout<<"\n Cantidad disponible en cuenta: "<<saldo;
    }
    else if (opcion==3){
        cout<<"\n La candidad disponible en la cuenta es de: "<<saldo_inicial;
    }
    else if (opcion==0){
        cout<<"Gracias por utilizar nuestro cajero automatico";
    }
    else{
        cout<<"La opcion ingresada no es valida, por favor ingrese su opcion nuevamente";
    }
    cin.get();
    return 0;
}
