//
//  main.cpp
//  Sentencia if
//
//  Created by Luis Sebastian Arroyo Pinto on 4/16/20.
//  Copyright © 2020 Luis Sebastian Arroyo Pinto. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int primerNumero;
    int segundoNumero;
    int primerDigito;
    int segundoDigito;
    int opcion;
    cout<<"Ingrese el primer numero: ";
    cin>>primerNumero;
    cout<<"Ingrese el segundo numero: ";
    cin>>segundoNumero;
    //Suma
    cout<<"Suma: "<<primerNumero+segundoNumero<<endl;
    //Resta
    cout<<"Resta: "<<primerNumero-segundoNumero<<endl;
    //Multiplicacion
    cout<<"Multiplicacion: "<<primerNumero*segundoNumero<<endl;
    //Division
    if(segundoNumero!=0)
        {
            cout<<"Division: "<<primerNumero/segundoNumero<<endl;
        }
    else
        {
            cout<<"No se puede realizar la division entre 0"<<endl;
        }
    //Residuo
    cout<<"Residuo: "<<primerNumero%segundoNumero<<endl;
    //Numero mayor y menor
    if(primerNumero>segundoNumero)
        {
            cout<<"Mayor: "<<primerNumero<<endl;
            cout<<"Menor: "<<segundoNumero<<endl;
        }
    else
        {
            cout<<"Mayor: "<<segundoNumero<<endl;
            cout<<"Menor: "<<primerNumero<<endl;
        }
    //Saber si un numero es divisor del otro
    if(primerNumero%segundoNumero==0)
        {
            cout<<segundoNumero<<" es divisor de "<<primerNumero<<endl;
        }
    if(segundoNumero%primerNumero==0)
        {
            cout<<primerNumero<<" es divisor de "<<segundoNumero<<endl;
        }
    //Ejercicio 2
    cout<<"Primer operando: ";
    cin>>primerDigito;
    cout<<"Segundo operando: ";
    cin>>segundoDigito;
    cout<<"1. Esta opcion da la suma"<<endl;
    cout<<"2. Esta opcion da la resta"<<endl;
    cout<<"3. Esta opcion da la multiplicacion"<<endl;
    cout<<"4. Esta opcion da la division"<<endl;
    cout<<"5. Esta opcion da el residuo"<<endl;
    cout<<"6. Esta opcion da la raiz cuadrada"<<endl;
    cout<<"Eliga opcion: ";
    cin>>opcion;
    if(opcion == 1)
        {
            cout<<"Suma: "<<primerDigito+segundoDigito<<endl;
        }
    if(opcion == 2)
        {
            cout<<"Resta: "<<primerDigito-segundoDigito<<endl;
        }
    if(opcion == 3)
        {
            cout<<"Multiplicacion: "<<primerDigito*segundoDigito<<endl;
        }
    if(opcion == 4)
        {
            if(segundoDigito !=0)
                {
                    cout<<"No se puede dividir entre 0"<<endl;
                }
            else
                {
                    cout<<"Division: "<<primerDigito/segundoDigito<<endl;
                }
        }
    if(opcion == 5)
        {
            cout<<"Residuo: "<<primerDigito%segundoDigito<<endl;
        }
    if(opcion == 6)
        {
            cout<<"Raiz cuadrada del primer numero: ";
            cout<<sqrt(primerDigito)<<endl;
            cout<<"Raiz cuadrada del segundo numero: ";
            cout<<sqrt(segundoDigito)<<endl;
        }
    return 0;
}
