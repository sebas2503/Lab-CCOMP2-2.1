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
    char opcion;
    cout<<"Ingrese el primer numero: ";
    cin>>primerNumero;
    cout<<"Ingrese el segundo numero: ";
    cin>>segundoNumero;
    float primerNumeroF = primerNumero;
    float segundoNumeroF = segundoNumero;
    //Suma
    cout<<"Suma: "<<primerNumero+segundoNumero<<endl;
    //Resta
    cout<<"Resta: "<<primerNumero-segundoNumero<<endl;
    //Multiplicacion
    cout<<"Multiplicacion: "<<primerNumero*segundoNumero<<endl;
    //Division
    if(segundoNumero!=0)
        {
            cout<<"Division: "<<primerNumeroF/segundoNumeroF<<endl;
        }
    else
        {
            cout<<"No se puede realizar la division entre 0"<<endl;
        }
    //Residuo
    if(segundoNumero!=0)
        {
            cout<<"Residuo: "<<primerNumero%segundoNumero<<endl;
        }
    else
        {
            cout<<"Imposible"<<endl;
        }
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
    if(segundoNumero !=0)
        {
            if(primerNumero%segundoNumero==0)
                {
                    cout<<segundoNumero<<" es divisor de "<<primerNumero<<endl;
                }
            if(segundoNumero%primerNumero==0)
                {
                    cout<<primerNumero<<" es divisor de "<<segundoNumero<<endl;
                }
        }
    else
    {
        cout<<"Imposible saber el si es divisor si el segundo numero es 0"<<endl;
    }
    //Ejercicio 2
    cout<<"a. Esta opcion da la suma"<<endl;
    cout<<"b. Esta opcion da la resta"<<endl;
    cout<<"c. Esta opcion da la multiplicacion"<<endl;
    cout<<"d. Esta opcion da la division"<<endl;
    cout<<"e. Esta opcion da el residuo"<<endl;
    cout<<"f. Esta opcion da la raiz cuadrada"<<endl;
    cout<<"Eliga opcion: ";
    cin>>opcion;
    int Digito;
    int Digito2;
    if(opcion == 'a')
        {
            cout<<"Primer operando: ";
            cin>>Digito;
            cout<<"Segundo operando: ";
            cin>>Digito2;
            cout<<"Suma: "<<Digito+Digito2<<endl;
        }
    if(opcion == 'b')
        {
            cout<<"Primer operando: ";
            cin>>Digito;
            cout<<"Segundo operando: ";
            cin>>Digito2;
            cout<<"Resta: "<<Digito-Digito2<<endl;
        }
    if(opcion == 'c')
        {
            cout<<"Primer operando: ";
            cin>>Digito;
            cout<<"Segundo operando: ";
            cin>>Digito2;
            cout<<"Multiplicacion: "<<Digito*Digito2<<endl;
        }
    if(opcion == 'd')
        {
            cout<<"Primer operando: ";
            cin>>Digito;;
            cout<<"Segundo operando: ";
            cin>>Digito2;
            if(Digito2 !=0)
                {
                    cout<<"No se puede dividir entre 0"<<endl;
                }
            else
                {
                    cout<<"Division: "<<Digito/Digito2<<endl;
                }
        }
    if(opcion == 'e')
        {
            cout<<"Primer operando: ";
            cin>>Digito;
            cout<<"Segundo operando: ";
            cin>>Digito2;
            if(Digito2 !=0)
                {
                    cout<<"Residuo: "<<Digito%Digito2<<endl;
                }
            else
                {
                    cout<<"Imposible saber el residuo si el segundo numero es 0"<<endl;
                }
        }
    if(opcion == 'f')
        {
            int Digito3;
            cout<<"Numero: ";
            cin>>Digito3;
            cout<<"Raiz cuadrada: "<<sqrt(Digito3)<<endl;
        }
    return 0;
}
